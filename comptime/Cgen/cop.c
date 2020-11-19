/*===========================================================================*/
/*   (Cgen/cop.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/cop.scm) */
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

	typedef struct BgL_funz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
	}             *BgL_funz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_copz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_copz00_bglt;

	typedef struct BgL_clabelz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		bool_t BgL_usedzf3zf3;
		obj_t BgL_bodyz00;
	}                *BgL_clabelz00_bglt;

	typedef struct BgL_cgotoz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_clabelz00_bgl *BgL_labelz00;
	}               *BgL_cgotoz00_bglt;

	typedef struct BgL_cblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                *BgL_cblockz00_bglt;

	typedef struct BgL_creturnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                 *BgL_creturnz00_bglt;

	typedef struct BgL_cvoidz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_cvoidz00_bglt;

	typedef struct BgL_catomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_valuez00;
	}               *BgL_catomz00_bglt;

	typedef struct BgL_varcz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}              *BgL_varcz00_bglt;

	typedef struct BgL_cpragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_formatz00;
		obj_t BgL_argsz00;
	}                 *BgL_cpragmaz00_bglt;

	typedef struct BgL_ccastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_copz00_bgl *BgL_argz00;
	}               *BgL_ccastz00_bglt;

	typedef struct BgL_csequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		bool_t BgL_czd2expzf3z21;
		obj_t BgL_copsz00;
	}                   *BgL_csequencez00_bglt;

	typedef struct BgL_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}             *BgL_nopz00_bglt;

	typedef struct BgL_stopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}              *BgL_stopz00_bglt;

	typedef struct BgL_csetqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_varcz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}               *BgL_csetqz00_bglt;

	typedef struct BgL_cifz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		struct BgL_copz00_bgl *BgL_truez00;
		struct BgL_copz00_bgl *BgL_falsez00;
	}             *BgL_cifz00_bglt;

	typedef struct BgL_localzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_varsz00;
	}                     *BgL_localzd2varzd2_bglt;

	typedef struct BgL_cfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
		obj_t BgL_typez00;
	}                  *BgL_cfuncallz00_bglt;

	typedef struct BgL_capplyz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		struct BgL_copz00_bgl *BgL_argz00;
	}                *BgL_capplyz00_bglt;

	typedef struct BgL_cappz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}              *BgL_cappz00_bglt;

	typedef struct BgL_cfailz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_procz00;
		struct BgL_copz00_bgl *BgL_msgz00;
		struct BgL_copz00_bgl *BgL_objz00;
	}               *BgL_cfailz00_bglt;

	typedef struct BgL_cswitchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
	}                 *BgL_cswitchz00_bglt;

	typedef struct BgL_cmakezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_valuez00;
		obj_t BgL_stackablez00;
	}                     *BgL_cmakezd2boxzd2_bglt;

	typedef struct BgL_cboxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
	}                    *BgL_cboxzd2refzd2_bglt;

	typedef struct BgL_cboxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_varz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                       *BgL_cboxzd2setz12zc0_bglt;

	typedef struct BgL_csetzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_jumpzd2valuezd2;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                        *BgL_csetzd2exzd2itz00_bglt;

	typedef struct BgL_cjumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_exitz00;
		struct BgL_copz00_bgl *BgL_valuez00;
	}                         *BgL_cjumpzd2exzd2itz00_bglt;

	typedef struct BgL_sfunzf2czf2_bgl
	{
		struct BgL_clabelz00_bgl *BgL_labelz00;
		bool_t BgL_integratedz00;
	}                  *BgL_sfunzf2czf2_bglt;

	typedef struct BgL_bdbzd2blockzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_copz00_bgl *BgL_bodyz00;
	}                     *BgL_bdbzd2blockzd2_bglt;


	BGL_EXPORTED_DECL BgL_stopz00_bglt BGl_makezd2stopzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_cappz00_bglt BGl_cappzd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62lambda1920z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_ccastz00_bglt BGl_z62lambda1927z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_ccastz00_bglt BGl_z62lambda1929z62zzcgen_copz00(obj_t);
	static BgL_cifz00_bglt BGl_z62makezd2cifzb0zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_nopzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z62cfailzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_csetqz00_bglt BGl_csetqzd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62sfunzf2Czd2strengthzd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ccastzd2loczd2zzcgen_copz00(BgL_ccastz00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1935z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1936z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_cgotoz00_bglt BGl_z62lambda1779z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_clabelzd2usedzf3z21zzcgen_copz00(BgL_clabelz00_bglt);
	static BgL_variablez00_bglt BGl_z62varczd2variablezb0zzcgen_copz00(obj_t,
		obj_t);
	static obj_t BGl_z62cfuncallzd2argszb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cpragmaz00_bglt BGl_cpragmazd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL obj_t BGl_cappzd2loczd2zzcgen_copz00(BgL_cappz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62sfunzf2Czd2thezd2closurezd2setz12z50zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda1940z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1941z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_cgotoz00_bglt BGl_z62lambda1783z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31952ze3ze5zzcgen_copz00(obj_t, obj_t);
	static BgL_csequencez00_bglt BGl_z62lambda1947z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_csequencez00_bglt BGl_z62lambda1949z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62cpragmazf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2sidezd2effectzd2setz12z50zzcgen_copz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzf2Czd2bodyz20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_csetqzd2loczd2zzcgen_copz00(BgL_csetqz00_bglt);
	static BgL_cvoidz00_bglt BGl_z62cvoidzd2nilzb0zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2strengthzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cvoidzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2classz20zzcgen_copz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda1957z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1958z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cifz00_bglt BGl_cifzd2nilzd2zzcgen_copz00();
	static BgL_clabelz00_bglt BGl_z62lambda1799z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cpragmazd2loczd2zzcgen_copz00(BgL_cpragmaz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_sfunzf2Czd2topzf3zd3zzcgen_copz00(BgL_sfunz00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z62lambda1963z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cjumpzd2exzd2itzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1964z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_clabelz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_csequencezd2copszd2zzcgen_copz00(BgL_csequencez00_bglt);
	static obj_t BGl_z62cvoidzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62csetqzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Czd2stackzd2allocatorzd2setz12z50zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cboxzd2refzd2zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_localzd2varzd2_bglt
		BGl_localzd2varzd2nilz00zzcgen_copz00();
	static BgL_nopz00_bglt BGl_z62lambda1970z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cifzd2loczd2zzcgen_copz00(BgL_cifz00_bglt);
	static BgL_nopz00_bglt BGl_z62lambda1972z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62nopzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_varcz00_bglt BGl_z62csetqzd2varzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_creturnzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_csetqz00_bglt BGl_makezd2csetqzd2zzcgen_copz00(obj_t,
		BgL_varcz00_bglt, BgL_copz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32120ze3ze5zzcgen_copz00(obj_t, obj_t);
	static BgL_cappz00_bglt BGl_z62makezd2cappzb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cfailzd2msgzb0zzcgen_copz00(obj_t, obj_t);
	static BgL_stopz00_bglt BGl_z62lambda1981z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_stopz00_bglt BGl_z62lambda1983z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62csetqzf3z91zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda1989z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_csetzd2exzd2itz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cvoidz00_bglt BGl_cvoidzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2varzd2locz00zzcgen_copz00(BgL_localzd2varzd2_bglt);
	static obj_t BGl_z62sfunzf2Czd2bodyzd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cifzf3z91zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62makezd2copzb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2varzd2varsz62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nopz00_bglt BGl_makezd2nopzd2zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cifzd2loczd2setz12z12zzcgen_copz00(BgL_cifz00_bglt, obj_t);
	static obj_t BGl_objectzd2initzd2zzcgen_copz00();
	static obj_t BGl_z62lambda1990z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2keysz42zzcgen_copz00(obj_t, obj_t);
	static BgL_csetqz00_bglt BGl_z62lambda1997z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_csetqz00_bglt BGl_z62lambda1999z62zzcgen_copz00(obj_t);
	static BgL_clabelz00_bglt BGl_z62sfunzf2Czd2labelz42zzcgen_copz00(obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Czd2argszd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_capplyzd2argzd2zzcgen_copz00(BgL_capplyz00_bglt);
	static BgL_csetqz00_bglt BGl_z62makezd2csetqzb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_clabelzd2namezd2zzcgen_copz00(BgL_clabelz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cgotozf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_csequencezf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_catomz00_bglt BGl_makezd2catomzd2zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cvoidzd2loczd2zzcgen_copz00(BgL_cvoidz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31974ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_csetzd2exzd2itzd2jumpzd2valuez00zzcgen_copz00
		(BgL_csetzd2exzd2itz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_sfunzf2Czd2argsz20zzcgen_copz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62sfunzf2Czd2stackablez42zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2classzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_varcz00_bglt
		BGl_csetqzd2varzd2zzcgen_copz00(BgL_csetqz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cblockzd2loczd2setz12z12zzcgen_copz00(BgL_cblockz00_bglt, obj_t);
	static obj_t BGl_z62ccastzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_catomzd2valuezd2zzcgen_copz00(BgL_catomz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31959ze3ze5zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_capplyz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cappz00_bglt BGl_makezd2cappzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt BGl_copzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cfailzd2msgzd2zzcgen_copz00(BgL_cfailz00_bglt);
	static BgL_cpragmaz00_bglt BGl_z62cpragmazd2nilzb0zzcgen_copz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62capplyzd2argzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cpragmaz00zzcgen_copz00 = BUNSPEC;
	static BgL_copz00_bglt BGl_z62ccastzd2argzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cifz00_bglt BGl_makezd2cifzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt, BgL_copz00_bglt);
	static BgL_cboxzd2setz12zc0_bglt
		BGl_z62cboxzd2setz12zd2nilz70zzcgen_copz00(obj_t);
	static obj_t BGl_z62cfailzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62csequencezf3z91zzcgen_copz00(obj_t, obj_t);
	static BgL_catomz00_bglt BGl_z62makezd2catomzb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_cswitchz00_bglt BGl_z62makezd2cswitchzb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cblockzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z62sfunzf2Czd2bodyz42zzcgen_copz00(obj_t, obj_t);
	static BgL_cmakezd2boxzd2_bglt
		BGl_z62cmakezd2boxzd2nilz62zzcgen_copz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32141ze3ze5zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32052ze3ze5zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cmakezd2boxzd2stackablez62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2argszd2namez90zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_cmakezd2boxzd2_bglt
		BGl_makezd2cmakezd2boxz00zzcgen_copz00(obj_t, BgL_copz00_bglt, obj_t);
	static obj_t BGl_z62stopzf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_copzd2loczd2zzcgen_copz00(BgL_copz00_bglt);
	static obj_t BGl_z62cpragmazd2loczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2topzf3zb1zzcgen_copz00(obj_t, obj_t);
	static BgL_localzd2varzd2_bglt
		BGl_z62makezd2localzd2varz62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cpragmazf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_ccastz00_bglt BGl_makezd2ccastzd2zzcgen_copz00(obj_t,
		BgL_typez00_bglt, BgL_copz00_bglt);
	static obj_t BGl_z62cboxzd2setz12zd2locz70zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2loczd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_copz00_bglt
		BGl_z62csetzd2exzd2itzd2jumpzd2valuez62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cboxzd2refzd2loczd2setz12za2zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfuncallzd2strengthzd2zzcgen_copz00(BgL_cfuncallz00_bglt);
	static obj_t BGl_z62cmakezd2boxzd2locz62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfuncallz00_bglt
		BGl_makezd2cfuncallzd2zzcgen_copz00(obj_t, BgL_copz00_bglt, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2optionalsz20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_csetzd2exzd2itz00_bglt
		BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_ccastzd2argzd2zzcgen_copz00(BgL_ccastz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_clabelzf3zf3zzcgen_copz00(obj_t);
	static BgL_ccastz00_bglt BGl_z62makezd2ccastzb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cswitchzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_csetqzd2valuezd2zzcgen_copz00(BgL_csetqz00_bglt);
	BGL_EXPORTED_DECL BgL_cboxzd2setz12zc0_bglt
		BGl_makezd2cboxzd2setz12z12zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_cmakezd2boxzd2zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z62sfunzf2Czd2predicatezd2ofzd2setz12z50zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62clabelzd2usedzf3z43zzcgen_copz00(obj_t, obj_t);
	static BgL_catomz00_bglt BGl_z62catomzd2nilzb0zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_capplyzd2loczd2setz12z12zzcgen_copz00(BgL_capplyz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cboxzd2setz12zd2valuez12zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt);
	static obj_t BGl_z62clabelzd2namezb0zzcgen_copz00(obj_t, obj_t);
	static obj_t
		BGl_z62sfunzf2Czd2dssslzd2keywordszd2setz12z50zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cboxzd2setz12zd2loczd2setz12zb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_csetzd2exzd2itzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cpragmaz00_bglt
		BGl_makezd2cpragmazd2zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2effectz20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_copz00_bglt BGl_makezd2copzd2zzcgen_copz00(obj_t);
	static obj_t BGl_z62cgotozd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2103z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2104z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2argsz42zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2108z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2109z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2classz42zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62catomzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62catomzd2valuezb0zzcgen_copz00(obj_t, obj_t);
	static BgL_cappz00_bglt BGl_z62lambda2116z62zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_cappz00_bglt BGl_z62lambda2118z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62creturnzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Czd2failsafezd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfuncallzd2typezb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_clabelzd2usedzf3zd2setz12ze1zzcgen_copz00(BgL_clabelz00_bglt, bool_t);
	BGL_EXPORTED_DEF obj_t BGl_cboxzd2setz12zc0zzcgen_copz00 = BUNSPEC;
	static BgL_copz00_bglt BGl_z62cboxzd2setz12zd2varz70zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cmakezd2boxzd2valuez00zzcgen_copz00(BgL_cmakezd2boxzd2_bglt);
	BGL_EXPORTED_DECL BgL_bdbzd2blockzd2_bglt
		BGl_makezd2bdbzd2blockz00zzcgen_copz00(obj_t, BgL_copz00_bglt);
	static BgL_copz00_bglt BGl_z62lambda2124z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2125z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2129z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cmakezd2boxzd2stackablez00zzcgen_copz00(BgL_cmakezd2boxzd2_bglt);
	static obj_t BGl_z62cpragmazd2formatzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_catomz00_bglt BGl_catomzd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62cappzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cvoidzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cjumpzd2exzd2itz00_bglt
		BGl_cjumpzd2exzd2itzd2nilzd2zzcgen_copz00();
	static BgL_copz00_bglt BGl_z62cjumpzd2exzd2itzd2valuezb0zzcgen_copz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2130z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_cfailz00_bglt BGl_z62lambda2136z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_cfailz00_bglt BGl_z62lambda2138z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32166ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2failsafezd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cfailzd2proczd2zzcgen_copz00(BgL_cfailz00_bglt);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cswitchzd2testzd2zzcgen_copz00(BgL_cswitchz00_bglt);
	static BgL_copz00_bglt BGl_z62bdbzd2blockzd2bodyz62zzcgen_copz00(obj_t,
		obj_t);
	static BgL_cjumpzd2exzd2itz00_bglt
		BGl_z62makezd2cjumpzd2exzd2itzb0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2300z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2306z62zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2145z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2307z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62clabelzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2146z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2thezd2closurez90zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_catomzd2loczd2zzcgen_copz00(BgL_catomz00_bglt);
	static obj_t BGl_z62cifzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2failsafez42zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cjumpzd2exzd2itzd2loczd2zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt);
	BGL_EXPORTED_DECL BgL_cswitchz00_bglt BGl_cswitchzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DEF obj_t BGl_cblockz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2topzf3zd2setz12z13zzcgen_copz00(BgL_sfunz00_bglt, bool_t);
	static BgL_copz00_bglt BGl_z62lambda2150z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2151z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_bdbzd2blockzd2_bglt BGl_z62lambda2313z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_bdbzd2blockzd2_bglt BGl_z62lambda2315z62zzcgen_copz00(obj_t);
	static BgL_copz00_bglt BGl_z62lambda2155z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2156z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cswitchzd2clauseszb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2blockzd2zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_cboxzd2refzd2_bglt
		BGl_makezd2cboxzd2refz00zzcgen_copz00(obj_t, BgL_copz00_bglt);
	static BgL_copz00_bglt BGl_z62cfailzd2proczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62varczf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2321z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2322z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62csetqzd2valuezb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcgen_copz00();
	static BgL_cswitchz00_bglt BGl_z62lambda2162z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_cswitchz00_bglt BGl_z62lambda2164z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32290ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cswitchzd2loczd2zzcgen_copz00(BgL_cswitchz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2propertyz20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_stopzd2valuezd2zzcgen_copz00(BgL_stopz00_bglt);
	static BgL_copz00_bglt BGl_z62lambda2170z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2171z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2thezd2closurezd2globalz20zzcgen_copz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62lambda2175z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2176z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32186ze3ze5zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62csetzd2exzd2itzf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czf2zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z62cpragmazd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_cmakezd2boxzd2_bglt BGl_z62lambda2182z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_cmakezd2boxzd2_bglt BGl_z62lambda2184z62zzcgen_copz00(obj_t);
	static BgL_localzd2varzd2_bglt
		BGl_z62localzd2varzd2nilz62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cblockz00_bglt BGl_cblockzd2nilzd2zzcgen_copz00();
	static BgL_copz00_bglt BGl_z62csetzd2exzd2itzd2bodyzb0zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_clabelz00_bglt
		BGl_cgotozd2labelzd2zzcgen_copz00(BgL_cgotoz00_bglt);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_csetzd2exzd2itzd2exitzd2zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt);
	static obj_t BGl_z62sfunzf2Czd2argszd2noescapezd2setz12z50zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2190z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2191z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62stopzd2valuezb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2195z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2196z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cfailz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z62sfunzf2Czd2predicatezd2ofz90zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32099ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_stopz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z62cjumpzd2exzd2itzd2loczd2setz12z70zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62ccastzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2varzd2locz62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cpragmazd2argszd2zzcgen_copz00(BgL_cpragmaz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_cblockzd2loczd2zzcgen_copz00(BgL_cblockz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_creturnz00zzcgen_copz00 = BUNSPEC;
	extern obj_t BGl_variablez00zzast_varz00;
	static BgL_cblockz00_bglt BGl_z62cblockzd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62lambda1800z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2effectzd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_clabelz00_bglt BGl_clabelzd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62sfunzf2Czd2argszd2noescapez90zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31760ze3ze5zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_csetqzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_ccastzd2typezd2zzcgen_copz00(BgL_ccastz00_bglt);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_sfunzf2Czd2nilz20zzcgen_copz00();
	static BgL_nopz00_bglt BGl_z62nopzd2nilzb0zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cjumpzd2exzd2itzd2loczd2setz12z12zzcgen_copz00
		(BgL_cjumpzd2exzd2itz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2stackzd2allocatorzd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt,
		obj_t);
	static BgL_cgotoz00_bglt BGl_z62cgotozd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62catomzf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_bdbzd2blockzf3z21zzcgen_copz00(obj_t);
	static obj_t BGl_z62cblockzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzd2varzf3z21zzcgen_copz00(obj_t);
	static obj_t BGl_z62copzf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_copzd2loczd2setz12z12zzcgen_copz00(BgL_copz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cappzd2loczd2setz12z12zzcgen_copz00(BgL_cappz00_bglt, obj_t);
	static BgL_cswitchz00_bglt BGl_z62cswitchzd2nilzb0zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2argszd2noescapezf2zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_clabelzd2loczd2zzcgen_copz00(BgL_clabelz00_bglt);
	static obj_t BGl_z62sfunzf2Czf3z63zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cboxzd2setz12zd2loczd2setz12zd2zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt,
		obj_t);
	static BgL_cblockz00_bglt BGl_z62lambda1821z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bdbzd2blockzd2loczd2setz12za2zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_cfailz00_bglt BGl_z62cfailzd2nilzb0zzcgen_copz00(obj_t);
	static BgL_cblockz00_bglt BGl_z62lambda1823z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_csetzd2exzd2itz00_bglt
		BGl_csetzd2exzd2itzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL obj_t BGl_sfunzf2Czd2locz20zzcgen_copz00(BgL_sfunz00_bglt);
	static BgL_clabelz00_bglt BGl_z62clabelzd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62cboxzd2refzf3z43zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda1829z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62nopzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cvoidzd2valuezd2zzcgen_copz00(BgL_cvoidz00_bglt);
	static obj_t BGl_z62cappzd2argszb0zzcgen_copz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62ccastzd2typezb0zzcgen_copz00(obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62sfunzf2Czd2nilz42zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL long BGl_sfunzf2Czd2arityz20zzcgen_copz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62csequencezd2copszb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62nopzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cgotozd2loczb0zzcgen_copz00(obj_t, obj_t);
	static BgL_cpragmaz00_bglt BGl_z62makezd2cpragmazb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1830z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_creturnz00_bglt BGl_z62lambda1837z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_creturnz00_bglt BGl_z62lambda1839z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cboxzd2setz12zf3z33zzcgen_copz00(obj_t);
	static obj_t BGl_z62bdbzd2blockzf3z43zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2varzf3z43zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cswitchzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cblockzd2bodyzd2zzcgen_copz00(BgL_cblockz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32001ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_clabelz00_bglt BGl_makezd2clabelzd2zzcgen_copz00(obj_t,
		obj_t, bool_t, obj_t);
	static obj_t BGl_z62cfailzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_csetzd2exzd2itzd2loczd2zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt);
	static obj_t BGl_z62clabelzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2strengthz42zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cfailzf3zf3zzcgen_copz00(obj_t);
	static BgL_copz00_bglt BGl_z62lambda1847z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1848z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzcgen_copz00(obj_t);
	static BgL_copz00_bglt BGl_z62lambda1689z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2locz42zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cboxzd2refzd2loczd2setz12zc0zzcgen_copz00(BgL_cboxzd2refzd2_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2bodyzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_cgotoz00_bglt BGl_cgotozd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_csequencez00_bglt BGl_csequencezd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62sfunzf2Czd2integratedz42zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_varczd2loczd2setz12z12zzcgen_copz00(BgL_varcz00_bglt, obj_t);
	static BgL_copz00_bglt BGl_z62lambda1693z62zzcgen_copz00(obj_t);
	static BgL_cvoidz00_bglt BGl_z62lambda1856z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_cfuncallz00_bglt BGl_z62makezd2cfuncallzb0zzcgen_copz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_varcz00_bglt BGl_z62makezd2varczb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_catomzd2loczd2setz12z12zzcgen_copz00(BgL_catomz00_bglt, obj_t);
	static BgL_cvoidz00_bglt BGl_z62lambda1858z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2argszd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_csequencez00_bglt
		BGl_makezd2csequencezd2zzcgen_copz00(obj_t, bool_t, obj_t);
	static obj_t BGl_z62cboxzd2setz12zf3z51zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfailz00_bglt BGl_cfailzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_creturnz00_bglt
		BGl_makezd2creturnzd2zzcgen_copz00(obj_t, BgL_copz00_bglt);
	static BgL_clabelz00_bglt BGl_z62cgotozd2labelzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_bdbzd2blockzd2_bglt
		BGl_bdbzd2blockzd2nilz00zzcgen_copz00();
	BGL_EXPORTED_DECL bool_t BGl_cboxzd2refzf3z21zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2predicatezd2ofzf2zzcgen_copz00(BgL_sfunz00_bglt);
	static BgL_copz00_bglt BGl_z62lambda1864z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1865z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cappzd2argszd2zzcgen_copz00(BgL_cappz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_cgotozd2loczd2zzcgen_copz00(BgL_cgotoz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_csequencezd2loczd2zzcgen_copz00(BgL_csequencez00_bglt);
	static BgL_copz00_bglt BGl_z62cswitchzd2testzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2stackablez20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2thezd2closurezf2zzcgen_copz00(BgL_sfunz00_bglt);
	static BgL_catomz00_bglt BGl_z62lambda1873z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_catomz00_bglt BGl_z62lambda1875z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cfuncallzd2funzd2zzcgen_copz00(BgL_cfuncallz00_bglt);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_cfailzd2loczd2zzcgen_copz00(BgL_cfailz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bdbzd2blockzd2locz00zzcgen_copz00(BgL_bdbzd2blockzd2_bglt);
	static obj_t BGl_z62lambda1882z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1883z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cappz00zzcgen_copz00 = BUNSPEC;
	static BgL_varcz00_bglt BGl_z62lambda1889z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62clabelzd2bodyzd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcgen_copz00();
	static obj_t BGl_z62sfunzf2Czd2effectz42zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62csequencezd2czd2expzf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_capplyz00_bglt BGl_makezd2capplyzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt);
	BGL_EXPORTED_DECL BgL_varcz00_bglt BGl_makezd2varczd2zzcgen_copz00(obj_t,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_cgotoz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z62cfuncallzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_csequencez00zzcgen_copz00 = BUNSPEC;
	static BgL_varcz00_bglt BGl_z62lambda1892z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2argszd2namezf2zzcgen_copz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31785ze3ze5zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31696ze3ze5zzcgen_copz00(obj_t, obj_t);
	static BgL_variablez00_bglt BGl_z62lambda1898z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1899z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cjumpzd2exzd2itzd2exitzb0zzcgen_copz00(obj_t,
		obj_t);
	static obj_t BGl_z62cmakezd2boxzd2loczd2setz12za2zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_cmakezd2boxzd2_bglt
		BGl_z62makezd2cmakezd2boxz62zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stopzd2loczd2setz12z12zzcgen_copz00(BgL_stopz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32023ze3ze5zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2varzd2loczd2setz12za2zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzcgen_copz00();
	static BgL_copz00_bglt BGl_z62cvoidzd2valuezb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfailzd2loczd2setz12z12zzcgen_copz00(BgL_cfailz00_bglt, obj_t);
	static obj_t BGl_z62sfunzf2Czd2propertyzd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cfuncallzf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cvoidz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_creturnzd2valuezd2zzcgen_copz00(BgL_creturnz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cfuncallz00_bglt BGl_cfuncallzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL bool_t BGl_stopzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cjumpzd2exzd2itzd2valuezd2zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt);
	static BgL_copz00_bglt BGl_z62cblockzd2bodyzb0zzcgen_copz00(obj_t, obj_t);
	static BgL_clabelz00_bglt BGl_z62makezd2clabelzb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62cswitchzf3z91zzcgen_copz00(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL obj_t
		BGl_cswitchzd2loczd2setz12z12zzcgen_copz00(BgL_cswitchz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31877ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2propertyzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_cboxzd2refzd2_bglt
		BGl_cboxzd2refzd2nilz00zzcgen_copz00();
	BGL_EXPORTED_DECL bool_t BGl_cifzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z62csequencezd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfuncallzd2loczd2zzcgen_copz00(BgL_cfuncallz00_bglt);
	static BgL_cboxzd2setz12zc0_bglt
		BGl_z62makezd2cboxzd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cpragmazd2argszb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cblockzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31894ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2effectzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62capplyzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32221ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cboxzd2refzd2locz00zzcgen_copz00(BgL_cboxzd2refzd2_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cfuncallzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_csetqzd2loczd2setz12z12zzcgen_copz00(BgL_csetqz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_cfailz00_bglt BGl_makezd2cfailzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt, BgL_copz00_bglt, BgL_copz00_bglt);
	static BgL_cboxzd2refzd2_bglt BGl_z62makezd2cboxzd2refz62zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32206ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31985ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bdbzd2blockzd2loczd2setz12zc0zzcgen_copz00(BgL_bdbzd2blockzd2_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_creturnzd2loczd2setz12z12zzcgen_copz00(BgL_creturnz00_bglt, obj_t);
	static obj_t BGl_z62copzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2loczd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_nopz00_bglt BGl_nopzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DEF obj_t BGl_nopz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2stackablezd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt, obj_t);
	static obj_t BGl_z62sfunzf2Czd2arityz42zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2varzd2varsz00zzcgen_copz00(BgL_localzd2varzd2_bglt);
	static BgL_cfailz00_bglt BGl_z62makezd2cfailzb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_bdbzd2blockzd2_bglt
		BGl_z62makezd2bdbzd2blockz62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cmakezd2boxzf3z21zzcgen_copz00(obj_t);
	static obj_t BGl_z62cvoidzf3z91zzcgen_copz00(obj_t, obj_t);
	static BgL_capplyz00_bglt BGl_z62makezd2capplyzb0zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_varczd2variablezd2zzcgen_copz00(BgL_varcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cfuncallzd2argszd2zzcgen_copz00(BgL_cfuncallz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_sfunzf2Czf3z01zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2dssslzd2keywordszd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32241ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nopzd2loczd2zzcgen_copz00(BgL_nopz00_bglt);
	static BgL_csetzd2exzd2itz00_bglt
		BGl_z62makezd2csetzd2exzd2itzb0zzcgen_copz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cjumpzd2exzd2itz00_bglt
		BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00(obj_t, BgL_copz00_bglt,
		BgL_copz00_bglt);
	static BgL_varcz00_bglt BGl_z62lambda2005z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2006z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cifzd2falsezb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ccastzd2loczd2setz12z12zzcgen_copz00(BgL_ccastz00_bglt, obj_t);
	static obj_t BGl_z62csetzd2exzd2itzd2loczd2setz12z70zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cmakezd2boxzf3z43zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cappzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2integratedzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt,
		bool_t);
	BGL_EXPORTED_DEF obj_t BGl_cifz00zzcgen_copz00 = BUNSPEC;
	static BgL_copz00_bglt BGl_z62lambda2011z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2012z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_cifz00_bglt BGl_z62lambda2019z62zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2dssslzd2keywordszf2zzcgen_copz00(BgL_sfunz00_bglt);
	static BgL_creturnz00_bglt BGl_z62makezd2creturnzb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62capplyzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_copz00_bglt BGl_z62cboxzd2setz12zd2valuez70zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ccastzf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2stackzd2allocatorzf2zzcgen_copz00(BgL_sfunz00_bglt);
	static BgL_cifz00_bglt BGl_z62lambda2021z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cboxzd2refzd2varz00zzcgen_copz00(BgL_cboxzd2refzd2_bglt);
	static obj_t BGl_z62sfunzf2Czd2stackablezd2setz12z82zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32317ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cblockz00_bglt BGl_makezd2cblockzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	static BgL_varcz00_bglt BGl_z62varczd2nilzb0zzcgen_copz00(obj_t);
	static BgL_copz00_bglt BGl_z62cifzd2truezb0zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cfuncallzd2funzb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2sidezd2effectz90zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2030z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2thezd2closurezd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2031z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localzd2varzd2_bglt
		BGl_makezd2localzd2varz00zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cswitchzf3zf3zzcgen_copz00(obj_t);
	static BgL_copz00_bglt BGl_z62lambda2036z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cappzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2037z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cgotozf3z91zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cappzd2funzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2sidezd2effectzd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cpragmazd2loczd2setz12z12zzcgen_copz00(BgL_cpragmaz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_varczf3zf3zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cifzd2falsezd2zzcgen_copz00(BgL_cifz00_bglt);
	static BgL_copz00_bglt BGl_z62cmakezd2boxzd2valuez62zzcgen_copz00(obj_t,
		obj_t);
	static BgL_cboxzd2refzd2_bglt BGl_z62lambda2202z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static BgL_copz00_bglt BGl_z62lambda2041z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_catomzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z62lambda2042z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_cboxzd2refzd2_bglt BGl_z62lambda2204z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_creturnz00_bglt BGl_creturnzd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62zc3z04anonymousza31711ze3ze5zzcgen_copz00(obj_t);
	static BgL_localzd2varzd2_bglt BGl_z62lambda2048z62zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62varczd2loczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2optionalsz42zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cmakezd2boxzd2loczd2setz12zc0zzcgen_copz00(BgL_cmakezd2boxzd2_bglt,
		obj_t);
	static BgL_cifz00_bglt BGl_z62cifzd2nilzb0zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static BgL_copz00_bglt BGl_z62lambda2210z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2211z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2varzd2loczd2setz12zc0zzcgen_copz00(BgL_localzd2varzd2_bglt,
		obj_t);
	static BgL_localzd2varzd2_bglt BGl_z62lambda2050z62zzcgen_copz00(obj_t);
	static BgL_cjumpzd2exzd2itz00_bglt
		BGl_z62cjumpzd2exzd2itzd2nilzb0zzcgen_copz00(obj_t);
	static BgL_cboxzd2setz12zc0_bglt BGl_z62lambda2217z62zzcgen_copz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2057z62zzcgen_copz00(obj_t, obj_t);
	static BgL_cboxzd2setz12zc0_bglt BGl_z62lambda2219z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62lambda2058z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2thezd2closurezd2globalz42zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_sfunz00_bglt BGl_makezd2sfunzf2Cz20zzcgen_copz00(long,
		obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		BgL_clabelz00_bglt, bool_t);
	static obj_t BGl_z62sfunzf2Czd2dssslzd2keywordsz90zzcgen_copz00(obj_t, obj_t);
	static BgL_stopz00_bglt BGl_z62stopzd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32069ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sfunzf2Czd2integratedz20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_clabelzd2loczd2setz12z12zzcgen_copz00(BgL_clabelz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_creturnzd2loczd2zzcgen_copz00(BgL_creturnz00_bglt);
	static BgL_copz00_bglt BGl_z62lambda2225z62zzcgen_copz00(obj_t, obj_t);
	static BgL_cfuncallz00_bglt BGl_z62lambda2064z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2226z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_cfuncallz00_bglt BGl_z62lambda2066z62zzcgen_copz00(obj_t);
	static BgL_csequencez00_bglt BGl_z62csequencezd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62sfunzf2Czd2classzd2setz12z82zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62varczd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_csetqz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2failsafez20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_capplyzd2funzd2zzcgen_copz00(BgL_capplyz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_localzd2varzd2zzcgen_copz00 = BUNSPEC;
	static BgL_cfuncallz00_bglt BGl_z62cfuncallzd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62cifzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cifzd2testzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cgotoz00_bglt BGl_makezd2cgotozd2zzcgen_copz00(obj_t,
		BgL_clabelz00_bglt);
	static obj_t BGl_z62cjumpzd2exzd2itzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2230z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2231z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cswitchz00zzcgen_copz00 = BUNSPEC;
	static BgL_copz00_bglt BGl_z62lambda2073z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cjumpzd2exzd2itzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z62lambda2074z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_csetzd2exzd2itz00_bglt BGl_z62lambda2237z62zzcgen_copz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62stopzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cswitchzd2clauseszd2zzcgen_copz00(BgL_cswitchz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcgen_copz00();
	static BgL_csetzd2exzd2itz00_bglt BGl_z62lambda2239z62zzcgen_copz00(obj_t);
	static obj_t BGl_z62lambda2078z62zzcgen_copz00(obj_t, obj_t);
	static BgL_cappz00_bglt BGl_z62cappzd2nilzb0zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL BgL_cboxzd2setz12zc0_bglt
		BGl_cboxzd2setz12zd2nilz12zzcgen_copz00();
	static obj_t BGl_z62lambda2079z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_bdbzd2blockzd2_bglt
		BGl_z62bdbzd2blockzd2nilz62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_copz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_cgotozd2loczd2setz12z12zzcgen_copz00(BgL_cgotoz00_bglt, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_copz00();
	BGL_EXPORTED_DECL obj_t
		BGl_csequencezd2loczd2setz12z12zzcgen_copz00(BgL_csequencez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_cmakezd2boxzd2_bglt
		BGl_cmakezd2boxzd2nilz00zzcgen_copz00();
	static BgL_cboxzd2refzd2_bglt BGl_z62cboxzd2refzd2nilz62zzcgen_copz00(obj_t);
	static obj_t BGl_z62csequencezd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_csetzd2exzd2itzd2loczd2setz12z12zzcgen_copz00
		(BgL_csetzd2exzd2itz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_nopzd2loczd2setz12z12zzcgen_copz00(BgL_nopz00_bglt, obj_t);
	static obj_t BGl_z62lambda2083z62zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2245z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2084z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2246z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_copz00();
	static obj_t
		BGl_z62sfunzf2Czd2thezd2closurezd2globalzd2setz12z82zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2088z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2089z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32266ze3ze5zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cfuncallzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_clabelzd2bodyzd2zzcgen_copz00(BgL_clabelz00_bglt);
	BGL_EXPORTED_DECL BgL_cvoidz00_bglt BGl_makezd2cvoidzd2zzcgen_copz00(obj_t,
		BgL_copz00_bglt);
	static BgL_copz00_bglt BGl_z62capplyzd2funzb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2propertyz42zzcgen_copz00(obj_t, obj_t);
	static BgL_cgotoz00_bglt BGl_z62makezd2cgotozb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_catomz00zzcgen_copz00 = BUNSPEC;
	static BgL_copz00_bglt BGl_z62lambda2250z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2251z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62cappzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cboxzd2setz12zd2locz12zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt);
	static obj_t BGl_z62bdbzd2blockzd2locz62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31910ze3ze5zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2255z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2256z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzcgen_copz00(obj_t, obj_t);
	static BgL_capplyz00_bglt BGl_z62lambda2095z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_capplyz00_bglt BGl_z62lambda2097z62zzcgen_copz00(obj_t);
	static BgL_csetzd2exzd2itz00_bglt
		BGl_z62csetzd2exzd2itzd2nilzb0zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cmakezd2boxzd2locz00zzcgen_copz00(BgL_cmakezd2boxzd2_bglt);
	static obj_t BGl_z62cboxzd2refzd2locz62zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cfailzd2objzb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62cfuncallzd2strengthzb0zzcgen_copz00(obj_t, obj_t);
	static BgL_cjumpzd2exzd2itz00_bglt BGl_z62lambda2262z62zzcgen_copz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfuncallzd2loczd2setz12z12zzcgen_copz00(BgL_cfuncallz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cpragmazd2formatzd2zzcgen_copz00(BgL_cpragmaz00_bglt);
	static BgL_cjumpzd2exzd2itz00_bglt BGl_z62lambda2264z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2predicatezd2ofzd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_capplyz00_bglt BGl_capplyzd2nilzd2zzcgen_copz00();
	BGL_EXPORTED_DECL BgL_clabelz00_bglt
		BGl_sfunzf2Czd2labelz20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvoidzd2loczd2setz12z12zzcgen_copz00(BgL_cvoidz00_bglt, obj_t);
	static BgL_cblockz00_bglt BGl_z62makezd2cblockzb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_csetzd2exzd2itzd2bodyzd2zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_capplyzf3zf3zzcgen_copz00(obj_t);
	static BgL_cvoidz00_bglt BGl_z62makezd2cvoidzb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sfunzf2Czd2integratedzd2setz12z82zzcgen_copz00(obj_t,
		obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2270z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2271z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62stopzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62csetzd2exzd2itzd2exitzb0zzcgen_copz00(obj_t,
		obj_t);
	static BgL_copz00_bglt BGl_z62copzd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62lambda1709z62zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62lambda2276z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62csetzd2exzd2itzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2277z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_bdbzd2blockzd2bodyz00zzcgen_copz00(BgL_bdbzd2blockzd2_bglt);
	static obj_t BGl_z62lambda1710z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cblockzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2stackzd2allocatorz90zzcgen_copz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_capplyzd2loczd2zzcgen_copz00(BgL_capplyz00_bglt);
	static BgL_copz00_bglt BGl_z62creturnzd2valuezb0zzcgen_copz00(obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda2285z62zzcgen_copz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varcz00_bglt BGl_varczd2nilzd2zzcgen_copz00();
	static BgL_creturnz00_bglt BGl_z62creturnzd2nilzb0zzcgen_copz00(obj_t);
	static BgL_sfunz00_bglt BGl_z62lambda2288z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cifzd2truezd2zzcgen_copz00(BgL_cifz00_bglt);
	static BgL_capplyz00_bglt BGl_z62capplyzd2nilzb0zzcgen_copz00(obj_t);
	static BgL_ccastz00_bglt BGl_z62ccastzd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62catomzd2loczd2setz12z70zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cfuncallz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z62creturnzf3z91zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_ccastz00zzcgen_copz00 = BUNSPEC;
	static obj_t BGl_z62copzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static BgL_csequencez00_bglt BGl_z62makezd2csequencezb0zzcgen_copz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62sfunzf2Czd2topzf3zd2setz12z71zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cjumpzd2exzd2itz00zzcgen_copz00 = BUNSPEC;
	static BgL_sfunz00_bglt BGl_z62lambda2291z62zzcgen_copz00(obj_t, obj_t);
	static BgL_stopz00_bglt BGl_z62makezd2stopzb0zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cappzd2funzd2zzcgen_copz00(BgL_cappz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31841ze3ze5zzcgen_copz00(obj_t, obj_t);
	static BgL_clabelz00_bglt BGl_z62lambda1728z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31825ze3ze5zzcgen_copz00(obj_t, obj_t);
	static BgL_clabelz00_bglt BGl_z62lambda2299z62zzcgen_copz00(obj_t, obj_t);
	static BgL_sfunz00_bglt BGl_z62makezd2sfunzf2Cz42zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_cswitchz00_bglt
		BGl_makezd2cswitchzd2zzcgen_copz00(obj_t, BgL_copz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cfailzd2objzd2zzcgen_copz00(BgL_cfailz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2thezd2closurezd2globalzd2setz12ze0zzcgen_copz00
		(BgL_sfunz00_bglt, obj_t);
	static BgL_clabelz00_bglt BGl_z62lambda1730z62zzcgen_copz00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_varczd2loczd2zzcgen_copz00(BgL_varcz00_bglt);
	static BgL_csetqz00_bglt BGl_z62csetqzd2nilzb0zzcgen_copz00(obj_t);
	static obj_t BGl_z62creturnzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31931ze3ze5zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62capplyzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static BgL_nopz00_bglt BGl_z62makezd2nopzb0zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62ccastzd2loczb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2argszd2noescapezd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1740z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_stopz00_bglt BGl_stopzd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62lambda1741z62zzcgen_copz00(obj_t, obj_t, obj_t);
	static BgL_cpragmaz00_bglt BGl_z62lambda1906z62zzcgen_copz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1746z62zzcgen_copz00(obj_t, obj_t);
	static BgL_cpragmaz00_bglt BGl_z62lambda1908z62zzcgen_copz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cfuncallzd2typezd2zzcgen_copz00(BgL_cfuncallz00_bglt);
	static obj_t BGl_z62lambda1747z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_clabelzd2bodyzd2setz12z12zzcgen_copz00(BgL_clabelz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cboxzd2setz12zd2varz12zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt);
	static obj_t BGl_z62clabelzf3z91zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62clabelzd2usedzf3zd2setz12z83zzcgen_copz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_csequencezd2czd2expzf3zf3zzcgen_copz00(BgL_csequencez00_bglt);
	static obj_t BGl_z62csetqzd2loczb0zzcgen_copz00(obj_t, obj_t);
	static BgL_copz00_bglt BGl_z62cboxzd2refzd2varz62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1914z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1915z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sfunzf2Czd2keysz20zzcgen_copz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31860ze3ze5zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_copzf3zf3zzcgen_copz00(obj_t);
	static obj_t BGl_z62lambda1919z62zzcgen_copz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1758z62zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cifzd2testzd2zzcgen_copz00(BgL_cifz00_bglt);
	BGL_EXPORTED_DECL BgL_ccastz00_bglt BGl_ccastzd2nilzd2zzcgen_copz00();
	static obj_t BGl_z62lambda1759z62zzcgen_copz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_copz00_bglt
		BGl_cjumpzd2exzd2itzd2exitzd2zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2sidezd2effectzf2zzcgen_copz00(BgL_sfunz00_bglt);
	static obj_t BGl_z62clabelzd2bodyzb0zzcgen_copz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_varcz00zzcgen_copz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_sfunzf2Czd2strengthz20zzcgen_copz00(BgL_sfunz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_stopzd2loczd2zzcgen_copz00(BgL_stopz00_bglt);
	static obj_t __cnst[61];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvoidzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cvoidza7d2locza7d2665za7,
		BGl_z62cvoidzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czf3zd2envzd3zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7f3za762666z00, BGl_z62sfunzf2Czf3z63zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2varzd2envzd2zzcgen_copz00,
		BgL_bgl_za762makeza7d2localza72667za7,
		BGl_z62makezd2localzd2varz62zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2blockzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl_za762bdbza7d2blockza7d2668za7,
		BGl_z62bdbzd2blockzd2nilz62zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzd2argzd2envz00zzcgen_copz00,
		BgL_bgl_za762ccastza7d2argza7b2669za7, BGl_z62ccastzd2argzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cifza7d2locza7d2s2670za7,
		BGl_z62cifzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_catomzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762catomza7d2nilza7b2671za7, BGl_z62catomzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cmakezd2boxzd2loczd2setz12zd2envz12zzcgen_copz00,
		BgL_bgl_za762cmakeza7d2boxza7d2672za7,
		BGl_z62cmakezd2boxzd2loczd2setz12za2zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzd2funzd2envz00zzcgen_copz00,
		BgL_bgl_za762cappza7d2funza7b02673za7, BGl_z62cappzd2funzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762ccastza7f3za791za7za72674za7, BGl_z62ccastzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_varczd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762varcza7d2locza7d22675za7,
		BGl_z62varczd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762ccastza7d2locza7b2676za7, BGl_z62ccastzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2labelzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2la2677za7,
		BGl_z62sfunzf2Czd2labelz42zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2blockzd2bodyzd2envzd2zzcgen_copz00,
		BgL_bgl_za762bdbza7d2blockza7d2678za7,
		BGl_z62bdbzd2blockzd2bodyz62zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2cjumpzd2exzd2itzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cjumpza72679za7,
		BGl_z62makezd2cjumpzd2exzd2itzb0zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2bodyzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2bo2680za7,
		BGl_z62sfunzf2Czd2bodyz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2nopzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2nopza7b02681za7, BGl_z62makezd2nopzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cjumpzd2exzd2itzd2exitzd2envz00zzcgen_copz00,
		BgL_bgl_za762cjumpza7d2exza7d22682za7,
		BGl_z62cjumpzd2exzd2itzd2exitzb0zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2sidezd2effectzd2envz20zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2si2683za7,
		BGl_z62sfunzf2Czd2sidezd2effectz90zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2strengthzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2st2684za7,
		BGl_z62sfunzf2Czd2strengthz42zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2thezd2closurezd2globalzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2th2685za7,
		BGl_z62sfunzf2Czd2thezd2closurezd2globalz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762clabelza7d2nilza72686za7, BGl_z62clabelzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cpragmazd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cpragm2687z00, BGl_z62makezd2cpragmazb0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2argszd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ar2688za7,
		BGl_z62sfunzf2Czd2argsz42zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2stackablezd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2st2689za7,
		BGl_z62sfunzf2Czd2stackablezd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varczd2variablezd2envz00zzcgen_copz00,
		BgL_bgl_za762varcza7d2variab2690z00, BGl_z62varczd2variablezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cswitchzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cswitchza7d2nil2691z00, BGl_z62cswitchzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2argszd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ar2692za7,
		BGl_z62sfunzf2Czd2argszd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2argszd2noescapezd2envz20zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ar2693za7,
		BGl_z62sfunzf2Czd2argszd2noescapez90zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetzd2exzd2itzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762csetza7d2exza7d2i2694za7,
		BGl_z62csetzd2exzd2itzd2nilzb0zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2600z00zzcgen_copz00,
		BgL_bgl_za762lambda2155za7622695z00, BGl_z62lambda2155z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2601z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2696za7,
		BGl_z62zc3z04anonymousza32141ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2602z00zzcgen_copz00,
		BgL_bgl_za762lambda2138za7622697z00, BGl_z62lambda2138z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2603z00zzcgen_copz00,
		BgL_bgl_za762lambda2136za7622698z00, BGl_z62lambda2136z62zzcgen_copz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2604z00zzcgen_copz00,
		BgL_bgl_za762lambda2171za7622699z00, BGl_z62lambda2171z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2605z00zzcgen_copz00,
		BgL_bgl_za762lambda2170za7622700z00, BGl_z62lambda2170z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2606z00zzcgen_copz00,
		BgL_bgl_za762lambda2176za7622701z00, BGl_z62lambda2176z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2607z00zzcgen_copz00,
		BgL_bgl_za762lambda2175za7622702z00, BGl_z62lambda2175z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2608z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2703za7,
		BGl_z62zc3z04anonymousza32166ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2609z00zzcgen_copz00,
		BgL_bgl_za762lambda2164za7622704z00, BGl_z62lambda2164z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varczd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762varcza7d2nilza7b02705za7, BGl_z62varczd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2610z00zzcgen_copz00,
		BgL_bgl_za762lambda2162za7622706z00, BGl_z62lambda2162z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2611z00zzcgen_copz00,
		BgL_bgl_za762lambda2191za7622707z00, BGl_z62lambda2191z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2612z00zzcgen_copz00,
		BgL_bgl_za762lambda2190za7622708z00, BGl_z62lambda2190z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2613z00zzcgen_copz00,
		BgL_bgl_za762lambda2196za7622709z00, BGl_z62lambda2196z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2614z00zzcgen_copz00,
		BgL_bgl_za762lambda2195za7622710z00, BGl_z62lambda2195z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2615z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2711za7,
		BGl_z62zc3z04anonymousza32186ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2616z00zzcgen_copz00,
		BgL_bgl_za762lambda2184za7622712z00, BGl_z62lambda2184z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2617z00zzcgen_copz00,
		BgL_bgl_za762lambda2182za7622713z00, BGl_z62lambda2182z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2618z00zzcgen_copz00,
		BgL_bgl_za762lambda2211za7622714z00, BGl_z62lambda2211z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2619z00zzcgen_copz00,
		BgL_bgl_za762lambda2210za7622715z00, BGl_z62lambda2210z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2620z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2716za7,
		BGl_z62zc3z04anonymousza32206ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2621z00zzcgen_copz00,
		BgL_bgl_za762lambda2204za7622717z00, BGl_z62lambda2204z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2622z00zzcgen_copz00,
		BgL_bgl_za762lambda2202za7622718z00, BGl_z62lambda2202z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2623z00zzcgen_copz00,
		BgL_bgl_za762lambda2226za7622719z00, BGl_z62lambda2226z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2624z00zzcgen_copz00,
		BgL_bgl_za762lambda2225za7622720z00, BGl_z62lambda2225z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2625z00zzcgen_copz00,
		BgL_bgl_za762lambda2231za7622721z00, BGl_z62lambda2231z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2626z00zzcgen_copz00,
		BgL_bgl_za762lambda2230za7622722z00, BGl_z62lambda2230z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2627z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2723za7,
		BGl_z62zc3z04anonymousza32221ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2bodyzd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2bo2724za7,
		BGl_z62sfunzf2Czd2bodyzd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2628z00zzcgen_copz00,
		BgL_bgl_za762lambda2219za7622725z00, BGl_z62lambda2219z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2629z00zzcgen_copz00,
		BgL_bgl_za762lambda2217za7622726z00, BGl_z62lambda2217z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2stackzd2allocatorzd2envz20zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2st2727za7,
		BGl_z62sfunzf2Czd2stackzd2allocatorz90zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cifza7f3za791za7za7cg2728za7, BGl_z62cifzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_creturnzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762creturnza7d2loc2729z00, BGl_z62creturnzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cfuncallzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cfuncallza7d2lo2730z00,
		BGl_z62cfuncallzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2630z00zzcgen_copz00,
		BgL_bgl_za762lambda2246za7622731z00, BGl_z62lambda2246z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2631z00zzcgen_copz00,
		BgL_bgl_za762lambda2245za7622732z00, BGl_z62lambda2245z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2632z00zzcgen_copz00,
		BgL_bgl_za762lambda2251za7622733z00, BGl_z62lambda2251z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2633z00zzcgen_copz00,
		BgL_bgl_za762lambda2250za7622734z00, BGl_z62lambda2250z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2634z00zzcgen_copz00,
		BgL_bgl_za762lambda2256za7622735z00, BGl_z62lambda2256z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2472z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2736za7,
		BGl_z62zc3z04anonymousza31711ze3ze5zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2635z00zzcgen_copz00,
		BgL_bgl_za762lambda2255za7622737z00, BGl_z62lambda2255z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2473z00zzcgen_copz00,
		BgL_bgl_za762lambda1710za7622738z00, BGl_z62lambda1710z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2636z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2739za7,
		BGl_z62zc3z04anonymousza32241ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2474z00zzcgen_copz00,
		BgL_bgl_za762lambda1709za7622740z00, BGl_z62lambda1709z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2637z00zzcgen_copz00,
		BgL_bgl_za762lambda2239za7622741z00, BGl_z62lambda2239z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2475z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2742za7,
		BGl_z62zc3z04anonymousza31696ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2638z00zzcgen_copz00,
		BgL_bgl_za762lambda2237za7622743z00, BGl_z62lambda2237z62zzcgen_copz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2476z00zzcgen_copz00,
		BgL_bgl_za762lambda1693za7622744z00, BGl_z62lambda1693z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2639z00zzcgen_copz00,
		BgL_bgl_za762lambda2271za7622745z00, BGl_z62lambda2271z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2477z00zzcgen_copz00,
		BgL_bgl_za762lambda1689za7622746z00, BGl_z62lambda1689z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cpragmazd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cpragmaza7d2nil2747z00, BGl_z62cpragmazd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2478z00zzcgen_copz00,
		BgL_bgl_za762lambda1741za7622748z00, BGl_z62lambda1741z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2479z00zzcgen_copz00,
		BgL_bgl_za762lambda1740za7622749z00, BGl_z62lambda1740z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2setz12zd2varzd2envzc0zzcgen_copz00,
		BgL_bgl_za762cboxza7d2setza7122750za7,
		BGl_z62cboxzd2setz12zd2varz70zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2refzd2loczd2envzd2zzcgen_copz00,
		BgL_bgl_za762cboxza7d2refza7d22751za7,
		BGl_z62cboxzd2refzd2locz62zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2640z00zzcgen_copz00,
		BgL_bgl_za762lambda2270za7622752z00, BGl_z62lambda2270z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2641z00zzcgen_copz00,
		BgL_bgl_za762lambda2277za7622753z00, BGl_z62lambda2277z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2642z00zzcgen_copz00,
		BgL_bgl_za762lambda2276za7622754z00, BGl_z62lambda2276z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2480z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2755za7,
		BGl_z62zc3z04anonymousza31748ze3ze5zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2arityzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ar2756za7,
		BGl_z62sfunzf2Czd2arityz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2643z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2757za7,
		BGl_z62zc3z04anonymousza32266ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2481z00zzcgen_copz00,
		BgL_bgl_za762lambda1747za7622758z00, BGl_z62lambda1747z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2644z00zzcgen_copz00,
		BgL_bgl_za762lambda2264za7622759z00, BGl_z62lambda2264z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2482z00zzcgen_copz00,
		BgL_bgl_za762lambda1746za7622760z00, BGl_z62lambda1746z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2645z00zzcgen_copz00,
		BgL_bgl_za762lambda2262za7622761z00, BGl_z62lambda2262z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2483z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2762za7,
		BGl_z62zc3z04anonymousza31760ze3ze5zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2646z00zzcgen_copz00,
		BgL_bgl_za762lambda2300za7622763z00, BGl_z62lambda2300z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2484z00zzcgen_copz00,
		BgL_bgl_za762lambda1759za7622764z00, BGl_z62lambda1759z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762csetqza7d2locza7b2765za7, BGl_z62csetqzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2647z00zzcgen_copz00,
		BgL_bgl_za762lambda2299za7622766z00, BGl_z62lambda2299z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2485z00zzcgen_copz00,
		BgL_bgl_za762lambda1758za7622767z00, BGl_z62lambda1758z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2648z00zzcgen_copz00,
		BgL_bgl_za762lambda2307za7622768z00, BGl_z62lambda2307z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2486z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2769za7,
		BGl_z62zc3z04anonymousza31732ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2649z00zzcgen_copz00,
		BgL_bgl_za762lambda2306za7622770z00, BGl_z62lambda2306z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2487z00zzcgen_copz00,
		BgL_bgl_za762lambda1730za7622771z00, BGl_z62lambda1730z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2488z00zzcgen_copz00,
		BgL_bgl_za762lambda1728za7622772z00, BGl_z62lambda1728z62zzcgen_copz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2489z00zzcgen_copz00,
		BgL_bgl_za762lambda1800za7622773z00, BGl_z62lambda1800z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cpragmazd2argszd2envz00zzcgen_copz00,
		BgL_bgl_za762cpragmaza7d2arg2774z00, BGl_z62cpragmazd2argszb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzd2bodyzd2envz00zzcgen_copz00,
		BgL_bgl_za762clabelza7d2body2775z00, BGl_z62clabelzd2bodyzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2650z00zzcgen_copz00,
		BgL_bgl_za762lambda2291za7622776z00, BGl_z62lambda2291z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2651z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2777za7,
		BGl_z62zc3z04anonymousza32290ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2652z00zzcgen_copz00,
		BgL_bgl_za762lambda2288za7622778z00, BGl_z62lambda2288z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2490z00zzcgen_copz00,
		BgL_bgl_za762lambda1799za7622779z00, BGl_z62lambda1799z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2653z00zzcgen_copz00,
		BgL_bgl_za762lambda2285za7622780z00, BGl_z62lambda2285z62zzcgen_copz00, 0L,
		BUNSPEC, 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2491z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2781za7,
		BGl_z62zc3z04anonymousza31785ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2654z00zzcgen_copz00,
		BgL_bgl_za762lambda2322za7622782z00, BGl_z62lambda2322z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2492z00zzcgen_copz00,
		BgL_bgl_za762lambda1783za7622783z00, BGl_z62lambda1783z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2655z00zzcgen_copz00,
		BgL_bgl_za762lambda2321za7622784z00, BGl_z62lambda2321z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2493z00zzcgen_copz00,
		BgL_bgl_za762lambda1779za7622785z00, BGl_z62lambda1779z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2656z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2786za7,
		BGl_z62zc3z04anonymousza32317ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2494z00zzcgen_copz00,
		BgL_bgl_za762lambda1830za7622787z00, BGl_z62lambda1830z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2657z00zzcgen_copz00,
		BgL_bgl_za762lambda2315za7622788z00, BGl_z62lambda2315z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2495z00zzcgen_copz00,
		BgL_bgl_za762lambda1829za7622789z00, BGl_z62lambda1829z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2658z00zzcgen_copz00,
		BgL_bgl_za762lambda2313za7622790z00, BGl_z62lambda2313z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2496z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2791za7,
		BGl_z62zc3z04anonymousza31825ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2497z00zzcgen_copz00,
		BgL_bgl_za762lambda1823za7622792z00, BGl_z62lambda1823z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2498z00zzcgen_copz00,
		BgL_bgl_za762lambda1821za7622793z00, BGl_z62lambda1821z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2499z00zzcgen_copz00,
		BgL_bgl_za762lambda1848za7622794z00, BGl_z62lambda1848z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2ccastzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2ccastza72795za7, BGl_z62makezd2ccastzb0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nopzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762nopza7f3za791za7za7cg2796za7, BGl_z62nopzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2effectzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ef2797za7,
		BGl_z62sfunzf2Czd2effectz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzd2funzd2envz00zzcgen_copz00,
		BgL_bgl_za762capplyza7d2funza72798za7, BGl_z62capplyzd2funzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetzd2exzd2itzd2bodyzd2envz00zzcgen_copz00,
		BgL_bgl_za762csetza7d2exza7d2i2799za7,
		BGl_z62csetzd2exzd2itzd2bodyzb0zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2effectzd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ef2800za7,
		BGl_z62sfunzf2Czd2effectzd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2csetqzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2csetqza72801za7, BGl_z62makezd2csetqzb0zzcgen_copz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2argszd2noescapezd2setz12zd2envze0zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ar2802za7,
		BGl_z62sfunzf2Czd2argszd2noescapezd2setz12z50zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2topzf3zd2setz12zd2envzc1zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2to2803za7,
		BGl_z62sfunzf2Czd2topzf3zd2setz12z71zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2thezd2closurezd2setz12zd2envze0zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2th2804za7,
		BGl_z62sfunzf2Czd2thezd2closurezd2setz12z50zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cpragmazd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cpragmaza7d2loc2805z00,
		BGl_z62cpragmazd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2setz12zf3zd2envze1zzcgen_copz00,
		BgL_bgl_za762cboxza7d2setza7122806za7,
		BGl_z62cboxzd2setz12zf3z51zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgotozf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cgotoza7f3za791za7za72807za7, BGl_z62cgotozf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cpragmazf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cpragmaza7f3za7912808za7, BGl_z62cpragmazf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csequencezf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762csequenceza7f3za72809za7, BGl_z62csequencezf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2classzd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2cl2810za7,
		BGl_z62sfunzf2Czd2classzd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2thezd2closurezd2globalzd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2th2811za7,
		BGl_z62sfunzf2Czd2thezd2closurezd2globalzd2setz12z82zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2capplyzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2capply2812z00, BGl_z62makezd2capplyzb0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cfuncallza7d2lo2813z00, BGl_z62cfuncallzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzd2argszd2envz00zzcgen_copz00,
		BgL_bgl_za762cfuncallza7d2ar2814z00, BGl_z62cfuncallzd2argszb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2refzf3zd2envzf3zzcgen_copz00,
		BgL_bgl_za762cboxza7d2refza7f32815za7, BGl_z62cboxzd2refzf3z43zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cfailza7d2locza7d2816za7,
		BGl_z62cfailzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2stackablezd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2st2817za7,
		BGl_z62sfunzf2Czd2stackablez42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzd2valuezd2envz00zzcgen_copz00,
		BgL_bgl_za762csetqza7d2value2818z00, BGl_z62csetqzd2valuezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2varzd2loczd2envzd2zzcgen_copz00,
		BgL_bgl_za762localza7d2varza7d2819za7,
		BGl_z62localzd2varzd2locz62zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzd2truezd2envz00zzcgen_copz00,
		BgL_bgl_za762cifza7d2trueza7b02820za7, BGl_z62cifzd2truezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762ccastza7d2nilza7b2821za7, BGl_z62ccastzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cvoidzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cvoidza72822za7, BGl_z62makezd2cvoidzb0zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2topzf3zd2envz01zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2to2823za7,
		BGl_z62sfunzf2Czd2topzf3zb1zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2loczd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2lo2824za7,
		BGl_z62sfunzf2Czd2loczd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cifza7d2locza7b0za72825z00, BGl_z62cifzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_copzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762copza7d2locza7d2s2826za7,
		BGl_z62copzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2dssslzd2keywordszd2setz12zd2envze0zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ds2827za7,
		BGl_z62sfunzf2Czd2dssslzd2keywordszd2setz12z50zzcgen_copz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_clabelzd2usedzf3zd2setz12zd2envz33zzcgen_copz00,
		BgL_bgl_za762clabelza7d2used2828z00,
		BGl_z62clabelzd2usedzf3zd2setz12z83zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgotozd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cgotoza7d2locza7d2829za7,
		BGl_z62cgotozd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_csequencezd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762csequenceza7d2l2830z00,
		BGl_z62csequencezd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2thezd2closurezd2envz20zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2th2831za7,
		BGl_z62sfunzf2Czd2thezd2closurez90zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762ccastza7d2locza7d2832za7,
		BGl_z62ccastzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzd2testzd2envz00zzcgen_copz00,
		BgL_bgl_za762cifza7d2testza7b02833za7, BGl_z62cifzd2testzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cappza7f3za791za7za7c2834za7, BGl_z62cappzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762stopza7f3za791za7za7c2835za7, BGl_z62stopzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2setz12zd2loczd2envzc0zzcgen_copz00,
		BgL_bgl_za762cboxza7d2setza7122836za7,
		BGl_z62cboxzd2setz12zd2locz70zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cjumpzd2exzd2itzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cjumpza7d2exza7d22837za7,
		BGl_z62cjumpzd2exzd2itzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cswitchzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cswitc2838z00, BGl_z62makezd2cswitchzb0zzcgen_copz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csequencezd2copszd2envz00zzcgen_copz00,
		BgL_bgl_za762csequenceza7d2c2839z00,
		BGl_z62csequencezd2copszb0zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2integratedzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2in2840za7,
		BGl_z62sfunzf2Czd2integratedz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cpragmazd2formatzd2envz00zzcgen_copz00,
		BgL_bgl_za762cpragmaza7d2for2841z00,
		BGl_z62cpragmazd2formatzb0zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2argszd2namezd2envz20zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ar2842za7,
		BGl_z62sfunzf2Czd2argszd2namez90zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgotozd2labelzd2envz00zzcgen_copz00,
		BgL_bgl_za762cgotoza7d2label2843z00, BGl_z62cgotozd2labelzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2csequencezd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cseque2844z00,
		BGl_z62makezd2csequencezb0zzcgen_copz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cappza7d2locza7b02845za7, BGl_z62cappzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cjumpzd2exzd2itzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cjumpza7d2exza7d22846za7,
		BGl_z62cjumpzd2exzd2itzf3z91zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cswitchzd2clauseszd2envz00zzcgen_copz00,
		BgL_bgl_za762cswitchza7d2cla2847z00,
		BGl_z62cswitchzd2clauseszb0zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cifzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cifza7b02848za7, BGl_z62makezd2cifzb0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgotozd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cgotoza7d2locza7b2849za7, BGl_z62cgotozd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762csetqza7d2locza7d2850za7,
		BGl_z62csetqzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csequencezd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762csequenceza7d2l2851z00, BGl_z62csequencezd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cblockzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cblockza7f3za791za72852z00, BGl_z62cblockzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2bdbzd2blockzd2envzd2zzcgen_copz00,
		BgL_bgl_za762makeza7d2bdbza7d22853za7,
		BGl_z62makezd2bdbzd2blockz62zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_catomzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762catomza7f3za791za7za72854za7, BGl_z62catomzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nopzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762nopza7d2locza7d2s2855za7,
		BGl_z62nopzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_creturnzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762creturnza7d2nil2856z00, BGl_z62creturnzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cblockzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cblockza7d2locza72857za7, BGl_z62cblockzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762copza7d2locza7b0za72858z00, BGl_z62copzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bdbzd2blockzd2loczd2setz12zd2envz12zzcgen_copz00,
		BgL_bgl_za762bdbza7d2blockza7d2859za7,
		BGl_z62bdbzd2blockzd2loczd2setz12za2zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cmakezd2boxzd2loczd2envzd2zzcgen_copz00,
		BgL_bgl_za762cmakeza7d2boxza7d2860za7,
		BGl_z62cmakezd2boxzd2locz62zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2refzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl_za762cboxza7d2refza7d22861za7,
		BGl_z62cboxzd2refzd2nilz62zzcgen_copz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2stackzd2allocatorzd2setz12zd2envze0zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2st2862za7,
		BGl_z62sfunzf2Czd2stackzd2allocatorzd2setz12z50zzcgen_copz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762csetqza7d2nilza7b2863za7, BGl_z62csetqzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2varczd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2varcza7b2864za7, BGl_z62makezd2varczb0zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_catomzd2valuezd2envz00zzcgen_copz00,
		BgL_bgl_za762catomza7d2value2865z00, BGl_z62catomzd2valuezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzd2usedzf3zd2envzf3zzcgen_copz00,
		BgL_bgl_za762clabelza7d2used2866z00,
		BGl_z62clabelzd2usedzf3z43zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cappza7d2locza7d22867za7,
		BGl_z62cappzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetzd2exzd2itzd2exitzd2envz00zzcgen_copz00,
		BgL_bgl_za762csetza7d2exza7d2i2868za7,
		BGl_z62csetzd2exzd2itzd2exitzb0zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cswitchzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cswitchza7f3za7912869za7, BGl_z62cswitchzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2loczd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2lo2870za7,
		BGl_z62sfunzf2Czd2locz42zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2sidezd2effectzd2setz12zd2envze0zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2si2871za7,
		BGl_z62sfunzf2Czd2sidezd2effectzd2setz12z50zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762copza7f3za791za7za7cg2872za7, BGl_z62copzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cblockzd2bodyzd2envz00zzcgen_copz00,
		BgL_bgl_za762cblockza7d2body2873z00, BGl_z62cblockzd2bodyzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762stopza7d2locza7b02874za7, BGl_z62stopzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2stopzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2stopza7b2875za7, BGl_z62makezd2stopzb0zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2catomzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2catomza72876za7, BGl_z62makezd2catomzb0zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2copzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2copza7b02877za7, BGl_z62makezd2copzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cmakezd2boxzf3zd2envzf3zzcgen_copz00,
		BgL_bgl_za762cmakeza7d2boxza7f2878za7,
		BGl_z62cmakezd2boxzf3z43zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_catomzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762catomza7d2locza7d2879za7,
		BGl_z62catomzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cappzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cappza7b2880za7, BGl_z62makezd2cappzb0zzcgen_copz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2csetzd2exzd2itzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2csetza7d2881za7,
		BGl_z62makezd2csetzd2exzd2itzb0zzcgen_copz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cfuncallza7f3za792882za7, BGl_z62cfuncallzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2classzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2cl2883za7,
		BGl_z62sfunzf2Czd2classz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cfuncallza7d2ni2884z00, BGl_z62cfuncallzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzd2argzd2envz00zzcgen_copz00,
		BgL_bgl_za762capplyza7d2argza72885za7, BGl_z62capplyzd2argzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762capplyza7d2locza72886za7,
		BGl_z62capplyzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2500z00zzcgen_copz00,
		BgL_bgl_za762lambda1847za7622887z00, BGl_z62lambda1847z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvoidzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cvoidza7d2locza7b2888za7, BGl_z62cvoidzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2501z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2889za7,
		BGl_z62zc3z04anonymousza31841ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2502z00zzcgen_copz00,
		BgL_bgl_za762lambda1839za7622890z00, BGl_z62lambda1839z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2503z00zzcgen_copz00,
		BgL_bgl_za762lambda1837za7622891z00, BGl_z62lambda1837z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2504z00zzcgen_copz00,
		BgL_bgl_za762lambda1865za7622892z00, BGl_z62lambda1865z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2505z00zzcgen_copz00,
		BgL_bgl_za762lambda1864za7622893z00, BGl_z62lambda1864z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2506z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2894za7,
		BGl_z62zc3z04anonymousza31860ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2507z00zzcgen_copz00,
		BgL_bgl_za762lambda1858za7622895z00, BGl_z62lambda1858z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2508z00zzcgen_copz00,
		BgL_bgl_za762lambda1856za7622896z00, BGl_z62lambda1856z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2509z00zzcgen_copz00,
		BgL_bgl_za762lambda1883za7622897z00, BGl_z62lambda1883z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2varzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl_za762localza7d2varza7d2898za7,
		BGl_z62localzd2varzd2nilz62zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2510z00zzcgen_copz00,
		BgL_bgl_za762lambda1882za7622899z00, BGl_z62lambda1882z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2511z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2900za7,
		BGl_z62zc3z04anonymousza31877ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2512z00zzcgen_copz00,
		BgL_bgl_za762lambda1875za7622901z00, BGl_z62lambda1875z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2513z00zzcgen_copz00,
		BgL_bgl_za762lambda1873za7622902z00, BGl_z62lambda1873z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2514z00zzcgen_copz00,
		BgL_bgl_za762lambda1899za7622903z00, BGl_z62lambda1899z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2515z00zzcgen_copz00,
		BgL_bgl_za762lambda1898za7622904z00, BGl_z62lambda1898z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2516z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2905za7,
		BGl_z62zc3z04anonymousza31894ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2517z00zzcgen_copz00,
		BgL_bgl_za762lambda1892za7622906z00, BGl_z62lambda1892z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2518z00zzcgen_copz00,
		BgL_bgl_za762lambda1889za7622907z00, BGl_z62lambda1889z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2519z00zzcgen_copz00,
		BgL_bgl_za762lambda1915za7622908z00, BGl_z62lambda1915z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cboxzd2setz12zd2loczd2setz12zd2envz00zzcgen_copz00,
		BgL_bgl_za762cboxza7d2setza7122909za7,
		BGl_z62cboxzd2setz12zd2loczd2setz12zb0zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2520z00zzcgen_copz00,
		BgL_bgl_za762lambda1914za7622910z00, BGl_z62lambda1914z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2521z00zzcgen_copz00,
		BgL_bgl_za762lambda1920za7622911z00, BGl_z62lambda1920z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2522z00zzcgen_copz00,
		BgL_bgl_za762lambda1919za7622912z00, BGl_z62lambda1919z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2523z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2913za7,
		BGl_z62zc3z04anonymousza31910ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2524z00zzcgen_copz00,
		BgL_bgl_za762lambda1908za7622914z00, BGl_z62lambda1908z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2525z00zzcgen_copz00,
		BgL_bgl_za762lambda1906za7622915z00, BGl_z62lambda1906z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2526z00zzcgen_copz00,
		BgL_bgl_za762lambda1936za7622916z00, BGl_z62lambda1936z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2527z00zzcgen_copz00,
		BgL_bgl_za762lambda1935za7622917z00, BGl_z62lambda1935z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2528z00zzcgen_copz00,
		BgL_bgl_za762lambda1941za7622918z00, BGl_z62lambda1941z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2529z00zzcgen_copz00,
		BgL_bgl_za762lambda1940za7622919z00, BGl_z62lambda1940z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762capplyza7d2locza72920za7, BGl_z62capplyzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cmakezd2boxzd2stackablezd2envzd2zzcgen_copz00,
		BgL_bgl_za762cmakeza7d2boxza7d2921za7,
		BGl_z62cmakezd2boxzd2stackablez62zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cifza7d2nilza7b0za72922z00, BGl_z62cifzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2530z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2923za7,
		BGl_z62zc3z04anonymousza31931ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2531z00zzcgen_copz00,
		BgL_bgl_za762lambda1929za7622924z00, BGl_z62lambda1929z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2532z00zzcgen_copz00,
		BgL_bgl_za762lambda1927za7622925z00, BGl_z62lambda1927z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2533z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2926za7,
		BGl_z62zc3z04anonymousza31959ze3ze5zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2534z00zzcgen_copz00,
		BgL_bgl_za762lambda1958za7622927z00, BGl_z62lambda1958z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2535z00zzcgen_copz00,
		BgL_bgl_za762lambda1957za7622928z00, BGl_z62lambda1957z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2536z00zzcgen_copz00,
		BgL_bgl_za762lambda1964za7622929z00, BGl_z62lambda1964z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2537z00zzcgen_copz00,
		BgL_bgl_za762lambda1963za7622930z00, BGl_z62lambda1963z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cfailza7d2locza7b2931za7, BGl_z62cfailzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2538z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2932za7,
		BGl_z62zc3z04anonymousza31952ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2539z00zzcgen_copz00,
		BgL_bgl_za762lambda1949za7622933z00, BGl_z62lambda1949z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2varzd2loczd2setz12zd2envz12zzcgen_copz00,
		BgL_bgl_za762localza7d2varza7d2934za7,
		BGl_z62localzd2varzd2loczd2setz12za2zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_creturnzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762creturnza7d2loc2935z00,
		BGl_z62creturnzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzd2namezd2envz00zzcgen_copz00,
		BgL_bgl_za762clabelza7d2name2936z00, BGl_z62clabelzd2namezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cboxzd2refzd2loczd2setz12zd2envz12zzcgen_copz00,
		BgL_bgl_za762cboxza7d2refza7d22937za7,
		BGl_z62cboxzd2refzd2loczd2setz12za2zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2540z00zzcgen_copz00,
		BgL_bgl_za762lambda1947za7622938z00, BGl_z62lambda1947z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2541z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2939za7,
		BGl_z62zc3z04anonymousza31974ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2542z00zzcgen_copz00,
		BgL_bgl_za762lambda1972za7622940z00, BGl_z62lambda1972z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2543z00zzcgen_copz00,
		BgL_bgl_za762lambda1970za7622941z00, BGl_z62lambda1970z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2544z00zzcgen_copz00,
		BgL_bgl_za762lambda1990za7622942z00, BGl_z62lambda1990z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2545z00zzcgen_copz00,
		BgL_bgl_za762lambda1989za7622943z00, BGl_z62lambda1989z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2546z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2944za7,
		BGl_z62zc3z04anonymousza31985ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2547z00zzcgen_copz00,
		BgL_bgl_za762lambda1983za7622945z00, BGl_z62lambda1983z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2548z00zzcgen_copz00,
		BgL_bgl_za762lambda1981za7622946z00, BGl_z62lambda1981z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2549z00zzcgen_copz00,
		BgL_bgl_za762lambda2006za7622947z00, BGl_z62lambda2006z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2failsafezd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2fa2948za7,
		BGl_z62sfunzf2Czd2failsafez42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_creturnzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762creturnza7f3za7912949za7, BGl_z62creturnzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cjumpzd2exzd2itzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cjumpza7d2exza7d22950za7,
		BGl_z62cjumpzd2exzd2itzd2loczb0zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2550z00zzcgen_copz00,
		BgL_bgl_za762lambda2005za7622951z00, BGl_z62lambda2005z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2551z00zzcgen_copz00,
		BgL_bgl_za762lambda2012za7622952z00, BGl_z62lambda2012z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2552z00zzcgen_copz00,
		BgL_bgl_za762lambda2011za7622953z00, BGl_z62lambda2011z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2553z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2954za7,
		BGl_z62zc3z04anonymousza32001ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2554z00zzcgen_copz00,
		BgL_bgl_za762lambda1999za7622955z00, BGl_z62lambda1999z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2555z00zzcgen_copz00,
		BgL_bgl_za762lambda1997za7622956z00, BGl_z62lambda1997z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2556z00zzcgen_copz00,
		BgL_bgl_za762lambda2031za7622957z00, BGl_z62lambda2031z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2557z00zzcgen_copz00,
		BgL_bgl_za762lambda2030za7622958z00, BGl_z62lambda2030z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2558z00zzcgen_copz00,
		BgL_bgl_za762lambda2037za7622959z00, BGl_z62lambda2037z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2559z00zzcgen_copz00,
		BgL_bgl_za762lambda2036za7622960z00, BGl_z62lambda2036z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nopzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762nopza7d2locza7b0za72961z00, BGl_z62nopzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2setz12zd2nilzd2envzc0zzcgen_copz00,
		BgL_bgl_za762cboxza7d2setza7122962za7,
		BGl_z62cboxzd2setz12zd2nilz70zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2560z00zzcgen_copz00,
		BgL_bgl_za762lambda2042za7622963z00, BGl_z62lambda2042z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2561z00zzcgen_copz00,
		BgL_bgl_za762lambda2041za7622964z00, BGl_z62lambda2041z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2562z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2965za7,
		BGl_z62zc3z04anonymousza32023ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2563z00zzcgen_copz00,
		BgL_bgl_za762lambda2021za7622966z00, BGl_z62lambda2021z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2564z00zzcgen_copz00,
		BgL_bgl_za762lambda2019za7622967z00, BGl_z62lambda2019z62zzcgen_copz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2565z00zzcgen_copz00,
		BgL_bgl_za762lambda2058za7622968z00, BGl_z62lambda2058z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2566z00zzcgen_copz00,
		BgL_bgl_za762lambda2057za7622969z00, BGl_z62lambda2057z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2567z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2970za7,
		BGl_z62zc3z04anonymousza32052ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2568z00zzcgen_copz00,
		BgL_bgl_za762lambda2050za7622971z00, BGl_z62lambda2050z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2569z00zzcgen_copz00,
		BgL_bgl_za762lambda2048za7622972z00, BGl_z62lambda2048z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2659z00zzcgen_copz00,
		BgL_bgl_string2659za700za7za7c2973za7, "", 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2570z00zzcgen_copz00,
		BgL_bgl_za762lambda2074za7622974z00, BGl_z62lambda2074z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2571z00zzcgen_copz00,
		BgL_bgl_za762lambda2073za7622975z00, BGl_z62lambda2073z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2572z00zzcgen_copz00,
		BgL_bgl_za762lambda2079za7622976z00, BGl_z62lambda2079z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2573z00zzcgen_copz00,
		BgL_bgl_za762lambda2078za7622977z00, BGl_z62lambda2078z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2574z00zzcgen_copz00,
		BgL_bgl_za762lambda2084za7622978z00, BGl_z62lambda2084z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2660z00zzcgen_copz00,
		BgL_bgl_string2660za700za7za7c2979za7, "cgen_cop", 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2575z00zzcgen_copz00,
		BgL_bgl_za762lambda2083za7622980z00, BGl_z62lambda2083z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2661z00zzcgen_copz00,
		BgL_bgl_string2661za700za7za7c2981za7,
		"_ bdb-block sfun/C integrated cjump-ex-it cset-ex-it jump-value exit cbox-set! cbox-ref cmake-box stackable cswitch clauses cfail msg proc capp capply cfuncall symbol strength fun local-var vars cif false true test csetq var stop nop csequence cops c-exp? ccast arg type cpragma args format varc variable catom cvoid creturn value cblock cgoto label clabel body bool used? bstring name cgen_cop cop obj loc ",
		407);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2576z00zzcgen_copz00,
		BgL_bgl_za762lambda2089za7622982z00, BGl_z62lambda2089z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2577z00zzcgen_copz00,
		BgL_bgl_za762lambda2088za7622983z00, BGl_z62lambda2088z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2578z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2984za7,
		BGl_z62zc3z04anonymousza32069ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2blockzd2loczd2envzd2zzcgen_copz00,
		BgL_bgl_za762bdbza7d2blockza7d2985za7,
		BGl_z62bdbzd2blockzd2locz62zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2579z00zzcgen_copz00,
		BgL_bgl_za762lambda2066za7622986z00, BGl_z62lambda2066z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cappza7d2nilza7b02987za7, BGl_z62cappzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2setz12zd2valuezd2envzc0zzcgen_copz00,
		BgL_bgl_za762cboxza7d2setza7122988za7,
		BGl_z62cboxzd2setz12zd2valuez70zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ccastzd2typezd2envz00zzcgen_copz00,
		BgL_bgl_za762ccastza7d2typeza72989za7, BGl_z62ccastzd2typezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cswitchzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cswitchza7d2loc2990z00,
		BGl_z62cswitchzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2propertyzd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2pr2991za7,
		BGl_z62sfunzf2Czd2propertyzd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2580z00zzcgen_copz00,
		BgL_bgl_za762lambda2064za7622992z00, BGl_z62lambda2064z62zzcgen_copz00, 0L,
		BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2581z00zzcgen_copz00,
		BgL_bgl_za762lambda2104za7622993z00, BGl_z62lambda2104z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2582z00zzcgen_copz00,
		BgL_bgl_za762lambda2103za7622994z00, BGl_z62lambda2103z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2583z00zzcgen_copz00,
		BgL_bgl_za762lambda2109za7622995z00, BGl_z62lambda2109z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2584z00zzcgen_copz00,
		BgL_bgl_za762lambda2108za7622996z00, BGl_z62lambda2108z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgotozd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cgotoza7d2nilza7b2997za7, BGl_z62cgotozd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2585z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo2998za7,
		BGl_z62zc3z04anonymousza32099ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2586z00zzcgen_copz00,
		BgL_bgl_za762lambda2097za7622999z00, BGl_z62lambda2097z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2587z00zzcgen_copz00,
		BgL_bgl_za762lambda2095za7623000z00, BGl_z62lambda2095z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2588z00zzcgen_copz00,
		BgL_bgl_za762lambda2125za7623001z00, BGl_z62lambda2125z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csequencezd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762csequenceza7d2n3002z00, BGl_z62csequencezd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2589z00zzcgen_copz00,
		BgL_bgl_za762lambda2124za7623003z00, BGl_z62lambda2124z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_catomzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762catomza7d2locza7b3004za7, BGl_z62catomzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cblockzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cblockza7d2nilza73005za7, BGl_z62cblockzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cgotozd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cgotoza73006za7, BGl_z62makezd2cgotozb0zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2590z00zzcgen_copz00,
		BgL_bgl_za762lambda2130za7623007z00, BGl_z62lambda2130z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2591z00zzcgen_copz00,
		BgL_bgl_za762lambda2129za7623008z00, BGl_z62lambda2129z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2592z00zzcgen_copz00,
		BgL_bgl_za762za7c3za704anonymo3009za7,
		BGl_z62zc3z04anonymousza32120ze3ze5zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2593z00zzcgen_copz00,
		BgL_bgl_za762lambda2118za7623010z00, BGl_z62lambda2118z62zzcgen_copz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2594z00zzcgen_copz00,
		BgL_bgl_za762lambda2116za7623011z00, BGl_z62lambda2116z62zzcgen_copz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2595z00zzcgen_copz00,
		BgL_bgl_za762lambda2146za7623012z00, BGl_z62lambda2146z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2596z00zzcgen_copz00,
		BgL_bgl_za762lambda2145za7623013z00, BGl_z62lambda2145z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762stopza7d2locza7d23014za7,
		BGl_z62stopzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2597z00zzcgen_copz00,
		BgL_bgl_za762lambda2151za7623015z00, BGl_z62lambda2151z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_copzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762copza7d2nilza7b0za73016z00, BGl_z62copzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2598z00zzcgen_copz00,
		BgL_bgl_za762lambda2150za7623017z00, BGl_z62lambda2150z62zzcgen_copz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2599z00zzcgen_copz00,
		BgL_bgl_za762lambda2156za7623018z00, BGl_z62lambda2156z62zzcgen_copz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cmakezd2boxzd2nilzd2envzd2zzcgen_copz00,
		BgL_bgl_za762cmakeza7d2boxza7d3019za7,
		BGl_z62cmakezd2boxzd2nilz62zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfailzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cfailza73020za7, BGl_z62makezd2cfailzb0zzcgen_copz00,
		0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_csequencezd2czd2expzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762csequenceza7d2c3021z00,
		BGl_z62csequencezd2czd2expzf3z91zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2strengthzd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2st3022za7,
		BGl_z62sfunzf2Czd2strengthzd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvoidzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cvoidza7f3za791za7za73023za7, BGl_z62cvoidzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cboxzd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762makeza7d2cboxza7d3024za7,
		BGl_z62makezd2cboxzd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cmakezd2boxzd2envzd2zzcgen_copz00,
		BgL_bgl_za762makeza7d2cmakeza73025za7,
		BGl_z62makezd2cmakezd2boxz62zzcgen_copz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2dssslzd2keywordszd2envz20zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ds3026za7,
		BGl_z62sfunzf2Czd2dssslzd2keywordsz90zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2failsafezd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2fa3027za7,
		BGl_z62sfunzf2Czd2failsafezd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2nilzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ni3028za7,
		BGl_z62sfunzf2Czd2nilz42zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzd2proczd2envz00zzcgen_copz00,
		BgL_bgl_za762cfailza7d2procza73029za7, BGl_z62cfailzd2proczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762clabelza7d2locza73030za7,
		BGl_z62clabelzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2varzd2varszd2envzd2zzcgen_copz00,
		BgL_bgl_za762localza7d2varza7d3031za7,
		BGl_z62localzd2varzd2varsz62zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cblockzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762cblockza7d2locza73032za7,
		BGl_z62cblockzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cblockzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cblock3033z00, BGl_z62makezd2cblockzb0zzcgen_copz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762clabelza7d2locza73034za7, BGl_z62clabelzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzd2msgzd2envz00zzcgen_copz00,
		BgL_bgl_za762cfailza7d2msgza7b3035za7, BGl_z62cfailzd2msgzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762stopza7d2nilza7b03036za7, BGl_z62stopzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clabelzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762clabelza7f3za791za73037z00, BGl_z62clabelzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cmakezd2boxzd2valuezd2envzd2zzcgen_copz00,
		BgL_bgl_za762cmakeza7d2boxza7d3038za7,
		BGl_z62cmakezd2boxzd2valuez62zzcgen_copz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_csetzd2exzd2itzd2loczd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762csetza7d2exza7d2i3039za7,
		BGl_z62csetzd2exzd2itzd2loczd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cswitchzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cswitchza7d2loc3040z00, BGl_z62cswitchzd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2propertyzd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2pr3041za7,
		BGl_z62sfunzf2Czd2propertyz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2clabelzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2clabel3042z00, BGl_z62makezd2clabelzb0zzcgen_copz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2valuezd2envz00zzcgen_copz00,
		BgL_bgl_za762stopza7d2valueza73043za7, BGl_z62stopzd2valuezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetzd2exzd2itzd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762csetza7d2exza7d2i3044za7,
		BGl_z62csetzd2exzd2itzd2loczb0zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sfunzf2Czd2envzf2zzcgen_copz00,
		BgL_bgl_za762makeza7d2sfunza7f3045za7,
		BGl_z62makezd2sfunzf2Cz42zzcgen_copz00, 0L, BUNSPEC, 23);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762cfailza7f3za791za7za73046za7, BGl_z62cfailzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762csetqza7f3za791za7za73047za7, BGl_z62csetqzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetzd2exzd2itzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762csetza7d2exza7d2i3048za7,
		BGl_z62csetzd2exzd2itzf3z91zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzd2objzd2envz00zzcgen_copz00,
		BgL_bgl_za762cfailza7d2objza7b3049za7, BGl_z62cfailzd2objzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varczd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762varcza7d2locza7b03050za7, BGl_z62varczd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2predicatezd2ofzd2setz12zd2envze0zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2pr3051za7,
		BGl_z62sfunzf2Czd2predicatezd2ofzd2setz12z50zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cfuncallzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cfunca3052z00, BGl_z62makezd2cfuncallzb0zzcgen_copz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2blockzf3zd2envzf3zzcgen_copz00,
		BgL_bgl_za762bdbza7d2blockza7f3053za7,
		BGl_z62bdbzd2blockzf3z43zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762capplyza7f3za791za73054z00, BGl_z62capplyzf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2creturnzd2envz00zzcgen_copz00,
		BgL_bgl_za762makeza7d2cretur3055z00, BGl_z62makezd2creturnzb0zzcgen_copz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2predicatezd2ofzd2envz20zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2pr3056za7,
		BGl_z62sfunzf2Czd2predicatezd2ofz90zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzd2typezd2envz00zzcgen_copz00,
		BgL_bgl_za762cfuncallza7d2ty3057z00, BGl_z62cfuncallzd2typezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cappzd2argszd2envz00zzcgen_copz00,
		BgL_bgl_za762cappza7d2argsza7b3058za7, BGl_z62cappzd2argszb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvoidzd2valuezd2envz00zzcgen_copz00,
		BgL_bgl_za762cvoidza7d2value3059z00, BGl_z62cvoidzd2valuezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cboxzd2refzd2envzd2zzcgen_copz00,
		BgL_bgl_za762makeza7d2cboxza7d3060za7,
		BGl_z62makezd2cboxzd2refz62zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvoidzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cvoidza7d2nilza7b3061za7, BGl_z62cvoidzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cifzd2falsezd2envz00zzcgen_copz00,
		BgL_bgl_za762cifza7d2falseza7b3062za7, BGl_z62cifzd2falsezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_creturnzd2valuezd2envz00zzcgen_copz00,
		BgL_bgl_za762creturnza7d2val3063z00, BGl_z62creturnzd2valuezb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2keyszd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2ke3064za7,
		BGl_z62sfunzf2Czd2keysz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzd2funzd2envz00zzcgen_copz00,
		BgL_bgl_za762cfuncallza7d2fu3065z00, BGl_z62cfuncallzd2funzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cjumpzd2exzd2itzd2valuezd2envz00zzcgen_copz00,
		BgL_bgl_za762cjumpza7d2exza7d23066za7,
		BGl_z62cjumpzd2exzd2itzd2valuezb0zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cpragmazd2loczd2envz00zzcgen_copz00,
		BgL_bgl_za762cpragmaza7d2loc3067z00, BGl_z62cpragmazd2loczb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cswitchzd2testzd2envz00zzcgen_copz00,
		BgL_bgl_za762cswitchza7d2tes3068z00, BGl_z62cswitchzd2testzb0zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfuncallzd2strengthzd2envz00zzcgen_copz00,
		BgL_bgl_za762cfuncallza7d2st3069z00,
		BGl_z62cfuncallzd2strengthzb0zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_capplyzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762capplyza7d2nilza73070za7, BGl_z62capplyzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sfunzf2Czd2optionalszd2envzf2zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2op3071za7,
		BGl_z62sfunzf2Czd2optionalsz42zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2varzf3zd2envzf3zzcgen_copz00,
		BgL_bgl_za762localza7d2varza7f3072za7,
		BGl_z62localzd2varzf3z43zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cfailzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cfailza7d2nilza7b3073za7, BGl_z62cfailzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_clabelzd2bodyzd2setz12zd2envzc0zzcgen_copz00,
		BgL_bgl_za762clabelza7d2body3074z00,
		BGl_z62clabelzd2bodyzd2setz12z70zzcgen_copz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_varczf3zd2envz21zzcgen_copz00,
		BgL_bgl_za762varcza7f3za791za7za7c3075za7, BGl_z62varczf3z91zzcgen_copz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sfunzf2Czd2integratedzd2setz12zd2envz32zzcgen_copz00,
		BgL_bgl_za762sfunza7f2cza7d2in3076za7,
		BGl_z62sfunzf2Czd2integratedzd2setz12z82zzcgen_copz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cjumpzd2exzd2itzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762cjumpza7d2exza7d23077za7,
		BGl_z62cjumpzd2exzd2itzd2nilzb0zzcgen_copz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nopzd2nilzd2envz00zzcgen_copz00,
		BgL_bgl_za762nopza7d2nilza7b0za73078z00, BGl_z62nopzd2nilzb0zzcgen_copz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_csetzd2exzd2itzd2jumpzd2valuezd2envzd2zzcgen_copz00,
		BgL_bgl_za762csetza7d2exza7d2i3079za7,
		BGl_z62csetzd2exzd2itzd2jumpzd2valuez62zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cboxzd2refzd2varzd2envzd2zzcgen_copz00,
		BgL_bgl_za762cboxza7d2refza7d23080za7,
		BGl_z62cboxzd2refzd2varz62zzcgen_copz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_csetqzd2varzd2envz00zzcgen_copz00,
		BgL_bgl_za762csetqza7d2varza7b3081za7, BGl_z62csetqzd2varzb0zzcgen_copz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_clabelz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cboxzd2refzd2zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_csetzd2exzd2itz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_capplyz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cpragmaz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cmakezd2boxzd2zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cboxzd2setz12zc0zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cblockz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_bdbzd2blockzd2zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_sfunzf2Czf2zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cfailz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_stopz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_creturnz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cappz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cgotoz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_csequencez00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cvoidz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_nopz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cifz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_csetqz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_localzd2varzd2zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cswitchz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_copz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_catomz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cfuncallz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_ccastz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_cjumpzd2exzd2itz00zzcgen_copz00));
		     ADD_ROOT((void *) (&BGl_varcz00zzcgen_copz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long
		BgL_checksumz00_5559, char *BgL_fromz00_5560)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_copz00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_copz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcgen_copz00();
					BGl_libraryzd2moduleszd2initz00zzcgen_copz00();
					BGl_cnstzd2initzd2zzcgen_copz00();
					BGl_importedzd2moduleszd2initz00zzcgen_copz00();
					BGl_objectzd2initzd2zzcgen_copz00();
					return BGl_toplevelzd2initzd2zzcgen_copz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_cop");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_cop");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cgen_cop");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cgen_cop");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cgen_cop");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cgen_cop");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			{	/* Cgen/cop.scm 15 */
				obj_t BgL_cportz00_4952;

				{	/* Cgen/cop.scm 15 */
					obj_t BgL_stringz00_4960;

					BgL_stringz00_4960 = BGl_string2661z00zzcgen_copz00;
					{	/* Cgen/cop.scm 15 */
						obj_t BgL_startz00_4961;

						BgL_startz00_4961 = BINT(((long) 0));
						{	/* Cgen/cop.scm 15 */
							obj_t BgL_endz00_4962;

							BgL_endz00_4962 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4960)));
							{	/* Cgen/cop.scm 15 */

								BgL_cportz00_4952 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4960, BgL_startz00_4961, BgL_endz00_4962);
				}}}}
				{
					long BgL_iz00_4953;

					BgL_iz00_4953 = ((long) 60);
				BgL_loopz00_4954:
					if ((BgL_iz00_4953 == ((long) -1)))
						{	/* Cgen/cop.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cgen/cop.scm 15 */
							{	/* Cgen/cop.scm 15 */
								obj_t BgL_arg2663z00_4956;

								{	/* Cgen/cop.scm 15 */

									{	/* Cgen/cop.scm 15 */
										obj_t BgL_locationz00_4958;

										BgL_locationz00_4958 = BBOOL(((bool_t) 0));
										{	/* Cgen/cop.scm 15 */

											BgL_arg2663z00_4956 =
												BGl_readz00zz__readerz00(BgL_cportz00_4952,
												BgL_locationz00_4958);
										}
									}
								}
								{	/* Cgen/cop.scm 15 */
									int BgL_tmpz00_5585;

									BgL_tmpz00_5585 = (int) (BgL_iz00_4953);
									CNST_TABLE_SET(BgL_tmpz00_5585, BgL_arg2663z00_4956);
							}}
							{	/* Cgen/cop.scm 15 */
								int BgL_auxz00_4959;

								BgL_auxz00_4959 = (int) ((BgL_iz00_4953 - ((long) 1)));
								{
									long BgL_iz00_5590;

									BgL_iz00_5590 = (long) (BgL_auxz00_4959);
									BgL_iz00_4953 = BgL_iz00_5590;
									goto BgL_loopz00_4954;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			return BUNSPEC;
		}

	}



/* make-cop */
	BGL_EXPORTED_DEF BgL_copz00_bglt BGl_makezd2copzd2zzcgen_copz00(obj_t
		BgL_loc1432z00_3)
	{
		{	/* Cgen/cop.sch 353 */
			{	/* Cgen/cop.sch 353 */
				BgL_copz00_bglt BgL_new1295z00_4965;

				{	/* Cgen/cop.sch 353 */
					BgL_copz00_bglt BgL_new1294z00_4966;

					BgL_new1294z00_4966 =
						((BgL_copz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_copz00_bgl))));
					{	/* Cgen/cop.sch 353 */
						long BgL_arg1584z00_4967;

						{	/* Cgen/cop.sch 353 */
							long BgL_res2383z00_4968;

							BgL_res2383z00_4968 = BGL_CLASS_INDEX(BGl_copz00zzcgen_copz00);
							BgL_arg1584z00_4967 = BgL_res2383z00_4968;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1294z00_4966), BgL_arg1584z00_4967);
					}
					BgL_new1295z00_4965 = BgL_new1294z00_4966;
				}
				((((BgL_copz00_bglt) COBJECT(BgL_new1295z00_4965))->BgL_locz00) =
					((obj_t) BgL_loc1432z00_3), BUNSPEC);
				return BgL_new1295z00_4965;
			}
		}

	}



/* &make-cop */
	BgL_copz00_bglt BGl_z62makezd2copzb0zzcgen_copz00(obj_t BgL_envz00_3764,
		obj_t BgL_loc1432z00_3765)
	{
		{	/* Cgen/cop.sch 353 */
			return BGl_makezd2copzd2zzcgen_copz00(BgL_loc1432z00_3765);
		}

	}



/* cop? */
	BGL_EXPORTED_DEF bool_t BGl_copzf3zf3zzcgen_copz00(obj_t BgL_objz00_4)
	{
		{	/* Cgen/cop.sch 354 */
			return BGl_isazf3zf3zz__objectz00(BgL_objz00_4, BGl_copz00zzcgen_copz00);
		}

	}



/* &cop? */
	obj_t BGl_z62copzf3z91zzcgen_copz00(obj_t BgL_envz00_3766,
		obj_t BgL_objz00_3767)
	{
		{	/* Cgen/cop.sch 354 */
			return BBOOL(BGl_copzf3zf3zzcgen_copz00(BgL_objz00_3767));
		}

	}



/* cop-nil */
	BGL_EXPORTED_DEF BgL_copz00_bglt BGl_copzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 355 */
			{	/* Cgen/cop.sch 355 */
				obj_t BgL_classz00_3132;

				BgL_classz00_3132 = BGl_copz00zzcgen_copz00;
				{	/* Cgen/cop.sch 355 */
					obj_t BgL__ortest_1106z00_3133;

					BgL__ortest_1106z00_3133 = BGL_CLASS_NIL(BgL_classz00_3132);
					if (CBOOL(BgL__ortest_1106z00_3133))
						{	/* Cgen/cop.sch 355 */
							return ((BgL_copz00_bglt) BgL__ortest_1106z00_3133);
						}
					else
						{	/* Cgen/cop.sch 355 */
							return
								((BgL_copz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3132));
						}
				}
			}
		}

	}



/* &cop-nil */
	BgL_copz00_bglt BGl_z62copzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3768)
	{
		{	/* Cgen/cop.sch 355 */
			return BGl_copzd2nilzd2zzcgen_copz00();
		}

	}



/* cop-loc */
	BGL_EXPORTED_DEF obj_t BGl_copzd2loczd2zzcgen_copz00(BgL_copz00_bglt
		BgL_oz00_5)
	{
		{	/* Cgen/cop.sch 356 */
			return (((BgL_copz00_bglt) COBJECT(BgL_oz00_5))->BgL_locz00);
		}

	}



/* &cop-loc */
	obj_t BGl_z62copzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3769,
		obj_t BgL_oz00_3770)
	{
		{	/* Cgen/cop.sch 356 */
			return BGl_copzd2loczd2zzcgen_copz00(((BgL_copz00_bglt) BgL_oz00_3770));
		}

	}



/* cop-loc-set! */
	BGL_EXPORTED_DEF obj_t BGl_copzd2loczd2setz12z12zzcgen_copz00(BgL_copz00_bglt
		BgL_oz00_6, obj_t BgL_vz00_7)
	{
		{	/* Cgen/cop.sch 357 */
			return
				((((BgL_copz00_bglt) COBJECT(BgL_oz00_6))->BgL_locz00) =
				((obj_t) BgL_vz00_7), BUNSPEC);
		}

	}



/* &cop-loc-set! */
	obj_t BGl_z62copzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3771,
		obj_t BgL_oz00_3772, obj_t BgL_vz00_3773)
	{
		{	/* Cgen/cop.sch 357 */
			return
				BGl_copzd2loczd2setz12z12zzcgen_copz00(
				((BgL_copz00_bglt) BgL_oz00_3772), BgL_vz00_3773);
		}

	}



/* make-clabel */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt BGl_makezd2clabelzd2zzcgen_copz00(obj_t
		BgL_loc1427z00_8, obj_t BgL_name1428z00_9, bool_t BgL_usedzf31429zf3_10,
		obj_t BgL_body1430z00_11)
	{
		{	/* Cgen/cop.sch 360 */
			{	/* Cgen/cop.sch 360 */
				BgL_clabelz00_bglt BgL_new1297z00_4969;

				{	/* Cgen/cop.sch 360 */
					BgL_clabelz00_bglt BgL_new1296z00_4970;

					BgL_new1296z00_4970 =
						((BgL_clabelz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_clabelz00_bgl))));
					{	/* Cgen/cop.sch 360 */
						long BgL_arg1588z00_4971;

						{	/* Cgen/cop.sch 360 */
							long BgL_res2384z00_4972;

							BgL_res2384z00_4972 = BGL_CLASS_INDEX(BGl_clabelz00zzcgen_copz00);
							BgL_arg1588z00_4971 = BgL_res2384z00_4972;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1296z00_4970), BgL_arg1588z00_4971);
					}
					BgL_new1297z00_4969 = BgL_new1296z00_4970;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1297z00_4969)))->BgL_locz00) =
					((obj_t) BgL_loc1427z00_8), BUNSPEC);
				((((BgL_clabelz00_bglt) COBJECT(BgL_new1297z00_4969))->BgL_namez00) =
					((obj_t) BgL_name1428z00_9), BUNSPEC);
				((((BgL_clabelz00_bglt) COBJECT(BgL_new1297z00_4969))->BgL_usedzf3zf3) =
					((bool_t) BgL_usedzf31429zf3_10), BUNSPEC);
				((((BgL_clabelz00_bglt) COBJECT(BgL_new1297z00_4969))->BgL_bodyz00) =
					((obj_t) BgL_body1430z00_11), BUNSPEC);
				return BgL_new1297z00_4969;
			}
		}

	}



/* &make-clabel */
	BgL_clabelz00_bglt BGl_z62makezd2clabelzb0zzcgen_copz00(obj_t BgL_envz00_3774,
		obj_t BgL_loc1427z00_3775, obj_t BgL_name1428z00_3776,
		obj_t BgL_usedzf31429zf3_3777, obj_t BgL_body1430z00_3778)
	{
		{	/* Cgen/cop.sch 360 */
			return
				BGl_makezd2clabelzd2zzcgen_copz00(BgL_loc1427z00_3775,
				BgL_name1428z00_3776, CBOOL(BgL_usedzf31429zf3_3777),
				BgL_body1430z00_3778);
		}

	}



/* clabel? */
	BGL_EXPORTED_DEF bool_t BGl_clabelzf3zf3zzcgen_copz00(obj_t BgL_objz00_12)
	{
		{	/* Cgen/cop.sch 361 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_12, BGl_clabelz00zzcgen_copz00);
		}

	}



/* &clabel? */
	obj_t BGl_z62clabelzf3z91zzcgen_copz00(obj_t BgL_envz00_3779,
		obj_t BgL_objz00_3780)
	{
		{	/* Cgen/cop.sch 361 */
			return BBOOL(BGl_clabelzf3zf3zzcgen_copz00(BgL_objz00_3780));
		}

	}



/* clabel-nil */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt BGl_clabelzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 362 */
			{	/* Cgen/cop.sch 362 */
				obj_t BgL_classz00_3141;

				BgL_classz00_3141 = BGl_clabelz00zzcgen_copz00;
				{	/* Cgen/cop.sch 362 */
					obj_t BgL__ortest_1106z00_3142;

					BgL__ortest_1106z00_3142 = BGL_CLASS_NIL(BgL_classz00_3141);
					if (CBOOL(BgL__ortest_1106z00_3142))
						{	/* Cgen/cop.sch 362 */
							return ((BgL_clabelz00_bglt) BgL__ortest_1106z00_3142);
						}
					else
						{	/* Cgen/cop.sch 362 */
							return
								((BgL_clabelz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3141));
						}
				}
			}
		}

	}



/* &clabel-nil */
	BgL_clabelz00_bglt BGl_z62clabelzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3781)
	{
		{	/* Cgen/cop.sch 362 */
			return BGl_clabelzd2nilzd2zzcgen_copz00();
		}

	}



/* clabel-body */
	BGL_EXPORTED_DEF obj_t BGl_clabelzd2bodyzd2zzcgen_copz00(BgL_clabelz00_bglt
		BgL_oz00_13)
	{
		{	/* Cgen/cop.sch 363 */
			return (((BgL_clabelz00_bglt) COBJECT(BgL_oz00_13))->BgL_bodyz00);
		}

	}



/* &clabel-body */
	obj_t BGl_z62clabelzd2bodyzb0zzcgen_copz00(obj_t BgL_envz00_3782,
		obj_t BgL_oz00_3783)
	{
		{	/* Cgen/cop.sch 363 */
			return
				BGl_clabelzd2bodyzd2zzcgen_copz00(((BgL_clabelz00_bglt) BgL_oz00_3783));
		}

	}



/* clabel-body-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_clabelzd2bodyzd2setz12z12zzcgen_copz00(BgL_clabelz00_bglt BgL_oz00_14,
		obj_t BgL_vz00_15)
	{
		{	/* Cgen/cop.sch 364 */
			return
				((((BgL_clabelz00_bglt) COBJECT(BgL_oz00_14))->BgL_bodyz00) =
				((obj_t) BgL_vz00_15), BUNSPEC);
		}

	}



/* &clabel-body-set! */
	obj_t BGl_z62clabelzd2bodyzd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3784,
		obj_t BgL_oz00_3785, obj_t BgL_vz00_3786)
	{
		{	/* Cgen/cop.sch 364 */
			return
				BGl_clabelzd2bodyzd2setz12z12zzcgen_copz00(
				((BgL_clabelz00_bglt) BgL_oz00_3785), BgL_vz00_3786);
		}

	}



/* clabel-used? */
	BGL_EXPORTED_DEF bool_t
		BGl_clabelzd2usedzf3z21zzcgen_copz00(BgL_clabelz00_bglt BgL_oz00_16)
	{
		{	/* Cgen/cop.sch 365 */
			return (((BgL_clabelz00_bglt) COBJECT(BgL_oz00_16))->BgL_usedzf3zf3);
		}

	}



/* &clabel-used? */
	obj_t BGl_z62clabelzd2usedzf3z43zzcgen_copz00(obj_t BgL_envz00_3787,
		obj_t BgL_oz00_3788)
	{
		{	/* Cgen/cop.sch 365 */
			return
				BBOOL(BGl_clabelzd2usedzf3z21zzcgen_copz00(
					((BgL_clabelz00_bglt) BgL_oz00_3788)));
		}

	}



/* clabel-used?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_clabelzd2usedzf3zd2setz12ze1zzcgen_copz00(BgL_clabelz00_bglt
		BgL_oz00_17, bool_t BgL_vz00_18)
	{
		{	/* Cgen/cop.sch 366 */
			return
				((((BgL_clabelz00_bglt) COBJECT(BgL_oz00_17))->BgL_usedzf3zf3) =
				((bool_t) BgL_vz00_18), BUNSPEC);
		}

	}



/* &clabel-used?-set! */
	obj_t BGl_z62clabelzd2usedzf3zd2setz12z83zzcgen_copz00(obj_t BgL_envz00_3789,
		obj_t BgL_oz00_3790, obj_t BgL_vz00_3791)
	{
		{	/* Cgen/cop.sch 366 */
			return
				BGl_clabelzd2usedzf3zd2setz12ze1zzcgen_copz00(
				((BgL_clabelz00_bglt) BgL_oz00_3790), CBOOL(BgL_vz00_3791));
		}

	}



/* clabel-name */
	BGL_EXPORTED_DEF obj_t BGl_clabelzd2namezd2zzcgen_copz00(BgL_clabelz00_bglt
		BgL_oz00_19)
	{
		{	/* Cgen/cop.sch 367 */
			return (((BgL_clabelz00_bglt) COBJECT(BgL_oz00_19))->BgL_namez00);
		}

	}



/* &clabel-name */
	obj_t BGl_z62clabelzd2namezb0zzcgen_copz00(obj_t BgL_envz00_3792,
		obj_t BgL_oz00_3793)
	{
		{	/* Cgen/cop.sch 367 */
			return
				BGl_clabelzd2namezd2zzcgen_copz00(((BgL_clabelz00_bglt) BgL_oz00_3793));
		}

	}



/* clabel-loc */
	BGL_EXPORTED_DEF obj_t BGl_clabelzd2loczd2zzcgen_copz00(BgL_clabelz00_bglt
		BgL_oz00_22)
	{
		{	/* Cgen/cop.sch 369 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_22)))->BgL_locz00);
		}

	}



/* &clabel-loc */
	obj_t BGl_z62clabelzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3794,
		obj_t BgL_oz00_3795)
	{
		{	/* Cgen/cop.sch 369 */
			return
				BGl_clabelzd2loczd2zzcgen_copz00(((BgL_clabelz00_bglt) BgL_oz00_3795));
		}

	}



/* clabel-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_clabelzd2loczd2setz12z12zzcgen_copz00(BgL_clabelz00_bglt BgL_oz00_23,
		obj_t BgL_vz00_24)
	{
		{	/* Cgen/cop.sch 370 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_23)))->BgL_locz00) =
				((obj_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &clabel-loc-set! */
	obj_t BGl_z62clabelzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3796,
		obj_t BgL_oz00_3797, obj_t BgL_vz00_3798)
	{
		{	/* Cgen/cop.sch 370 */
			return
				BGl_clabelzd2loczd2setz12z12zzcgen_copz00(
				((BgL_clabelz00_bglt) BgL_oz00_3797), BgL_vz00_3798);
		}

	}



/* make-cgoto */
	BGL_EXPORTED_DEF BgL_cgotoz00_bglt BGl_makezd2cgotozd2zzcgen_copz00(obj_t
		BgL_loc1424z00_25, BgL_clabelz00_bglt BgL_label1425z00_26)
	{
		{	/* Cgen/cop.sch 373 */
			{	/* Cgen/cop.sch 373 */
				BgL_cgotoz00_bglt BgL_new1299z00_4973;

				{	/* Cgen/cop.sch 373 */
					BgL_cgotoz00_bglt BgL_new1298z00_4974;

					BgL_new1298z00_4974 =
						((BgL_cgotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cgotoz00_bgl))));
					{	/* Cgen/cop.sch 373 */
						long BgL_arg1589z00_4975;

						{	/* Cgen/cop.sch 373 */
							long BgL_res2385z00_4976;

							BgL_res2385z00_4976 = BGL_CLASS_INDEX(BGl_cgotoz00zzcgen_copz00);
							BgL_arg1589z00_4975 = BgL_res2385z00_4976;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1298z00_4974), BgL_arg1589z00_4975);
					}
					BgL_new1299z00_4973 = BgL_new1298z00_4974;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1299z00_4973)))->BgL_locz00) =
					((obj_t) BgL_loc1424z00_25), BUNSPEC);
				((((BgL_cgotoz00_bglt) COBJECT(BgL_new1299z00_4973))->BgL_labelz00) =
					((BgL_clabelz00_bglt) BgL_label1425z00_26), BUNSPEC);
				return BgL_new1299z00_4973;
			}
		}

	}



/* &make-cgoto */
	BgL_cgotoz00_bglt BGl_z62makezd2cgotozb0zzcgen_copz00(obj_t BgL_envz00_3799,
		obj_t BgL_loc1424z00_3800, obj_t BgL_label1425z00_3801)
	{
		{	/* Cgen/cop.sch 373 */
			return
				BGl_makezd2cgotozd2zzcgen_copz00(BgL_loc1424z00_3800,
				((BgL_clabelz00_bglt) BgL_label1425z00_3801));
		}

	}



/* cgoto? */
	BGL_EXPORTED_DEF bool_t BGl_cgotozf3zf3zzcgen_copz00(obj_t BgL_objz00_27)
	{
		{	/* Cgen/cop.sch 374 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_27, BGl_cgotoz00zzcgen_copz00);
		}

	}



/* &cgoto? */
	obj_t BGl_z62cgotozf3z91zzcgen_copz00(obj_t BgL_envz00_3802,
		obj_t BgL_objz00_3803)
	{
		{	/* Cgen/cop.sch 374 */
			return BBOOL(BGl_cgotozf3zf3zzcgen_copz00(BgL_objz00_3803));
		}

	}



/* cgoto-nil */
	BGL_EXPORTED_DEF BgL_cgotoz00_bglt BGl_cgotozd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 375 */
			{	/* Cgen/cop.sch 375 */
				obj_t BgL_classz00_3150;

				BgL_classz00_3150 = BGl_cgotoz00zzcgen_copz00;
				{	/* Cgen/cop.sch 375 */
					obj_t BgL__ortest_1106z00_3151;

					BgL__ortest_1106z00_3151 = BGL_CLASS_NIL(BgL_classz00_3150);
					if (CBOOL(BgL__ortest_1106z00_3151))
						{	/* Cgen/cop.sch 375 */
							return ((BgL_cgotoz00_bglt) BgL__ortest_1106z00_3151);
						}
					else
						{	/* Cgen/cop.sch 375 */
							return
								((BgL_cgotoz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3150));
						}
				}
			}
		}

	}



/* &cgoto-nil */
	BgL_cgotoz00_bglt BGl_z62cgotozd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3804)
	{
		{	/* Cgen/cop.sch 375 */
			return BGl_cgotozd2nilzd2zzcgen_copz00();
		}

	}



/* cgoto-label */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt
		BGl_cgotozd2labelzd2zzcgen_copz00(BgL_cgotoz00_bglt BgL_oz00_28)
	{
		{	/* Cgen/cop.sch 376 */
			return (((BgL_cgotoz00_bglt) COBJECT(BgL_oz00_28))->BgL_labelz00);
		}

	}



/* &cgoto-label */
	BgL_clabelz00_bglt BGl_z62cgotozd2labelzb0zzcgen_copz00(obj_t BgL_envz00_3805,
		obj_t BgL_oz00_3806)
	{
		{	/* Cgen/cop.sch 376 */
			return
				BGl_cgotozd2labelzd2zzcgen_copz00(((BgL_cgotoz00_bglt) BgL_oz00_3806));
		}

	}



/* cgoto-loc */
	BGL_EXPORTED_DEF obj_t BGl_cgotozd2loczd2zzcgen_copz00(BgL_cgotoz00_bglt
		BgL_oz00_31)
	{
		{	/* Cgen/cop.sch 378 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_31)))->BgL_locz00);
		}

	}



/* &cgoto-loc */
	obj_t BGl_z62cgotozd2loczb0zzcgen_copz00(obj_t BgL_envz00_3807,
		obj_t BgL_oz00_3808)
	{
		{	/* Cgen/cop.sch 378 */
			return
				BGl_cgotozd2loczd2zzcgen_copz00(((BgL_cgotoz00_bglt) BgL_oz00_3808));
		}

	}



/* cgoto-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgotozd2loczd2setz12z12zzcgen_copz00(BgL_cgotoz00_bglt BgL_oz00_32,
		obj_t BgL_vz00_33)
	{
		{	/* Cgen/cop.sch 379 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_32)))->BgL_locz00) =
				((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &cgoto-loc-set! */
	obj_t BGl_z62cgotozd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3809,
		obj_t BgL_oz00_3810, obj_t BgL_vz00_3811)
	{
		{	/* Cgen/cop.sch 379 */
			return
				BGl_cgotozd2loczd2setz12z12zzcgen_copz00(
				((BgL_cgotoz00_bglt) BgL_oz00_3810), BgL_vz00_3811);
		}

	}



/* make-cblock */
	BGL_EXPORTED_DEF BgL_cblockz00_bglt BGl_makezd2cblockzd2zzcgen_copz00(obj_t
		BgL_loc1421z00_34, BgL_copz00_bglt BgL_body1422z00_35)
	{
		{	/* Cgen/cop.sch 382 */
			{	/* Cgen/cop.sch 382 */
				BgL_cblockz00_bglt BgL_new1301z00_4977;

				{	/* Cgen/cop.sch 382 */
					BgL_cblockz00_bglt BgL_new1300z00_4978;

					BgL_new1300z00_4978 =
						((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cblockz00_bgl))));
					{	/* Cgen/cop.sch 382 */
						long BgL_arg1592z00_4979;

						{	/* Cgen/cop.sch 382 */
							long BgL_res2386z00_4980;

							BgL_res2386z00_4980 = BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
							BgL_arg1592z00_4979 = BgL_res2386z00_4980;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1300z00_4978), BgL_arg1592z00_4979);
					}
					BgL_new1301z00_4977 = BgL_new1300z00_4978;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1301z00_4977)))->BgL_locz00) =
					((obj_t) BgL_loc1421z00_34), BUNSPEC);
				((((BgL_cblockz00_bglt) COBJECT(BgL_new1301z00_4977))->BgL_bodyz00) =
					((BgL_copz00_bglt) BgL_body1422z00_35), BUNSPEC);
				return BgL_new1301z00_4977;
			}
		}

	}



/* &make-cblock */
	BgL_cblockz00_bglt BGl_z62makezd2cblockzb0zzcgen_copz00(obj_t BgL_envz00_3812,
		obj_t BgL_loc1421z00_3813, obj_t BgL_body1422z00_3814)
	{
		{	/* Cgen/cop.sch 382 */
			return
				BGl_makezd2cblockzd2zzcgen_copz00(BgL_loc1421z00_3813,
				((BgL_copz00_bglt) BgL_body1422z00_3814));
		}

	}



/* cblock? */
	BGL_EXPORTED_DEF bool_t BGl_cblockzf3zf3zzcgen_copz00(obj_t BgL_objz00_36)
	{
		{	/* Cgen/cop.sch 383 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_36, BGl_cblockz00zzcgen_copz00);
		}

	}



/* &cblock? */
	obj_t BGl_z62cblockzf3z91zzcgen_copz00(obj_t BgL_envz00_3815,
		obj_t BgL_objz00_3816)
	{
		{	/* Cgen/cop.sch 383 */
			return BBOOL(BGl_cblockzf3zf3zzcgen_copz00(BgL_objz00_3816));
		}

	}



/* cblock-nil */
	BGL_EXPORTED_DEF BgL_cblockz00_bglt BGl_cblockzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 384 */
			{	/* Cgen/cop.sch 384 */
				obj_t BgL_classz00_3159;

				BgL_classz00_3159 = BGl_cblockz00zzcgen_copz00;
				{	/* Cgen/cop.sch 384 */
					obj_t BgL__ortest_1106z00_3160;

					BgL__ortest_1106z00_3160 = BGL_CLASS_NIL(BgL_classz00_3159);
					if (CBOOL(BgL__ortest_1106z00_3160))
						{	/* Cgen/cop.sch 384 */
							return ((BgL_cblockz00_bglt) BgL__ortest_1106z00_3160);
						}
					else
						{	/* Cgen/cop.sch 384 */
							return
								((BgL_cblockz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3159));
						}
				}
			}
		}

	}



/* &cblock-nil */
	BgL_cblockz00_bglt BGl_z62cblockzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3817)
	{
		{	/* Cgen/cop.sch 384 */
			return BGl_cblockzd2nilzd2zzcgen_copz00();
		}

	}



/* cblock-body */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cblockzd2bodyzd2zzcgen_copz00(BgL_cblockz00_bglt BgL_oz00_37)
	{
		{	/* Cgen/cop.sch 385 */
			return (((BgL_cblockz00_bglt) COBJECT(BgL_oz00_37))->BgL_bodyz00);
		}

	}



/* &cblock-body */
	BgL_copz00_bglt BGl_z62cblockzd2bodyzb0zzcgen_copz00(obj_t BgL_envz00_3818,
		obj_t BgL_oz00_3819)
	{
		{	/* Cgen/cop.sch 385 */
			return
				BGl_cblockzd2bodyzd2zzcgen_copz00(((BgL_cblockz00_bglt) BgL_oz00_3819));
		}

	}



/* cblock-loc */
	BGL_EXPORTED_DEF obj_t BGl_cblockzd2loczd2zzcgen_copz00(BgL_cblockz00_bglt
		BgL_oz00_40)
	{
		{	/* Cgen/cop.sch 387 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_40)))->BgL_locz00);
		}

	}



/* &cblock-loc */
	obj_t BGl_z62cblockzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3820,
		obj_t BgL_oz00_3821)
	{
		{	/* Cgen/cop.sch 387 */
			return
				BGl_cblockzd2loczd2zzcgen_copz00(((BgL_cblockz00_bglt) BgL_oz00_3821));
		}

	}



/* cblock-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cblockzd2loczd2setz12z12zzcgen_copz00(BgL_cblockz00_bglt BgL_oz00_41,
		obj_t BgL_vz00_42)
	{
		{	/* Cgen/cop.sch 388 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_41)))->BgL_locz00) =
				((obj_t) BgL_vz00_42), BUNSPEC);
		}

	}



/* &cblock-loc-set! */
	obj_t BGl_z62cblockzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3822,
		obj_t BgL_oz00_3823, obj_t BgL_vz00_3824)
	{
		{	/* Cgen/cop.sch 388 */
			return
				BGl_cblockzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cblockz00_bglt) BgL_oz00_3823), BgL_vz00_3824);
		}

	}



/* make-creturn */
	BGL_EXPORTED_DEF BgL_creturnz00_bglt BGl_makezd2creturnzd2zzcgen_copz00(obj_t
		BgL_loc1418z00_43, BgL_copz00_bglt BgL_value1419z00_44)
	{
		{	/* Cgen/cop.sch 391 */
			{	/* Cgen/cop.sch 391 */
				BgL_creturnz00_bglt BgL_new1303z00_4981;

				{	/* Cgen/cop.sch 391 */
					BgL_creturnz00_bglt BgL_new1302z00_4982;

					BgL_new1302z00_4982 =
						((BgL_creturnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_creturnz00_bgl))));
					{	/* Cgen/cop.sch 391 */
						long BgL_arg1593z00_4983;

						{	/* Cgen/cop.sch 391 */
							long BgL_res2387z00_4984;

							BgL_res2387z00_4984 =
								BGL_CLASS_INDEX(BGl_creturnz00zzcgen_copz00);
							BgL_arg1593z00_4983 = BgL_res2387z00_4984;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1302z00_4982), BgL_arg1593z00_4983);
					}
					BgL_new1303z00_4981 = BgL_new1302z00_4982;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1303z00_4981)))->BgL_locz00) =
					((obj_t) BgL_loc1418z00_43), BUNSPEC);
				((((BgL_creturnz00_bglt) COBJECT(BgL_new1303z00_4981))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value1419z00_44), BUNSPEC);
				return BgL_new1303z00_4981;
			}
		}

	}



/* &make-creturn */
	BgL_creturnz00_bglt BGl_z62makezd2creturnzb0zzcgen_copz00(obj_t
		BgL_envz00_3825, obj_t BgL_loc1418z00_3826, obj_t BgL_value1419z00_3827)
	{
		{	/* Cgen/cop.sch 391 */
			return
				BGl_makezd2creturnzd2zzcgen_copz00(BgL_loc1418z00_3826,
				((BgL_copz00_bglt) BgL_value1419z00_3827));
		}

	}



/* creturn? */
	BGL_EXPORTED_DEF bool_t BGl_creturnzf3zf3zzcgen_copz00(obj_t BgL_objz00_45)
	{
		{	/* Cgen/cop.sch 392 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_45, BGl_creturnz00zzcgen_copz00);
		}

	}



/* &creturn? */
	obj_t BGl_z62creturnzf3z91zzcgen_copz00(obj_t BgL_envz00_3828,
		obj_t BgL_objz00_3829)
	{
		{	/* Cgen/cop.sch 392 */
			return BBOOL(BGl_creturnzf3zf3zzcgen_copz00(BgL_objz00_3829));
		}

	}



/* creturn-nil */
	BGL_EXPORTED_DEF BgL_creturnz00_bglt BGl_creturnzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 393 */
			{	/* Cgen/cop.sch 393 */
				obj_t BgL_classz00_3168;

				BgL_classz00_3168 = BGl_creturnz00zzcgen_copz00;
				{	/* Cgen/cop.sch 393 */
					obj_t BgL__ortest_1106z00_3169;

					BgL__ortest_1106z00_3169 = BGL_CLASS_NIL(BgL_classz00_3168);
					if (CBOOL(BgL__ortest_1106z00_3169))
						{	/* Cgen/cop.sch 393 */
							return ((BgL_creturnz00_bglt) BgL__ortest_1106z00_3169);
						}
					else
						{	/* Cgen/cop.sch 393 */
							return
								((BgL_creturnz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3168));
						}
				}
			}
		}

	}



/* &creturn-nil */
	BgL_creturnz00_bglt BGl_z62creturnzd2nilzb0zzcgen_copz00(obj_t
		BgL_envz00_3830)
	{
		{	/* Cgen/cop.sch 393 */
			return BGl_creturnzd2nilzd2zzcgen_copz00();
		}

	}



/* creturn-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_creturnzd2valuezd2zzcgen_copz00(BgL_creturnz00_bglt BgL_oz00_46)
	{
		{	/* Cgen/cop.sch 394 */
			return (((BgL_creturnz00_bglt) COBJECT(BgL_oz00_46))->BgL_valuez00);
		}

	}



/* &creturn-value */
	BgL_copz00_bglt BGl_z62creturnzd2valuezb0zzcgen_copz00(obj_t BgL_envz00_3831,
		obj_t BgL_oz00_3832)
	{
		{	/* Cgen/cop.sch 394 */
			return
				BGl_creturnzd2valuezd2zzcgen_copz00(
				((BgL_creturnz00_bglt) BgL_oz00_3832));
		}

	}



/* creturn-loc */
	BGL_EXPORTED_DEF obj_t BGl_creturnzd2loczd2zzcgen_copz00(BgL_creturnz00_bglt
		BgL_oz00_49)
	{
		{	/* Cgen/cop.sch 396 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_49)))->BgL_locz00);
		}

	}



/* &creturn-loc */
	obj_t BGl_z62creturnzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3833,
		obj_t BgL_oz00_3834)
	{
		{	/* Cgen/cop.sch 396 */
			return
				BGl_creturnzd2loczd2zzcgen_copz00(
				((BgL_creturnz00_bglt) BgL_oz00_3834));
		}

	}



/* creturn-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_creturnzd2loczd2setz12z12zzcgen_copz00(BgL_creturnz00_bglt BgL_oz00_50,
		obj_t BgL_vz00_51)
	{
		{	/* Cgen/cop.sch 397 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_50)))->BgL_locz00) =
				((obj_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &creturn-loc-set! */
	obj_t BGl_z62creturnzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3835,
		obj_t BgL_oz00_3836, obj_t BgL_vz00_3837)
	{
		{	/* Cgen/cop.sch 397 */
			return
				BGl_creturnzd2loczd2setz12z12zzcgen_copz00(
				((BgL_creturnz00_bglt) BgL_oz00_3836), BgL_vz00_3837);
		}

	}



/* make-cvoid */
	BGL_EXPORTED_DEF BgL_cvoidz00_bglt BGl_makezd2cvoidzd2zzcgen_copz00(obj_t
		BgL_loc1415z00_52, BgL_copz00_bglt BgL_value1416z00_53)
	{
		{	/* Cgen/cop.sch 400 */
			{	/* Cgen/cop.sch 400 */
				BgL_cvoidz00_bglt BgL_new1305z00_4985;

				{	/* Cgen/cop.sch 400 */
					BgL_cvoidz00_bglt BgL_new1304z00_4986;

					BgL_new1304z00_4986 =
						((BgL_cvoidz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cvoidz00_bgl))));
					{	/* Cgen/cop.sch 400 */
						long BgL_arg1597z00_4987;

						{	/* Cgen/cop.sch 400 */
							long BgL_res2388z00_4988;

							BgL_res2388z00_4988 = BGL_CLASS_INDEX(BGl_cvoidz00zzcgen_copz00);
							BgL_arg1597z00_4987 = BgL_res2388z00_4988;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1304z00_4986), BgL_arg1597z00_4987);
					}
					BgL_new1305z00_4985 = BgL_new1304z00_4986;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1305z00_4985)))->BgL_locz00) =
					((obj_t) BgL_loc1415z00_52), BUNSPEC);
				((((BgL_cvoidz00_bglt) COBJECT(BgL_new1305z00_4985))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value1416z00_53), BUNSPEC);
				return BgL_new1305z00_4985;
			}
		}

	}



/* &make-cvoid */
	BgL_cvoidz00_bglt BGl_z62makezd2cvoidzb0zzcgen_copz00(obj_t BgL_envz00_3838,
		obj_t BgL_loc1415z00_3839, obj_t BgL_value1416z00_3840)
	{
		{	/* Cgen/cop.sch 400 */
			return
				BGl_makezd2cvoidzd2zzcgen_copz00(BgL_loc1415z00_3839,
				((BgL_copz00_bglt) BgL_value1416z00_3840));
		}

	}



/* cvoid? */
	BGL_EXPORTED_DEF bool_t BGl_cvoidzf3zf3zzcgen_copz00(obj_t BgL_objz00_54)
	{
		{	/* Cgen/cop.sch 401 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_54, BGl_cvoidz00zzcgen_copz00);
		}

	}



/* &cvoid? */
	obj_t BGl_z62cvoidzf3z91zzcgen_copz00(obj_t BgL_envz00_3841,
		obj_t BgL_objz00_3842)
	{
		{	/* Cgen/cop.sch 401 */
			return BBOOL(BGl_cvoidzf3zf3zzcgen_copz00(BgL_objz00_3842));
		}

	}



/* cvoid-nil */
	BGL_EXPORTED_DEF BgL_cvoidz00_bglt BGl_cvoidzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 402 */
			{	/* Cgen/cop.sch 402 */
				obj_t BgL_classz00_3177;

				BgL_classz00_3177 = BGl_cvoidz00zzcgen_copz00;
				{	/* Cgen/cop.sch 402 */
					obj_t BgL__ortest_1106z00_3178;

					BgL__ortest_1106z00_3178 = BGL_CLASS_NIL(BgL_classz00_3177);
					if (CBOOL(BgL__ortest_1106z00_3178))
						{	/* Cgen/cop.sch 402 */
							return ((BgL_cvoidz00_bglt) BgL__ortest_1106z00_3178);
						}
					else
						{	/* Cgen/cop.sch 402 */
							return
								((BgL_cvoidz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3177));
						}
				}
			}
		}

	}



/* &cvoid-nil */
	BgL_cvoidz00_bglt BGl_z62cvoidzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3843)
	{
		{	/* Cgen/cop.sch 402 */
			return BGl_cvoidzd2nilzd2zzcgen_copz00();
		}

	}



/* cvoid-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cvoidzd2valuezd2zzcgen_copz00(BgL_cvoidz00_bglt BgL_oz00_55)
	{
		{	/* Cgen/cop.sch 403 */
			return (((BgL_cvoidz00_bglt) COBJECT(BgL_oz00_55))->BgL_valuez00);
		}

	}



/* &cvoid-value */
	BgL_copz00_bglt BGl_z62cvoidzd2valuezb0zzcgen_copz00(obj_t BgL_envz00_3844,
		obj_t BgL_oz00_3845)
	{
		{	/* Cgen/cop.sch 403 */
			return
				BGl_cvoidzd2valuezd2zzcgen_copz00(((BgL_cvoidz00_bglt) BgL_oz00_3845));
		}

	}



/* cvoid-loc */
	BGL_EXPORTED_DEF obj_t BGl_cvoidzd2loczd2zzcgen_copz00(BgL_cvoidz00_bglt
		BgL_oz00_58)
	{
		{	/* Cgen/cop.sch 405 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_58)))->BgL_locz00);
		}

	}



/* &cvoid-loc */
	obj_t BGl_z62cvoidzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3846,
		obj_t BgL_oz00_3847)
	{
		{	/* Cgen/cop.sch 405 */
			return
				BGl_cvoidzd2loczd2zzcgen_copz00(((BgL_cvoidz00_bglt) BgL_oz00_3847));
		}

	}



/* cvoid-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvoidzd2loczd2setz12z12zzcgen_copz00(BgL_cvoidz00_bglt BgL_oz00_59,
		obj_t BgL_vz00_60)
	{
		{	/* Cgen/cop.sch 406 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_59)))->BgL_locz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &cvoid-loc-set! */
	obj_t BGl_z62cvoidzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3848,
		obj_t BgL_oz00_3849, obj_t BgL_vz00_3850)
	{
		{	/* Cgen/cop.sch 406 */
			return
				BGl_cvoidzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cvoidz00_bglt) BgL_oz00_3849), BgL_vz00_3850);
		}

	}



/* make-catom */
	BGL_EXPORTED_DEF BgL_catomz00_bglt BGl_makezd2catomzd2zzcgen_copz00(obj_t
		BgL_loc1412z00_61, obj_t BgL_value1413z00_62)
	{
		{	/* Cgen/cop.sch 409 */
			{	/* Cgen/cop.sch 409 */
				BgL_catomz00_bglt BgL_new1308z00_4989;

				{	/* Cgen/cop.sch 409 */
					BgL_catomz00_bglt BgL_new1307z00_4990;

					BgL_new1307z00_4990 =
						((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_catomz00_bgl))));
					{	/* Cgen/cop.sch 409 */
						long BgL_arg1599z00_4991;

						{	/* Cgen/cop.sch 409 */
							long BgL_res2389z00_4992;

							BgL_res2389z00_4992 = BGL_CLASS_INDEX(BGl_catomz00zzcgen_copz00);
							BgL_arg1599z00_4991 = BgL_res2389z00_4992;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1307z00_4990), BgL_arg1599z00_4991);
					}
					BgL_new1308z00_4989 = BgL_new1307z00_4990;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1308z00_4989)))->BgL_locz00) =
					((obj_t) BgL_loc1412z00_61), BUNSPEC);
				((((BgL_catomz00_bglt) COBJECT(BgL_new1308z00_4989))->BgL_valuez00) =
					((obj_t) BgL_value1413z00_62), BUNSPEC);
				return BgL_new1308z00_4989;
			}
		}

	}



/* &make-catom */
	BgL_catomz00_bglt BGl_z62makezd2catomzb0zzcgen_copz00(obj_t BgL_envz00_3851,
		obj_t BgL_loc1412z00_3852, obj_t BgL_value1413z00_3853)
	{
		{	/* Cgen/cop.sch 409 */
			return
				BGl_makezd2catomzd2zzcgen_copz00(BgL_loc1412z00_3852,
				BgL_value1413z00_3853);
		}

	}



/* catom? */
	BGL_EXPORTED_DEF bool_t BGl_catomzf3zf3zzcgen_copz00(obj_t BgL_objz00_63)
	{
		{	/* Cgen/cop.sch 410 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_63, BGl_catomz00zzcgen_copz00);
		}

	}



/* &catom? */
	obj_t BGl_z62catomzf3z91zzcgen_copz00(obj_t BgL_envz00_3854,
		obj_t BgL_objz00_3855)
	{
		{	/* Cgen/cop.sch 410 */
			return BBOOL(BGl_catomzf3zf3zzcgen_copz00(BgL_objz00_3855));
		}

	}



/* catom-nil */
	BGL_EXPORTED_DEF BgL_catomz00_bglt BGl_catomzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 411 */
			{	/* Cgen/cop.sch 411 */
				obj_t BgL_classz00_3186;

				BgL_classz00_3186 = BGl_catomz00zzcgen_copz00;
				{	/* Cgen/cop.sch 411 */
					obj_t BgL__ortest_1106z00_3187;

					BgL__ortest_1106z00_3187 = BGL_CLASS_NIL(BgL_classz00_3186);
					if (CBOOL(BgL__ortest_1106z00_3187))
						{	/* Cgen/cop.sch 411 */
							return ((BgL_catomz00_bglt) BgL__ortest_1106z00_3187);
						}
					else
						{	/* Cgen/cop.sch 411 */
							return
								((BgL_catomz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3186));
						}
				}
			}
		}

	}



/* &catom-nil */
	BgL_catomz00_bglt BGl_z62catomzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3856)
	{
		{	/* Cgen/cop.sch 411 */
			return BGl_catomzd2nilzd2zzcgen_copz00();
		}

	}



/* catom-value */
	BGL_EXPORTED_DEF obj_t BGl_catomzd2valuezd2zzcgen_copz00(BgL_catomz00_bglt
		BgL_oz00_64)
	{
		{	/* Cgen/cop.sch 412 */
			return (((BgL_catomz00_bglt) COBJECT(BgL_oz00_64))->BgL_valuez00);
		}

	}



/* &catom-value */
	obj_t BGl_z62catomzd2valuezb0zzcgen_copz00(obj_t BgL_envz00_3857,
		obj_t BgL_oz00_3858)
	{
		{	/* Cgen/cop.sch 412 */
			return
				BGl_catomzd2valuezd2zzcgen_copz00(((BgL_catomz00_bglt) BgL_oz00_3858));
		}

	}



/* catom-loc */
	BGL_EXPORTED_DEF obj_t BGl_catomzd2loczd2zzcgen_copz00(BgL_catomz00_bglt
		BgL_oz00_67)
	{
		{	/* Cgen/cop.sch 414 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_67)))->BgL_locz00);
		}

	}



/* &catom-loc */
	obj_t BGl_z62catomzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3859,
		obj_t BgL_oz00_3860)
	{
		{	/* Cgen/cop.sch 414 */
			return
				BGl_catomzd2loczd2zzcgen_copz00(((BgL_catomz00_bglt) BgL_oz00_3860));
		}

	}



/* catom-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_catomzd2loczd2setz12z12zzcgen_copz00(BgL_catomz00_bglt BgL_oz00_68,
		obj_t BgL_vz00_69)
	{
		{	/* Cgen/cop.sch 415 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_68)))->BgL_locz00) =
				((obj_t) BgL_vz00_69), BUNSPEC);
		}

	}



/* &catom-loc-set! */
	obj_t BGl_z62catomzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3861,
		obj_t BgL_oz00_3862, obj_t BgL_vz00_3863)
	{
		{	/* Cgen/cop.sch 415 */
			return
				BGl_catomzd2loczd2setz12z12zzcgen_copz00(
				((BgL_catomz00_bglt) BgL_oz00_3862), BgL_vz00_3863);
		}

	}



/* make-varc */
	BGL_EXPORTED_DEF BgL_varcz00_bglt BGl_makezd2varczd2zzcgen_copz00(obj_t
		BgL_loc1409z00_70, BgL_variablez00_bglt BgL_variable1410z00_71)
	{
		{	/* Cgen/cop.sch 418 */
			{	/* Cgen/cop.sch 418 */
				BgL_varcz00_bglt BgL_new1310z00_4993;

				{	/* Cgen/cop.sch 418 */
					BgL_varcz00_bglt BgL_new1309z00_4994;

					BgL_new1309z00_4994 =
						((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_varcz00_bgl))));
					{	/* Cgen/cop.sch 418 */
						long BgL_arg1604z00_4995;

						{	/* Cgen/cop.sch 418 */
							long BgL_res2390z00_4996;

							BgL_res2390z00_4996 = BGL_CLASS_INDEX(BGl_varcz00zzcgen_copz00);
							BgL_arg1604z00_4995 = BgL_res2390z00_4996;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1309z00_4994), BgL_arg1604z00_4995);
					}
					BgL_new1310z00_4993 = BgL_new1309z00_4994;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1310z00_4993)))->BgL_locz00) =
					((obj_t) BgL_loc1409z00_70), BUNSPEC);
				((((BgL_varcz00_bglt) COBJECT(BgL_new1310z00_4993))->BgL_variablez00) =
					((BgL_variablez00_bglt) BgL_variable1410z00_71), BUNSPEC);
				return BgL_new1310z00_4993;
			}
		}

	}



/* &make-varc */
	BgL_varcz00_bglt BGl_z62makezd2varczb0zzcgen_copz00(obj_t BgL_envz00_3864,
		obj_t BgL_loc1409z00_3865, obj_t BgL_variable1410z00_3866)
	{
		{	/* Cgen/cop.sch 418 */
			return
				BGl_makezd2varczd2zzcgen_copz00(BgL_loc1409z00_3865,
				((BgL_variablez00_bglt) BgL_variable1410z00_3866));
		}

	}



/* varc? */
	BGL_EXPORTED_DEF bool_t BGl_varczf3zf3zzcgen_copz00(obj_t BgL_objz00_72)
	{
		{	/* Cgen/cop.sch 419 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_72, BGl_varcz00zzcgen_copz00);
		}

	}



/* &varc? */
	obj_t BGl_z62varczf3z91zzcgen_copz00(obj_t BgL_envz00_3867,
		obj_t BgL_objz00_3868)
	{
		{	/* Cgen/cop.sch 419 */
			return BBOOL(BGl_varczf3zf3zzcgen_copz00(BgL_objz00_3868));
		}

	}



/* varc-nil */
	BGL_EXPORTED_DEF BgL_varcz00_bglt BGl_varczd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 420 */
			{	/* Cgen/cop.sch 420 */
				obj_t BgL_classz00_3195;

				BgL_classz00_3195 = BGl_varcz00zzcgen_copz00;
				{	/* Cgen/cop.sch 420 */
					obj_t BgL__ortest_1106z00_3196;

					BgL__ortest_1106z00_3196 = BGL_CLASS_NIL(BgL_classz00_3195);
					if (CBOOL(BgL__ortest_1106z00_3196))
						{	/* Cgen/cop.sch 420 */
							return ((BgL_varcz00_bglt) BgL__ortest_1106z00_3196);
						}
					else
						{	/* Cgen/cop.sch 420 */
							return
								((BgL_varcz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3195));
						}
				}
			}
		}

	}



/* &varc-nil */
	BgL_varcz00_bglt BGl_z62varczd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3869)
	{
		{	/* Cgen/cop.sch 420 */
			return BGl_varczd2nilzd2zzcgen_copz00();
		}

	}



/* varc-variable */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_varczd2variablezd2zzcgen_copz00(BgL_varcz00_bglt BgL_oz00_73)
	{
		{	/* Cgen/cop.sch 421 */
			return (((BgL_varcz00_bglt) COBJECT(BgL_oz00_73))->BgL_variablez00);
		}

	}



/* &varc-variable */
	BgL_variablez00_bglt BGl_z62varczd2variablezb0zzcgen_copz00(obj_t
		BgL_envz00_3870, obj_t BgL_oz00_3871)
	{
		{	/* Cgen/cop.sch 421 */
			return
				BGl_varczd2variablezd2zzcgen_copz00(((BgL_varcz00_bglt) BgL_oz00_3871));
		}

	}



/* varc-loc */
	BGL_EXPORTED_DEF obj_t BGl_varczd2loczd2zzcgen_copz00(BgL_varcz00_bglt
		BgL_oz00_76)
	{
		{	/* Cgen/cop.sch 423 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_76)))->BgL_locz00);
		}

	}



/* &varc-loc */
	obj_t BGl_z62varczd2loczb0zzcgen_copz00(obj_t BgL_envz00_3872,
		obj_t BgL_oz00_3873)
	{
		{	/* Cgen/cop.sch 423 */
			return BGl_varczd2loczd2zzcgen_copz00(((BgL_varcz00_bglt) BgL_oz00_3873));
		}

	}



/* varc-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_varczd2loczd2setz12z12zzcgen_copz00(BgL_varcz00_bglt BgL_oz00_77,
		obj_t BgL_vz00_78)
	{
		{	/* Cgen/cop.sch 424 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_77)))->BgL_locz00) =
				((obj_t) BgL_vz00_78), BUNSPEC);
		}

	}



/* &varc-loc-set! */
	obj_t BGl_z62varczd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3874,
		obj_t BgL_oz00_3875, obj_t BgL_vz00_3876)
	{
		{	/* Cgen/cop.sch 424 */
			return
				BGl_varczd2loczd2setz12z12zzcgen_copz00(
				((BgL_varcz00_bglt) BgL_oz00_3875), BgL_vz00_3876);
		}

	}



/* make-cpragma */
	BGL_EXPORTED_DEF BgL_cpragmaz00_bglt BGl_makezd2cpragmazd2zzcgen_copz00(obj_t
		BgL_loc1405z00_79, obj_t BgL_format1406z00_80, obj_t BgL_args1407z00_81)
	{
		{	/* Cgen/cop.sch 427 */
			{	/* Cgen/cop.sch 427 */
				BgL_cpragmaz00_bglt BgL_new1313z00_4997;

				{	/* Cgen/cop.sch 427 */
					BgL_cpragmaz00_bglt BgL_new1312z00_4998;

					BgL_new1312z00_4998 =
						((BgL_cpragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cpragmaz00_bgl))));
					{	/* Cgen/cop.sch 427 */
						long BgL_arg1605z00_4999;

						{	/* Cgen/cop.sch 427 */
							long BgL_res2391z00_5000;

							BgL_res2391z00_5000 =
								BGL_CLASS_INDEX(BGl_cpragmaz00zzcgen_copz00);
							BgL_arg1605z00_4999 = BgL_res2391z00_5000;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1312z00_4998), BgL_arg1605z00_4999);
					}
					BgL_new1313z00_4997 = BgL_new1312z00_4998;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1313z00_4997)))->BgL_locz00) =
					((obj_t) BgL_loc1405z00_79), BUNSPEC);
				((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1313z00_4997))->BgL_formatz00) =
					((obj_t) BgL_format1406z00_80), BUNSPEC);
				((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1313z00_4997))->BgL_argsz00) =
					((obj_t) BgL_args1407z00_81), BUNSPEC);
				return BgL_new1313z00_4997;
			}
		}

	}



/* &make-cpragma */
	BgL_cpragmaz00_bglt BGl_z62makezd2cpragmazb0zzcgen_copz00(obj_t
		BgL_envz00_3877, obj_t BgL_loc1405z00_3878, obj_t BgL_format1406z00_3879,
		obj_t BgL_args1407z00_3880)
	{
		{	/* Cgen/cop.sch 427 */
			return
				BGl_makezd2cpragmazd2zzcgen_copz00(BgL_loc1405z00_3878,
				BgL_format1406z00_3879, BgL_args1407z00_3880);
		}

	}



/* cpragma? */
	BGL_EXPORTED_DEF bool_t BGl_cpragmazf3zf3zzcgen_copz00(obj_t BgL_objz00_82)
	{
		{	/* Cgen/cop.sch 428 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_82, BGl_cpragmaz00zzcgen_copz00);
		}

	}



/* &cpragma? */
	obj_t BGl_z62cpragmazf3z91zzcgen_copz00(obj_t BgL_envz00_3881,
		obj_t BgL_objz00_3882)
	{
		{	/* Cgen/cop.sch 428 */
			return BBOOL(BGl_cpragmazf3zf3zzcgen_copz00(BgL_objz00_3882));
		}

	}



/* cpragma-nil */
	BGL_EXPORTED_DEF BgL_cpragmaz00_bglt BGl_cpragmazd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 429 */
			{	/* Cgen/cop.sch 429 */
				obj_t BgL_classz00_3204;

				BgL_classz00_3204 = BGl_cpragmaz00zzcgen_copz00;
				{	/* Cgen/cop.sch 429 */
					obj_t BgL__ortest_1106z00_3205;

					BgL__ortest_1106z00_3205 = BGL_CLASS_NIL(BgL_classz00_3204);
					if (CBOOL(BgL__ortest_1106z00_3205))
						{	/* Cgen/cop.sch 429 */
							return ((BgL_cpragmaz00_bglt) BgL__ortest_1106z00_3205);
						}
					else
						{	/* Cgen/cop.sch 429 */
							return
								((BgL_cpragmaz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3204));
						}
				}
			}
		}

	}



/* &cpragma-nil */
	BgL_cpragmaz00_bglt BGl_z62cpragmazd2nilzb0zzcgen_copz00(obj_t
		BgL_envz00_3883)
	{
		{	/* Cgen/cop.sch 429 */
			return BGl_cpragmazd2nilzd2zzcgen_copz00();
		}

	}



/* cpragma-args */
	BGL_EXPORTED_DEF obj_t BGl_cpragmazd2argszd2zzcgen_copz00(BgL_cpragmaz00_bglt
		BgL_oz00_83)
	{
		{	/* Cgen/cop.sch 430 */
			return (((BgL_cpragmaz00_bglt) COBJECT(BgL_oz00_83))->BgL_argsz00);
		}

	}



/* &cpragma-args */
	obj_t BGl_z62cpragmazd2argszb0zzcgen_copz00(obj_t BgL_envz00_3884,
		obj_t BgL_oz00_3885)
	{
		{	/* Cgen/cop.sch 430 */
			return
				BGl_cpragmazd2argszd2zzcgen_copz00(
				((BgL_cpragmaz00_bglt) BgL_oz00_3885));
		}

	}



/* cpragma-format */
	BGL_EXPORTED_DEF obj_t
		BGl_cpragmazd2formatzd2zzcgen_copz00(BgL_cpragmaz00_bglt BgL_oz00_86)
	{
		{	/* Cgen/cop.sch 432 */
			return (((BgL_cpragmaz00_bglt) COBJECT(BgL_oz00_86))->BgL_formatz00);
		}

	}



/* &cpragma-format */
	obj_t BGl_z62cpragmazd2formatzb0zzcgen_copz00(obj_t BgL_envz00_3886,
		obj_t BgL_oz00_3887)
	{
		{	/* Cgen/cop.sch 432 */
			return
				BGl_cpragmazd2formatzd2zzcgen_copz00(
				((BgL_cpragmaz00_bglt) BgL_oz00_3887));
		}

	}



/* cpragma-loc */
	BGL_EXPORTED_DEF obj_t BGl_cpragmazd2loczd2zzcgen_copz00(BgL_cpragmaz00_bglt
		BgL_oz00_89)
	{
		{	/* Cgen/cop.sch 434 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_89)))->BgL_locz00);
		}

	}



/* &cpragma-loc */
	obj_t BGl_z62cpragmazd2loczb0zzcgen_copz00(obj_t BgL_envz00_3888,
		obj_t BgL_oz00_3889)
	{
		{	/* Cgen/cop.sch 434 */
			return
				BGl_cpragmazd2loczd2zzcgen_copz00(
				((BgL_cpragmaz00_bglt) BgL_oz00_3889));
		}

	}



/* cpragma-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cpragmazd2loczd2setz12z12zzcgen_copz00(BgL_cpragmaz00_bglt BgL_oz00_90,
		obj_t BgL_vz00_91)
	{
		{	/* Cgen/cop.sch 435 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_90)))->BgL_locz00) =
				((obj_t) BgL_vz00_91), BUNSPEC);
		}

	}



/* &cpragma-loc-set! */
	obj_t BGl_z62cpragmazd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3890,
		obj_t BgL_oz00_3891, obj_t BgL_vz00_3892)
	{
		{	/* Cgen/cop.sch 435 */
			return
				BGl_cpragmazd2loczd2setz12z12zzcgen_copz00(
				((BgL_cpragmaz00_bglt) BgL_oz00_3891), BgL_vz00_3892);
		}

	}



/* make-ccast */
	BGL_EXPORTED_DEF BgL_ccastz00_bglt BGl_makezd2ccastzd2zzcgen_copz00(obj_t
		BgL_loc1389z00_92, BgL_typez00_bglt BgL_type1390z00_93,
		BgL_copz00_bglt BgL_arg1403z00_94)
	{
		{	/* Cgen/cop.sch 438 */
			{	/* Cgen/cop.sch 438 */
				BgL_ccastz00_bglt BgL_new1315z00_5001;

				{	/* Cgen/cop.sch 438 */
					BgL_ccastz00_bglt BgL_new1314z00_5002;

					BgL_new1314z00_5002 =
						((BgL_ccastz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccastz00_bgl))));
					{	/* Cgen/cop.sch 438 */
						long BgL_arg1606z00_5003;

						{	/* Cgen/cop.sch 438 */
							long BgL_res2392z00_5004;

							BgL_res2392z00_5004 = BGL_CLASS_INDEX(BGl_ccastz00zzcgen_copz00);
							BgL_arg1606z00_5003 = BgL_res2392z00_5004;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1314z00_5002), BgL_arg1606z00_5003);
					}
					BgL_new1315z00_5001 = BgL_new1314z00_5002;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1315z00_5001)))->BgL_locz00) =
					((obj_t) BgL_loc1389z00_92), BUNSPEC);
				((((BgL_ccastz00_bglt) COBJECT(BgL_new1315z00_5001))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1390z00_93), BUNSPEC);
				((((BgL_ccastz00_bglt) COBJECT(BgL_new1315z00_5001))->BgL_argz00) =
					((BgL_copz00_bglt) BgL_arg1403z00_94), BUNSPEC);
				return BgL_new1315z00_5001;
			}
		}

	}



/* &make-ccast */
	BgL_ccastz00_bglt BGl_z62makezd2ccastzb0zzcgen_copz00(obj_t BgL_envz00_3893,
		obj_t BgL_loc1389z00_3894, obj_t BgL_type1390z00_3895,
		obj_t BgL_arg1403z00_3896)
	{
		{	/* Cgen/cop.sch 438 */
			return
				BGl_makezd2ccastzd2zzcgen_copz00(BgL_loc1389z00_3894,
				((BgL_typez00_bglt) BgL_type1390z00_3895),
				((BgL_copz00_bglt) BgL_arg1403z00_3896));
		}

	}



/* ccast? */
	BGL_EXPORTED_DEF bool_t BGl_ccastzf3zf3zzcgen_copz00(obj_t BgL_objz00_95)
	{
		{	/* Cgen/cop.sch 439 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_95, BGl_ccastz00zzcgen_copz00);
		}

	}



/* &ccast? */
	obj_t BGl_z62ccastzf3z91zzcgen_copz00(obj_t BgL_envz00_3897,
		obj_t BgL_objz00_3898)
	{
		{	/* Cgen/cop.sch 439 */
			return BBOOL(BGl_ccastzf3zf3zzcgen_copz00(BgL_objz00_3898));
		}

	}



/* ccast-nil */
	BGL_EXPORTED_DEF BgL_ccastz00_bglt BGl_ccastzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 440 */
			{	/* Cgen/cop.sch 440 */
				obj_t BgL_classz00_3213;

				BgL_classz00_3213 = BGl_ccastz00zzcgen_copz00;
				{	/* Cgen/cop.sch 440 */
					obj_t BgL__ortest_1106z00_3214;

					BgL__ortest_1106z00_3214 = BGL_CLASS_NIL(BgL_classz00_3213);
					if (CBOOL(BgL__ortest_1106z00_3214))
						{	/* Cgen/cop.sch 440 */
							return ((BgL_ccastz00_bglt) BgL__ortest_1106z00_3214);
						}
					else
						{	/* Cgen/cop.sch 440 */
							return
								((BgL_ccastz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3213));
						}
				}
			}
		}

	}



/* &ccast-nil */
	BgL_ccastz00_bglt BGl_z62ccastzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3899)
	{
		{	/* Cgen/cop.sch 440 */
			return BGl_ccastzd2nilzd2zzcgen_copz00();
		}

	}



/* ccast-arg */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_ccastzd2argzd2zzcgen_copz00(BgL_ccastz00_bglt BgL_oz00_96)
	{
		{	/* Cgen/cop.sch 441 */
			return (((BgL_ccastz00_bglt) COBJECT(BgL_oz00_96))->BgL_argz00);
		}

	}



/* &ccast-arg */
	BgL_copz00_bglt BGl_z62ccastzd2argzb0zzcgen_copz00(obj_t BgL_envz00_3900,
		obj_t BgL_oz00_3901)
	{
		{	/* Cgen/cop.sch 441 */
			return
				BGl_ccastzd2argzd2zzcgen_copz00(((BgL_ccastz00_bglt) BgL_oz00_3901));
		}

	}



/* ccast-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_ccastzd2typezd2zzcgen_copz00(BgL_ccastz00_bglt BgL_oz00_99)
	{
		{	/* Cgen/cop.sch 443 */
			return (((BgL_ccastz00_bglt) COBJECT(BgL_oz00_99))->BgL_typez00);
		}

	}



/* &ccast-type */
	BgL_typez00_bglt BGl_z62ccastzd2typezb0zzcgen_copz00(obj_t BgL_envz00_3902,
		obj_t BgL_oz00_3903)
	{
		{	/* Cgen/cop.sch 443 */
			return
				BGl_ccastzd2typezd2zzcgen_copz00(((BgL_ccastz00_bglt) BgL_oz00_3903));
		}

	}



/* ccast-loc */
	BGL_EXPORTED_DEF obj_t BGl_ccastzd2loczd2zzcgen_copz00(BgL_ccastz00_bglt
		BgL_oz00_102)
	{
		{	/* Cgen/cop.sch 445 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_102)))->BgL_locz00);
		}

	}



/* &ccast-loc */
	obj_t BGl_z62ccastzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3904,
		obj_t BgL_oz00_3905)
	{
		{	/* Cgen/cop.sch 445 */
			return
				BGl_ccastzd2loczd2zzcgen_copz00(((BgL_ccastz00_bglt) BgL_oz00_3905));
		}

	}



/* ccast-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_ccastzd2loczd2setz12z12zzcgen_copz00(BgL_ccastz00_bglt BgL_oz00_103,
		obj_t BgL_vz00_104)
	{
		{	/* Cgen/cop.sch 446 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_103)))->BgL_locz00) =
				((obj_t) BgL_vz00_104), BUNSPEC);
		}

	}



/* &ccast-loc-set! */
	obj_t BGl_z62ccastzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3906,
		obj_t BgL_oz00_3907, obj_t BgL_vz00_3908)
	{
		{	/* Cgen/cop.sch 446 */
			return
				BGl_ccastzd2loczd2setz12z12zzcgen_copz00(
				((BgL_ccastz00_bglt) BgL_oz00_3907), BgL_vz00_3908);
		}

	}



/* make-csequence */
	BGL_EXPORTED_DEF BgL_csequencez00_bglt
		BGl_makezd2csequencezd2zzcgen_copz00(obj_t BgL_loc1385z00_105,
		bool_t BgL_czd2expzf31386z21_106, obj_t BgL_cops1387z00_107)
	{
		{	/* Cgen/cop.sch 449 */
			{	/* Cgen/cop.sch 449 */
				BgL_csequencez00_bglt BgL_new1317z00_5005;

				{	/* Cgen/cop.sch 449 */
					BgL_csequencez00_bglt BgL_new1316z00_5006;

					BgL_new1316z00_5006 =
						((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_csequencez00_bgl))));
					{	/* Cgen/cop.sch 449 */
						long BgL_arg1611z00_5007;

						{	/* Cgen/cop.sch 449 */
							long BgL_res2393z00_5008;

							BgL_res2393z00_5008 =
								BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
							BgL_arg1611z00_5007 = BgL_res2393z00_5008;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1316z00_5006), BgL_arg1611z00_5007);
					}
					BgL_new1317z00_5005 = BgL_new1316z00_5006;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1317z00_5005)))->BgL_locz00) =
					((obj_t) BgL_loc1385z00_105), BUNSPEC);
				((((BgL_csequencez00_bglt) COBJECT(BgL_new1317z00_5005))->
						BgL_czd2expzf3z21) = ((bool_t) BgL_czd2expzf31386z21_106), BUNSPEC);
				((((BgL_csequencez00_bglt) COBJECT(BgL_new1317z00_5005))->BgL_copsz00) =
					((obj_t) BgL_cops1387z00_107), BUNSPEC);
				return BgL_new1317z00_5005;
			}
		}

	}



/* &make-csequence */
	BgL_csequencez00_bglt BGl_z62makezd2csequencezb0zzcgen_copz00(obj_t
		BgL_envz00_3909, obj_t BgL_loc1385z00_3910,
		obj_t BgL_czd2expzf31386z21_3911, obj_t BgL_cops1387z00_3912)
	{
		{	/* Cgen/cop.sch 449 */
			return
				BGl_makezd2csequencezd2zzcgen_copz00(BgL_loc1385z00_3910,
				CBOOL(BgL_czd2expzf31386z21_3911), BgL_cops1387z00_3912);
		}

	}



/* csequence? */
	BGL_EXPORTED_DEF bool_t BGl_csequencezf3zf3zzcgen_copz00(obj_t BgL_objz00_108)
	{
		{	/* Cgen/cop.sch 450 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_108,
				BGl_csequencez00zzcgen_copz00);
		}

	}



/* &csequence? */
	obj_t BGl_z62csequencezf3z91zzcgen_copz00(obj_t BgL_envz00_3913,
		obj_t BgL_objz00_3914)
	{
		{	/* Cgen/cop.sch 450 */
			return BBOOL(BGl_csequencezf3zf3zzcgen_copz00(BgL_objz00_3914));
		}

	}



/* csequence-nil */
	BGL_EXPORTED_DEF BgL_csequencez00_bglt BGl_csequencezd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 451 */
			{	/* Cgen/cop.sch 451 */
				obj_t BgL_classz00_3222;

				BgL_classz00_3222 = BGl_csequencez00zzcgen_copz00;
				{	/* Cgen/cop.sch 451 */
					obj_t BgL__ortest_1106z00_3223;

					BgL__ortest_1106z00_3223 = BGL_CLASS_NIL(BgL_classz00_3222);
					if (CBOOL(BgL__ortest_1106z00_3223))
						{	/* Cgen/cop.sch 451 */
							return ((BgL_csequencez00_bglt) BgL__ortest_1106z00_3223);
						}
					else
						{	/* Cgen/cop.sch 451 */
							return
								((BgL_csequencez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3222));
						}
				}
			}
		}

	}



/* &csequence-nil */
	BgL_csequencez00_bglt BGl_z62csequencezd2nilzb0zzcgen_copz00(obj_t
		BgL_envz00_3915)
	{
		{	/* Cgen/cop.sch 451 */
			return BGl_csequencezd2nilzd2zzcgen_copz00();
		}

	}



/* csequence-cops */
	BGL_EXPORTED_DEF obj_t
		BGl_csequencezd2copszd2zzcgen_copz00(BgL_csequencez00_bglt BgL_oz00_109)
	{
		{	/* Cgen/cop.sch 452 */
			return (((BgL_csequencez00_bglt) COBJECT(BgL_oz00_109))->BgL_copsz00);
		}

	}



/* &csequence-cops */
	obj_t BGl_z62csequencezd2copszb0zzcgen_copz00(obj_t BgL_envz00_3916,
		obj_t BgL_oz00_3917)
	{
		{	/* Cgen/cop.sch 452 */
			return
				BGl_csequencezd2copszd2zzcgen_copz00(
				((BgL_csequencez00_bglt) BgL_oz00_3917));
		}

	}



/* csequence-c-exp? */
	BGL_EXPORTED_DEF bool_t
		BGl_csequencezd2czd2expzf3zf3zzcgen_copz00(BgL_csequencez00_bglt
		BgL_oz00_112)
	{
		{	/* Cgen/cop.sch 454 */
			return
				(((BgL_csequencez00_bglt) COBJECT(BgL_oz00_112))->BgL_czd2expzf3z21);
		}

	}



/* &csequence-c-exp? */
	obj_t BGl_z62csequencezd2czd2expzf3z91zzcgen_copz00(obj_t BgL_envz00_3918,
		obj_t BgL_oz00_3919)
	{
		{	/* Cgen/cop.sch 454 */
			return
				BBOOL(BGl_csequencezd2czd2expzf3zf3zzcgen_copz00(
					((BgL_csequencez00_bglt) BgL_oz00_3919)));
		}

	}



/* csequence-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_csequencezd2loczd2zzcgen_copz00(BgL_csequencez00_bglt BgL_oz00_115)
	{
		{	/* Cgen/cop.sch 456 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_115)))->BgL_locz00);
		}

	}



/* &csequence-loc */
	obj_t BGl_z62csequencezd2loczb0zzcgen_copz00(obj_t BgL_envz00_3920,
		obj_t BgL_oz00_3921)
	{
		{	/* Cgen/cop.sch 456 */
			return
				BGl_csequencezd2loczd2zzcgen_copz00(
				((BgL_csequencez00_bglt) BgL_oz00_3921));
		}

	}



/* csequence-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_csequencezd2loczd2setz12z12zzcgen_copz00(BgL_csequencez00_bglt
		BgL_oz00_116, obj_t BgL_vz00_117)
	{
		{	/* Cgen/cop.sch 457 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_116)))->BgL_locz00) =
				((obj_t) BgL_vz00_117), BUNSPEC);
		}

	}



/* &csequence-loc-set! */
	obj_t BGl_z62csequencezd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3922,
		obj_t BgL_oz00_3923, obj_t BgL_vz00_3924)
	{
		{	/* Cgen/cop.sch 457 */
			return
				BGl_csequencezd2loczd2setz12z12zzcgen_copz00(
				((BgL_csequencez00_bglt) BgL_oz00_3923), BgL_vz00_3924);
		}

	}



/* make-nop */
	BGL_EXPORTED_DEF BgL_nopz00_bglt BGl_makezd2nopzd2zzcgen_copz00(obj_t
		BgL_loc1383z00_118)
	{
		{	/* Cgen/cop.sch 460 */
			{	/* Cgen/cop.sch 460 */
				BgL_nopz00_bglt BgL_new1319z00_5009;

				{	/* Cgen/cop.sch 460 */
					BgL_nopz00_bglt BgL_new1318z00_5010;

					BgL_new1318z00_5010 =
						((BgL_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_nopz00_bgl))));
					{	/* Cgen/cop.sch 460 */
						long BgL_arg1612z00_5011;

						{	/* Cgen/cop.sch 460 */
							long BgL_res2394z00_5012;

							BgL_res2394z00_5012 = BGL_CLASS_INDEX(BGl_nopz00zzcgen_copz00);
							BgL_arg1612z00_5011 = BgL_res2394z00_5012;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1318z00_5010), BgL_arg1612z00_5011);
					}
					BgL_new1319z00_5009 = BgL_new1318z00_5010;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1319z00_5009)))->BgL_locz00) =
					((obj_t) BgL_loc1383z00_118), BUNSPEC);
				return BgL_new1319z00_5009;
			}
		}

	}



/* &make-nop */
	BgL_nopz00_bglt BGl_z62makezd2nopzb0zzcgen_copz00(obj_t BgL_envz00_3925,
		obj_t BgL_loc1383z00_3926)
	{
		{	/* Cgen/cop.sch 460 */
			return BGl_makezd2nopzd2zzcgen_copz00(BgL_loc1383z00_3926);
		}

	}



/* nop? */
	BGL_EXPORTED_DEF bool_t BGl_nopzf3zf3zzcgen_copz00(obj_t BgL_objz00_119)
	{
		{	/* Cgen/cop.sch 461 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_119, BGl_nopz00zzcgen_copz00);
		}

	}



/* &nop? */
	obj_t BGl_z62nopzf3z91zzcgen_copz00(obj_t BgL_envz00_3927,
		obj_t BgL_objz00_3928)
	{
		{	/* Cgen/cop.sch 461 */
			return BBOOL(BGl_nopzf3zf3zzcgen_copz00(BgL_objz00_3928));
		}

	}



/* nop-nil */
	BGL_EXPORTED_DEF BgL_nopz00_bglt BGl_nopzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 462 */
			{	/* Cgen/cop.sch 462 */
				obj_t BgL_classz00_3231;

				BgL_classz00_3231 = BGl_nopz00zzcgen_copz00;
				{	/* Cgen/cop.sch 462 */
					obj_t BgL__ortest_1106z00_3232;

					BgL__ortest_1106z00_3232 = BGL_CLASS_NIL(BgL_classz00_3231);
					if (CBOOL(BgL__ortest_1106z00_3232))
						{	/* Cgen/cop.sch 462 */
							return ((BgL_nopz00_bglt) BgL__ortest_1106z00_3232);
						}
					else
						{	/* Cgen/cop.sch 462 */
							return
								((BgL_nopz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3231));
						}
				}
			}
		}

	}



/* &nop-nil */
	BgL_nopz00_bglt BGl_z62nopzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3929)
	{
		{	/* Cgen/cop.sch 462 */
			return BGl_nopzd2nilzd2zzcgen_copz00();
		}

	}



/* nop-loc */
	BGL_EXPORTED_DEF obj_t BGl_nopzd2loczd2zzcgen_copz00(BgL_nopz00_bglt
		BgL_oz00_120)
	{
		{	/* Cgen/cop.sch 463 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_120)))->BgL_locz00);
		}

	}



/* &nop-loc */
	obj_t BGl_z62nopzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3930,
		obj_t BgL_oz00_3931)
	{
		{	/* Cgen/cop.sch 463 */
			return BGl_nopzd2loczd2zzcgen_copz00(((BgL_nopz00_bglt) BgL_oz00_3931));
		}

	}



/* nop-loc-set! */
	BGL_EXPORTED_DEF obj_t BGl_nopzd2loczd2setz12z12zzcgen_copz00(BgL_nopz00_bglt
		BgL_oz00_121, obj_t BgL_vz00_122)
	{
		{	/* Cgen/cop.sch 464 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_121)))->BgL_locz00) =
				((obj_t) BgL_vz00_122), BUNSPEC);
		}

	}



/* &nop-loc-set! */
	obj_t BGl_z62nopzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3932,
		obj_t BgL_oz00_3933, obj_t BgL_vz00_3934)
	{
		{	/* Cgen/cop.sch 464 */
			return
				BGl_nopzd2loczd2setz12z12zzcgen_copz00(
				((BgL_nopz00_bglt) BgL_oz00_3933), BgL_vz00_3934);
		}

	}



/* make-stop */
	BGL_EXPORTED_DEF BgL_stopz00_bglt BGl_makezd2stopzd2zzcgen_copz00(obj_t
		BgL_loc1380z00_123, BgL_copz00_bglt BgL_value1381z00_124)
	{
		{	/* Cgen/cop.sch 467 */
			{	/* Cgen/cop.sch 467 */
				BgL_stopz00_bglt BgL_new1321z00_5013;

				{	/* Cgen/cop.sch 467 */
					BgL_stopz00_bglt BgL_new1320z00_5014;

					BgL_new1320z00_5014 =
						((BgL_stopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_stopz00_bgl))));
					{	/* Cgen/cop.sch 467 */
						long BgL_arg1613z00_5015;

						{	/* Cgen/cop.sch 467 */
							long BgL_res2395z00_5016;

							BgL_res2395z00_5016 = BGL_CLASS_INDEX(BGl_stopz00zzcgen_copz00);
							BgL_arg1613z00_5015 = BgL_res2395z00_5016;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1320z00_5014), BgL_arg1613z00_5015);
					}
					BgL_new1321z00_5013 = BgL_new1320z00_5014;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1321z00_5013)))->BgL_locz00) =
					((obj_t) BgL_loc1380z00_123), BUNSPEC);
				((((BgL_stopz00_bglt) COBJECT(BgL_new1321z00_5013))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value1381z00_124), BUNSPEC);
				return BgL_new1321z00_5013;
			}
		}

	}



/* &make-stop */
	BgL_stopz00_bglt BGl_z62makezd2stopzb0zzcgen_copz00(obj_t BgL_envz00_3935,
		obj_t BgL_loc1380z00_3936, obj_t BgL_value1381z00_3937)
	{
		{	/* Cgen/cop.sch 467 */
			return
				BGl_makezd2stopzd2zzcgen_copz00(BgL_loc1380z00_3936,
				((BgL_copz00_bglt) BgL_value1381z00_3937));
		}

	}



/* stop? */
	BGL_EXPORTED_DEF bool_t BGl_stopzf3zf3zzcgen_copz00(obj_t BgL_objz00_125)
	{
		{	/* Cgen/cop.sch 468 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_125, BGl_stopz00zzcgen_copz00);
		}

	}



/* &stop? */
	obj_t BGl_z62stopzf3z91zzcgen_copz00(obj_t BgL_envz00_3938,
		obj_t BgL_objz00_3939)
	{
		{	/* Cgen/cop.sch 468 */
			return BBOOL(BGl_stopzf3zf3zzcgen_copz00(BgL_objz00_3939));
		}

	}



/* stop-nil */
	BGL_EXPORTED_DEF BgL_stopz00_bglt BGl_stopzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 469 */
			{	/* Cgen/cop.sch 469 */
				obj_t BgL_classz00_3240;

				BgL_classz00_3240 = BGl_stopz00zzcgen_copz00;
				{	/* Cgen/cop.sch 469 */
					obj_t BgL__ortest_1106z00_3241;

					BgL__ortest_1106z00_3241 = BGL_CLASS_NIL(BgL_classz00_3240);
					if (CBOOL(BgL__ortest_1106z00_3241))
						{	/* Cgen/cop.sch 469 */
							return ((BgL_stopz00_bglt) BgL__ortest_1106z00_3241);
						}
					else
						{	/* Cgen/cop.sch 469 */
							return
								((BgL_stopz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3240));
						}
				}
			}
		}

	}



/* &stop-nil */
	BgL_stopz00_bglt BGl_z62stopzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3940)
	{
		{	/* Cgen/cop.sch 469 */
			return BGl_stopzd2nilzd2zzcgen_copz00();
		}

	}



/* stop-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_stopzd2valuezd2zzcgen_copz00(BgL_stopz00_bglt BgL_oz00_126)
	{
		{	/* Cgen/cop.sch 470 */
			return (((BgL_stopz00_bglt) COBJECT(BgL_oz00_126))->BgL_valuez00);
		}

	}



/* &stop-value */
	BgL_copz00_bglt BGl_z62stopzd2valuezb0zzcgen_copz00(obj_t BgL_envz00_3941,
		obj_t BgL_oz00_3942)
	{
		{	/* Cgen/cop.sch 470 */
			return
				BGl_stopzd2valuezd2zzcgen_copz00(((BgL_stopz00_bglt) BgL_oz00_3942));
		}

	}



/* stop-loc */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2loczd2zzcgen_copz00(BgL_stopz00_bglt
		BgL_oz00_129)
	{
		{	/* Cgen/cop.sch 472 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_129)))->BgL_locz00);
		}

	}



/* &stop-loc */
	obj_t BGl_z62stopzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3943,
		obj_t BgL_oz00_3944)
	{
		{	/* Cgen/cop.sch 472 */
			return BGl_stopzd2loczd2zzcgen_copz00(((BgL_stopz00_bglt) BgL_oz00_3944));
		}

	}



/* stop-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_stopzd2loczd2setz12z12zzcgen_copz00(BgL_stopz00_bglt BgL_oz00_130,
		obj_t BgL_vz00_131)
	{
		{	/* Cgen/cop.sch 473 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_130)))->BgL_locz00) =
				((obj_t) BgL_vz00_131), BUNSPEC);
		}

	}



/* &stop-loc-set! */
	obj_t BGl_z62stopzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3945,
		obj_t BgL_oz00_3946, obj_t BgL_vz00_3947)
	{
		{	/* Cgen/cop.sch 473 */
			return
				BGl_stopzd2loczd2setz12z12zzcgen_copz00(
				((BgL_stopz00_bglt) BgL_oz00_3946), BgL_vz00_3947);
		}

	}



/* make-csetq */
	BGL_EXPORTED_DEF BgL_csetqz00_bglt BGl_makezd2csetqzd2zzcgen_copz00(obj_t
		BgL_loc1376z00_132, BgL_varcz00_bglt BgL_var1377z00_133,
		BgL_copz00_bglt BgL_value1378z00_134)
	{
		{	/* Cgen/cop.sch 476 */
			{	/* Cgen/cop.sch 476 */
				BgL_csetqz00_bglt BgL_new1323z00_5017;

				{	/* Cgen/cop.sch 476 */
					BgL_csetqz00_bglt BgL_new1322z00_5018;

					BgL_new1322z00_5018 =
						((BgL_csetqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_csetqz00_bgl))));
					{	/* Cgen/cop.sch 476 */
						long BgL_arg1624z00_5019;

						{	/* Cgen/cop.sch 476 */
							long BgL_res2396z00_5020;

							BgL_res2396z00_5020 = BGL_CLASS_INDEX(BGl_csetqz00zzcgen_copz00);
							BgL_arg1624z00_5019 = BgL_res2396z00_5020;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1322z00_5018), BgL_arg1624z00_5019);
					}
					BgL_new1323z00_5017 = BgL_new1322z00_5018;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1323z00_5017)))->BgL_locz00) =
					((obj_t) BgL_loc1376z00_132), BUNSPEC);
				((((BgL_csetqz00_bglt) COBJECT(BgL_new1323z00_5017))->BgL_varz00) =
					((BgL_varcz00_bglt) BgL_var1377z00_133), BUNSPEC);
				((((BgL_csetqz00_bglt) COBJECT(BgL_new1323z00_5017))->BgL_valuez00) =
					((BgL_copz00_bglt) BgL_value1378z00_134), BUNSPEC);
				return BgL_new1323z00_5017;
			}
		}

	}



/* &make-csetq */
	BgL_csetqz00_bglt BGl_z62makezd2csetqzb0zzcgen_copz00(obj_t BgL_envz00_3948,
		obj_t BgL_loc1376z00_3949, obj_t BgL_var1377z00_3950,
		obj_t BgL_value1378z00_3951)
	{
		{	/* Cgen/cop.sch 476 */
			return
				BGl_makezd2csetqzd2zzcgen_copz00(BgL_loc1376z00_3949,
				((BgL_varcz00_bglt) BgL_var1377z00_3950),
				((BgL_copz00_bglt) BgL_value1378z00_3951));
		}

	}



/* csetq? */
	BGL_EXPORTED_DEF bool_t BGl_csetqzf3zf3zzcgen_copz00(obj_t BgL_objz00_135)
	{
		{	/* Cgen/cop.sch 477 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_135, BGl_csetqz00zzcgen_copz00);
		}

	}



/* &csetq? */
	obj_t BGl_z62csetqzf3z91zzcgen_copz00(obj_t BgL_envz00_3952,
		obj_t BgL_objz00_3953)
	{
		{	/* Cgen/cop.sch 477 */
			return BBOOL(BGl_csetqzf3zf3zzcgen_copz00(BgL_objz00_3953));
		}

	}



/* csetq-nil */
	BGL_EXPORTED_DEF BgL_csetqz00_bglt BGl_csetqzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 478 */
			{	/* Cgen/cop.sch 478 */
				obj_t BgL_classz00_3249;

				BgL_classz00_3249 = BGl_csetqz00zzcgen_copz00;
				{	/* Cgen/cop.sch 478 */
					obj_t BgL__ortest_1106z00_3250;

					BgL__ortest_1106z00_3250 = BGL_CLASS_NIL(BgL_classz00_3249);
					if (CBOOL(BgL__ortest_1106z00_3250))
						{	/* Cgen/cop.sch 478 */
							return ((BgL_csetqz00_bglt) BgL__ortest_1106z00_3250);
						}
					else
						{	/* Cgen/cop.sch 478 */
							return
								((BgL_csetqz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3249));
						}
				}
			}
		}

	}



/* &csetq-nil */
	BgL_csetqz00_bglt BGl_z62csetqzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3954)
	{
		{	/* Cgen/cop.sch 478 */
			return BGl_csetqzd2nilzd2zzcgen_copz00();
		}

	}



/* csetq-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_csetqzd2valuezd2zzcgen_copz00(BgL_csetqz00_bglt BgL_oz00_136)
	{
		{	/* Cgen/cop.sch 479 */
			return (((BgL_csetqz00_bglt) COBJECT(BgL_oz00_136))->BgL_valuez00);
		}

	}



/* &csetq-value */
	BgL_copz00_bglt BGl_z62csetqzd2valuezb0zzcgen_copz00(obj_t BgL_envz00_3955,
		obj_t BgL_oz00_3956)
	{
		{	/* Cgen/cop.sch 479 */
			return
				BGl_csetqzd2valuezd2zzcgen_copz00(((BgL_csetqz00_bglt) BgL_oz00_3956));
		}

	}



/* csetq-var */
	BGL_EXPORTED_DEF BgL_varcz00_bglt
		BGl_csetqzd2varzd2zzcgen_copz00(BgL_csetqz00_bglt BgL_oz00_139)
	{
		{	/* Cgen/cop.sch 481 */
			return (((BgL_csetqz00_bglt) COBJECT(BgL_oz00_139))->BgL_varz00);
		}

	}



/* &csetq-var */
	BgL_varcz00_bglt BGl_z62csetqzd2varzb0zzcgen_copz00(obj_t BgL_envz00_3957,
		obj_t BgL_oz00_3958)
	{
		{	/* Cgen/cop.sch 481 */
			return
				BGl_csetqzd2varzd2zzcgen_copz00(((BgL_csetqz00_bglt) BgL_oz00_3958));
		}

	}



/* csetq-loc */
	BGL_EXPORTED_DEF obj_t BGl_csetqzd2loczd2zzcgen_copz00(BgL_csetqz00_bglt
		BgL_oz00_142)
	{
		{	/* Cgen/cop.sch 483 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_142)))->BgL_locz00);
		}

	}



/* &csetq-loc */
	obj_t BGl_z62csetqzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3959,
		obj_t BgL_oz00_3960)
	{
		{	/* Cgen/cop.sch 483 */
			return
				BGl_csetqzd2loczd2zzcgen_copz00(((BgL_csetqz00_bglt) BgL_oz00_3960));
		}

	}



/* csetq-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_csetqzd2loczd2setz12z12zzcgen_copz00(BgL_csetqz00_bglt BgL_oz00_143,
		obj_t BgL_vz00_144)
	{
		{	/* Cgen/cop.sch 484 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_143)))->BgL_locz00) =
				((obj_t) BgL_vz00_144), BUNSPEC);
		}

	}



/* &csetq-loc-set! */
	obj_t BGl_z62csetqzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3961,
		obj_t BgL_oz00_3962, obj_t BgL_vz00_3963)
	{
		{	/* Cgen/cop.sch 484 */
			return
				BGl_csetqzd2loczd2setz12z12zzcgen_copz00(
				((BgL_csetqz00_bglt) BgL_oz00_3962), BgL_vz00_3963);
		}

	}



/* make-cif */
	BGL_EXPORTED_DEF BgL_cifz00_bglt BGl_makezd2cifzd2zzcgen_copz00(obj_t
		BgL_loc1368z00_145, BgL_copz00_bglt BgL_test1372z00_146,
		BgL_copz00_bglt BgL_true1373z00_147, BgL_copz00_bglt BgL_false1374z00_148)
	{
		{	/* Cgen/cop.sch 487 */
			{	/* Cgen/cop.sch 487 */
				BgL_cifz00_bglt BgL_new1325z00_5021;

				{	/* Cgen/cop.sch 487 */
					BgL_cifz00_bglt BgL_new1324z00_5022;

					BgL_new1324z00_5022 =
						((BgL_cifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cifz00_bgl))));
					{	/* Cgen/cop.sch 487 */
						long BgL_arg1626z00_5023;

						{	/* Cgen/cop.sch 487 */
							long BgL_res2397z00_5024;

							BgL_res2397z00_5024 = BGL_CLASS_INDEX(BGl_cifz00zzcgen_copz00);
							BgL_arg1626z00_5023 = BgL_res2397z00_5024;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1324z00_5022), BgL_arg1626z00_5023);
					}
					BgL_new1325z00_5021 = BgL_new1324z00_5022;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1325z00_5021)))->BgL_locz00) =
					((obj_t) BgL_loc1368z00_145), BUNSPEC);
				((((BgL_cifz00_bglt) COBJECT(BgL_new1325z00_5021))->BgL_testz00) =
					((BgL_copz00_bglt) BgL_test1372z00_146), BUNSPEC);
				((((BgL_cifz00_bglt) COBJECT(BgL_new1325z00_5021))->BgL_truez00) =
					((BgL_copz00_bglt) BgL_true1373z00_147), BUNSPEC);
				((((BgL_cifz00_bglt) COBJECT(BgL_new1325z00_5021))->BgL_falsez00) =
					((BgL_copz00_bglt) BgL_false1374z00_148), BUNSPEC);
				return BgL_new1325z00_5021;
			}
		}

	}



/* &make-cif */
	BgL_cifz00_bglt BGl_z62makezd2cifzb0zzcgen_copz00(obj_t BgL_envz00_3964,
		obj_t BgL_loc1368z00_3965, obj_t BgL_test1372z00_3966,
		obj_t BgL_true1373z00_3967, obj_t BgL_false1374z00_3968)
	{
		{	/* Cgen/cop.sch 487 */
			return
				BGl_makezd2cifzd2zzcgen_copz00(BgL_loc1368z00_3965,
				((BgL_copz00_bglt) BgL_test1372z00_3966),
				((BgL_copz00_bglt) BgL_true1373z00_3967),
				((BgL_copz00_bglt) BgL_false1374z00_3968));
		}

	}



/* cif? */
	BGL_EXPORTED_DEF bool_t BGl_cifzf3zf3zzcgen_copz00(obj_t BgL_objz00_149)
	{
		{	/* Cgen/cop.sch 488 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_149, BGl_cifz00zzcgen_copz00);
		}

	}



/* &cif? */
	obj_t BGl_z62cifzf3z91zzcgen_copz00(obj_t BgL_envz00_3969,
		obj_t BgL_objz00_3970)
	{
		{	/* Cgen/cop.sch 488 */
			return BBOOL(BGl_cifzf3zf3zzcgen_copz00(BgL_objz00_3970));
		}

	}



/* cif-nil */
	BGL_EXPORTED_DEF BgL_cifz00_bglt BGl_cifzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 489 */
			{	/* Cgen/cop.sch 489 */
				obj_t BgL_classz00_3258;

				BgL_classz00_3258 = BGl_cifz00zzcgen_copz00;
				{	/* Cgen/cop.sch 489 */
					obj_t BgL__ortest_1106z00_3259;

					BgL__ortest_1106z00_3259 = BGL_CLASS_NIL(BgL_classz00_3258);
					if (CBOOL(BgL__ortest_1106z00_3259))
						{	/* Cgen/cop.sch 489 */
							return ((BgL_cifz00_bglt) BgL__ortest_1106z00_3259);
						}
					else
						{	/* Cgen/cop.sch 489 */
							return
								((BgL_cifz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3258));
						}
				}
			}
		}

	}



/* &cif-nil */
	BgL_cifz00_bglt BGl_z62cifzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_3971)
	{
		{	/* Cgen/cop.sch 489 */
			return BGl_cifzd2nilzd2zzcgen_copz00();
		}

	}



/* cif-false */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cifzd2falsezd2zzcgen_copz00(BgL_cifz00_bglt BgL_oz00_150)
	{
		{	/* Cgen/cop.sch 490 */
			return (((BgL_cifz00_bglt) COBJECT(BgL_oz00_150))->BgL_falsez00);
		}

	}



/* &cif-false */
	BgL_copz00_bglt BGl_z62cifzd2falsezb0zzcgen_copz00(obj_t BgL_envz00_3972,
		obj_t BgL_oz00_3973)
	{
		{	/* Cgen/cop.sch 490 */
			return BGl_cifzd2falsezd2zzcgen_copz00(((BgL_cifz00_bglt) BgL_oz00_3973));
		}

	}



/* cif-true */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cifzd2truezd2zzcgen_copz00(BgL_cifz00_bglt BgL_oz00_153)
	{
		{	/* Cgen/cop.sch 492 */
			return (((BgL_cifz00_bglt) COBJECT(BgL_oz00_153))->BgL_truez00);
		}

	}



/* &cif-true */
	BgL_copz00_bglt BGl_z62cifzd2truezb0zzcgen_copz00(obj_t BgL_envz00_3974,
		obj_t BgL_oz00_3975)
	{
		{	/* Cgen/cop.sch 492 */
			return BGl_cifzd2truezd2zzcgen_copz00(((BgL_cifz00_bglt) BgL_oz00_3975));
		}

	}



/* cif-test */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cifzd2testzd2zzcgen_copz00(BgL_cifz00_bglt BgL_oz00_156)
	{
		{	/* Cgen/cop.sch 494 */
			return (((BgL_cifz00_bglt) COBJECT(BgL_oz00_156))->BgL_testz00);
		}

	}



/* &cif-test */
	BgL_copz00_bglt BGl_z62cifzd2testzb0zzcgen_copz00(obj_t BgL_envz00_3976,
		obj_t BgL_oz00_3977)
	{
		{	/* Cgen/cop.sch 494 */
			return BGl_cifzd2testzd2zzcgen_copz00(((BgL_cifz00_bglt) BgL_oz00_3977));
		}

	}



/* cif-loc */
	BGL_EXPORTED_DEF obj_t BGl_cifzd2loczd2zzcgen_copz00(BgL_cifz00_bglt
		BgL_oz00_159)
	{
		{	/* Cgen/cop.sch 496 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_159)))->BgL_locz00);
		}

	}



/* &cif-loc */
	obj_t BGl_z62cifzd2loczb0zzcgen_copz00(obj_t BgL_envz00_3978,
		obj_t BgL_oz00_3979)
	{
		{	/* Cgen/cop.sch 496 */
			return BGl_cifzd2loczd2zzcgen_copz00(((BgL_cifz00_bglt) BgL_oz00_3979));
		}

	}



/* cif-loc-set! */
	BGL_EXPORTED_DEF obj_t BGl_cifzd2loczd2setz12z12zzcgen_copz00(BgL_cifz00_bglt
		BgL_oz00_160, obj_t BgL_vz00_161)
	{
		{	/* Cgen/cop.sch 497 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_160)))->BgL_locz00) =
				((obj_t) BgL_vz00_161), BUNSPEC);
		}

	}



/* &cif-loc-set! */
	obj_t BGl_z62cifzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_3980,
		obj_t BgL_oz00_3981, obj_t BgL_vz00_3982)
	{
		{	/* Cgen/cop.sch 497 */
			return
				BGl_cifzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cifz00_bglt) BgL_oz00_3981), BgL_vz00_3982);
		}

	}



/* make-local-var */
	BGL_EXPORTED_DEF BgL_localzd2varzd2_bglt
		BGl_makezd2localzd2varz00zzcgen_copz00(obj_t BgL_loc1365z00_162,
		obj_t BgL_vars1366z00_163)
	{
		{	/* Cgen/cop.sch 500 */
			{	/* Cgen/cop.sch 500 */
				BgL_localzd2varzd2_bglt BgL_new1327z00_5025;

				{	/* Cgen/cop.sch 500 */
					BgL_localzd2varzd2_bglt BgL_new1326z00_5026;

					BgL_new1326z00_5026 =
						((BgL_localzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_localzd2varzd2_bgl))));
					{	/* Cgen/cop.sch 500 */
						long BgL_arg1627z00_5027;

						{	/* Cgen/cop.sch 500 */
							long BgL_res2398z00_5028;

							BgL_res2398z00_5028 =
								BGL_CLASS_INDEX(BGl_localzd2varzd2zzcgen_copz00);
							BgL_arg1627z00_5027 = BgL_res2398z00_5028;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1326z00_5026), BgL_arg1627z00_5027);
					}
					BgL_new1327z00_5025 = BgL_new1326z00_5026;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1327z00_5025)))->BgL_locz00) =
					((obj_t) BgL_loc1365z00_162), BUNSPEC);
				((((BgL_localzd2varzd2_bglt) COBJECT(BgL_new1327z00_5025))->
						BgL_varsz00) = ((obj_t) BgL_vars1366z00_163), BUNSPEC);
				return BgL_new1327z00_5025;
			}
		}

	}



/* &make-local-var */
	BgL_localzd2varzd2_bglt BGl_z62makezd2localzd2varz62zzcgen_copz00(obj_t
		BgL_envz00_3983, obj_t BgL_loc1365z00_3984, obj_t BgL_vars1366z00_3985)
	{
		{	/* Cgen/cop.sch 500 */
			return
				BGl_makezd2localzd2varz00zzcgen_copz00(BgL_loc1365z00_3984,
				BgL_vars1366z00_3985);
		}

	}



/* local-var? */
	BGL_EXPORTED_DEF bool_t BGl_localzd2varzf3z21zzcgen_copz00(obj_t
		BgL_objz00_164)
	{
		{	/* Cgen/cop.sch 501 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_164,
				BGl_localzd2varzd2zzcgen_copz00);
		}

	}



/* &local-var? */
	obj_t BGl_z62localzd2varzf3z43zzcgen_copz00(obj_t BgL_envz00_3986,
		obj_t BgL_objz00_3987)
	{
		{	/* Cgen/cop.sch 501 */
			return BBOOL(BGl_localzd2varzf3z21zzcgen_copz00(BgL_objz00_3987));
		}

	}



/* local-var-nil */
	BGL_EXPORTED_DEF BgL_localzd2varzd2_bglt
		BGl_localzd2varzd2nilz00zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 502 */
			{	/* Cgen/cop.sch 502 */
				obj_t BgL_classz00_3267;

				BgL_classz00_3267 = BGl_localzd2varzd2zzcgen_copz00;
				{	/* Cgen/cop.sch 502 */
					obj_t BgL__ortest_1106z00_3268;

					BgL__ortest_1106z00_3268 = BGL_CLASS_NIL(BgL_classz00_3267);
					if (CBOOL(BgL__ortest_1106z00_3268))
						{	/* Cgen/cop.sch 502 */
							return ((BgL_localzd2varzd2_bglt) BgL__ortest_1106z00_3268);
						}
					else
						{	/* Cgen/cop.sch 502 */
							return
								((BgL_localzd2varzd2_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3267));
						}
				}
			}
		}

	}



/* &local-var-nil */
	BgL_localzd2varzd2_bglt BGl_z62localzd2varzd2nilz62zzcgen_copz00(obj_t
		BgL_envz00_3988)
	{
		{	/* Cgen/cop.sch 502 */
			return BGl_localzd2varzd2nilz00zzcgen_copz00();
		}

	}



/* local-var-vars */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2varzd2varsz00zzcgen_copz00(BgL_localzd2varzd2_bglt BgL_oz00_165)
	{
		{	/* Cgen/cop.sch 503 */
			return (((BgL_localzd2varzd2_bglt) COBJECT(BgL_oz00_165))->BgL_varsz00);
		}

	}



/* &local-var-vars */
	obj_t BGl_z62localzd2varzd2varsz62zzcgen_copz00(obj_t BgL_envz00_3989,
		obj_t BgL_oz00_3990)
	{
		{	/* Cgen/cop.sch 503 */
			return
				BGl_localzd2varzd2varsz00zzcgen_copz00(
				((BgL_localzd2varzd2_bglt) BgL_oz00_3990));
		}

	}



/* local-var-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2varzd2locz00zzcgen_copz00(BgL_localzd2varzd2_bglt BgL_oz00_168)
	{
		{	/* Cgen/cop.sch 505 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_168)))->BgL_locz00);
		}

	}



/* &local-var-loc */
	obj_t BGl_z62localzd2varzd2locz62zzcgen_copz00(obj_t BgL_envz00_3991,
		obj_t BgL_oz00_3992)
	{
		{	/* Cgen/cop.sch 505 */
			return
				BGl_localzd2varzd2locz00zzcgen_copz00(
				((BgL_localzd2varzd2_bglt) BgL_oz00_3992));
		}

	}



/* local-var-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2varzd2loczd2setz12zc0zzcgen_copz00(BgL_localzd2varzd2_bglt
		BgL_oz00_169, obj_t BgL_vz00_170)
	{
		{	/* Cgen/cop.sch 506 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_169)))->BgL_locz00) =
				((obj_t) BgL_vz00_170), BUNSPEC);
		}

	}



/* &local-var-loc-set! */
	obj_t BGl_z62localzd2varzd2loczd2setz12za2zzcgen_copz00(obj_t BgL_envz00_3993,
		obj_t BgL_oz00_3994, obj_t BgL_vz00_3995)
	{
		{	/* Cgen/cop.sch 506 */
			return
				BGl_localzd2varzd2loczd2setz12zc0zzcgen_copz00(
				((BgL_localzd2varzd2_bglt) BgL_oz00_3994), BgL_vz00_3995);
		}

	}



/* make-cfuncall */
	BGL_EXPORTED_DEF BgL_cfuncallz00_bglt
		BGl_makezd2cfuncallzd2zzcgen_copz00(obj_t BgL_loc1359z00_171,
		BgL_copz00_bglt BgL_fun1360z00_172, obj_t BgL_args1361z00_173,
		obj_t BgL_strength1362z00_174, obj_t BgL_type1363z00_175)
	{
		{	/* Cgen/cop.sch 509 */
			{	/* Cgen/cop.sch 509 */
				BgL_cfuncallz00_bglt BgL_new1329z00_5029;

				{	/* Cgen/cop.sch 509 */
					BgL_cfuncallz00_bglt BgL_new1328z00_5030;

					BgL_new1328z00_5030 =
						((BgL_cfuncallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cfuncallz00_bgl))));
					{	/* Cgen/cop.sch 509 */
						long BgL_arg1631z00_5031;

						{	/* Cgen/cop.sch 509 */
							long BgL_res2399z00_5032;

							BgL_res2399z00_5032 =
								BGL_CLASS_INDEX(BGl_cfuncallz00zzcgen_copz00);
							BgL_arg1631z00_5031 = BgL_res2399z00_5032;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1328z00_5030), BgL_arg1631z00_5031);
					}
					BgL_new1329z00_5029 = BgL_new1328z00_5030;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1329z00_5029)))->BgL_locz00) =
					((obj_t) BgL_loc1359z00_171), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1329z00_5029))->BgL_funz00) =
					((BgL_copz00_bglt) BgL_fun1360z00_172), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1329z00_5029))->BgL_argsz00) =
					((obj_t) BgL_args1361z00_173), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1329z00_5029))->
						BgL_strengthz00) = ((obj_t) BgL_strength1362z00_174), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1329z00_5029))->BgL_typez00) =
					((obj_t) BgL_type1363z00_175), BUNSPEC);
				return BgL_new1329z00_5029;
			}
		}

	}



/* &make-cfuncall */
	BgL_cfuncallz00_bglt BGl_z62makezd2cfuncallzb0zzcgen_copz00(obj_t
		BgL_envz00_3996, obj_t BgL_loc1359z00_3997, obj_t BgL_fun1360z00_3998,
		obj_t BgL_args1361z00_3999, obj_t BgL_strength1362z00_4000,
		obj_t BgL_type1363z00_4001)
	{
		{	/* Cgen/cop.sch 509 */
			return
				BGl_makezd2cfuncallzd2zzcgen_copz00(BgL_loc1359z00_3997,
				((BgL_copz00_bglt) BgL_fun1360z00_3998), BgL_args1361z00_3999,
				BgL_strength1362z00_4000, BgL_type1363z00_4001);
		}

	}



/* cfuncall? */
	BGL_EXPORTED_DEF bool_t BGl_cfuncallzf3zf3zzcgen_copz00(obj_t BgL_objz00_176)
	{
		{	/* Cgen/cop.sch 510 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_176,
				BGl_cfuncallz00zzcgen_copz00);
		}

	}



/* &cfuncall? */
	obj_t BGl_z62cfuncallzf3z91zzcgen_copz00(obj_t BgL_envz00_4002,
		obj_t BgL_objz00_4003)
	{
		{	/* Cgen/cop.sch 510 */
			return BBOOL(BGl_cfuncallzf3zf3zzcgen_copz00(BgL_objz00_4003));
		}

	}



/* cfuncall-nil */
	BGL_EXPORTED_DEF BgL_cfuncallz00_bglt BGl_cfuncallzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 511 */
			{	/* Cgen/cop.sch 511 */
				obj_t BgL_classz00_3276;

				BgL_classz00_3276 = BGl_cfuncallz00zzcgen_copz00;
				{	/* Cgen/cop.sch 511 */
					obj_t BgL__ortest_1106z00_3277;

					BgL__ortest_1106z00_3277 = BGL_CLASS_NIL(BgL_classz00_3276);
					if (CBOOL(BgL__ortest_1106z00_3277))
						{	/* Cgen/cop.sch 511 */
							return ((BgL_cfuncallz00_bglt) BgL__ortest_1106z00_3277);
						}
					else
						{	/* Cgen/cop.sch 511 */
							return
								((BgL_cfuncallz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3276));
						}
				}
			}
		}

	}



/* &cfuncall-nil */
	BgL_cfuncallz00_bglt BGl_z62cfuncallzd2nilzb0zzcgen_copz00(obj_t
		BgL_envz00_4004)
	{
		{	/* Cgen/cop.sch 511 */
			return BGl_cfuncallzd2nilzd2zzcgen_copz00();
		}

	}



/* cfuncall-type */
	BGL_EXPORTED_DEF obj_t
		BGl_cfuncallzd2typezd2zzcgen_copz00(BgL_cfuncallz00_bglt BgL_oz00_177)
	{
		{	/* Cgen/cop.sch 512 */
			return (((BgL_cfuncallz00_bglt) COBJECT(BgL_oz00_177))->BgL_typez00);
		}

	}



/* &cfuncall-type */
	obj_t BGl_z62cfuncallzd2typezb0zzcgen_copz00(obj_t BgL_envz00_4005,
		obj_t BgL_oz00_4006)
	{
		{	/* Cgen/cop.sch 512 */
			return
				BGl_cfuncallzd2typezd2zzcgen_copz00(
				((BgL_cfuncallz00_bglt) BgL_oz00_4006));
		}

	}



/* cfuncall-strength */
	BGL_EXPORTED_DEF obj_t
		BGl_cfuncallzd2strengthzd2zzcgen_copz00(BgL_cfuncallz00_bglt BgL_oz00_180)
	{
		{	/* Cgen/cop.sch 514 */
			return (((BgL_cfuncallz00_bglt) COBJECT(BgL_oz00_180))->BgL_strengthz00);
		}

	}



/* &cfuncall-strength */
	obj_t BGl_z62cfuncallzd2strengthzb0zzcgen_copz00(obj_t BgL_envz00_4007,
		obj_t BgL_oz00_4008)
	{
		{	/* Cgen/cop.sch 514 */
			return
				BGl_cfuncallzd2strengthzd2zzcgen_copz00(
				((BgL_cfuncallz00_bglt) BgL_oz00_4008));
		}

	}



/* cfuncall-args */
	BGL_EXPORTED_DEF obj_t
		BGl_cfuncallzd2argszd2zzcgen_copz00(BgL_cfuncallz00_bglt BgL_oz00_183)
	{
		{	/* Cgen/cop.sch 516 */
			return (((BgL_cfuncallz00_bglt) COBJECT(BgL_oz00_183))->BgL_argsz00);
		}

	}



/* &cfuncall-args */
	obj_t BGl_z62cfuncallzd2argszb0zzcgen_copz00(obj_t BgL_envz00_4009,
		obj_t BgL_oz00_4010)
	{
		{	/* Cgen/cop.sch 516 */
			return
				BGl_cfuncallzd2argszd2zzcgen_copz00(
				((BgL_cfuncallz00_bglt) BgL_oz00_4010));
		}

	}



/* cfuncall-fun */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cfuncallzd2funzd2zzcgen_copz00(BgL_cfuncallz00_bglt BgL_oz00_186)
	{
		{	/* Cgen/cop.sch 518 */
			return (((BgL_cfuncallz00_bglt) COBJECT(BgL_oz00_186))->BgL_funz00);
		}

	}



/* &cfuncall-fun */
	BgL_copz00_bglt BGl_z62cfuncallzd2funzb0zzcgen_copz00(obj_t BgL_envz00_4011,
		obj_t BgL_oz00_4012)
	{
		{	/* Cgen/cop.sch 518 */
			return
				BGl_cfuncallzd2funzd2zzcgen_copz00(
				((BgL_cfuncallz00_bglt) BgL_oz00_4012));
		}

	}



/* cfuncall-loc */
	BGL_EXPORTED_DEF obj_t BGl_cfuncallzd2loczd2zzcgen_copz00(BgL_cfuncallz00_bglt
		BgL_oz00_189)
	{
		{	/* Cgen/cop.sch 520 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_189)))->BgL_locz00);
		}

	}



/* &cfuncall-loc */
	obj_t BGl_z62cfuncallzd2loczb0zzcgen_copz00(obj_t BgL_envz00_4013,
		obj_t BgL_oz00_4014)
	{
		{	/* Cgen/cop.sch 520 */
			return
				BGl_cfuncallzd2loczd2zzcgen_copz00(
				((BgL_cfuncallz00_bglt) BgL_oz00_4014));
		}

	}



/* cfuncall-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfuncallzd2loczd2setz12z12zzcgen_copz00(BgL_cfuncallz00_bglt
		BgL_oz00_190, obj_t BgL_vz00_191)
	{
		{	/* Cgen/cop.sch 521 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_190)))->BgL_locz00) =
				((obj_t) BgL_vz00_191), BUNSPEC);
		}

	}



/* &cfuncall-loc-set! */
	obj_t BGl_z62cfuncallzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_4015,
		obj_t BgL_oz00_4016, obj_t BgL_vz00_4017)
	{
		{	/* Cgen/cop.sch 521 */
			return
				BGl_cfuncallzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cfuncallz00_bglt) BgL_oz00_4016), BgL_vz00_4017);
		}

	}



/* make-capply */
	BGL_EXPORTED_DEF BgL_capplyz00_bglt BGl_makezd2capplyzd2zzcgen_copz00(obj_t
		BgL_loc1353z00_192, BgL_copz00_bglt BgL_fun1354z00_193,
		BgL_copz00_bglt BgL_arg1357z00_194)
	{
		{	/* Cgen/cop.sch 524 */
			{	/* Cgen/cop.sch 524 */
				BgL_capplyz00_bglt BgL_new1331z00_5033;

				{	/* Cgen/cop.sch 524 */
					BgL_capplyz00_bglt BgL_new1330z00_5034;

					BgL_new1330z00_5034 =
						((BgL_capplyz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_capplyz00_bgl))));
					{	/* Cgen/cop.sch 524 */
						long BgL_arg1634z00_5035;

						{	/* Cgen/cop.sch 524 */
							long BgL_res2400z00_5036;

							BgL_res2400z00_5036 = BGL_CLASS_INDEX(BGl_capplyz00zzcgen_copz00);
							BgL_arg1634z00_5035 = BgL_res2400z00_5036;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1330z00_5034), BgL_arg1634z00_5035);
					}
					BgL_new1331z00_5033 = BgL_new1330z00_5034;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1331z00_5033)))->BgL_locz00) =
					((obj_t) BgL_loc1353z00_192), BUNSPEC);
				((((BgL_capplyz00_bglt) COBJECT(BgL_new1331z00_5033))->BgL_funz00) =
					((BgL_copz00_bglt) BgL_fun1354z00_193), BUNSPEC);
				((((BgL_capplyz00_bglt) COBJECT(BgL_new1331z00_5033))->BgL_argz00) =
					((BgL_copz00_bglt) BgL_arg1357z00_194), BUNSPEC);
				return BgL_new1331z00_5033;
			}
		}

	}



/* &make-capply */
	BgL_capplyz00_bglt BGl_z62makezd2capplyzb0zzcgen_copz00(obj_t BgL_envz00_4018,
		obj_t BgL_loc1353z00_4019, obj_t BgL_fun1354z00_4020,
		obj_t BgL_arg1357z00_4021)
	{
		{	/* Cgen/cop.sch 524 */
			return
				BGl_makezd2capplyzd2zzcgen_copz00(BgL_loc1353z00_4019,
				((BgL_copz00_bglt) BgL_fun1354z00_4020),
				((BgL_copz00_bglt) BgL_arg1357z00_4021));
		}

	}



/* capply? */
	BGL_EXPORTED_DEF bool_t BGl_capplyzf3zf3zzcgen_copz00(obj_t BgL_objz00_195)
	{
		{	/* Cgen/cop.sch 525 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_195, BGl_capplyz00zzcgen_copz00);
		}

	}



/* &capply? */
	obj_t BGl_z62capplyzf3z91zzcgen_copz00(obj_t BgL_envz00_4022,
		obj_t BgL_objz00_4023)
	{
		{	/* Cgen/cop.sch 525 */
			return BBOOL(BGl_capplyzf3zf3zzcgen_copz00(BgL_objz00_4023));
		}

	}



/* capply-nil */
	BGL_EXPORTED_DEF BgL_capplyz00_bglt BGl_capplyzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 526 */
			{	/* Cgen/cop.sch 526 */
				obj_t BgL_classz00_3285;

				BgL_classz00_3285 = BGl_capplyz00zzcgen_copz00;
				{	/* Cgen/cop.sch 526 */
					obj_t BgL__ortest_1106z00_3286;

					BgL__ortest_1106z00_3286 = BGL_CLASS_NIL(BgL_classz00_3285);
					if (CBOOL(BgL__ortest_1106z00_3286))
						{	/* Cgen/cop.sch 526 */
							return ((BgL_capplyz00_bglt) BgL__ortest_1106z00_3286);
						}
					else
						{	/* Cgen/cop.sch 526 */
							return
								((BgL_capplyz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3285));
						}
				}
			}
		}

	}



/* &capply-nil */
	BgL_capplyz00_bglt BGl_z62capplyzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_4024)
	{
		{	/* Cgen/cop.sch 526 */
			return BGl_capplyzd2nilzd2zzcgen_copz00();
		}

	}



/* capply-arg */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_capplyzd2argzd2zzcgen_copz00(BgL_capplyz00_bglt BgL_oz00_196)
	{
		{	/* Cgen/cop.sch 527 */
			return (((BgL_capplyz00_bglt) COBJECT(BgL_oz00_196))->BgL_argz00);
		}

	}



/* &capply-arg */
	BgL_copz00_bglt BGl_z62capplyzd2argzb0zzcgen_copz00(obj_t BgL_envz00_4025,
		obj_t BgL_oz00_4026)
	{
		{	/* Cgen/cop.sch 527 */
			return
				BGl_capplyzd2argzd2zzcgen_copz00(((BgL_capplyz00_bglt) BgL_oz00_4026));
		}

	}



/* capply-fun */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_capplyzd2funzd2zzcgen_copz00(BgL_capplyz00_bglt BgL_oz00_199)
	{
		{	/* Cgen/cop.sch 529 */
			return (((BgL_capplyz00_bglt) COBJECT(BgL_oz00_199))->BgL_funz00);
		}

	}



/* &capply-fun */
	BgL_copz00_bglt BGl_z62capplyzd2funzb0zzcgen_copz00(obj_t BgL_envz00_4027,
		obj_t BgL_oz00_4028)
	{
		{	/* Cgen/cop.sch 529 */
			return
				BGl_capplyzd2funzd2zzcgen_copz00(((BgL_capplyz00_bglt) BgL_oz00_4028));
		}

	}



/* capply-loc */
	BGL_EXPORTED_DEF obj_t BGl_capplyzd2loczd2zzcgen_copz00(BgL_capplyz00_bglt
		BgL_oz00_202)
	{
		{	/* Cgen/cop.sch 531 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_202)))->BgL_locz00);
		}

	}



/* &capply-loc */
	obj_t BGl_z62capplyzd2loczb0zzcgen_copz00(obj_t BgL_envz00_4029,
		obj_t BgL_oz00_4030)
	{
		{	/* Cgen/cop.sch 531 */
			return
				BGl_capplyzd2loczd2zzcgen_copz00(((BgL_capplyz00_bglt) BgL_oz00_4030));
		}

	}



/* capply-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_capplyzd2loczd2setz12z12zzcgen_copz00(BgL_capplyz00_bglt BgL_oz00_203,
		obj_t BgL_vz00_204)
	{
		{	/* Cgen/cop.sch 532 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_203)))->BgL_locz00) =
				((obj_t) BgL_vz00_204), BUNSPEC);
		}

	}



/* &capply-loc-set! */
	obj_t BGl_z62capplyzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_4031,
		obj_t BgL_oz00_4032, obj_t BgL_vz00_4033)
	{
		{	/* Cgen/cop.sch 532 */
			return
				BGl_capplyzd2loczd2setz12z12zzcgen_copz00(
				((BgL_capplyz00_bglt) BgL_oz00_4032), BgL_vz00_4033);
		}

	}



/* make-capp */
	BGL_EXPORTED_DEF BgL_cappz00_bglt BGl_makezd2cappzd2zzcgen_copz00(obj_t
		BgL_loc1349z00_205, BgL_copz00_bglt BgL_fun1350z00_206,
		obj_t BgL_args1351z00_207)
	{
		{	/* Cgen/cop.sch 535 */
			{	/* Cgen/cop.sch 535 */
				BgL_cappz00_bglt BgL_new1333z00_5037;

				{	/* Cgen/cop.sch 535 */
					BgL_cappz00_bglt BgL_new1332z00_5038;

					BgL_new1332z00_5038 =
						((BgL_cappz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cappz00_bgl))));
					{	/* Cgen/cop.sch 535 */
						long BgL_arg1639z00_5039;

						{	/* Cgen/cop.sch 535 */
							long BgL_res2401z00_5040;

							BgL_res2401z00_5040 = BGL_CLASS_INDEX(BGl_cappz00zzcgen_copz00);
							BgL_arg1639z00_5039 = BgL_res2401z00_5040;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1332z00_5038), BgL_arg1639z00_5039);
					}
					BgL_new1333z00_5037 = BgL_new1332z00_5038;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1333z00_5037)))->BgL_locz00) =
					((obj_t) BgL_loc1349z00_205), BUNSPEC);
				((((BgL_cappz00_bglt) COBJECT(BgL_new1333z00_5037))->BgL_funz00) =
					((BgL_copz00_bglt) BgL_fun1350z00_206), BUNSPEC);
				((((BgL_cappz00_bglt) COBJECT(BgL_new1333z00_5037))->BgL_argsz00) =
					((obj_t) BgL_args1351z00_207), BUNSPEC);
				return BgL_new1333z00_5037;
			}
		}

	}



/* &make-capp */
	BgL_cappz00_bglt BGl_z62makezd2cappzb0zzcgen_copz00(obj_t BgL_envz00_4034,
		obj_t BgL_loc1349z00_4035, obj_t BgL_fun1350z00_4036,
		obj_t BgL_args1351z00_4037)
	{
		{	/* Cgen/cop.sch 535 */
			return
				BGl_makezd2cappzd2zzcgen_copz00(BgL_loc1349z00_4035,
				((BgL_copz00_bglt) BgL_fun1350z00_4036), BgL_args1351z00_4037);
		}

	}



/* capp? */
	BGL_EXPORTED_DEF bool_t BGl_cappzf3zf3zzcgen_copz00(obj_t BgL_objz00_208)
	{
		{	/* Cgen/cop.sch 536 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_208, BGl_cappz00zzcgen_copz00);
		}

	}



/* &capp? */
	obj_t BGl_z62cappzf3z91zzcgen_copz00(obj_t BgL_envz00_4038,
		obj_t BgL_objz00_4039)
	{
		{	/* Cgen/cop.sch 536 */
			return BBOOL(BGl_cappzf3zf3zzcgen_copz00(BgL_objz00_4039));
		}

	}



/* capp-nil */
	BGL_EXPORTED_DEF BgL_cappz00_bglt BGl_cappzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 537 */
			{	/* Cgen/cop.sch 537 */
				obj_t BgL_classz00_3294;

				BgL_classz00_3294 = BGl_cappz00zzcgen_copz00;
				{	/* Cgen/cop.sch 537 */
					obj_t BgL__ortest_1106z00_3295;

					BgL__ortest_1106z00_3295 = BGL_CLASS_NIL(BgL_classz00_3294);
					if (CBOOL(BgL__ortest_1106z00_3295))
						{	/* Cgen/cop.sch 537 */
							return ((BgL_cappz00_bglt) BgL__ortest_1106z00_3295);
						}
					else
						{	/* Cgen/cop.sch 537 */
							return
								((BgL_cappz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3294));
						}
				}
			}
		}

	}



/* &capp-nil */
	BgL_cappz00_bglt BGl_z62cappzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_4040)
	{
		{	/* Cgen/cop.sch 537 */
			return BGl_cappzd2nilzd2zzcgen_copz00();
		}

	}



/* capp-args */
	BGL_EXPORTED_DEF obj_t BGl_cappzd2argszd2zzcgen_copz00(BgL_cappz00_bglt
		BgL_oz00_209)
	{
		{	/* Cgen/cop.sch 538 */
			return (((BgL_cappz00_bglt) COBJECT(BgL_oz00_209))->BgL_argsz00);
		}

	}



/* &capp-args */
	obj_t BGl_z62cappzd2argszb0zzcgen_copz00(obj_t BgL_envz00_4041,
		obj_t BgL_oz00_4042)
	{
		{	/* Cgen/cop.sch 538 */
			return
				BGl_cappzd2argszd2zzcgen_copz00(((BgL_cappz00_bglt) BgL_oz00_4042));
		}

	}



/* capp-fun */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cappzd2funzd2zzcgen_copz00(BgL_cappz00_bglt BgL_oz00_212)
	{
		{	/* Cgen/cop.sch 540 */
			return (((BgL_cappz00_bglt) COBJECT(BgL_oz00_212))->BgL_funz00);
		}

	}



/* &capp-fun */
	BgL_copz00_bglt BGl_z62cappzd2funzb0zzcgen_copz00(obj_t BgL_envz00_4043,
		obj_t BgL_oz00_4044)
	{
		{	/* Cgen/cop.sch 540 */
			return BGl_cappzd2funzd2zzcgen_copz00(((BgL_cappz00_bglt) BgL_oz00_4044));
		}

	}



/* capp-loc */
	BGL_EXPORTED_DEF obj_t BGl_cappzd2loczd2zzcgen_copz00(BgL_cappz00_bglt
		BgL_oz00_215)
	{
		{	/* Cgen/cop.sch 542 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_215)))->BgL_locz00);
		}

	}



/* &capp-loc */
	obj_t BGl_z62cappzd2loczb0zzcgen_copz00(obj_t BgL_envz00_4045,
		obj_t BgL_oz00_4046)
	{
		{	/* Cgen/cop.sch 542 */
			return BGl_cappzd2loczd2zzcgen_copz00(((BgL_cappz00_bglt) BgL_oz00_4046));
		}

	}



/* capp-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cappzd2loczd2setz12z12zzcgen_copz00(BgL_cappz00_bglt BgL_oz00_216,
		obj_t BgL_vz00_217)
	{
		{	/* Cgen/cop.sch 543 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_216)))->BgL_locz00) =
				((obj_t) BgL_vz00_217), BUNSPEC);
		}

	}



/* &capp-loc-set! */
	obj_t BGl_z62cappzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_4047,
		obj_t BgL_oz00_4048, obj_t BgL_vz00_4049)
	{
		{	/* Cgen/cop.sch 543 */
			return
				BGl_cappzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cappz00_bglt) BgL_oz00_4048), BgL_vz00_4049);
		}

	}



/* make-cfail */
	BGL_EXPORTED_DEF BgL_cfailz00_bglt BGl_makezd2cfailzd2zzcgen_copz00(obj_t
		BgL_loc1344z00_218, BgL_copz00_bglt BgL_proc1345z00_219,
		BgL_copz00_bglt BgL_msg1346z00_220, BgL_copz00_bglt BgL_obj1347z00_221)
	{
		{	/* Cgen/cop.sch 546 */
			{	/* Cgen/cop.sch 546 */
				BgL_cfailz00_bglt BgL_new1335z00_5041;

				{	/* Cgen/cop.sch 546 */
					BgL_cfailz00_bglt BgL_new1334z00_5042;

					BgL_new1334z00_5042 =
						((BgL_cfailz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cfailz00_bgl))));
					{	/* Cgen/cop.sch 546 */
						long BgL_arg1640z00_5043;

						{	/* Cgen/cop.sch 546 */
							long BgL_res2402z00_5044;

							BgL_res2402z00_5044 = BGL_CLASS_INDEX(BGl_cfailz00zzcgen_copz00);
							BgL_arg1640z00_5043 = BgL_res2402z00_5044;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1334z00_5042), BgL_arg1640z00_5043);
					}
					BgL_new1335z00_5041 = BgL_new1334z00_5042;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1335z00_5041)))->BgL_locz00) =
					((obj_t) BgL_loc1344z00_218), BUNSPEC);
				((((BgL_cfailz00_bglt) COBJECT(BgL_new1335z00_5041))->BgL_procz00) =
					((BgL_copz00_bglt) BgL_proc1345z00_219), BUNSPEC);
				((((BgL_cfailz00_bglt) COBJECT(BgL_new1335z00_5041))->BgL_msgz00) =
					((BgL_copz00_bglt) BgL_msg1346z00_220), BUNSPEC);
				((((BgL_cfailz00_bglt) COBJECT(BgL_new1335z00_5041))->BgL_objz00) =
					((BgL_copz00_bglt) BgL_obj1347z00_221), BUNSPEC);
				return BgL_new1335z00_5041;
			}
		}

	}



/* &make-cfail */
	BgL_cfailz00_bglt BGl_z62makezd2cfailzb0zzcgen_copz00(obj_t BgL_envz00_4050,
		obj_t BgL_loc1344z00_4051, obj_t BgL_proc1345z00_4052,
		obj_t BgL_msg1346z00_4053, obj_t BgL_obj1347z00_4054)
	{
		{	/* Cgen/cop.sch 546 */
			return
				BGl_makezd2cfailzd2zzcgen_copz00(BgL_loc1344z00_4051,
				((BgL_copz00_bglt) BgL_proc1345z00_4052),
				((BgL_copz00_bglt) BgL_msg1346z00_4053),
				((BgL_copz00_bglt) BgL_obj1347z00_4054));
		}

	}



/* cfail? */
	BGL_EXPORTED_DEF bool_t BGl_cfailzf3zf3zzcgen_copz00(obj_t BgL_objz00_222)
	{
		{	/* Cgen/cop.sch 547 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_222, BGl_cfailz00zzcgen_copz00);
		}

	}



/* &cfail? */
	obj_t BGl_z62cfailzf3z91zzcgen_copz00(obj_t BgL_envz00_4055,
		obj_t BgL_objz00_4056)
	{
		{	/* Cgen/cop.sch 547 */
			return BBOOL(BGl_cfailzf3zf3zzcgen_copz00(BgL_objz00_4056));
		}

	}



/* cfail-nil */
	BGL_EXPORTED_DEF BgL_cfailz00_bglt BGl_cfailzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 548 */
			{	/* Cgen/cop.sch 548 */
				obj_t BgL_classz00_3303;

				BgL_classz00_3303 = BGl_cfailz00zzcgen_copz00;
				{	/* Cgen/cop.sch 548 */
					obj_t BgL__ortest_1106z00_3304;

					BgL__ortest_1106z00_3304 = BGL_CLASS_NIL(BgL_classz00_3303);
					if (CBOOL(BgL__ortest_1106z00_3304))
						{	/* Cgen/cop.sch 548 */
							return ((BgL_cfailz00_bglt) BgL__ortest_1106z00_3304);
						}
					else
						{	/* Cgen/cop.sch 548 */
							return
								((BgL_cfailz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3303));
						}
				}
			}
		}

	}



/* &cfail-nil */
	BgL_cfailz00_bglt BGl_z62cfailzd2nilzb0zzcgen_copz00(obj_t BgL_envz00_4057)
	{
		{	/* Cgen/cop.sch 548 */
			return BGl_cfailzd2nilzd2zzcgen_copz00();
		}

	}



/* cfail-obj */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cfailzd2objzd2zzcgen_copz00(BgL_cfailz00_bglt BgL_oz00_223)
	{
		{	/* Cgen/cop.sch 549 */
			return (((BgL_cfailz00_bglt) COBJECT(BgL_oz00_223))->BgL_objz00);
		}

	}



/* &cfail-obj */
	BgL_copz00_bglt BGl_z62cfailzd2objzb0zzcgen_copz00(obj_t BgL_envz00_4058,
		obj_t BgL_oz00_4059)
	{
		{	/* Cgen/cop.sch 549 */
			return
				BGl_cfailzd2objzd2zzcgen_copz00(((BgL_cfailz00_bglt) BgL_oz00_4059));
		}

	}



/* cfail-msg */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cfailzd2msgzd2zzcgen_copz00(BgL_cfailz00_bglt BgL_oz00_226)
	{
		{	/* Cgen/cop.sch 551 */
			return (((BgL_cfailz00_bglt) COBJECT(BgL_oz00_226))->BgL_msgz00);
		}

	}



/* &cfail-msg */
	BgL_copz00_bglt BGl_z62cfailzd2msgzb0zzcgen_copz00(obj_t BgL_envz00_4060,
		obj_t BgL_oz00_4061)
	{
		{	/* Cgen/cop.sch 551 */
			return
				BGl_cfailzd2msgzd2zzcgen_copz00(((BgL_cfailz00_bglt) BgL_oz00_4061));
		}

	}



/* cfail-proc */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cfailzd2proczd2zzcgen_copz00(BgL_cfailz00_bglt BgL_oz00_229)
	{
		{	/* Cgen/cop.sch 553 */
			return (((BgL_cfailz00_bglt) COBJECT(BgL_oz00_229))->BgL_procz00);
		}

	}



/* &cfail-proc */
	BgL_copz00_bglt BGl_z62cfailzd2proczb0zzcgen_copz00(obj_t BgL_envz00_4062,
		obj_t BgL_oz00_4063)
	{
		{	/* Cgen/cop.sch 553 */
			return
				BGl_cfailzd2proczd2zzcgen_copz00(((BgL_cfailz00_bglt) BgL_oz00_4063));
		}

	}



/* cfail-loc */
	BGL_EXPORTED_DEF obj_t BGl_cfailzd2loczd2zzcgen_copz00(BgL_cfailz00_bglt
		BgL_oz00_232)
	{
		{	/* Cgen/cop.sch 555 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_232)))->BgL_locz00);
		}

	}



/* &cfail-loc */
	obj_t BGl_z62cfailzd2loczb0zzcgen_copz00(obj_t BgL_envz00_4064,
		obj_t BgL_oz00_4065)
	{
		{	/* Cgen/cop.sch 555 */
			return
				BGl_cfailzd2loczd2zzcgen_copz00(((BgL_cfailz00_bglt) BgL_oz00_4065));
		}

	}



/* cfail-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cfailzd2loczd2setz12z12zzcgen_copz00(BgL_cfailz00_bglt BgL_oz00_233,
		obj_t BgL_vz00_234)
	{
		{	/* Cgen/cop.sch 556 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_233)))->BgL_locz00) =
				((obj_t) BgL_vz00_234), BUNSPEC);
		}

	}



/* &cfail-loc-set! */
	obj_t BGl_z62cfailzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_4066,
		obj_t BgL_oz00_4067, obj_t BgL_vz00_4068)
	{
		{	/* Cgen/cop.sch 556 */
			return
				BGl_cfailzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cfailz00_bglt) BgL_oz00_4067), BgL_vz00_4068);
		}

	}



/* make-cswitch */
	BGL_EXPORTED_DEF BgL_cswitchz00_bglt BGl_makezd2cswitchzd2zzcgen_copz00(obj_t
		BgL_loc1338z00_235, BgL_copz00_bglt BgL_test1341z00_236,
		obj_t BgL_clauses1342z00_237)
	{
		{	/* Cgen/cop.sch 559 */
			{	/* Cgen/cop.sch 559 */
				BgL_cswitchz00_bglt BgL_new1337z00_5045;

				{	/* Cgen/cop.sch 559 */
					BgL_cswitchz00_bglt BgL_new1336z00_5046;

					BgL_new1336z00_5046 =
						((BgL_cswitchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cswitchz00_bgl))));
					{	/* Cgen/cop.sch 559 */
						long BgL_arg1641z00_5047;

						{	/* Cgen/cop.sch 559 */
							long BgL_res2403z00_5048;

							BgL_res2403z00_5048 =
								BGL_CLASS_INDEX(BGl_cswitchz00zzcgen_copz00);
							BgL_arg1641z00_5047 = BgL_res2403z00_5048;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1336z00_5046), BgL_arg1641z00_5047);
					}
					BgL_new1337z00_5045 = BgL_new1336z00_5046;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1337z00_5045)))->BgL_locz00) =
					((obj_t) BgL_loc1338z00_235), BUNSPEC);
				((((BgL_cswitchz00_bglt) COBJECT(BgL_new1337z00_5045))->BgL_testz00) =
					((BgL_copz00_bglt) BgL_test1341z00_236), BUNSPEC);
				((((BgL_cswitchz00_bglt) COBJECT(BgL_new1337z00_5045))->
						BgL_clausesz00) = ((obj_t) BgL_clauses1342z00_237), BUNSPEC);
				return BgL_new1337z00_5045;
			}
		}

	}



/* &make-cswitch */
	BgL_cswitchz00_bglt BGl_z62makezd2cswitchzb0zzcgen_copz00(obj_t
		BgL_envz00_4069, obj_t BgL_loc1338z00_4070, obj_t BgL_test1341z00_4071,
		obj_t BgL_clauses1342z00_4072)
	{
		{	/* Cgen/cop.sch 559 */
			return
				BGl_makezd2cswitchzd2zzcgen_copz00(BgL_loc1338z00_4070,
				((BgL_copz00_bglt) BgL_test1341z00_4071), BgL_clauses1342z00_4072);
		}

	}



/* cswitch? */
	BGL_EXPORTED_DEF bool_t BGl_cswitchzf3zf3zzcgen_copz00(obj_t BgL_objz00_238)
	{
		{	/* Cgen/cop.sch 560 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_238, BGl_cswitchz00zzcgen_copz00);
		}

	}



/* &cswitch? */
	obj_t BGl_z62cswitchzf3z91zzcgen_copz00(obj_t BgL_envz00_4073,
		obj_t BgL_objz00_4074)
	{
		{	/* Cgen/cop.sch 560 */
			return BBOOL(BGl_cswitchzf3zf3zzcgen_copz00(BgL_objz00_4074));
		}

	}



/* cswitch-nil */
	BGL_EXPORTED_DEF BgL_cswitchz00_bglt BGl_cswitchzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 561 */
			{	/* Cgen/cop.sch 561 */
				obj_t BgL_classz00_3312;

				BgL_classz00_3312 = BGl_cswitchz00zzcgen_copz00;
				{	/* Cgen/cop.sch 561 */
					obj_t BgL__ortest_1106z00_3313;

					BgL__ortest_1106z00_3313 = BGL_CLASS_NIL(BgL_classz00_3312);
					if (CBOOL(BgL__ortest_1106z00_3313))
						{	/* Cgen/cop.sch 561 */
							return ((BgL_cswitchz00_bglt) BgL__ortest_1106z00_3313);
						}
					else
						{	/* Cgen/cop.sch 561 */
							return
								((BgL_cswitchz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3312));
						}
				}
			}
		}

	}



/* &cswitch-nil */
	BgL_cswitchz00_bglt BGl_z62cswitchzd2nilzb0zzcgen_copz00(obj_t
		BgL_envz00_4075)
	{
		{	/* Cgen/cop.sch 561 */
			return BGl_cswitchzd2nilzd2zzcgen_copz00();
		}

	}



/* cswitch-clauses */
	BGL_EXPORTED_DEF obj_t
		BGl_cswitchzd2clauseszd2zzcgen_copz00(BgL_cswitchz00_bglt BgL_oz00_239)
	{
		{	/* Cgen/cop.sch 562 */
			return (((BgL_cswitchz00_bglt) COBJECT(BgL_oz00_239))->BgL_clausesz00);
		}

	}



/* &cswitch-clauses */
	obj_t BGl_z62cswitchzd2clauseszb0zzcgen_copz00(obj_t BgL_envz00_4076,
		obj_t BgL_oz00_4077)
	{
		{	/* Cgen/cop.sch 562 */
			return
				BGl_cswitchzd2clauseszd2zzcgen_copz00(
				((BgL_cswitchz00_bglt) BgL_oz00_4077));
		}

	}



/* cswitch-test */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cswitchzd2testzd2zzcgen_copz00(BgL_cswitchz00_bglt BgL_oz00_242)
	{
		{	/* Cgen/cop.sch 564 */
			return (((BgL_cswitchz00_bglt) COBJECT(BgL_oz00_242))->BgL_testz00);
		}

	}



/* &cswitch-test */
	BgL_copz00_bglt BGl_z62cswitchzd2testzb0zzcgen_copz00(obj_t BgL_envz00_4078,
		obj_t BgL_oz00_4079)
	{
		{	/* Cgen/cop.sch 564 */
			return
				BGl_cswitchzd2testzd2zzcgen_copz00(
				((BgL_cswitchz00_bglt) BgL_oz00_4079));
		}

	}



/* cswitch-loc */
	BGL_EXPORTED_DEF obj_t BGl_cswitchzd2loczd2zzcgen_copz00(BgL_cswitchz00_bglt
		BgL_oz00_245)
	{
		{	/* Cgen/cop.sch 566 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_245)))->BgL_locz00);
		}

	}



/* &cswitch-loc */
	obj_t BGl_z62cswitchzd2loczb0zzcgen_copz00(obj_t BgL_envz00_4080,
		obj_t BgL_oz00_4081)
	{
		{	/* Cgen/cop.sch 566 */
			return
				BGl_cswitchzd2loczd2zzcgen_copz00(
				((BgL_cswitchz00_bglt) BgL_oz00_4081));
		}

	}



/* cswitch-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cswitchzd2loczd2setz12z12zzcgen_copz00(BgL_cswitchz00_bglt BgL_oz00_246,
		obj_t BgL_vz00_247)
	{
		{	/* Cgen/cop.sch 567 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_246)))->BgL_locz00) =
				((obj_t) BgL_vz00_247), BUNSPEC);
		}

	}



/* &cswitch-loc-set! */
	obj_t BGl_z62cswitchzd2loczd2setz12z70zzcgen_copz00(obj_t BgL_envz00_4082,
		obj_t BgL_oz00_4083, obj_t BgL_vz00_4084)
	{
		{	/* Cgen/cop.sch 567 */
			return
				BGl_cswitchzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cswitchz00_bglt) BgL_oz00_4083), BgL_vz00_4084);
		}

	}



/* make-cmake-box */
	BGL_EXPORTED_DEF BgL_cmakezd2boxzd2_bglt
		BGl_makezd2cmakezd2boxz00zzcgen_copz00(obj_t BgL_loc1334z00_248,
		BgL_copz00_bglt BgL_value1335z00_249, obj_t BgL_stackable1336z00_250)
	{
		{	/* Cgen/cop.sch 570 */
			{	/* Cgen/cop.sch 570 */
				BgL_cmakezd2boxzd2_bglt BgL_new1339z00_5049;

				{	/* Cgen/cop.sch 570 */
					BgL_cmakezd2boxzd2_bglt BgL_new1338z00_5050;

					BgL_new1338z00_5050 =
						((BgL_cmakezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cmakezd2boxzd2_bgl))));
					{	/* Cgen/cop.sch 570 */
						long BgL_arg1644z00_5051;

						{	/* Cgen/cop.sch 570 */
							long BgL_res2404z00_5052;

							BgL_res2404z00_5052 =
								BGL_CLASS_INDEX(BGl_cmakezd2boxzd2zzcgen_copz00);
							BgL_arg1644z00_5051 = BgL_res2404z00_5052;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1338z00_5050), BgL_arg1644z00_5051);
					}
					BgL_new1339z00_5049 = BgL_new1338z00_5050;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1339z00_5049)))->BgL_locz00) =
					((obj_t) BgL_loc1334z00_248), BUNSPEC);
				((((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_new1339z00_5049))->
						BgL_valuez00) = ((BgL_copz00_bglt) BgL_value1335z00_249), BUNSPEC);
				((((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_new1339z00_5049))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1336z00_250), BUNSPEC);
				return BgL_new1339z00_5049;
			}
		}

	}



/* &make-cmake-box */
	BgL_cmakezd2boxzd2_bglt BGl_z62makezd2cmakezd2boxz62zzcgen_copz00(obj_t
		BgL_envz00_4085, obj_t BgL_loc1334z00_4086, obj_t BgL_value1335z00_4087,
		obj_t BgL_stackable1336z00_4088)
	{
		{	/* Cgen/cop.sch 570 */
			return
				BGl_makezd2cmakezd2boxz00zzcgen_copz00(BgL_loc1334z00_4086,
				((BgL_copz00_bglt) BgL_value1335z00_4087), BgL_stackable1336z00_4088);
		}

	}



/* cmake-box? */
	BGL_EXPORTED_DEF bool_t BGl_cmakezd2boxzf3z21zzcgen_copz00(obj_t
		BgL_objz00_251)
	{
		{	/* Cgen/cop.sch 571 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_251,
				BGl_cmakezd2boxzd2zzcgen_copz00);
		}

	}



/* &cmake-box? */
	obj_t BGl_z62cmakezd2boxzf3z43zzcgen_copz00(obj_t BgL_envz00_4089,
		obj_t BgL_objz00_4090)
	{
		{	/* Cgen/cop.sch 571 */
			return BBOOL(BGl_cmakezd2boxzf3z21zzcgen_copz00(BgL_objz00_4090));
		}

	}



/* cmake-box-nil */
	BGL_EXPORTED_DEF BgL_cmakezd2boxzd2_bglt
		BGl_cmakezd2boxzd2nilz00zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 572 */
			{	/* Cgen/cop.sch 572 */
				obj_t BgL_classz00_3321;

				BgL_classz00_3321 = BGl_cmakezd2boxzd2zzcgen_copz00;
				{	/* Cgen/cop.sch 572 */
					obj_t BgL__ortest_1106z00_3322;

					BgL__ortest_1106z00_3322 = BGL_CLASS_NIL(BgL_classz00_3321);
					if (CBOOL(BgL__ortest_1106z00_3322))
						{	/* Cgen/cop.sch 572 */
							return ((BgL_cmakezd2boxzd2_bglt) BgL__ortest_1106z00_3322);
						}
					else
						{	/* Cgen/cop.sch 572 */
							return
								((BgL_cmakezd2boxzd2_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3321));
						}
				}
			}
		}

	}



/* &cmake-box-nil */
	BgL_cmakezd2boxzd2_bglt BGl_z62cmakezd2boxzd2nilz62zzcgen_copz00(obj_t
		BgL_envz00_4091)
	{
		{	/* Cgen/cop.sch 572 */
			return BGl_cmakezd2boxzd2nilz00zzcgen_copz00();
		}

	}



/* cmake-box-stackable */
	BGL_EXPORTED_DEF obj_t
		BGl_cmakezd2boxzd2stackablez00zzcgen_copz00(BgL_cmakezd2boxzd2_bglt
		BgL_oz00_252)
	{
		{	/* Cgen/cop.sch 573 */
			return
				(((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_oz00_252))->BgL_stackablez00);
		}

	}



/* &cmake-box-stackable */
	obj_t BGl_z62cmakezd2boxzd2stackablez62zzcgen_copz00(obj_t BgL_envz00_4092,
		obj_t BgL_oz00_4093)
	{
		{	/* Cgen/cop.sch 573 */
			return
				BGl_cmakezd2boxzd2stackablez00zzcgen_copz00(
				((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4093));
		}

	}



/* cmake-box-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cmakezd2boxzd2valuez00zzcgen_copz00(BgL_cmakezd2boxzd2_bglt
		BgL_oz00_255)
	{
		{	/* Cgen/cop.sch 575 */
			return (((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_oz00_255))->BgL_valuez00);
		}

	}



/* &cmake-box-value */
	BgL_copz00_bglt BGl_z62cmakezd2boxzd2valuez62zzcgen_copz00(obj_t
		BgL_envz00_4094, obj_t BgL_oz00_4095)
	{
		{	/* Cgen/cop.sch 575 */
			return
				BGl_cmakezd2boxzd2valuez00zzcgen_copz00(
				((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4095));
		}

	}



/* cmake-box-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_cmakezd2boxzd2locz00zzcgen_copz00(BgL_cmakezd2boxzd2_bglt BgL_oz00_258)
	{
		{	/* Cgen/cop.sch 577 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_258)))->BgL_locz00);
		}

	}



/* &cmake-box-loc */
	obj_t BGl_z62cmakezd2boxzd2locz62zzcgen_copz00(obj_t BgL_envz00_4096,
		obj_t BgL_oz00_4097)
	{
		{	/* Cgen/cop.sch 577 */
			return
				BGl_cmakezd2boxzd2locz00zzcgen_copz00(
				((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4097));
		}

	}



/* cmake-box-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cmakezd2boxzd2loczd2setz12zc0zzcgen_copz00(BgL_cmakezd2boxzd2_bglt
		BgL_oz00_259, obj_t BgL_vz00_260)
	{
		{	/* Cgen/cop.sch 578 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_259)))->BgL_locz00) =
				((obj_t) BgL_vz00_260), BUNSPEC);
		}

	}



/* &cmake-box-loc-set! */
	obj_t BGl_z62cmakezd2boxzd2loczd2setz12za2zzcgen_copz00(obj_t BgL_envz00_4098,
		obj_t BgL_oz00_4099, obj_t BgL_vz00_4100)
	{
		{	/* Cgen/cop.sch 578 */
			return
				BGl_cmakezd2boxzd2loczd2setz12zc0zzcgen_copz00(
				((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4099), BgL_vz00_4100);
		}

	}



/* make-cbox-ref */
	BGL_EXPORTED_DEF BgL_cboxzd2refzd2_bglt
		BGl_makezd2cboxzd2refz00zzcgen_copz00(obj_t BgL_loc1331z00_261,
		BgL_copz00_bglt BgL_var1332z00_262)
	{
		{	/* Cgen/cop.sch 581 */
			{	/* Cgen/cop.sch 581 */
				BgL_cboxzd2refzd2_bglt BgL_new1341z00_5053;

				{	/* Cgen/cop.sch 581 */
					BgL_cboxzd2refzd2_bglt BgL_new1340z00_5054;

					BgL_new1340z00_5054 =
						((BgL_cboxzd2refzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cboxzd2refzd2_bgl))));
					{	/* Cgen/cop.sch 581 */
						long BgL_arg1652z00_5055;

						{	/* Cgen/cop.sch 581 */
							long BgL_res2405z00_5056;

							BgL_res2405z00_5056 =
								BGL_CLASS_INDEX(BGl_cboxzd2refzd2zzcgen_copz00);
							BgL_arg1652z00_5055 = BgL_res2405z00_5056;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1340z00_5054), BgL_arg1652z00_5055);
					}
					BgL_new1341z00_5053 = BgL_new1340z00_5054;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1341z00_5053)))->BgL_locz00) =
					((obj_t) BgL_loc1331z00_261), BUNSPEC);
				((((BgL_cboxzd2refzd2_bglt) COBJECT(BgL_new1341z00_5053))->BgL_varz00) =
					((BgL_copz00_bglt) BgL_var1332z00_262), BUNSPEC);
				return BgL_new1341z00_5053;
			}
		}

	}



/* &make-cbox-ref */
	BgL_cboxzd2refzd2_bglt BGl_z62makezd2cboxzd2refz62zzcgen_copz00(obj_t
		BgL_envz00_4101, obj_t BgL_loc1331z00_4102, obj_t BgL_var1332z00_4103)
	{
		{	/* Cgen/cop.sch 581 */
			return
				BGl_makezd2cboxzd2refz00zzcgen_copz00(BgL_loc1331z00_4102,
				((BgL_copz00_bglt) BgL_var1332z00_4103));
		}

	}



/* cbox-ref? */
	BGL_EXPORTED_DEF bool_t BGl_cboxzd2refzf3z21zzcgen_copz00(obj_t
		BgL_objz00_263)
	{
		{	/* Cgen/cop.sch 582 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_263,
				BGl_cboxzd2refzd2zzcgen_copz00);
		}

	}



/* &cbox-ref? */
	obj_t BGl_z62cboxzd2refzf3z43zzcgen_copz00(obj_t BgL_envz00_4104,
		obj_t BgL_objz00_4105)
	{
		{	/* Cgen/cop.sch 582 */
			return BBOOL(BGl_cboxzd2refzf3z21zzcgen_copz00(BgL_objz00_4105));
		}

	}



/* cbox-ref-nil */
	BGL_EXPORTED_DEF BgL_cboxzd2refzd2_bglt BGl_cboxzd2refzd2nilz00zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 583 */
			{	/* Cgen/cop.sch 583 */
				obj_t BgL_classz00_3330;

				BgL_classz00_3330 = BGl_cboxzd2refzd2zzcgen_copz00;
				{	/* Cgen/cop.sch 583 */
					obj_t BgL__ortest_1106z00_3331;

					BgL__ortest_1106z00_3331 = BGL_CLASS_NIL(BgL_classz00_3330);
					if (CBOOL(BgL__ortest_1106z00_3331))
						{	/* Cgen/cop.sch 583 */
							return ((BgL_cboxzd2refzd2_bglt) BgL__ortest_1106z00_3331);
						}
					else
						{	/* Cgen/cop.sch 583 */
							return
								((BgL_cboxzd2refzd2_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3330));
						}
				}
			}
		}

	}



/* &cbox-ref-nil */
	BgL_cboxzd2refzd2_bglt BGl_z62cboxzd2refzd2nilz62zzcgen_copz00(obj_t
		BgL_envz00_4106)
	{
		{	/* Cgen/cop.sch 583 */
			return BGl_cboxzd2refzd2nilz00zzcgen_copz00();
		}

	}



/* cbox-ref-var */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cboxzd2refzd2varz00zzcgen_copz00(BgL_cboxzd2refzd2_bglt BgL_oz00_264)
	{
		{	/* Cgen/cop.sch 584 */
			return (((BgL_cboxzd2refzd2_bglt) COBJECT(BgL_oz00_264))->BgL_varz00);
		}

	}



/* &cbox-ref-var */
	BgL_copz00_bglt BGl_z62cboxzd2refzd2varz62zzcgen_copz00(obj_t BgL_envz00_4107,
		obj_t BgL_oz00_4108)
	{
		{	/* Cgen/cop.sch 584 */
			return
				BGl_cboxzd2refzd2varz00zzcgen_copz00(
				((BgL_cboxzd2refzd2_bglt) BgL_oz00_4108));
		}

	}



/* cbox-ref-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_cboxzd2refzd2locz00zzcgen_copz00(BgL_cboxzd2refzd2_bglt BgL_oz00_267)
	{
		{	/* Cgen/cop.sch 586 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_267)))->BgL_locz00);
		}

	}



/* &cbox-ref-loc */
	obj_t BGl_z62cboxzd2refzd2locz62zzcgen_copz00(obj_t BgL_envz00_4109,
		obj_t BgL_oz00_4110)
	{
		{	/* Cgen/cop.sch 586 */
			return
				BGl_cboxzd2refzd2locz00zzcgen_copz00(
				((BgL_cboxzd2refzd2_bglt) BgL_oz00_4110));
		}

	}



/* cbox-ref-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cboxzd2refzd2loczd2setz12zc0zzcgen_copz00(BgL_cboxzd2refzd2_bglt
		BgL_oz00_268, obj_t BgL_vz00_269)
	{
		{	/* Cgen/cop.sch 587 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_268)))->BgL_locz00) =
				((obj_t) BgL_vz00_269), BUNSPEC);
		}

	}



/* &cbox-ref-loc-set! */
	obj_t BGl_z62cboxzd2refzd2loczd2setz12za2zzcgen_copz00(obj_t BgL_envz00_4111,
		obj_t BgL_oz00_4112, obj_t BgL_vz00_4113)
	{
		{	/* Cgen/cop.sch 587 */
			return
				BGl_cboxzd2refzd2loczd2setz12zc0zzcgen_copz00(
				((BgL_cboxzd2refzd2_bglt) BgL_oz00_4112), BgL_vz00_4113);
		}

	}



/* make-cbox-set! */
	BGL_EXPORTED_DEF BgL_cboxzd2setz12zc0_bglt
		BGl_makezd2cboxzd2setz12z12zzcgen_copz00(obj_t BgL_loc1327z00_270,
		BgL_copz00_bglt BgL_var1328z00_271, BgL_copz00_bglt BgL_value1329z00_272)
	{
		{	/* Cgen/cop.sch 590 */
			{	/* Cgen/cop.sch 590 */
				BgL_cboxzd2setz12zc0_bglt BgL_new1343z00_5057;

				{	/* Cgen/cop.sch 590 */
					BgL_cboxzd2setz12zc0_bglt BgL_new1342z00_5058;

					BgL_new1342z00_5058 =
						((BgL_cboxzd2setz12zc0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cboxzd2setz12zc0_bgl))));
					{	/* Cgen/cop.sch 590 */
						long BgL_arg1662z00_5059;

						{	/* Cgen/cop.sch 590 */
							long BgL_res2406z00_5060;

							BgL_res2406z00_5060 =
								BGL_CLASS_INDEX(BGl_cboxzd2setz12zc0zzcgen_copz00);
							BgL_arg1662z00_5059 = BgL_res2406z00_5060;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1342z00_5058), BgL_arg1662z00_5059);
					}
					BgL_new1343z00_5057 = BgL_new1342z00_5058;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1343z00_5057)))->BgL_locz00) =
					((obj_t) BgL_loc1327z00_270), BUNSPEC);
				((((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_new1343z00_5057))->
						BgL_varz00) = ((BgL_copz00_bglt) BgL_var1328z00_271), BUNSPEC);
				((((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_new1343z00_5057))->
						BgL_valuez00) = ((BgL_copz00_bglt) BgL_value1329z00_272), BUNSPEC);
				return BgL_new1343z00_5057;
			}
		}

	}



/* &make-cbox-set! */
	BgL_cboxzd2setz12zc0_bglt BGl_z62makezd2cboxzd2setz12z70zzcgen_copz00(obj_t
		BgL_envz00_4114, obj_t BgL_loc1327z00_4115, obj_t BgL_var1328z00_4116,
		obj_t BgL_value1329z00_4117)
	{
		{	/* Cgen/cop.sch 590 */
			return
				BGl_makezd2cboxzd2setz12z12zzcgen_copz00(BgL_loc1327z00_4115,
				((BgL_copz00_bglt) BgL_var1328z00_4116),
				((BgL_copz00_bglt) BgL_value1329z00_4117));
		}

	}



/* cbox-set!? */
	BGL_EXPORTED_DEF bool_t BGl_cboxzd2setz12zf3z33zzcgen_copz00(obj_t
		BgL_objz00_273)
	{
		{	/* Cgen/cop.sch 591 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_273,
				BGl_cboxzd2setz12zc0zzcgen_copz00);
		}

	}



/* &cbox-set!? */
	obj_t BGl_z62cboxzd2setz12zf3z51zzcgen_copz00(obj_t BgL_envz00_4118,
		obj_t BgL_objz00_4119)
	{
		{	/* Cgen/cop.sch 591 */
			return BBOOL(BGl_cboxzd2setz12zf3z33zzcgen_copz00(BgL_objz00_4119));
		}

	}



/* cbox-set!-nil */
	BGL_EXPORTED_DEF BgL_cboxzd2setz12zc0_bglt
		BGl_cboxzd2setz12zd2nilz12zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 592 */
			{	/* Cgen/cop.sch 592 */
				obj_t BgL_classz00_3339;

				BgL_classz00_3339 = BGl_cboxzd2setz12zc0zzcgen_copz00;
				{	/* Cgen/cop.sch 592 */
					obj_t BgL__ortest_1106z00_3340;

					BgL__ortest_1106z00_3340 = BGL_CLASS_NIL(BgL_classz00_3339);
					if (CBOOL(BgL__ortest_1106z00_3340))
						{	/* Cgen/cop.sch 592 */
							return ((BgL_cboxzd2setz12zc0_bglt) BgL__ortest_1106z00_3340);
						}
					else
						{	/* Cgen/cop.sch 592 */
							return
								((BgL_cboxzd2setz12zc0_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3339));
						}
				}
			}
		}

	}



/* &cbox-set!-nil */
	BgL_cboxzd2setz12zc0_bglt BGl_z62cboxzd2setz12zd2nilz70zzcgen_copz00(obj_t
		BgL_envz00_4120)
	{
		{	/* Cgen/cop.sch 592 */
			return BGl_cboxzd2setz12zd2nilz12zzcgen_copz00();
		}

	}



/* cbox-set!-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cboxzd2setz12zd2valuez12zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt
		BgL_oz00_274)
	{
		{	/* Cgen/cop.sch 593 */
			return
				(((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_oz00_274))->BgL_valuez00);
		}

	}



/* &cbox-set!-value */
	BgL_copz00_bglt BGl_z62cboxzd2setz12zd2valuez70zzcgen_copz00(obj_t
		BgL_envz00_4121, obj_t BgL_oz00_4122)
	{
		{	/* Cgen/cop.sch 593 */
			return
				BGl_cboxzd2setz12zd2valuez12zzcgen_copz00(
				((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4122));
		}

	}



/* cbox-set!-var */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cboxzd2setz12zd2varz12zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt
		BgL_oz00_277)
	{
		{	/* Cgen/cop.sch 595 */
			return (((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_oz00_277))->BgL_varz00);
		}

	}



/* &cbox-set!-var */
	BgL_copz00_bglt BGl_z62cboxzd2setz12zd2varz70zzcgen_copz00(obj_t
		BgL_envz00_4123, obj_t BgL_oz00_4124)
	{
		{	/* Cgen/cop.sch 595 */
			return
				BGl_cboxzd2setz12zd2varz12zzcgen_copz00(
				((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4124));
		}

	}



/* cbox-set!-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_cboxzd2setz12zd2locz12zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt
		BgL_oz00_280)
	{
		{	/* Cgen/cop.sch 597 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_280)))->BgL_locz00);
		}

	}



/* &cbox-set!-loc */
	obj_t BGl_z62cboxzd2setz12zd2locz70zzcgen_copz00(obj_t BgL_envz00_4125,
		obj_t BgL_oz00_4126)
	{
		{	/* Cgen/cop.sch 597 */
			return
				BGl_cboxzd2setz12zd2locz12zzcgen_copz00(
				((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4126));
		}

	}



/* cbox-set!-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cboxzd2setz12zd2loczd2setz12zd2zzcgen_copz00(BgL_cboxzd2setz12zc0_bglt
		BgL_oz00_281, obj_t BgL_vz00_282)
	{
		{	/* Cgen/cop.sch 598 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_281)))->BgL_locz00) =
				((obj_t) BgL_vz00_282), BUNSPEC);
		}

	}



/* &cbox-set!-loc-set! */
	obj_t BGl_z62cboxzd2setz12zd2loczd2setz12zb0zzcgen_copz00(obj_t
		BgL_envz00_4127, obj_t BgL_oz00_4128, obj_t BgL_vz00_4129)
	{
		{	/* Cgen/cop.sch 598 */
			return
				BGl_cboxzd2setz12zd2loczd2setz12zd2zzcgen_copz00(
				((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4128), BgL_vz00_4129);
		}

	}



/* make-cset-ex-it */
	BGL_EXPORTED_DEF BgL_csetzd2exzd2itz00_bglt
		BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00(obj_t BgL_loc1322z00_283,
		BgL_copz00_bglt BgL_exit1323z00_284,
		BgL_copz00_bglt BgL_jumpzd2value1324zd2_285,
		BgL_copz00_bglt BgL_body1325z00_286)
	{
		{	/* Cgen/cop.sch 601 */
			{	/* Cgen/cop.sch 601 */
				BgL_csetzd2exzd2itz00_bglt BgL_new1345z00_5061;

				{	/* Cgen/cop.sch 601 */
					BgL_csetzd2exzd2itz00_bglt BgL_new1344z00_5062;

					BgL_new1344z00_5062 =
						((BgL_csetzd2exzd2itz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_csetzd2exzd2itz00_bgl))));
					{	/* Cgen/cop.sch 601 */
						long BgL_arg1663z00_5063;

						{	/* Cgen/cop.sch 601 */
							long BgL_res2407z00_5064;

							BgL_res2407z00_5064 =
								BGL_CLASS_INDEX(BGl_csetzd2exzd2itz00zzcgen_copz00);
							BgL_arg1663z00_5063 = BgL_res2407z00_5064;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1344z00_5062), BgL_arg1663z00_5063);
					}
					BgL_new1345z00_5061 = BgL_new1344z00_5062;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1345z00_5061)))->BgL_locz00) =
					((obj_t) BgL_loc1322z00_283), BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_new1345z00_5061))->
						BgL_exitz00) = ((BgL_copz00_bglt) BgL_exit1323z00_284), BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_new1345z00_5061))->
						BgL_jumpzd2valuezd2) =
					((BgL_copz00_bglt) BgL_jumpzd2value1324zd2_285), BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_new1345z00_5061))->
						BgL_bodyz00) = ((BgL_copz00_bglt) BgL_body1325z00_286), BUNSPEC);
				return BgL_new1345z00_5061;
			}
		}

	}



/* &make-cset-ex-it */
	BgL_csetzd2exzd2itz00_bglt BGl_z62makezd2csetzd2exzd2itzb0zzcgen_copz00(obj_t
		BgL_envz00_4130, obj_t BgL_loc1322z00_4131, obj_t BgL_exit1323z00_4132,
		obj_t BgL_jumpzd2value1324zd2_4133, obj_t BgL_body1325z00_4134)
	{
		{	/* Cgen/cop.sch 601 */
			return
				BGl_makezd2csetzd2exzd2itzd2zzcgen_copz00(BgL_loc1322z00_4131,
				((BgL_copz00_bglt) BgL_exit1323z00_4132),
				((BgL_copz00_bglt) BgL_jumpzd2value1324zd2_4133),
				((BgL_copz00_bglt) BgL_body1325z00_4134));
		}

	}



/* cset-ex-it? */
	BGL_EXPORTED_DEF bool_t BGl_csetzd2exzd2itzf3zf3zzcgen_copz00(obj_t
		BgL_objz00_287)
	{
		{	/* Cgen/cop.sch 602 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_287,
				BGl_csetzd2exzd2itz00zzcgen_copz00);
		}

	}



/* &cset-ex-it? */
	obj_t BGl_z62csetzd2exzd2itzf3z91zzcgen_copz00(obj_t BgL_envz00_4135,
		obj_t BgL_objz00_4136)
	{
		{	/* Cgen/cop.sch 602 */
			return BBOOL(BGl_csetzd2exzd2itzf3zf3zzcgen_copz00(BgL_objz00_4136));
		}

	}



/* cset-ex-it-nil */
	BGL_EXPORTED_DEF BgL_csetzd2exzd2itz00_bglt
		BGl_csetzd2exzd2itzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 603 */
			{	/* Cgen/cop.sch 603 */
				obj_t BgL_classz00_3348;

				BgL_classz00_3348 = BGl_csetzd2exzd2itz00zzcgen_copz00;
				{	/* Cgen/cop.sch 603 */
					obj_t BgL__ortest_1106z00_3349;

					BgL__ortest_1106z00_3349 = BGL_CLASS_NIL(BgL_classz00_3348);
					if (CBOOL(BgL__ortest_1106z00_3349))
						{	/* Cgen/cop.sch 603 */
							return ((BgL_csetzd2exzd2itz00_bglt) BgL__ortest_1106z00_3349);
						}
					else
						{	/* Cgen/cop.sch 603 */
							return
								((BgL_csetzd2exzd2itz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3348));
						}
				}
			}
		}

	}



/* &cset-ex-it-nil */
	BgL_csetzd2exzd2itz00_bglt BGl_z62csetzd2exzd2itzd2nilzb0zzcgen_copz00(obj_t
		BgL_envz00_4137)
	{
		{	/* Cgen/cop.sch 603 */
			return BGl_csetzd2exzd2itzd2nilzd2zzcgen_copz00();
		}

	}



/* cset-ex-it-body */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_csetzd2exzd2itzd2bodyzd2zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt
		BgL_oz00_288)
	{
		{	/* Cgen/cop.sch 604 */
			return
				(((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_oz00_288))->BgL_bodyz00);
		}

	}



/* &cset-ex-it-body */
	BgL_copz00_bglt BGl_z62csetzd2exzd2itzd2bodyzb0zzcgen_copz00(obj_t
		BgL_envz00_4138, obj_t BgL_oz00_4139)
	{
		{	/* Cgen/cop.sch 604 */
			return
				BGl_csetzd2exzd2itzd2bodyzd2zzcgen_copz00(
				((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4139));
		}

	}



/* cset-ex-it-jump-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_csetzd2exzd2itzd2jumpzd2valuez00zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt
		BgL_oz00_291)
	{
		{	/* Cgen/cop.sch 606 */
			return
				(((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_oz00_291))->
				BgL_jumpzd2valuezd2);
		}

	}



/* &cset-ex-it-jump-value */
	BgL_copz00_bglt BGl_z62csetzd2exzd2itzd2jumpzd2valuez62zzcgen_copz00(obj_t
		BgL_envz00_4140, obj_t BgL_oz00_4141)
	{
		{	/* Cgen/cop.sch 606 */
			return
				BGl_csetzd2exzd2itzd2jumpzd2valuez00zzcgen_copz00(
				((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4141));
		}

	}



/* cset-ex-it-exit */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_csetzd2exzd2itzd2exitzd2zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt
		BgL_oz00_294)
	{
		{	/* Cgen/cop.sch 608 */
			return
				(((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_oz00_294))->BgL_exitz00);
		}

	}



/* &cset-ex-it-exit */
	BgL_copz00_bglt BGl_z62csetzd2exzd2itzd2exitzb0zzcgen_copz00(obj_t
		BgL_envz00_4142, obj_t BgL_oz00_4143)
	{
		{	/* Cgen/cop.sch 608 */
			return
				BGl_csetzd2exzd2itzd2exitzd2zzcgen_copz00(
				((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4143));
		}

	}



/* cset-ex-it-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_csetzd2exzd2itzd2loczd2zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt
		BgL_oz00_297)
	{
		{	/* Cgen/cop.sch 610 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_297)))->BgL_locz00);
		}

	}



/* &cset-ex-it-loc */
	obj_t BGl_z62csetzd2exzd2itzd2loczb0zzcgen_copz00(obj_t BgL_envz00_4144,
		obj_t BgL_oz00_4145)
	{
		{	/* Cgen/cop.sch 610 */
			return
				BGl_csetzd2exzd2itzd2loczd2zzcgen_copz00(
				((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4145));
		}

	}



/* cset-ex-it-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_csetzd2exzd2itzd2loczd2setz12z12zzcgen_copz00(BgL_csetzd2exzd2itz00_bglt
		BgL_oz00_298, obj_t BgL_vz00_299)
	{
		{	/* Cgen/cop.sch 611 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_298)))->BgL_locz00) =
				((obj_t) BgL_vz00_299), BUNSPEC);
		}

	}



/* &cset-ex-it-loc-set! */
	obj_t BGl_z62csetzd2exzd2itzd2loczd2setz12z70zzcgen_copz00(obj_t
		BgL_envz00_4146, obj_t BgL_oz00_4147, obj_t BgL_vz00_4148)
	{
		{	/* Cgen/cop.sch 611 */
			return
				BGl_csetzd2exzd2itzd2loczd2setz12z12zzcgen_copz00(
				((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4147), BgL_vz00_4148);
		}

	}



/* make-cjump-ex-it */
	BGL_EXPORTED_DEF BgL_cjumpzd2exzd2itz00_bglt
		BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00(obj_t BgL_loc1318z00_300,
		BgL_copz00_bglt BgL_exit1319z00_301, BgL_copz00_bglt BgL_value1320z00_302)
	{
		{	/* Cgen/cop.sch 614 */
			{	/* Cgen/cop.sch 614 */
				BgL_cjumpzd2exzd2itz00_bglt BgL_new1347z00_5065;

				{	/* Cgen/cop.sch 614 */
					BgL_cjumpzd2exzd2itz00_bglt BgL_new1346z00_5066;

					BgL_new1346z00_5066 =
						((BgL_cjumpzd2exzd2itz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cjumpzd2exzd2itz00_bgl))));
					{	/* Cgen/cop.sch 614 */
						long BgL_arg1664z00_5067;

						{	/* Cgen/cop.sch 614 */
							long BgL_res2408z00_5068;

							BgL_res2408z00_5068 =
								BGL_CLASS_INDEX(BGl_cjumpzd2exzd2itz00zzcgen_copz00);
							BgL_arg1664z00_5067 = BgL_res2408z00_5068;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1346z00_5066), BgL_arg1664z00_5067);
					}
					BgL_new1347z00_5065 = BgL_new1346z00_5066;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1347z00_5065)))->BgL_locz00) =
					((obj_t) BgL_loc1318z00_300), BUNSPEC);
				((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(BgL_new1347z00_5065))->
						BgL_exitz00) = ((BgL_copz00_bglt) BgL_exit1319z00_301), BUNSPEC);
				((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(BgL_new1347z00_5065))->
						BgL_valuez00) = ((BgL_copz00_bglt) BgL_value1320z00_302), BUNSPEC);
				return BgL_new1347z00_5065;
			}
		}

	}



/* &make-cjump-ex-it */
	BgL_cjumpzd2exzd2itz00_bglt
		BGl_z62makezd2cjumpzd2exzd2itzb0zzcgen_copz00(obj_t BgL_envz00_4149,
		obj_t BgL_loc1318z00_4150, obj_t BgL_exit1319z00_4151,
		obj_t BgL_value1320z00_4152)
	{
		{	/* Cgen/cop.sch 614 */
			return
				BGl_makezd2cjumpzd2exzd2itzd2zzcgen_copz00(BgL_loc1318z00_4150,
				((BgL_copz00_bglt) BgL_exit1319z00_4151),
				((BgL_copz00_bglt) BgL_value1320z00_4152));
		}

	}



/* cjump-ex-it? */
	BGL_EXPORTED_DEF bool_t BGl_cjumpzd2exzd2itzf3zf3zzcgen_copz00(obj_t
		BgL_objz00_303)
	{
		{	/* Cgen/cop.sch 615 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_303,
				BGl_cjumpzd2exzd2itz00zzcgen_copz00);
		}

	}



/* &cjump-ex-it? */
	obj_t BGl_z62cjumpzd2exzd2itzf3z91zzcgen_copz00(obj_t BgL_envz00_4153,
		obj_t BgL_objz00_4154)
	{
		{	/* Cgen/cop.sch 615 */
			return BBOOL(BGl_cjumpzd2exzd2itzf3zf3zzcgen_copz00(BgL_objz00_4154));
		}

	}



/* cjump-ex-it-nil */
	BGL_EXPORTED_DEF BgL_cjumpzd2exzd2itz00_bglt
		BGl_cjumpzd2exzd2itzd2nilzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 616 */
			{	/* Cgen/cop.sch 616 */
				obj_t BgL_classz00_3357;

				BgL_classz00_3357 = BGl_cjumpzd2exzd2itz00zzcgen_copz00;
				{	/* Cgen/cop.sch 616 */
					obj_t BgL__ortest_1106z00_3358;

					BgL__ortest_1106z00_3358 = BGL_CLASS_NIL(BgL_classz00_3357);
					if (CBOOL(BgL__ortest_1106z00_3358))
						{	/* Cgen/cop.sch 616 */
							return ((BgL_cjumpzd2exzd2itz00_bglt) BgL__ortest_1106z00_3358);
						}
					else
						{	/* Cgen/cop.sch 616 */
							return
								((BgL_cjumpzd2exzd2itz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3357));
						}
				}
			}
		}

	}



/* &cjump-ex-it-nil */
	BgL_cjumpzd2exzd2itz00_bglt BGl_z62cjumpzd2exzd2itzd2nilzb0zzcgen_copz00(obj_t
		BgL_envz00_4155)
	{
		{	/* Cgen/cop.sch 616 */
			return BGl_cjumpzd2exzd2itzd2nilzd2zzcgen_copz00();
		}

	}



/* cjump-ex-it-value */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cjumpzd2exzd2itzd2valuezd2zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt
		BgL_oz00_304)
	{
		{	/* Cgen/cop.sch 617 */
			return
				(((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(BgL_oz00_304))->BgL_valuez00);
		}

	}



/* &cjump-ex-it-value */
	BgL_copz00_bglt BGl_z62cjumpzd2exzd2itzd2valuezb0zzcgen_copz00(obj_t
		BgL_envz00_4156, obj_t BgL_oz00_4157)
	{
		{	/* Cgen/cop.sch 617 */
			return
				BGl_cjumpzd2exzd2itzd2valuezd2zzcgen_copz00(
				((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4157));
		}

	}



/* cjump-ex-it-exit */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_cjumpzd2exzd2itzd2exitzd2zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt
		BgL_oz00_307)
	{
		{	/* Cgen/cop.sch 619 */
			return
				(((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(BgL_oz00_307))->BgL_exitz00);
		}

	}



/* &cjump-ex-it-exit */
	BgL_copz00_bglt BGl_z62cjumpzd2exzd2itzd2exitzb0zzcgen_copz00(obj_t
		BgL_envz00_4158, obj_t BgL_oz00_4159)
	{
		{	/* Cgen/cop.sch 619 */
			return
				BGl_cjumpzd2exzd2itzd2exitzd2zzcgen_copz00(
				((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4159));
		}

	}



/* cjump-ex-it-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_cjumpzd2exzd2itzd2loczd2zzcgen_copz00(BgL_cjumpzd2exzd2itz00_bglt
		BgL_oz00_310)
	{
		{	/* Cgen/cop.sch 621 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_310)))->BgL_locz00);
		}

	}



/* &cjump-ex-it-loc */
	obj_t BGl_z62cjumpzd2exzd2itzd2loczb0zzcgen_copz00(obj_t BgL_envz00_4160,
		obj_t BgL_oz00_4161)
	{
		{	/* Cgen/cop.sch 621 */
			return
				BGl_cjumpzd2exzd2itzd2loczd2zzcgen_copz00(
				((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4161));
		}

	}



/* cjump-ex-it-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cjumpzd2exzd2itzd2loczd2setz12z12zzcgen_copz00
		(BgL_cjumpzd2exzd2itz00_bglt BgL_oz00_311, obj_t BgL_vz00_312)
	{
		{	/* Cgen/cop.sch 622 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_311)))->BgL_locz00) =
				((obj_t) BgL_vz00_312), BUNSPEC);
		}

	}



/* &cjump-ex-it-loc-set! */
	obj_t BGl_z62cjumpzd2exzd2itzd2loczd2setz12z70zzcgen_copz00(obj_t
		BgL_envz00_4162, obj_t BgL_oz00_4163, obj_t BgL_vz00_4164)
	{
		{	/* Cgen/cop.sch 622 */
			return
				BGl_cjumpzd2exzd2itzd2loczd2setz12z12zzcgen_copz00(
				((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4163), BgL_vz00_4164);
		}

	}



/* make-sfun/C */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_makezd2sfunzf2Cz20zzcgen_copz00(long
		BgL_arity1294z00_313, obj_t BgL_sidezd2effect1295zd2_314,
		obj_t BgL_predicatezd2of1296zd2_315, obj_t BgL_stackzd2allocator1297zd2_316,
		bool_t BgL_topzf31298zf3_317, obj_t BgL_thezd2closure1299zd2_318,
		obj_t BgL_effect1300z00_319, obj_t BgL_failsafe1301z00_320,
		obj_t BgL_argszd2noescape1302zd2_321, obj_t BgL_property1303z00_322,
		obj_t BgL_args1304z00_323, obj_t BgL_argszd2name1305zd2_324,
		obj_t BgL_body1306z00_325, obj_t BgL_class1307z00_326,
		obj_t BgL_dssslzd2keywords1308zd2_327, obj_t BgL_loc1309z00_328,
		obj_t BgL_optionals1310z00_329, obj_t BgL_keys1311z00_330,
		obj_t BgL_thezd2closurezd2global1312z00_331, obj_t BgL_strength1313z00_332,
		obj_t BgL_stackable1314z00_333, BgL_clabelz00_bglt BgL_label1315z00_334,
		bool_t BgL_integrated1316z00_335)
	{
		{	/* Cgen/cop.sch 625 */
			{	/* Cgen/cop.sch 625 */
				BgL_sfunz00_bglt BgL_new1351z00_5069;

				{	/* Cgen/cop.sch 625 */
					BgL_sfunz00_bglt BgL_tmp1349z00_5070;
					BgL_sfunzf2czf2_bglt BgL_wide1350z00_5071;

					{
						BgL_sfunz00_bglt BgL_auxz00_6461;

						{	/* Cgen/cop.sch 625 */
							BgL_sfunz00_bglt BgL_new1348z00_5072;

							BgL_new1348z00_5072 =
								((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_sfunz00_bgl))));
							{	/* Cgen/cop.sch 625 */
								long BgL_arg1669z00_5073;

								{	/* Cgen/cop.sch 625 */
									long BgL_res2409z00_5074;

									BgL_res2409z00_5074 =
										BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
									BgL_arg1669z00_5073 = BgL_res2409z00_5074;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1348z00_5072),
									BgL_arg1669z00_5073);
							}
							{	/* Cgen/cop.sch 625 */
								BgL_objectz00_bglt BgL_tmpz00_6466;

								BgL_tmpz00_6466 = ((BgL_objectz00_bglt) BgL_new1348z00_5072);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6466, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1348z00_5072);
							BgL_auxz00_6461 = BgL_new1348z00_5072;
						}
						BgL_tmp1349z00_5070 = ((BgL_sfunz00_bglt) BgL_auxz00_6461);
					}
					BgL_wide1350z00_5071 =
						((BgL_sfunzf2czf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sfunzf2czf2_bgl))));
					{	/* Cgen/cop.sch 625 */
						obj_t BgL_auxz00_6474;
						BgL_objectz00_bglt BgL_tmpz00_6472;

						BgL_auxz00_6474 = ((obj_t) BgL_wide1350z00_5071);
						BgL_tmpz00_6472 = ((BgL_objectz00_bglt) BgL_tmp1349z00_5070);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6472, BgL_auxz00_6474);
					}
					((BgL_objectz00_bglt) BgL_tmp1349z00_5070);
					{	/* Cgen/cop.sch 625 */
						long BgL_arg1667z00_5075;

						{	/* Cgen/cop.sch 625 */
							long BgL_res2410z00_5076;

							BgL_res2410z00_5076 =
								BGL_CLASS_INDEX(BGl_sfunzf2Czf2zzcgen_copz00);
							BgL_arg1667z00_5075 = BgL_res2410z00_5076;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1349z00_5070), BgL_arg1667z00_5075);
					}
					BgL_new1351z00_5069 = ((BgL_sfunz00_bglt) BgL_tmp1349z00_5070);
				}
				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_new1351z00_5069)))->BgL_arityz00) =
					((long) BgL_arity1294z00_313), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1295zd2_314), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_predicatezd2ofzd2) =
					((obj_t) BgL_predicatezd2of1296zd2_315), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_stackzd2allocatorzd2) =
					((obj_t) BgL_stackzd2allocator1297zd2_316), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_topzf3zf3) = ((bool_t) BgL_topzf31298zf3_317), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_thezd2closurezd2) =
					((obj_t) BgL_thezd2closure1299zd2_318), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_effectz00) = ((obj_t) BgL_effect1300z00_319), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_failsafez00) = ((obj_t) BgL_failsafe1301z00_320), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_new1351z00_5069)))->
						BgL_argszd2noescapezd2) =
					((obj_t) BgL_argszd2noescape1302zd2_321), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_propertyz00) =
					((obj_t) BgL_property1303z00_322), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_argsz00) =
					((obj_t) BgL_args1304z00_323), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_argszd2namezd2) =
					((obj_t) BgL_argszd2name1305zd2_324), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_bodyz00) =
					((obj_t) BgL_body1306z00_325), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_classz00) =
					((obj_t) BgL_class1307z00_326), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_dssslzd2keywordszd2) =
					((obj_t) BgL_dssslzd2keywords1308zd2_327), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_locz00) =
					((obj_t) BgL_loc1309z00_328), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_optionalsz00) =
					((obj_t) BgL_optionals1310z00_329), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_keysz00) =
					((obj_t) BgL_keys1311z00_330), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BgL_thezd2closurezd2global1312z00_331), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_strengthz00) =
					((obj_t) BgL_strength1313z00_332), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
									BgL_new1351z00_5069)))->BgL_stackablez00) =
					((obj_t) BgL_stackable1314z00_333), BUNSPEC);
				{
					BgL_sfunzf2czf2_bglt BgL_auxz00_6524;

					{
						obj_t BgL_auxz00_6525;

						{	/* Cgen/cop.sch 625 */
							BgL_objectz00_bglt BgL_tmpz00_6526;

							BgL_tmpz00_6526 = ((BgL_objectz00_bglt) BgL_new1351z00_5069);
							BgL_auxz00_6525 = BGL_OBJECT_WIDENING(BgL_tmpz00_6526);
						}
						BgL_auxz00_6524 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_6525);
					}
					((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_6524))->BgL_labelz00) =
						((BgL_clabelz00_bglt) BgL_label1315z00_334), BUNSPEC);
				}
				{
					BgL_sfunzf2czf2_bglt BgL_auxz00_6531;

					{
						obj_t BgL_auxz00_6532;

						{	/* Cgen/cop.sch 625 */
							BgL_objectz00_bglt BgL_tmpz00_6533;

							BgL_tmpz00_6533 = ((BgL_objectz00_bglt) BgL_new1351z00_5069);
							BgL_auxz00_6532 = BGL_OBJECT_WIDENING(BgL_tmpz00_6533);
						}
						BgL_auxz00_6531 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_6532);
					}
					((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_6531))->
							BgL_integratedz00) =
						((bool_t) BgL_integrated1316z00_335), BUNSPEC);
				}
				return BgL_new1351z00_5069;
			}
		}

	}



/* &make-sfun/C */
	BgL_sfunz00_bglt BGl_z62makezd2sfunzf2Cz42zzcgen_copz00(obj_t BgL_envz00_4165,
		obj_t BgL_arity1294z00_4166, obj_t BgL_sidezd2effect1295zd2_4167,
		obj_t BgL_predicatezd2of1296zd2_4168,
		obj_t BgL_stackzd2allocator1297zd2_4169, obj_t BgL_topzf31298zf3_4170,
		obj_t BgL_thezd2closure1299zd2_4171, obj_t BgL_effect1300z00_4172,
		obj_t BgL_failsafe1301z00_4173, obj_t BgL_argszd2noescape1302zd2_4174,
		obj_t BgL_property1303z00_4175, obj_t BgL_args1304z00_4176,
		obj_t BgL_argszd2name1305zd2_4177, obj_t BgL_body1306z00_4178,
		obj_t BgL_class1307z00_4179, obj_t BgL_dssslzd2keywords1308zd2_4180,
		obj_t BgL_loc1309z00_4181, obj_t BgL_optionals1310z00_4182,
		obj_t BgL_keys1311z00_4183, obj_t BgL_thezd2closurezd2global1312z00_4184,
		obj_t BgL_strength1313z00_4185, obj_t BgL_stackable1314z00_4186,
		obj_t BgL_label1315z00_4187, obj_t BgL_integrated1316z00_4188)
	{
		{	/* Cgen/cop.sch 625 */
			return
				BGl_makezd2sfunzf2Cz20zzcgen_copz00(
				(long) CINT(BgL_arity1294z00_4166), BgL_sidezd2effect1295zd2_4167,
				BgL_predicatezd2of1296zd2_4168, BgL_stackzd2allocator1297zd2_4169,
				CBOOL(BgL_topzf31298zf3_4170), BgL_thezd2closure1299zd2_4171,
				BgL_effect1300z00_4172, BgL_failsafe1301z00_4173,
				BgL_argszd2noescape1302zd2_4174, BgL_property1303z00_4175,
				BgL_args1304z00_4176, BgL_argszd2name1305zd2_4177, BgL_body1306z00_4178,
				BgL_class1307z00_4179, BgL_dssslzd2keywords1308zd2_4180,
				BgL_loc1309z00_4181, BgL_optionals1310z00_4182, BgL_keys1311z00_4183,
				BgL_thezd2closurezd2global1312z00_4184, BgL_strength1313z00_4185,
				BgL_stackable1314z00_4186, ((BgL_clabelz00_bglt) BgL_label1315z00_4187),
				CBOOL(BgL_integrated1316z00_4188));
		}

	}



/* sfun/C? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf2Czf3z01zzcgen_copz00(obj_t BgL_objz00_336)
	{
		{	/* Cgen/cop.sch 626 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_336,
				BGl_sfunzf2Czf2zzcgen_copz00);
		}

	}



/* &sfun/C? */
	obj_t BGl_z62sfunzf2Czf3z63zzcgen_copz00(obj_t BgL_envz00_4189,
		obj_t BgL_objz00_4190)
	{
		{	/* Cgen/cop.sch 626 */
			return BBOOL(BGl_sfunzf2Czf3z01zzcgen_copz00(BgL_objz00_4190));
		}

	}



/* sfun/C-nil */
	BGL_EXPORTED_DEF BgL_sfunz00_bglt BGl_sfunzf2Czd2nilz20zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 627 */
			{	/* Cgen/cop.sch 627 */
				obj_t BgL_classz00_3377;

				BgL_classz00_3377 = BGl_sfunzf2Czf2zzcgen_copz00;
				{	/* Cgen/cop.sch 627 */
					obj_t BgL__ortest_1106z00_3378;

					BgL__ortest_1106z00_3378 = BGL_CLASS_NIL(BgL_classz00_3377);
					if (CBOOL(BgL__ortest_1106z00_3378))
						{	/* Cgen/cop.sch 627 */
							return ((BgL_sfunz00_bglt) BgL__ortest_1106z00_3378);
						}
					else
						{	/* Cgen/cop.sch 627 */
							return
								((BgL_sfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3377));
						}
				}
			}
		}

	}



/* &sfun/C-nil */
	BgL_sfunz00_bglt BGl_z62sfunzf2Czd2nilz42zzcgen_copz00(obj_t BgL_envz00_4191)
	{
		{	/* Cgen/cop.sch 627 */
			return BGl_sfunzf2Czd2nilz20zzcgen_copz00();
		}

	}



/* sfun/C-integrated */
	BGL_EXPORTED_DEF bool_t
		BGl_sfunzf2Czd2integratedz20zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_337)
	{
		{	/* Cgen/cop.sch 628 */
			{
				BgL_sfunzf2czf2_bglt BgL_auxz00_6553;

				{
					obj_t BgL_auxz00_6554;

					{	/* Cgen/cop.sch 628 */
						BgL_objectz00_bglt BgL_tmpz00_6555;

						BgL_tmpz00_6555 = ((BgL_objectz00_bglt) BgL_oz00_337);
						BgL_auxz00_6554 = BGL_OBJECT_WIDENING(BgL_tmpz00_6555);
					}
					BgL_auxz00_6553 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_6554);
				}
				return
					(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_6553))->
					BgL_integratedz00);
			}
		}

	}



/* &sfun/C-integrated */
	obj_t BGl_z62sfunzf2Czd2integratedz42zzcgen_copz00(obj_t BgL_envz00_4192,
		obj_t BgL_oz00_4193)
	{
		{	/* Cgen/cop.sch 628 */
			return
				BBOOL(BGl_sfunzf2Czd2integratedz20zzcgen_copz00(
					((BgL_sfunz00_bglt) BgL_oz00_4193)));
		}

	}



/* sfun/C-integrated-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2integratedzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_338, bool_t BgL_vz00_339)
	{
		{	/* Cgen/cop.sch 629 */
			{
				BgL_sfunzf2czf2_bglt BgL_auxz00_6563;

				{
					obj_t BgL_auxz00_6564;

					{	/* Cgen/cop.sch 629 */
						BgL_objectz00_bglt BgL_tmpz00_6565;

						BgL_tmpz00_6565 = ((BgL_objectz00_bglt) BgL_oz00_338);
						BgL_auxz00_6564 = BGL_OBJECT_WIDENING(BgL_tmpz00_6565);
					}
					BgL_auxz00_6563 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_6564);
				}
				return
					((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_6563))->
						BgL_integratedz00) = ((bool_t) BgL_vz00_339), BUNSPEC);
			}
		}

	}



/* &sfun/C-integrated-set! */
	obj_t BGl_z62sfunzf2Czd2integratedzd2setz12z82zzcgen_copz00(obj_t
		BgL_envz00_4194, obj_t BgL_oz00_4195, obj_t BgL_vz00_4196)
	{
		{	/* Cgen/cop.sch 629 */
			return
				BGl_sfunzf2Czd2integratedzd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4195), CBOOL(BgL_vz00_4196));
		}

	}



/* sfun/C-label */
	BGL_EXPORTED_DEF BgL_clabelz00_bglt
		BGl_sfunzf2Czd2labelz20zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_340)
	{
		{	/* Cgen/cop.sch 630 */
			{
				BgL_sfunzf2czf2_bglt BgL_auxz00_6573;

				{
					obj_t BgL_auxz00_6574;

					{	/* Cgen/cop.sch 630 */
						BgL_objectz00_bglt BgL_tmpz00_6575;

						BgL_tmpz00_6575 = ((BgL_objectz00_bglt) BgL_oz00_340);
						BgL_auxz00_6574 = BGL_OBJECT_WIDENING(BgL_tmpz00_6575);
					}
					BgL_auxz00_6573 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_6574);
				}
				return
					(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_6573))->BgL_labelz00);
			}
		}

	}



/* &sfun/C-label */
	BgL_clabelz00_bglt BGl_z62sfunzf2Czd2labelz42zzcgen_copz00(obj_t
		BgL_envz00_4197, obj_t BgL_oz00_4198)
	{
		{	/* Cgen/cop.sch 630 */
			return
				BGl_sfunzf2Czd2labelz20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4198));
		}

	}



/* sfun/C-stackable */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2stackablez20zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_343)
	{
		{	/* Cgen/cop.sch 632 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_343)))->BgL_stackablez00);
		}

	}



/* &sfun/C-stackable */
	obj_t BGl_z62sfunzf2Czd2stackablez42zzcgen_copz00(obj_t BgL_envz00_4199,
		obj_t BgL_oz00_4200)
	{
		{	/* Cgen/cop.sch 632 */
			return
				BGl_sfunzf2Czd2stackablez20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4200));
		}

	}



/* sfun/C-stackable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2stackablezd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_344, obj_t BgL_vz00_345)
	{
		{	/* Cgen/cop.sch 633 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_344)))->BgL_stackablez00) =
				((obj_t) BgL_vz00_345), BUNSPEC);
		}

	}



/* &sfun/C-stackable-set! */
	obj_t BGl_z62sfunzf2Czd2stackablezd2setz12z82zzcgen_copz00(obj_t
		BgL_envz00_4201, obj_t BgL_oz00_4202, obj_t BgL_vz00_4203)
	{
		{	/* Cgen/cop.sch 633 */
			return
				BGl_sfunzf2Czd2stackablezd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4202), BgL_vz00_4203);
		}

	}



/* sfun/C-strength */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2strengthz20zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_346)
	{
		{	/* Cgen/cop.sch 634 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_346)))->BgL_strengthz00);
		}

	}



/* &sfun/C-strength */
	obj_t BGl_z62sfunzf2Czd2strengthz42zzcgen_copz00(obj_t BgL_envz00_4204,
		obj_t BgL_oz00_4205)
	{
		{	/* Cgen/cop.sch 634 */
			return
				BGl_sfunzf2Czd2strengthz20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4205));
		}

	}



/* sfun/C-strength-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2strengthzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_347, obj_t BgL_vz00_348)
	{
		{	/* Cgen/cop.sch 635 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_347)))->BgL_strengthz00) =
				((obj_t) BgL_vz00_348), BUNSPEC);
		}

	}



/* &sfun/C-strength-set! */
	obj_t BGl_z62sfunzf2Czd2strengthzd2setz12z82zzcgen_copz00(obj_t
		BgL_envz00_4206, obj_t BgL_oz00_4207, obj_t BgL_vz00_4208)
	{
		{	/* Cgen/cop.sch 635 */
			return
				BGl_sfunzf2Czd2strengthzd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4207), BgL_vz00_4208);
		}

	}



/* sfun/C-the-closure-global */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2thezd2closurezd2globalz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_349)
	{
		{	/* Cgen/cop.sch 636 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_349)))->BgL_thezd2closurezd2globalz00);
		}

	}



/* &sfun/C-the-closure-global */
	obj_t BGl_z62sfunzf2Czd2thezd2closurezd2globalz42zzcgen_copz00(obj_t
		BgL_envz00_4209, obj_t BgL_oz00_4210)
	{
		{	/* Cgen/cop.sch 636 */
			return
				BGl_sfunzf2Czd2thezd2closurezd2globalz20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4210));
		}

	}



/* sfun/C-the-closure-global-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2thezd2closurezd2globalzd2setz12ze0zzcgen_copz00
		(BgL_sfunz00_bglt BgL_oz00_350, obj_t BgL_vz00_351)
	{
		{	/* Cgen/cop.sch 637 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_350)))->
					BgL_thezd2closurezd2globalz00) = ((obj_t) BgL_vz00_351), BUNSPEC);
		}

	}



/* &sfun/C-the-closure-global-set! */
	obj_t BGl_z62sfunzf2Czd2thezd2closurezd2globalzd2setz12z82zzcgen_copz00(obj_t
		BgL_envz00_4211, obj_t BgL_oz00_4212, obj_t BgL_vz00_4213)
	{
		{	/* Cgen/cop.sch 637 */
			return
				BGl_sfunzf2Czd2thezd2closurezd2globalzd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4212), BgL_vz00_4213);
		}

	}



/* sfun/C-keys */
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czd2keysz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_352)
	{
		{	/* Cgen/cop.sch 638 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_352)))->BgL_keysz00);
		}

	}



/* &sfun/C-keys */
	obj_t BGl_z62sfunzf2Czd2keysz42zzcgen_copz00(obj_t BgL_envz00_4214,
		obj_t BgL_oz00_4215)
	{
		{	/* Cgen/cop.sch 638 */
			return
				BGl_sfunzf2Czd2keysz20zzcgen_copz00(((BgL_sfunz00_bglt) BgL_oz00_4215));
		}

	}



/* sfun/C-optionals */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2optionalsz20zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_355)
	{
		{	/* Cgen/cop.sch 640 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_355)))->BgL_optionalsz00);
		}

	}



/* &sfun/C-optionals */
	obj_t BGl_z62sfunzf2Czd2optionalsz42zzcgen_copz00(obj_t BgL_envz00_4216,
		obj_t BgL_oz00_4217)
	{
		{	/* Cgen/cop.sch 640 */
			return
				BGl_sfunzf2Czd2optionalsz20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4217));
		}

	}



/* sfun/C-loc */
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czd2locz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_358)
	{
		{	/* Cgen/cop.sch 642 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_358)))->BgL_locz00);
		}

	}



/* &sfun/C-loc */
	obj_t BGl_z62sfunzf2Czd2locz42zzcgen_copz00(obj_t BgL_envz00_4218,
		obj_t BgL_oz00_4219)
	{
		{	/* Cgen/cop.sch 642 */
			return
				BGl_sfunzf2Czd2locz20zzcgen_copz00(((BgL_sfunz00_bglt) BgL_oz00_4219));
		}

	}



/* sfun/C-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2loczd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_359,
		obj_t BgL_vz00_360)
	{
		{	/* Cgen/cop.sch 643 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_359)))->BgL_locz00) =
				((obj_t) BgL_vz00_360), BUNSPEC);
		}

	}



/* &sfun/C-loc-set! */
	obj_t BGl_z62sfunzf2Czd2loczd2setz12z82zzcgen_copz00(obj_t BgL_envz00_4220,
		obj_t BgL_oz00_4221, obj_t BgL_vz00_4222)
	{
		{	/* Cgen/cop.sch 643 */
			return
				BGl_sfunzf2Czd2loczd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4221), BgL_vz00_4222);
		}

	}



/* sfun/C-dsssl-keywords */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2dssslzd2keywordszf2zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_361)
	{
		{	/* Cgen/cop.sch 644 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_361)))->BgL_dssslzd2keywordszd2);
		}

	}



/* &sfun/C-dsssl-keywords */
	obj_t BGl_z62sfunzf2Czd2dssslzd2keywordsz90zzcgen_copz00(obj_t
		BgL_envz00_4223, obj_t BgL_oz00_4224)
	{
		{	/* Cgen/cop.sch 644 */
			return
				BGl_sfunzf2Czd2dssslzd2keywordszf2zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4224));
		}

	}



/* sfun/C-dsssl-keywords-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2dssslzd2keywordszd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_362, obj_t BgL_vz00_363)
	{
		{	/* Cgen/cop.sch 645 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_362)))->BgL_dssslzd2keywordszd2) =
				((obj_t) BgL_vz00_363), BUNSPEC);
		}

	}



/* &sfun/C-dsssl-keywords-set! */
	obj_t BGl_z62sfunzf2Czd2dssslzd2keywordszd2setz12z50zzcgen_copz00(obj_t
		BgL_envz00_4225, obj_t BgL_oz00_4226, obj_t BgL_vz00_4227)
	{
		{	/* Cgen/cop.sch 645 */
			return
				BGl_sfunzf2Czd2dssslzd2keywordszd2setz12z32zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4226), BgL_vz00_4227);
		}

	}



/* sfun/C-class */
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czd2classz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_364)
	{
		{	/* Cgen/cop.sch 646 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_364)))->BgL_classz00);
		}

	}



/* &sfun/C-class */
	obj_t BGl_z62sfunzf2Czd2classz42zzcgen_copz00(obj_t BgL_envz00_4228,
		obj_t BgL_oz00_4229)
	{
		{	/* Cgen/cop.sch 646 */
			return
				BGl_sfunzf2Czd2classz20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4229));
		}

	}



/* sfun/C-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2classzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_365,
		obj_t BgL_vz00_366)
	{
		{	/* Cgen/cop.sch 647 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_365)))->BgL_classz00) =
				((obj_t) BgL_vz00_366), BUNSPEC);
		}

	}



/* &sfun/C-class-set! */
	obj_t BGl_z62sfunzf2Czd2classzd2setz12z82zzcgen_copz00(obj_t BgL_envz00_4230,
		obj_t BgL_oz00_4231, obj_t BgL_vz00_4232)
	{
		{	/* Cgen/cop.sch 647 */
			return
				BGl_sfunzf2Czd2classzd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4231), BgL_vz00_4232);
		}

	}



/* sfun/C-body */
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czd2bodyz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_367)
	{
		{	/* Cgen/cop.sch 648 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_367)))->BgL_bodyz00);
		}

	}



/* &sfun/C-body */
	obj_t BGl_z62sfunzf2Czd2bodyz42zzcgen_copz00(obj_t BgL_envz00_4233,
		obj_t BgL_oz00_4234)
	{
		{	/* Cgen/cop.sch 648 */
			return
				BGl_sfunzf2Czd2bodyz20zzcgen_copz00(((BgL_sfunz00_bglt) BgL_oz00_4234));
		}

	}



/* sfun/C-body-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2bodyzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_368,
		obj_t BgL_vz00_369)
	{
		{	/* Cgen/cop.sch 649 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_368)))->BgL_bodyz00) =
				((obj_t) BgL_vz00_369), BUNSPEC);
		}

	}



/* &sfun/C-body-set! */
	obj_t BGl_z62sfunzf2Czd2bodyzd2setz12z82zzcgen_copz00(obj_t BgL_envz00_4235,
		obj_t BgL_oz00_4236, obj_t BgL_vz00_4237)
	{
		{	/* Cgen/cop.sch 649 */
			return
				BGl_sfunzf2Czd2bodyzd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4236), BgL_vz00_4237);
		}

	}



/* sfun/C-args-name */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2argszd2namezf2zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_370)
	{
		{	/* Cgen/cop.sch 650 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_370)))->BgL_argszd2namezd2);
		}

	}



/* &sfun/C-args-name */
	obj_t BGl_z62sfunzf2Czd2argszd2namez90zzcgen_copz00(obj_t BgL_envz00_4238,
		obj_t BgL_oz00_4239)
	{
		{	/* Cgen/cop.sch 650 */
			return
				BGl_sfunzf2Czd2argszd2namezf2zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4239));
		}

	}



/* sfun/C-args */
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czd2argsz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_373)
	{
		{	/* Cgen/cop.sch 652 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_373)))->BgL_argsz00);
		}

	}



/* &sfun/C-args */
	obj_t BGl_z62sfunzf2Czd2argsz42zzcgen_copz00(obj_t BgL_envz00_4240,
		obj_t BgL_oz00_4241)
	{
		{	/* Cgen/cop.sch 652 */
			return
				BGl_sfunzf2Czd2argsz20zzcgen_copz00(((BgL_sfunz00_bglt) BgL_oz00_4241));
		}

	}



/* sfun/C-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2argszd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_374,
		obj_t BgL_vz00_375)
	{
		{	/* Cgen/cop.sch 653 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_374)))->BgL_argsz00) =
				((obj_t) BgL_vz00_375), BUNSPEC);
		}

	}



/* &sfun/C-args-set! */
	obj_t BGl_z62sfunzf2Czd2argszd2setz12z82zzcgen_copz00(obj_t BgL_envz00_4242,
		obj_t BgL_oz00_4243, obj_t BgL_vz00_4244)
	{
		{	/* Cgen/cop.sch 653 */
			return
				BGl_sfunzf2Czd2argszd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4243), BgL_vz00_4244);
		}

	}



/* sfun/C-property */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2propertyz20zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_376)
	{
		{	/* Cgen/cop.sch 654 */
			return
				(((BgL_sfunz00_bglt) COBJECT(
						((BgL_sfunz00_bglt) BgL_oz00_376)))->BgL_propertyz00);
		}

	}



/* &sfun/C-property */
	obj_t BGl_z62sfunzf2Czd2propertyz42zzcgen_copz00(obj_t BgL_envz00_4245,
		obj_t BgL_oz00_4246)
	{
		{	/* Cgen/cop.sch 654 */
			return
				BGl_sfunzf2Czd2propertyz20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4246));
		}

	}



/* sfun/C-property-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2propertyzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_377, obj_t BgL_vz00_378)
	{
		{	/* Cgen/cop.sch 655 */
			return
				((((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt) BgL_oz00_377)))->BgL_propertyz00) =
				((obj_t) BgL_vz00_378), BUNSPEC);
		}

	}



/* &sfun/C-property-set! */
	obj_t BGl_z62sfunzf2Czd2propertyzd2setz12z82zzcgen_copz00(obj_t
		BgL_envz00_4247, obj_t BgL_oz00_4248, obj_t BgL_vz00_4249)
	{
		{	/* Cgen/cop.sch 655 */
			return
				BGl_sfunzf2Czd2propertyzd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4248), BgL_vz00_4249);
		}

	}



/* sfun/C-args-noescape */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2argszd2noescapezf2zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_379)
	{
		{	/* Cgen/cop.sch 656 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_379)))->BgL_argszd2noescapezd2);
		}

	}



/* &sfun/C-args-noescape */
	obj_t BGl_z62sfunzf2Czd2argszd2noescapez90zzcgen_copz00(obj_t BgL_envz00_4250,
		obj_t BgL_oz00_4251)
	{
		{	/* Cgen/cop.sch 656 */
			return
				BGl_sfunzf2Czd2argszd2noescapezf2zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4251));
		}

	}



/* sfun/C-args-noescape-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2argszd2noescapezd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_380, obj_t BgL_vz00_381)
	{
		{	/* Cgen/cop.sch 657 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_380)))->BgL_argszd2noescapezd2) =
				((obj_t) BgL_vz00_381), BUNSPEC);
		}

	}



/* &sfun/C-args-noescape-set! */
	obj_t BGl_z62sfunzf2Czd2argszd2noescapezd2setz12z50zzcgen_copz00(obj_t
		BgL_envz00_4252, obj_t BgL_oz00_4253, obj_t BgL_vz00_4254)
	{
		{	/* Cgen/cop.sch 657 */
			return
				BGl_sfunzf2Czd2argszd2noescapezd2setz12z32zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4253), BgL_vz00_4254);
		}

	}



/* sfun/C-failsafe */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2failsafez20zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_382)
	{
		{	/* Cgen/cop.sch 658 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_382)))->BgL_failsafez00);
		}

	}



/* &sfun/C-failsafe */
	obj_t BGl_z62sfunzf2Czd2failsafez42zzcgen_copz00(obj_t BgL_envz00_4255,
		obj_t BgL_oz00_4256)
	{
		{	/* Cgen/cop.sch 658 */
			return
				BGl_sfunzf2Czd2failsafez20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4256));
		}

	}



/* sfun/C-failsafe-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2failsafezd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_383, obj_t BgL_vz00_384)
	{
		{	/* Cgen/cop.sch 659 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_383)))->BgL_failsafez00) =
				((obj_t) BgL_vz00_384), BUNSPEC);
		}

	}



/* &sfun/C-failsafe-set! */
	obj_t BGl_z62sfunzf2Czd2failsafezd2setz12z82zzcgen_copz00(obj_t
		BgL_envz00_4257, obj_t BgL_oz00_4258, obj_t BgL_vz00_4259)
	{
		{	/* Cgen/cop.sch 659 */
			return
				BGl_sfunzf2Czd2failsafezd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4258), BgL_vz00_4259);
		}

	}



/* sfun/C-effect */
	BGL_EXPORTED_DEF obj_t BGl_sfunzf2Czd2effectz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_385)
	{
		{	/* Cgen/cop.sch 660 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_385)))->BgL_effectz00);
		}

	}



/* &sfun/C-effect */
	obj_t BGl_z62sfunzf2Czd2effectz42zzcgen_copz00(obj_t BgL_envz00_4260,
		obj_t BgL_oz00_4261)
	{
		{	/* Cgen/cop.sch 660 */
			return
				BGl_sfunzf2Czd2effectz20zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4261));
		}

	}



/* sfun/C-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2effectzd2setz12ze0zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_386, obj_t BgL_vz00_387)
	{
		{	/* Cgen/cop.sch 661 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_386)))->BgL_effectz00) =
				((obj_t) BgL_vz00_387), BUNSPEC);
		}

	}



/* &sfun/C-effect-set! */
	obj_t BGl_z62sfunzf2Czd2effectzd2setz12z82zzcgen_copz00(obj_t BgL_envz00_4262,
		obj_t BgL_oz00_4263, obj_t BgL_vz00_4264)
	{
		{	/* Cgen/cop.sch 661 */
			return
				BGl_sfunzf2Czd2effectzd2setz12ze0zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4263), BgL_vz00_4264);
		}

	}



/* sfun/C-the-closure */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2thezd2closurezf2zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_388)
	{
		{	/* Cgen/cop.sch 662 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_388)))->BgL_thezd2closurezd2);
		}

	}



/* &sfun/C-the-closure */
	obj_t BGl_z62sfunzf2Czd2thezd2closurez90zzcgen_copz00(obj_t BgL_envz00_4265,
		obj_t BgL_oz00_4266)
	{
		{	/* Cgen/cop.sch 662 */
			return
				BGl_sfunzf2Czd2thezd2closurezf2zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4266));
		}

	}



/* sfun/C-the-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2thezd2closurezd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_389, obj_t BgL_vz00_390)
	{
		{	/* Cgen/cop.sch 663 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_389)))->BgL_thezd2closurezd2) =
				((obj_t) BgL_vz00_390), BUNSPEC);
		}

	}



/* &sfun/C-the-closure-set! */
	obj_t BGl_z62sfunzf2Czd2thezd2closurezd2setz12z50zzcgen_copz00(obj_t
		BgL_envz00_4267, obj_t BgL_oz00_4268, obj_t BgL_vz00_4269)
	{
		{	/* Cgen/cop.sch 663 */
			return
				BGl_sfunzf2Czd2thezd2closurezd2setz12z32zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4268), BgL_vz00_4269);
		}

	}



/* sfun/C-top? */
	BGL_EXPORTED_DEF bool_t BGl_sfunzf2Czd2topzf3zd3zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_391)
	{
		{	/* Cgen/cop.sch 664 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_391)))->BgL_topzf3zf3);
		}

	}



/* &sfun/C-top? */
	obj_t BGl_z62sfunzf2Czd2topzf3zb1zzcgen_copz00(obj_t BgL_envz00_4270,
		obj_t BgL_oz00_4271)
	{
		{	/* Cgen/cop.sch 664 */
			return
				BBOOL(BGl_sfunzf2Czd2topzf3zd3zzcgen_copz00(
					((BgL_sfunz00_bglt) BgL_oz00_4271)));
		}

	}



/* sfun/C-top?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2topzf3zd2setz12z13zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_392, bool_t BgL_vz00_393)
	{
		{	/* Cgen/cop.sch 665 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_392)))->BgL_topzf3zf3) =
				((bool_t) BgL_vz00_393), BUNSPEC);
		}

	}



/* &sfun/C-top?-set! */
	obj_t BGl_z62sfunzf2Czd2topzf3zd2setz12z71zzcgen_copz00(obj_t BgL_envz00_4272,
		obj_t BgL_oz00_4273, obj_t BgL_vz00_4274)
	{
		{	/* Cgen/cop.sch 665 */
			return
				BGl_sfunzf2Czd2topzf3zd2setz12z13zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4273), CBOOL(BgL_vz00_4274));
		}

	}



/* sfun/C-stack-allocator */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2stackzd2allocatorzf2zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_394)
	{
		{	/* Cgen/cop.sch 666 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_394)))->BgL_stackzd2allocatorzd2);
		}

	}



/* &sfun/C-stack-allocator */
	obj_t BGl_z62sfunzf2Czd2stackzd2allocatorz90zzcgen_copz00(obj_t
		BgL_envz00_4275, obj_t BgL_oz00_4276)
	{
		{	/* Cgen/cop.sch 666 */
			return
				BGl_sfunzf2Czd2stackzd2allocatorzf2zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4276));
		}

	}



/* sfun/C-stack-allocator-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2stackzd2allocatorzd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_395, obj_t BgL_vz00_396)
	{
		{	/* Cgen/cop.sch 667 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_395)))->BgL_stackzd2allocatorzd2) =
				((obj_t) BgL_vz00_396), BUNSPEC);
		}

	}



/* &sfun/C-stack-allocator-set! */
	obj_t BGl_z62sfunzf2Czd2stackzd2allocatorzd2setz12z50zzcgen_copz00(obj_t
		BgL_envz00_4277, obj_t BgL_oz00_4278, obj_t BgL_vz00_4279)
	{
		{	/* Cgen/cop.sch 667 */
			return
				BGl_sfunzf2Czd2stackzd2allocatorzd2setz12z32zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4278), BgL_vz00_4279);
		}

	}



/* sfun/C-predicate-of */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2predicatezd2ofzf2zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_397)
	{
		{	/* Cgen/cop.sch 668 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_397)))->BgL_predicatezd2ofzd2);
		}

	}



/* &sfun/C-predicate-of */
	obj_t BGl_z62sfunzf2Czd2predicatezd2ofz90zzcgen_copz00(obj_t BgL_envz00_4280,
		obj_t BgL_oz00_4281)
	{
		{	/* Cgen/cop.sch 668 */
			return
				BGl_sfunzf2Czd2predicatezd2ofzf2zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4281));
		}

	}



/* sfun/C-predicate-of-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2predicatezd2ofzd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_398, obj_t BgL_vz00_399)
	{
		{	/* Cgen/cop.sch 669 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_398)))->BgL_predicatezd2ofzd2) =
				((obj_t) BgL_vz00_399), BUNSPEC);
		}

	}



/* &sfun/C-predicate-of-set! */
	obj_t BGl_z62sfunzf2Czd2predicatezd2ofzd2setz12z50zzcgen_copz00(obj_t
		BgL_envz00_4282, obj_t BgL_oz00_4283, obj_t BgL_vz00_4284)
	{
		{	/* Cgen/cop.sch 669 */
			return
				BGl_sfunzf2Czd2predicatezd2ofzd2setz12z32zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4283), BgL_vz00_4284);
		}

	}



/* sfun/C-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2sidezd2effectzf2zzcgen_copz00(BgL_sfunz00_bglt BgL_oz00_400)
	{
		{	/* Cgen/cop.sch 670 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_400)))->BgL_sidezd2effectzd2);
		}

	}



/* &sfun/C-side-effect */
	obj_t BGl_z62sfunzf2Czd2sidezd2effectz90zzcgen_copz00(obj_t BgL_envz00_4285,
		obj_t BgL_oz00_4286)
	{
		{	/* Cgen/cop.sch 670 */
			return
				BGl_sfunzf2Czd2sidezd2effectzf2zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4286));
		}

	}



/* sfun/C-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sfunzf2Czd2sidezd2effectzd2setz12z32zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_401, obj_t BgL_vz00_402)
	{
		{	/* Cgen/cop.sch 671 */
			return
				((((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_oz00_401)))->BgL_sidezd2effectzd2) =
				((obj_t) BgL_vz00_402), BUNSPEC);
		}

	}



/* &sfun/C-side-effect-set! */
	obj_t BGl_z62sfunzf2Czd2sidezd2effectzd2setz12z50zzcgen_copz00(obj_t
		BgL_envz00_4287, obj_t BgL_oz00_4288, obj_t BgL_vz00_4289)
	{
		{	/* Cgen/cop.sch 671 */
			return
				BGl_sfunzf2Czd2sidezd2effectzd2setz12z32zzcgen_copz00(
				((BgL_sfunz00_bglt) BgL_oz00_4288), BgL_vz00_4289);
		}

	}



/* sfun/C-arity */
	BGL_EXPORTED_DEF long BGl_sfunzf2Czd2arityz20zzcgen_copz00(BgL_sfunz00_bglt
		BgL_oz00_403)
	{
		{	/* Cgen/cop.sch 672 */
			return
				(((BgL_funz00_bglt) COBJECT(
						((BgL_funz00_bglt) BgL_oz00_403)))->BgL_arityz00);
		}

	}



/* &sfun/C-arity */
	obj_t BGl_z62sfunzf2Czd2arityz42zzcgen_copz00(obj_t BgL_envz00_4290,
		obj_t BgL_oz00_4291)
	{
		{	/* Cgen/cop.sch 672 */
			return
				BINT(BGl_sfunzf2Czd2arityz20zzcgen_copz00(
					((BgL_sfunz00_bglt) BgL_oz00_4291)));
		}

	}



/* make-bdb-block */
	BGL_EXPORTED_DEF BgL_bdbzd2blockzd2_bglt
		BGl_makezd2bdbzd2blockz00zzcgen_copz00(obj_t BgL_loc1291z00_406,
		BgL_copz00_bglt BgL_body1292z00_407)
	{
		{	/* Cgen/cop.sch 676 */
			{	/* Cgen/cop.sch 676 */
				BgL_bdbzd2blockzd2_bglt BgL_new1353z00_5077;

				{	/* Cgen/cop.sch 676 */
					BgL_bdbzd2blockzd2_bglt BgL_new1352z00_5078;

					BgL_new1352z00_5078 =
						((BgL_bdbzd2blockzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_bdbzd2blockzd2_bgl))));
					{	/* Cgen/cop.sch 676 */
						long BgL_arg1672z00_5079;

						{	/* Cgen/cop.sch 676 */
							long BgL_res2411z00_5080;

							BgL_res2411z00_5080 =
								BGL_CLASS_INDEX(BGl_bdbzd2blockzd2zzcgen_copz00);
							BgL_arg1672z00_5079 = BgL_res2411z00_5080;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1352z00_5078), BgL_arg1672z00_5079);
					}
					BgL_new1353z00_5077 = BgL_new1352z00_5078;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1353z00_5077)))->BgL_locz00) =
					((obj_t) BgL_loc1291z00_406), BUNSPEC);
				((((BgL_bdbzd2blockzd2_bglt) COBJECT(BgL_new1353z00_5077))->
						BgL_bodyz00) = ((BgL_copz00_bglt) BgL_body1292z00_407), BUNSPEC);
				return BgL_new1353z00_5077;
			}
		}

	}



/* &make-bdb-block */
	BgL_bdbzd2blockzd2_bglt BGl_z62makezd2bdbzd2blockz62zzcgen_copz00(obj_t
		BgL_envz00_4292, obj_t BgL_loc1291z00_4293, obj_t BgL_body1292z00_4294)
	{
		{	/* Cgen/cop.sch 676 */
			return
				BGl_makezd2bdbzd2blockz00zzcgen_copz00(BgL_loc1291z00_4293,
				((BgL_copz00_bglt) BgL_body1292z00_4294));
		}

	}



/* bdb-block? */
	BGL_EXPORTED_DEF bool_t BGl_bdbzd2blockzf3z21zzcgen_copz00(obj_t
		BgL_objz00_408)
	{
		{	/* Cgen/cop.sch 677 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_408,
				BGl_bdbzd2blockzd2zzcgen_copz00);
		}

	}



/* &bdb-block? */
	obj_t BGl_z62bdbzd2blockzf3z43zzcgen_copz00(obj_t BgL_envz00_4295,
		obj_t BgL_objz00_4296)
	{
		{	/* Cgen/cop.sch 677 */
			return BBOOL(BGl_bdbzd2blockzf3z21zzcgen_copz00(BgL_objz00_4296));
		}

	}



/* bdb-block-nil */
	BGL_EXPORTED_DEF BgL_bdbzd2blockzd2_bglt
		BGl_bdbzd2blockzd2nilz00zzcgen_copz00()
	{
		{	/* Cgen/cop.sch 678 */
			{	/* Cgen/cop.sch 678 */
				obj_t BgL_classz00_3389;

				BgL_classz00_3389 = BGl_bdbzd2blockzd2zzcgen_copz00;
				{	/* Cgen/cop.sch 678 */
					obj_t BgL__ortest_1106z00_3390;

					BgL__ortest_1106z00_3390 = BGL_CLASS_NIL(BgL_classz00_3389);
					if (CBOOL(BgL__ortest_1106z00_3390))
						{	/* Cgen/cop.sch 678 */
							return ((BgL_bdbzd2blockzd2_bglt) BgL__ortest_1106z00_3390);
						}
					else
						{	/* Cgen/cop.sch 678 */
							return
								((BgL_bdbzd2blockzd2_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3389));
						}
				}
			}
		}

	}



/* &bdb-block-nil */
	BgL_bdbzd2blockzd2_bglt BGl_z62bdbzd2blockzd2nilz62zzcgen_copz00(obj_t
		BgL_envz00_4297)
	{
		{	/* Cgen/cop.sch 678 */
			return BGl_bdbzd2blockzd2nilz00zzcgen_copz00();
		}

	}



/* bdb-block-body */
	BGL_EXPORTED_DEF BgL_copz00_bglt
		BGl_bdbzd2blockzd2bodyz00zzcgen_copz00(BgL_bdbzd2blockzd2_bglt BgL_oz00_409)
	{
		{	/* Cgen/cop.sch 679 */
			return (((BgL_bdbzd2blockzd2_bglt) COBJECT(BgL_oz00_409))->BgL_bodyz00);
		}

	}



/* &bdb-block-body */
	BgL_copz00_bglt BGl_z62bdbzd2blockzd2bodyz62zzcgen_copz00(obj_t
		BgL_envz00_4298, obj_t BgL_oz00_4299)
	{
		{	/* Cgen/cop.sch 679 */
			return
				BGl_bdbzd2blockzd2bodyz00zzcgen_copz00(
				((BgL_bdbzd2blockzd2_bglt) BgL_oz00_4299));
		}

	}



/* bdb-block-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_bdbzd2blockzd2locz00zzcgen_copz00(BgL_bdbzd2blockzd2_bglt BgL_oz00_412)
	{
		{	/* Cgen/cop.sch 681 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_412)))->BgL_locz00);
		}

	}



/* &bdb-block-loc */
	obj_t BGl_z62bdbzd2blockzd2locz62zzcgen_copz00(obj_t BgL_envz00_4300,
		obj_t BgL_oz00_4301)
	{
		{	/* Cgen/cop.sch 681 */
			return
				BGl_bdbzd2blockzd2locz00zzcgen_copz00(
				((BgL_bdbzd2blockzd2_bglt) BgL_oz00_4301));
		}

	}



/* bdb-block-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bdbzd2blockzd2loczd2setz12zc0zzcgen_copz00(BgL_bdbzd2blockzd2_bglt
		BgL_oz00_413, obj_t BgL_vz00_414)
	{
		{	/* Cgen/cop.sch 682 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_413)))->BgL_locz00) =
				((obj_t) BgL_vz00_414), BUNSPEC);
		}

	}



/* &bdb-block-loc-set! */
	obj_t BGl_z62bdbzd2blockzd2loczd2setz12za2zzcgen_copz00(obj_t BgL_envz00_4302,
		obj_t BgL_oz00_4303, obj_t BgL_vz00_4304)
	{
		{	/* Cgen/cop.sch 682 */
			return
				BGl_bdbzd2blockzd2loczd2setz12zc0zzcgen_copz00(
				((BgL_bdbzd2blockzd2_bglt) BgL_oz00_4303), BgL_vz00_4304);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			{	/* Cgen/cop.scm 23 */
				obj_t BgL_arg1687z00_1826;
				obj_t BgL_arg1688z00_1827;

				{	/* Cgen/cop.scm 23 */
					obj_t BgL_v1519z00_1838;

					BgL_v1519z00_1838 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 23 */
						obj_t BgL_arg1697z00_1839;

						BgL_arg1697z00_1839 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2474z00zzcgen_copz00,
							BGl_proc2473z00zzcgen_copz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2472z00zzcgen_copz00, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1519z00_1838, ((long) 0), BgL_arg1697z00_1839);
					}
					BgL_arg1687z00_1826 = BgL_v1519z00_1838;
				}
				{	/* Cgen/cop.scm 23 */
					obj_t BgL_v1520z00_1852;

					BgL_v1520z00_1852 = create_vector(((long) 0));
					BgL_arg1688z00_1827 = BgL_v1520z00_1852;
				}
				BGl_copz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 3)), BGl_objectz00zz__objectz00, ((long) 2905),
					BGl_proc2477z00zzcgen_copz00, BGl_proc2476z00zzcgen_copz00, BFALSE,
					BGl_proc2475z00zzcgen_copz00, BFALSE, BgL_arg1687z00_1826,
					BgL_arg1688z00_1827);
			}
			{	/* Cgen/cop.scm 27 */
				obj_t BgL_arg1726z00_1859;
				obj_t BgL_arg1727z00_1860;

				{	/* Cgen/cop.scm 27 */
					obj_t BgL_v1521z00_1874;

					BgL_v1521z00_1874 = create_vector(((long) 3));
					{	/* Cgen/cop.scm 27 */
						obj_t BgL_arg1733z00_1875;

						BgL_arg1733z00_1875 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2479z00zzcgen_copz00,
							BGl_proc2478z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1521z00_1874, ((long) 0), BgL_arg1733z00_1875);
					}
					{	/* Cgen/cop.scm 27 */
						obj_t BgL_arg1742z00_1885;

						BgL_arg1742z00_1885 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc2482z00zzcgen_copz00,
							BGl_proc2481z00zzcgen_copz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2480z00zzcgen_copz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1521z00_1874, ((long) 1), BgL_arg1742z00_1885);
					}
					{	/* Cgen/cop.scm 27 */
						obj_t BgL_arg1754z00_1898;

						BgL_arg1754z00_1898 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2485z00zzcgen_copz00,
							BGl_proc2484z00zzcgen_copz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2483z00zzcgen_copz00, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1521z00_1874, ((long) 2), BgL_arg1754z00_1898);
					}
					BgL_arg1726z00_1859 = BgL_v1521z00_1874;
				}
				{	/* Cgen/cop.scm 27 */
					obj_t BgL_v1522z00_1911;

					BgL_v1522z00_1911 = create_vector(((long) 0));
					BgL_arg1727z00_1860 = BgL_v1522z00_1911;
				}
				BGl_clabelz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 9)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 41516),
					BGl_proc2488z00zzcgen_copz00, BGl_proc2487z00zzcgen_copz00, BFALSE,
					BGl_proc2486z00zzcgen_copz00, BFALSE, BgL_arg1726z00_1859,
					BgL_arg1727z00_1860);
			}
			{	/* Cgen/cop.scm 32 */
				obj_t BgL_arg1775z00_1918;
				obj_t BgL_arg1778z00_1919;

				{	/* Cgen/cop.scm 32 */
					obj_t BgL_v1523z00_1931;

					BgL_v1523z00_1931 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 32 */
						obj_t BgL_arg1790z00_1932;

						BgL_arg1790z00_1932 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2490z00zzcgen_copz00,
							BGl_proc2489z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_clabelz00zzcgen_copz00);
						VECTOR_SET(BgL_v1523z00_1931, ((long) 0), BgL_arg1790z00_1932);
					}
					BgL_arg1775z00_1918 = BgL_v1523z00_1931;
				}
				{	/* Cgen/cop.scm 32 */
					obj_t BgL_v1524z00_1942;

					BgL_v1524z00_1942 = create_vector(((long) 0));
					BgL_arg1778z00_1919 = BgL_v1524z00_1942;
				}
				BGl_cgotoz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 11)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 40532),
					BGl_proc2493z00zzcgen_copz00, BGl_proc2492z00zzcgen_copz00, BFALSE,
					BGl_proc2491z00zzcgen_copz00, BFALSE, BgL_arg1775z00_1918,
					BgL_arg1778z00_1919);
			}
			{	/* Cgen/cop.scm 35 */
				obj_t BgL_arg1811z00_1949;
				obj_t BgL_arg1820z00_1950;

				{	/* Cgen/cop.scm 35 */
					obj_t BgL_v1525z00_1962;

					BgL_v1525z00_1962 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 35 */
						obj_t BgL_arg1826z00_1963;

						BgL_arg1826z00_1963 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2495z00zzcgen_copz00,
							BGl_proc2494z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1525z00_1962, ((long) 0), BgL_arg1826z00_1963);
					}
					BgL_arg1811z00_1949 = BgL_v1525z00_1962;
				}
				{	/* Cgen/cop.scm 35 */
					obj_t BgL_v1526z00_1973;

					BgL_v1526z00_1973 = create_vector(((long) 0));
					BgL_arg1820z00_1950 = BgL_v1526z00_1973;
				}
				BGl_cblockz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 12)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 31642),
					BGl_proc2498z00zzcgen_copz00, BGl_proc2497z00zzcgen_copz00, BFALSE,
					BGl_proc2496z00zzcgen_copz00, BFALSE, BgL_arg1811z00_1949,
					BgL_arg1820z00_1950);
			}
			{	/* Cgen/cop.scm 38 */
				obj_t BgL_arg1835z00_1980;
				obj_t BgL_arg1836z00_1981;

				{	/* Cgen/cop.scm 38 */
					obj_t BgL_v1527z00_1993;

					BgL_v1527z00_1993 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 38 */
						obj_t BgL_arg1842z00_1994;

						BgL_arg1842z00_1994 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2500z00zzcgen_copz00,
							BGl_proc2499z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1527z00_1993, ((long) 0), BgL_arg1842z00_1994);
					}
					BgL_arg1835z00_1980 = BgL_v1527z00_1993;
				}
				{	/* Cgen/cop.scm 38 */
					obj_t BgL_v1528z00_2004;

					BgL_v1528z00_2004 = create_vector(((long) 0));
					BgL_arg1836z00_1981 = BgL_v1528z00_2004;
				}
				BGl_creturnz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 14)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 18228),
					BGl_proc2503z00zzcgen_copz00, BGl_proc2502z00zzcgen_copz00, BFALSE,
					BGl_proc2501z00zzcgen_copz00, BFALSE, BgL_arg1835z00_1980,
					BgL_arg1836z00_1981);
			}
			{	/* Cgen/cop.scm 41 */
				obj_t BgL_arg1853z00_2011;
				obj_t BgL_arg1855z00_2012;

				{	/* Cgen/cop.scm 41 */
					obj_t BgL_v1529z00_2024;

					BgL_v1529z00_2024 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 41 */
						obj_t BgL_arg1861z00_2025;

						BgL_arg1861z00_2025 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2505z00zzcgen_copz00,
							BGl_proc2504z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1529z00_2024, ((long) 0), BgL_arg1861z00_2025);
					}
					BgL_arg1853z00_2011 = BgL_v1529z00_2024;
				}
				{	/* Cgen/cop.scm 41 */
					obj_t BgL_v1530z00_2035;

					BgL_v1530z00_2035 = create_vector(((long) 0));
					BgL_arg1855z00_2012 = BgL_v1530z00_2035;
				}
				BGl_cvoidz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 15)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 36996),
					BGl_proc2508z00zzcgen_copz00, BGl_proc2507z00zzcgen_copz00, BFALSE,
					BGl_proc2506z00zzcgen_copz00, BFALSE, BgL_arg1853z00_2011,
					BgL_arg1855z00_2012);
			}
			{	/* Cgen/cop.scm 44 */
				obj_t BgL_arg1871z00_2042;
				obj_t BgL_arg1872z00_2043;

				{	/* Cgen/cop.scm 44 */
					obj_t BgL_v1531z00_2055;

					BgL_v1531z00_2055 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 44 */
						obj_t BgL_arg1878z00_2056;

						BgL_arg1878z00_2056 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2510z00zzcgen_copz00,
							BGl_proc2509z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1531z00_2055, ((long) 0), BgL_arg1878z00_2056);
					}
					BgL_arg1871z00_2042 = BgL_v1531z00_2055;
				}
				{	/* Cgen/cop.scm 44 */
					obj_t BgL_v1532z00_2066;

					BgL_v1532z00_2066 = create_vector(((long) 0));
					BgL_arg1872z00_2043 = BgL_v1532z00_2066;
				}
				BGl_catomz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 16)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 15854),
					BGl_proc2513z00zzcgen_copz00, BGl_proc2512z00zzcgen_copz00, BFALSE,
					BGl_proc2511z00zzcgen_copz00, BFALSE, BgL_arg1871z00_2042,
					BgL_arg1872z00_2043);
			}
			{	/* Cgen/cop.scm 47 */
				obj_t BgL_arg1887z00_2073;
				obj_t BgL_arg1888z00_2074;

				{	/* Cgen/cop.scm 47 */
					obj_t BgL_v1533z00_2086;

					BgL_v1533z00_2086 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 47 */
						obj_t BgL_arg1895z00_2087;

						BgL_arg1895z00_2087 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc2515z00zzcgen_copz00,
							BGl_proc2514z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1533z00_2086, ((long) 0), BgL_arg1895z00_2087);
					}
					BgL_arg1887z00_2073 = BgL_v1533z00_2086;
				}
				{	/* Cgen/cop.scm 47 */
					obj_t BgL_v1534z00_2097;

					BgL_v1534z00_2097 = create_vector(((long) 0));
					BgL_arg1888z00_2074 = BgL_v1534z00_2097;
				}
				BGl_varcz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 18)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 5365),
					BGl_proc2518z00zzcgen_copz00, BGl_proc2517z00zzcgen_copz00, BFALSE,
					BGl_proc2516z00zzcgen_copz00, BFALSE, BgL_arg1887z00_2073,
					BgL_arg1888z00_2074);
			}
			{	/* Cgen/cop.scm 50 */
				obj_t BgL_arg1904z00_2104;
				obj_t BgL_arg1905z00_2105;

				{	/* Cgen/cop.scm 50 */
					obj_t BgL_v1535z00_2118;

					BgL_v1535z00_2118 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 50 */
						obj_t BgL_arg1911z00_2119;

						BgL_arg1911z00_2119 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc2520z00zzcgen_copz00,
							BGl_proc2519z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1535z00_2118, ((long) 0), BgL_arg1911z00_2119);
					}
					{	/* Cgen/cop.scm 50 */
						obj_t BgL_arg1916z00_2129;

						BgL_arg1916z00_2129 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2522z00zzcgen_copz00,
							BGl_proc2521z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1535z00_2118, ((long) 1), BgL_arg1916z00_2129);
					}
					BgL_arg1904z00_2104 = BgL_v1535z00_2118;
				}
				{	/* Cgen/cop.scm 50 */
					obj_t BgL_v1536z00_2139;

					BgL_v1536z00_2139 = create_vector(((long) 0));
					BgL_arg1905z00_2105 = BgL_v1536z00_2139;
				}
				BGl_cpragmaz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 21)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 59415),
					BGl_proc2525z00zzcgen_copz00, BGl_proc2524z00zzcgen_copz00, BFALSE,
					BGl_proc2523z00zzcgen_copz00, BFALSE, BgL_arg1904z00_2104,
					BgL_arg1905z00_2105);
			}
			{	/* Cgen/cop.scm 54 */
				obj_t BgL_arg1925z00_2146;
				obj_t BgL_arg1926z00_2147;

				{	/* Cgen/cop.scm 54 */
					obj_t BgL_v1537z00_2160;

					BgL_v1537z00_2160 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 54 */
						obj_t BgL_arg1932z00_2161;

						BgL_arg1932z00_2161 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2527z00zzcgen_copz00,
							BGl_proc2526z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1537z00_2160, ((long) 0), BgL_arg1932z00_2161);
					}
					{	/* Cgen/cop.scm 54 */
						obj_t BgL_arg1937z00_2171;

						BgL_arg1937z00_2171 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2529z00zzcgen_copz00,
							BGl_proc2528z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1537z00_2160, ((long) 1), BgL_arg1937z00_2171);
					}
					BgL_arg1925z00_2146 = BgL_v1537z00_2160;
				}
				{	/* Cgen/cop.scm 54 */
					obj_t BgL_v1538z00_2181;

					BgL_v1538z00_2181 = create_vector(((long) 0));
					BgL_arg1926z00_2147 = BgL_v1538z00_2181;
				}
				BGl_ccastz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 24)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 47786),
					BGl_proc2532z00zzcgen_copz00, BGl_proc2531z00zzcgen_copz00, BFALSE,
					BGl_proc2530z00zzcgen_copz00, BFALSE, BgL_arg1925z00_2146,
					BgL_arg1926z00_2147);
			}
			{	/* Cgen/cop.scm 58 */
				obj_t BgL_arg1945z00_2188;
				obj_t BgL_arg1946z00_2189;

				{	/* Cgen/cop.scm 58 */
					obj_t BgL_v1539z00_2202;

					BgL_v1539z00_2202 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 58 */
						obj_t BgL_arg1953z00_2203;

						BgL_arg1953z00_2203 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2535z00zzcgen_copz00,
							BGl_proc2534z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BGl_proc2533z00zzcgen_copz00, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1539z00_2202, ((long) 0), BgL_arg1953z00_2203);
					}
					{	/* Cgen/cop.scm 58 */
						obj_t BgL_arg1960z00_2216;

						BgL_arg1960z00_2216 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2537z00zzcgen_copz00,
							BGl_proc2536z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1539z00_2202, ((long) 1), BgL_arg1960z00_2216);
					}
					BgL_arg1945z00_2188 = BgL_v1539z00_2202;
				}
				{	/* Cgen/cop.scm 58 */
					obj_t BgL_v1540z00_2226;

					BgL_v1540z00_2226 = create_vector(((long) 0));
					BgL_arg1946z00_2189 = BgL_v1540z00_2226;
				}
				BGl_csequencez00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 27)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 24862),
					BGl_proc2540z00zzcgen_copz00, BGl_proc2539z00zzcgen_copz00, BFALSE,
					BGl_proc2538z00zzcgen_copz00, BFALSE, BgL_arg1945z00_2188,
					BgL_arg1946z00_2189);
			}
			{	/* Cgen/cop.scm 62 */
				obj_t BgL_arg1968z00_2233;
				obj_t BgL_arg1969z00_2234;

				{	/* Cgen/cop.scm 62 */
					obj_t BgL_v1541z00_2245;

					BgL_v1541z00_2245 = create_vector(((long) 0));
					BgL_arg1968z00_2233 = BgL_v1541z00_2245;
				}
				{	/* Cgen/cop.scm 62 */
					obj_t BgL_v1542z00_2246;

					BgL_v1542z00_2246 = create_vector(((long) 0));
					BgL_arg1969z00_2234 = BgL_v1542z00_2246;
				}
				BGl_nopz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 28)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 47033),
					BGl_proc2543z00zzcgen_copz00, BGl_proc2542z00zzcgen_copz00, BFALSE,
					BGl_proc2541z00zzcgen_copz00, BFALSE, BgL_arg1968z00_2233,
					BgL_arg1969z00_2234);
			}
			{	/* Cgen/cop.scm 64 */
				obj_t BgL_arg1979z00_2253;
				obj_t BgL_arg1980z00_2254;

				{	/* Cgen/cop.scm 64 */
					obj_t BgL_v1543z00_2266;

					BgL_v1543z00_2266 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 64 */
						obj_t BgL_arg1986z00_2267;

						BgL_arg1986z00_2267 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2545z00zzcgen_copz00,
							BGl_proc2544z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1543z00_2266, ((long) 0), BgL_arg1986z00_2267);
					}
					BgL_arg1979z00_2253 = BgL_v1543z00_2266;
				}
				{	/* Cgen/cop.scm 64 */
					obj_t BgL_v1544z00_2277;

					BgL_v1544z00_2277 = create_vector(((long) 0));
					BgL_arg1980z00_2254 = BgL_v1544z00_2277;
				}
				BGl_stopz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 29)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 24052),
					BGl_proc2548z00zzcgen_copz00, BGl_proc2547z00zzcgen_copz00, BFALSE,
					BGl_proc2546z00zzcgen_copz00, BFALSE, BgL_arg1979z00_2253,
					BgL_arg1980z00_2254);
			}
			{	/* Cgen/cop.scm 67 */
				obj_t BgL_arg1995z00_2284;
				obj_t BgL_arg1996z00_2285;

				{	/* Cgen/cop.scm 67 */
					obj_t BgL_v1545z00_2298;

					BgL_v1545z00_2298 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 67 */
						obj_t BgL_arg2002z00_2299;

						BgL_arg2002z00_2299 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2550z00zzcgen_copz00,
							BGl_proc2549z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_varcz00zzcgen_copz00);
						VECTOR_SET(BgL_v1545z00_2298, ((long) 0), BgL_arg2002z00_2299);
					}
					{	/* Cgen/cop.scm 67 */
						obj_t BgL_arg2007z00_2309;

						BgL_arg2007z00_2309 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2552z00zzcgen_copz00,
							BGl_proc2551z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1545z00_2298, ((long) 1), BgL_arg2007z00_2309);
					}
					BgL_arg1995z00_2284 = BgL_v1545z00_2298;
				}
				{	/* Cgen/cop.scm 67 */
					obj_t BgL_v1546z00_2319;

					BgL_v1546z00_2319 = create_vector(((long) 0));
					BgL_arg1996z00_2285 = BgL_v1546z00_2319;
				}
				BGl_csetqz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 31)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 22901),
					BGl_proc2555z00zzcgen_copz00, BGl_proc2554z00zzcgen_copz00, BFALSE,
					BGl_proc2553z00zzcgen_copz00, BFALSE, BgL_arg1995z00_2284,
					BgL_arg1996z00_2285);
			}
			{	/* Cgen/cop.scm 71 */
				obj_t BgL_arg2017z00_2326;
				obj_t BgL_arg2018z00_2327;

				{	/* Cgen/cop.scm 71 */
					obj_t BgL_v1547z00_2341;

					BgL_v1547z00_2341 = create_vector(((long) 3));
					{	/* Cgen/cop.scm 71 */
						obj_t BgL_arg2026z00_2342;

						BgL_arg2026z00_2342 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									32)), BGl_proc2557z00zzcgen_copz00,
							BGl_proc2556z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1547z00_2341, ((long) 0), BgL_arg2026z00_2342);
					}
					{	/* Cgen/cop.scm 71 */
						obj_t BgL_arg2033z00_2352;

						BgL_arg2033z00_2352 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2559z00zzcgen_copz00,
							BGl_proc2558z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1547z00_2341, ((long) 1), BgL_arg2033z00_2352);
					}
					{	/* Cgen/cop.scm 71 */
						obj_t BgL_arg2038z00_2362;

						BgL_arg2038z00_2362 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									34)), BGl_proc2561z00zzcgen_copz00,
							BGl_proc2560z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1547z00_2341, ((long) 2), BgL_arg2038z00_2362);
					}
					BgL_arg2017z00_2326 = BgL_v1547z00_2341;
				}
				{	/* Cgen/cop.scm 71 */
					obj_t BgL_v1548z00_2372;

					BgL_v1548z00_2372 = create_vector(((long) 0));
					BgL_arg2018z00_2327 = BgL_v1548z00_2372;
				}
				BGl_cifz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 35)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 63739),
					BGl_proc2564z00zzcgen_copz00, BGl_proc2563z00zzcgen_copz00, BFALSE,
					BGl_proc2562z00zzcgen_copz00, BFALSE, BgL_arg2017z00_2326,
					BgL_arg2018z00_2327);
			}
			{	/* Cgen/cop.scm 76 */
				obj_t BgL_arg2046z00_2379;
				obj_t BgL_arg2047z00_2380;

				{	/* Cgen/cop.scm 76 */
					obj_t BgL_v1549z00_2392;

					BgL_v1549z00_2392 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 76 */
						obj_t BgL_arg2053z00_2393;

						BgL_arg2053z00_2393 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									36)), BGl_proc2566z00zzcgen_copz00,
							BGl_proc2565z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1549z00_2392, ((long) 0), BgL_arg2053z00_2393);
					}
					BgL_arg2046z00_2379 = BgL_v1549z00_2392;
				}
				{	/* Cgen/cop.scm 76 */
					obj_t BgL_v1550z00_2403;

					BgL_v1550z00_2403 = create_vector(((long) 0));
					BgL_arg2047z00_2380 = BgL_v1550z00_2403;
				}
				BGl_localzd2varzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 37)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 30353),
					BGl_proc2569z00zzcgen_copz00, BGl_proc2568z00zzcgen_copz00, BFALSE,
					BGl_proc2567z00zzcgen_copz00, BFALSE, BgL_arg2046z00_2379,
					BgL_arg2047z00_2380);
			}
			{	/* Cgen/cop.scm 79 */
				obj_t BgL_arg2062z00_2410;
				obj_t BgL_arg2063z00_2411;

				{	/* Cgen/cop.scm 79 */
					obj_t BgL_v1551z00_2426;

					BgL_v1551z00_2426 = create_vector(((long) 4));
					{	/* Cgen/cop.scm 79 */
						obj_t BgL_arg2070z00_2427;

						BgL_arg2070z00_2427 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc2571z00zzcgen_copz00,
							BGl_proc2570z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1551z00_2426, ((long) 0), BgL_arg2070z00_2427);
					}
					{	/* Cgen/cop.scm 79 */
						obj_t BgL_arg2075z00_2437;

						BgL_arg2075z00_2437 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2573z00zzcgen_copz00,
							BGl_proc2572z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1551z00_2426, ((long) 1), BgL_arg2075z00_2437);
					}
					{	/* Cgen/cop.scm 79 */
						obj_t BgL_arg2080z00_2447;

						BgL_arg2080z00_2447 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									39)), BGl_proc2575z00zzcgen_copz00,
							BGl_proc2574z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 40)));
						VECTOR_SET(BgL_v1551z00_2426, ((long) 2), BgL_arg2080z00_2447);
					}
					{	/* Cgen/cop.scm 79 */
						obj_t BgL_arg2085z00_2457;

						BgL_arg2085z00_2457 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2577z00zzcgen_copz00,
							BGl_proc2576z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1551z00_2426, ((long) 3), BgL_arg2085z00_2457);
					}
					BgL_arg2062z00_2410 = BgL_v1551z00_2426;
				}
				{	/* Cgen/cop.scm 79 */
					obj_t BgL_v1552z00_2467;

					BgL_v1552z00_2467 = create_vector(((long) 0));
					BgL_arg2063z00_2411 = BgL_v1552z00_2467;
				}
				BGl_cfuncallz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 41)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 32864),
					BGl_proc2580z00zzcgen_copz00, BGl_proc2579z00zzcgen_copz00, BFALSE,
					BGl_proc2578z00zzcgen_copz00, BFALSE, BgL_arg2062z00_2410,
					BgL_arg2063z00_2411);
			}
			{	/* Cgen/cop.scm 85 */
				obj_t BgL_arg2093z00_2474;
				obj_t BgL_arg2094z00_2475;

				{	/* Cgen/cop.scm 85 */
					obj_t BgL_v1553z00_2488;

					BgL_v1553z00_2488 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 85 */
						obj_t BgL_arg2100z00_2489;

						BgL_arg2100z00_2489 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc2582z00zzcgen_copz00,
							BGl_proc2581z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1553z00_2488, ((long) 0), BgL_arg2100z00_2489);
					}
					{	/* Cgen/cop.scm 85 */
						obj_t BgL_arg2105z00_2499;

						BgL_arg2105z00_2499 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2584z00zzcgen_copz00,
							BGl_proc2583z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1553z00_2488, ((long) 1), BgL_arg2105z00_2499);
					}
					BgL_arg2093z00_2474 = BgL_v1553z00_2488;
				}
				{	/* Cgen/cop.scm 85 */
					obj_t BgL_v1554z00_2509;

					BgL_v1554z00_2509 = create_vector(((long) 0));
					BgL_arg2094z00_2475 = BgL_v1554z00_2509;
				}
				BGl_capplyz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 42)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 107),
					BGl_proc2587z00zzcgen_copz00, BGl_proc2586z00zzcgen_copz00, BFALSE,
					BGl_proc2585z00zzcgen_copz00, BFALSE, BgL_arg2093z00_2474,
					BgL_arg2094z00_2475);
			}
			{	/* Cgen/cop.scm 89 */
				obj_t BgL_arg2114z00_2516;
				obj_t BgL_arg2115z00_2517;

				{	/* Cgen/cop.scm 89 */
					obj_t BgL_v1555z00_2530;

					BgL_v1555z00_2530 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 89 */
						obj_t BgL_arg2121z00_2531;

						BgL_arg2121z00_2531 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc2589z00zzcgen_copz00,
							BGl_proc2588z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1555z00_2530, ((long) 0), BgL_arg2121z00_2531);
					}
					{	/* Cgen/cop.scm 89 */
						obj_t BgL_arg2126z00_2541;

						BgL_arg2126z00_2541 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2591z00zzcgen_copz00,
							BGl_proc2590z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1555z00_2530, ((long) 1), BgL_arg2126z00_2541);
					}
					BgL_arg2114z00_2516 = BgL_v1555z00_2530;
				}
				{	/* Cgen/cop.scm 89 */
					obj_t BgL_v1556z00_2551;

					BgL_v1556z00_2551 = create_vector(((long) 0));
					BgL_arg2115z00_2517 = BgL_v1556z00_2551;
				}
				BGl_cappz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 43)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 24539),
					BGl_proc2594z00zzcgen_copz00, BGl_proc2593z00zzcgen_copz00, BFALSE,
					BGl_proc2592z00zzcgen_copz00, BFALSE, BgL_arg2114z00_2516,
					BgL_arg2115z00_2517);
			}
			{	/* Cgen/cop.scm 93 */
				obj_t BgL_arg2134z00_2558;
				obj_t BgL_arg2135z00_2559;

				{	/* Cgen/cop.scm 93 */
					obj_t BgL_v1557z00_2573;

					BgL_v1557z00_2573 = create_vector(((long) 3));
					{	/* Cgen/cop.scm 93 */
						obj_t BgL_arg2142z00_2574;

						BgL_arg2142z00_2574 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									44)), BGl_proc2596z00zzcgen_copz00,
							BGl_proc2595z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1557z00_2573, ((long) 0), BgL_arg2142z00_2574);
					}
					{	/* Cgen/cop.scm 93 */
						obj_t BgL_arg2147z00_2584;

						BgL_arg2147z00_2584 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									45)), BGl_proc2598z00zzcgen_copz00,
							BGl_proc2597z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1557z00_2573, ((long) 1), BgL_arg2147z00_2584);
					}
					{	/* Cgen/cop.scm 93 */
						obj_t BgL_arg2152z00_2594;

						BgL_arg2152z00_2594 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc2600z00zzcgen_copz00,
							BGl_proc2599z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1557z00_2573, ((long) 2), BgL_arg2152z00_2594);
					}
					BgL_arg2134z00_2558 = BgL_v1557z00_2573;
				}
				{	/* Cgen/cop.scm 93 */
					obj_t BgL_v1558z00_2604;

					BgL_v1558z00_2604 = create_vector(((long) 0));
					BgL_arg2135z00_2559 = BgL_v1558z00_2604;
				}
				BGl_cfailz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 46)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 41204),
					BGl_proc2603z00zzcgen_copz00, BGl_proc2602z00zzcgen_copz00, BFALSE,
					BGl_proc2601z00zzcgen_copz00, BFALSE, BgL_arg2134z00_2558,
					BgL_arg2135z00_2559);
			}
			{	/* Cgen/cop.scm 98 */
				obj_t BgL_arg2160z00_2611;
				obj_t BgL_arg2161z00_2612;

				{	/* Cgen/cop.scm 98 */
					obj_t BgL_v1559z00_2625;

					BgL_v1559z00_2625 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 98 */
						obj_t BgL_arg2167z00_2626;

						BgL_arg2167z00_2626 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									32)), BGl_proc2605z00zzcgen_copz00,
							BGl_proc2604z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1559z00_2625, ((long) 0), BgL_arg2167z00_2626);
					}
					{	/* Cgen/cop.scm 98 */
						obj_t BgL_arg2172z00_2636;

						BgL_arg2172z00_2636 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									47)), BGl_proc2607z00zzcgen_copz00,
							BGl_proc2606z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1559z00_2625, ((long) 1), BgL_arg2172z00_2636);
					}
					BgL_arg2160z00_2611 = BgL_v1559z00_2625;
				}
				{	/* Cgen/cop.scm 98 */
					obj_t BgL_v1560z00_2646;

					BgL_v1560z00_2646 = create_vector(((long) 0));
					BgL_arg2161z00_2612 = BgL_v1560z00_2646;
				}
				BGl_cswitchz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 48)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 9005),
					BGl_proc2610z00zzcgen_copz00, BGl_proc2609z00zzcgen_copz00, BFALSE,
					BGl_proc2608z00zzcgen_copz00, BFALSE, BgL_arg2160z00_2611,
					BgL_arg2161z00_2612);
			}
			{	/* Cgen/cop.scm 102 */
				obj_t BgL_arg2180z00_2653;
				obj_t BgL_arg2181z00_2654;

				{	/* Cgen/cop.scm 102 */
					obj_t BgL_v1561z00_2667;

					BgL_v1561z00_2667 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 102 */
						obj_t BgL_arg2187z00_2668;

						BgL_arg2187z00_2668 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2612z00zzcgen_copz00,
							BGl_proc2611z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1561z00_2667, ((long) 0), BgL_arg2187z00_2668);
					}
					{	/* Cgen/cop.scm 102 */
						obj_t BgL_arg2192z00_2678;

						BgL_arg2192z00_2678 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									49)), BGl_proc2614z00zzcgen_copz00,
							BGl_proc2613z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1561z00_2667, ((long) 1), BgL_arg2192z00_2678);
					}
					BgL_arg2180z00_2653 = BgL_v1561z00_2667;
				}
				{	/* Cgen/cop.scm 102 */
					obj_t BgL_v1562z00_2688;

					BgL_v1562z00_2688 = create_vector(((long) 0));
					BgL_arg2181z00_2654 = BgL_v1562z00_2688;
				}
				BGl_cmakezd2boxzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 50)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 30771),
					BGl_proc2617z00zzcgen_copz00, BGl_proc2616z00zzcgen_copz00, BFALSE,
					BGl_proc2615z00zzcgen_copz00, BFALSE, BgL_arg2180z00_2653,
					BgL_arg2181z00_2654);
			}
			{	/* Cgen/cop.scm 106 */
				obj_t BgL_arg2200z00_2695;
				obj_t BgL_arg2201z00_2696;

				{	/* Cgen/cop.scm 106 */
					obj_t BgL_v1563z00_2708;

					BgL_v1563z00_2708 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 106 */
						obj_t BgL_arg2207z00_2709;

						BgL_arg2207z00_2709 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2619z00zzcgen_copz00,
							BGl_proc2618z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1563z00_2708, ((long) 0), BgL_arg2207z00_2709);
					}
					BgL_arg2200z00_2695 = BgL_v1563z00_2708;
				}
				{	/* Cgen/cop.scm 106 */
					obj_t BgL_v1564z00_2719;

					BgL_v1564z00_2719 = create_vector(((long) 0));
					BgL_arg2201z00_2696 = BgL_v1564z00_2719;
				}
				BGl_cboxzd2refzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 51)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 17966),
					BGl_proc2622z00zzcgen_copz00, BGl_proc2621z00zzcgen_copz00, BFALSE,
					BGl_proc2620z00zzcgen_copz00, BFALSE, BgL_arg2200z00_2695,
					BgL_arg2201z00_2696);
			}
			{	/* Cgen/cop.scm 109 */
				obj_t BgL_arg2215z00_2726;
				obj_t BgL_arg2216z00_2727;

				{	/* Cgen/cop.scm 109 */
					obj_t BgL_v1565z00_2740;

					BgL_v1565z00_2740 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 109 */
						obj_t BgL_arg2222z00_2741;

						BgL_arg2222z00_2741 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2624z00zzcgen_copz00,
							BGl_proc2623z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1565z00_2740, ((long) 0), BgL_arg2222z00_2741);
					}
					{	/* Cgen/cop.scm 109 */
						obj_t BgL_arg2227z00_2751;

						BgL_arg2227z00_2751 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2626z00zzcgen_copz00,
							BGl_proc2625z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1565z00_2740, ((long) 1), BgL_arg2227z00_2751);
					}
					BgL_arg2215z00_2726 = BgL_v1565z00_2740;
				}
				{	/* Cgen/cop.scm 109 */
					obj_t BgL_v1566z00_2761;

					BgL_v1566z00_2761 = create_vector(((long) 0));
					BgL_arg2216z00_2727 = BgL_v1566z00_2761;
				}
				BGl_cboxzd2setz12zc0zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 52)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 33302),
					BGl_proc2629z00zzcgen_copz00, BGl_proc2628z00zzcgen_copz00, BFALSE,
					BGl_proc2627z00zzcgen_copz00, BFALSE, BgL_arg2215z00_2726,
					BgL_arg2216z00_2727);
			}
			{	/* Cgen/cop.scm 113 */
				obj_t BgL_arg2235z00_2768;
				obj_t BgL_arg2236z00_2769;

				{	/* Cgen/cop.scm 113 */
					obj_t BgL_v1567z00_2783;

					BgL_v1567z00_2783 = create_vector(((long) 3));
					{	/* Cgen/cop.scm 113 */
						obj_t BgL_arg2242z00_2784;

						BgL_arg2242z00_2784 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									53)), BGl_proc2631z00zzcgen_copz00,
							BGl_proc2630z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1567z00_2783, ((long) 0), BgL_arg2242z00_2784);
					}
					{	/* Cgen/cop.scm 113 */
						obj_t BgL_arg2247z00_2794;

						BgL_arg2247z00_2794 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									54)), BGl_proc2633z00zzcgen_copz00,
							BGl_proc2632z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1567z00_2783, ((long) 1), BgL_arg2247z00_2794);
					}
					{	/* Cgen/cop.scm 113 */
						obj_t BgL_arg2252z00_2804;

						BgL_arg2252z00_2804 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2635z00zzcgen_copz00,
							BGl_proc2634z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1567z00_2783, ((long) 2), BgL_arg2252z00_2804);
					}
					BgL_arg2235z00_2768 = BgL_v1567z00_2783;
				}
				{	/* Cgen/cop.scm 113 */
					obj_t BgL_v1568z00_2814;

					BgL_v1568z00_2814 = create_vector(((long) 0));
					BgL_arg2236z00_2769 = BgL_v1568z00_2814;
				}
				BGl_csetzd2exzd2itz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 55)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 42095),
					BGl_proc2638z00zzcgen_copz00, BGl_proc2637z00zzcgen_copz00, BFALSE,
					BGl_proc2636z00zzcgen_copz00, BFALSE, BgL_arg2235z00_2768,
					BgL_arg2236z00_2769);
			}
			{	/* Cgen/cop.scm 118 */
				obj_t BgL_arg2260z00_2821;
				obj_t BgL_arg2261z00_2822;

				{	/* Cgen/cop.scm 118 */
					obj_t BgL_v1569z00_2835;

					BgL_v1569z00_2835 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 118 */
						obj_t BgL_arg2267z00_2836;

						BgL_arg2267z00_2836 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									53)), BGl_proc2640z00zzcgen_copz00,
							BGl_proc2639z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1569z00_2835, ((long) 0), BgL_arg2267z00_2836);
					}
					{	/* Cgen/cop.scm 118 */
						obj_t BgL_arg2272z00_2846;

						BgL_arg2272z00_2846 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2642z00zzcgen_copz00,
							BGl_proc2641z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1569z00_2835, ((long) 1), BgL_arg2272z00_2846);
					}
					BgL_arg2260z00_2821 = BgL_v1569z00_2835;
				}
				{	/* Cgen/cop.scm 118 */
					obj_t BgL_v1570z00_2856;

					BgL_v1570z00_2856 = create_vector(((long) 0));
					BgL_arg2261z00_2822 = BgL_v1570z00_2856;
				}
				BGl_cjumpzd2exzd2itz00zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 56)),
					CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 37579),
					BGl_proc2645z00zzcgen_copz00, BGl_proc2644z00zzcgen_copz00, BFALSE,
					BGl_proc2643z00zzcgen_copz00, BFALSE, BgL_arg2260z00_2821,
					BgL_arg2261z00_2822);
			}
			{	/* Cgen/cop.scm 122 */
				obj_t BgL_arg2283z00_2864;
				obj_t BgL_arg2284z00_2865;

				{	/* Cgen/cop.scm 122 */
					obj_t BgL_v1571z00_2909;

					BgL_v1571z00_2909 = create_vector(((long) 2));
					{	/* Cgen/cop.scm 122 */
						obj_t BgL_arg2296z00_2910;

						BgL_arg2296z00_2910 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2647z00zzcgen_copz00,
							BGl_proc2646z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_clabelz00zzcgen_copz00);
						VECTOR_SET(BgL_v1571z00_2909, ((long) 0), BgL_arg2296z00_2910);
					}
					{	/* Cgen/cop.scm 122 */
						obj_t BgL_arg2302z00_2920;

						BgL_arg2302z00_2920 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									57)), BGl_proc2649z00zzcgen_copz00,
							BGl_proc2648z00zzcgen_copz00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 7)));
						VECTOR_SET(BgL_v1571z00_2909, ((long) 1), BgL_arg2302z00_2920);
					}
					BgL_arg2283z00_2864 = BgL_v1571z00_2909;
				}
				{	/* Cgen/cop.scm 122 */
					obj_t BgL_v1572z00_2930;

					BgL_v1572z00_2930 = create_vector(((long) 0));
					BgL_arg2284z00_2865 = BgL_v1572z00_2930;
				}
				BGl_sfunzf2Czf2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 58)),
					CNST_TABLE_REF(((long) 3)), BGl_sfunz00zzast_varz00, ((long) 43912),
					BGl_proc2653z00zzcgen_copz00, BGl_proc2652z00zzcgen_copz00, BFALSE,
					BGl_proc2651z00zzcgen_copz00, BGl_proc2650z00zzcgen_copz00,
					BgL_arg2283z00_2864, BgL_arg2284z00_2865);
			}
			{	/* Cgen/cop.scm 126 */
				obj_t BgL_arg2311z00_2938;
				obj_t BgL_arg2312z00_2939;

				{	/* Cgen/cop.scm 126 */
					obj_t BgL_v1573z00_2951;

					BgL_v1573z00_2951 = create_vector(((long) 1));
					{	/* Cgen/cop.scm 126 */
						obj_t BgL_arg2318z00_2952;

						BgL_arg2318z00_2952 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2655z00zzcgen_copz00,
							BGl_proc2654z00zzcgen_copz00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_copz00zzcgen_copz00);
						VECTOR_SET(BgL_v1573z00_2951, ((long) 0), BgL_arg2318z00_2952);
					}
					BgL_arg2311z00_2938 = BgL_v1573z00_2951;
				}
				{	/* Cgen/cop.scm 126 */
					obj_t BgL_v1574z00_2962;

					BgL_v1574z00_2962 = create_vector(((long) 0));
					BgL_arg2312z00_2939 = BgL_v1574z00_2962;
				}
				return (BGl_bdbzd2blockzd2zzcgen_copz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 59)),
						CNST_TABLE_REF(((long) 3)), BGl_copz00zzcgen_copz00, ((long) 59173),
						BGl_proc2658z00zzcgen_copz00, BGl_proc2657z00zzcgen_copz00, BFALSE,
						BGl_proc2656z00zzcgen_copz00, BFALSE, BgL_arg2311z00_2938,
						BgL_arg2312z00_2939), BUNSPEC);
		}}

	}



/* &<@anonymous:2317> */
	obj_t BGl_z62zc3z04anonymousza32317ze3ze5zzcgen_copz00(obj_t BgL_envz00_4492,
		obj_t BgL_new1293z00_4493)
	{
		{	/* Cgen/cop.scm 126 */
			{
				BgL_bdbzd2blockzd2_bglt BgL_auxz00_7071;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_bdbzd2blockzd2_bglt) BgL_new1293z00_4493))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7075;

					{	/* Cgen/cop.scm 126 */
						obj_t BgL_classz00_5082;

						BgL_classz00_5082 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 126 */
							obj_t BgL__ortest_1106z00_5083;

							BgL__ortest_1106z00_5083 = BGL_CLASS_NIL(BgL_classz00_5082);
							if (CBOOL(BgL__ortest_1106z00_5083))
								{	/* Cgen/cop.scm 126 */
									BgL_auxz00_7075 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5083);
								}
							else
								{	/* Cgen/cop.scm 126 */
									BgL_auxz00_7075 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5082));
								}
						}
					}
					((((BgL_bdbzd2blockzd2_bglt) COBJECT(
									((BgL_bdbzd2blockzd2_bglt) BgL_new1293z00_4493)))->
							BgL_bodyz00) = ((BgL_copz00_bglt) BgL_auxz00_7075), BUNSPEC);
				}
				BgL_auxz00_7071 = ((BgL_bdbzd2blockzd2_bglt) BgL_new1293z00_4493);
				return ((obj_t) BgL_auxz00_7071);
			}
		}

	}



/* &lambda2315 */
	BgL_bdbzd2blockzd2_bglt BGl_z62lambda2315z62zzcgen_copz00(obj_t
		BgL_envz00_4494)
	{
		{	/* Cgen/cop.scm 126 */
			{	/* Cgen/cop.scm 126 */
				BgL_bdbzd2blockzd2_bglt BgL_new1292z00_5084;

				BgL_new1292z00_5084 =
					((BgL_bdbzd2blockzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_bdbzd2blockzd2_bgl))));
				{	/* Cgen/cop.scm 126 */
					long BgL_arg2316z00_5085;

					{	/* Cgen/cop.scm 126 */
						long BgL_res2471z00_5086;

						BgL_res2471z00_5086 =
							BGL_CLASS_INDEX(BGl_bdbzd2blockzd2zzcgen_copz00);
						BgL_arg2316z00_5085 = BgL_res2471z00_5086;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1292z00_5084), BgL_arg2316z00_5085);
				}
				return BgL_new1292z00_5084;
			}
		}

	}



/* &lambda2313 */
	BgL_bdbzd2blockzd2_bglt BGl_z62lambda2313z62zzcgen_copz00(obj_t
		BgL_envz00_4495, obj_t BgL_loc1290z00_4496, obj_t BgL_body1291z00_4497)
	{
		{	/* Cgen/cop.scm 126 */
			{	/* Cgen/cop.scm 126 */
				BgL_bdbzd2blockzd2_bglt BgL_new1412z00_5088;

				{	/* Cgen/cop.scm 126 */
					BgL_bdbzd2blockzd2_bglt BgL_new1411z00_5089;

					BgL_new1411z00_5089 =
						((BgL_bdbzd2blockzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_bdbzd2blockzd2_bgl))));
					{	/* Cgen/cop.scm 126 */
						long BgL_arg2314z00_5090;

						{	/* Cgen/cop.scm 126 */
							long BgL_res2470z00_5091;

							BgL_res2470z00_5091 =
								BGL_CLASS_INDEX(BGl_bdbzd2blockzd2zzcgen_copz00);
							BgL_arg2314z00_5090 = BgL_res2470z00_5091;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1411z00_5089), BgL_arg2314z00_5090);
					}
					BgL_new1412z00_5088 = BgL_new1411z00_5089;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1412z00_5088)))->BgL_locz00) =
					((obj_t) BgL_loc1290z00_4496), BUNSPEC);
				((((BgL_bdbzd2blockzd2_bglt) COBJECT(BgL_new1412z00_5088))->
						BgL_bodyz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_body1291z00_4497)),
					BUNSPEC);
				return BgL_new1412z00_5088;
			}
		}

	}



/* &lambda2322 */
	obj_t BGl_z62lambda2322z62zzcgen_copz00(obj_t BgL_envz00_4498,
		obj_t BgL_oz00_4499, obj_t BgL_vz00_4500)
	{
		{	/* Cgen/cop.scm 126 */
			return
				((((BgL_bdbzd2blockzd2_bglt) COBJECT(
							((BgL_bdbzd2blockzd2_bglt) BgL_oz00_4499)))->BgL_bodyz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4500)), BUNSPEC);
		}

	}



/* &lambda2321 */
	BgL_copz00_bglt BGl_z62lambda2321z62zzcgen_copz00(obj_t BgL_envz00_4501,
		obj_t BgL_oz00_4502)
	{
		{	/* Cgen/cop.scm 126 */
			return
				(((BgL_bdbzd2blockzd2_bglt) COBJECT(
						((BgL_bdbzd2blockzd2_bglt) BgL_oz00_4502)))->BgL_bodyz00);
		}

	}



/* &lambda2291 */
	BgL_sfunz00_bglt BGl_z62lambda2291z62zzcgen_copz00(obj_t BgL_envz00_4503,
		obj_t BgL_o1288z00_4504)
	{
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				long BgL_arg2292z00_5096;

				{	/* Cgen/cop.scm 122 */
					obj_t BgL_arg2294z00_5097;

					{	/* Cgen/cop.scm 122 */
						obj_t BgL_arg2295z00_5098;

						{	/* Cgen/cop.scm 122 */
							long BgL_arg1816z00_5099;

							{	/* Cgen/cop.scm 122 */
								long BgL_arg1817z00_5100;

								{	/* Cgen/cop.scm 122 */
									long BgL_res2467z00_5101;

									BgL_res2467z00_5101 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_sfunz00_bglt) BgL_o1288z00_4504)));
									BgL_arg1817z00_5100 = BgL_res2467z00_5101;
								}
								BgL_arg1816z00_5099 = (BgL_arg1817z00_5100 - OBJECT_TYPE);
							}
							BgL_arg2295z00_5098 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5099);
						}
						BgL_arg2294z00_5097 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2295z00_5098);
					}
					{	/* Cgen/cop.scm 122 */
						long BgL_res2469z00_5102;

						{	/* Cgen/cop.scm 122 */
							obj_t BgL_tmpz00_7109;

							BgL_tmpz00_7109 = ((obj_t) BgL_arg2294z00_5097);
							BgL_res2469z00_5102 = BGL_CLASS_INDEX(BgL_tmpz00_7109);
						}
						BgL_arg2292z00_5096 = BgL_res2469z00_5102;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) BgL_o1288z00_4504)), BgL_arg2292z00_5096);
			}
			{	/* Cgen/cop.scm 122 */
				BgL_objectz00_bglt BgL_tmpz00_7115;

				BgL_tmpz00_7115 =
					((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1288z00_4504));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7115, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_o1288z00_4504));
			return ((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1288z00_4504));
		}

	}



/* &<@anonymous:2290> */
	obj_t BGl_z62zc3z04anonymousza32290ze3ze5zzcgen_copz00(obj_t BgL_envz00_4505,
		obj_t BgL_new1287z00_4506)
	{
		{	/* Cgen/cop.scm 122 */
			{
				BgL_sfunz00_bglt BgL_auxz00_7123;

				((((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt)
									((BgL_sfunz00_bglt) BgL_new1287z00_4506))))->BgL_arityz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_predicatezd2ofzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_stackzd2allocatorzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_topzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_thezd2closurezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_failsafez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_argszd2noescapezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_propertyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_argszd2namezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_bodyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_dssslzd2keywordszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_optionalsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_keysz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_thezd2closurezd2globalz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_strengthz00) =
					((obj_t) CNST_TABLE_REF(((long) 60))), BUNSPEC);
				((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt)
										BgL_new1287z00_4506))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_clabelz00_bglt BgL_auxz00_7195;
					BgL_sfunzf2czf2_bglt BgL_auxz00_7188;

					{	/* Cgen/cop.scm 122 */
						obj_t BgL_classz00_5104;

						BgL_classz00_5104 = BGl_clabelz00zzcgen_copz00;
						{	/* Cgen/cop.scm 122 */
							obj_t BgL__ortest_1106z00_5105;

							BgL__ortest_1106z00_5105 = BGL_CLASS_NIL(BgL_classz00_5104);
							if (CBOOL(BgL__ortest_1106z00_5105))
								{	/* Cgen/cop.scm 122 */
									BgL_auxz00_7195 =
										((BgL_clabelz00_bglt) BgL__ortest_1106z00_5105);
								}
							else
								{	/* Cgen/cop.scm 122 */
									BgL_auxz00_7195 =
										((BgL_clabelz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5104));
								}
						}
					}
					{
						obj_t BgL_auxz00_7189;

						{	/* Cgen/cop.scm 122 */
							BgL_objectz00_bglt BgL_tmpz00_7190;

							BgL_tmpz00_7190 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1287z00_4506));
							BgL_auxz00_7189 = BGL_OBJECT_WIDENING(BgL_tmpz00_7190);
						}
						BgL_auxz00_7188 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7189);
					}
					((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7188))->BgL_labelz00) =
						((BgL_clabelz00_bglt) BgL_auxz00_7195), BUNSPEC);
				}
				{
					BgL_sfunzf2czf2_bglt BgL_auxz00_7203;

					{
						obj_t BgL_auxz00_7204;

						{	/* Cgen/cop.scm 122 */
							BgL_objectz00_bglt BgL_tmpz00_7205;

							BgL_tmpz00_7205 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_new1287z00_4506));
							BgL_auxz00_7204 = BGL_OBJECT_WIDENING(BgL_tmpz00_7205);
						}
						BgL_auxz00_7203 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7204);
					}
					((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7203))->
							BgL_integratedz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_7123 = ((BgL_sfunz00_bglt) BgL_new1287z00_4506);
				return ((obj_t) BgL_auxz00_7123);
			}
		}

	}



/* &lambda2288 */
	BgL_sfunz00_bglt BGl_z62lambda2288z62zzcgen_copz00(obj_t BgL_envz00_4507,
		obj_t BgL_o1284z00_4508)
	{
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				BgL_sfunzf2czf2_bglt BgL_wide1286z00_5107;

				BgL_wide1286z00_5107 =
					((BgL_sfunzf2czf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sfunzf2czf2_bgl))));
				{	/* Cgen/cop.scm 122 */
					obj_t BgL_auxz00_7218;
					BgL_objectz00_bglt BgL_tmpz00_7214;

					BgL_auxz00_7218 = ((obj_t) BgL_wide1286z00_5107);
					BgL_tmpz00_7214 =
						((BgL_objectz00_bglt)
						((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1284z00_4508)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7214, BgL_auxz00_7218);
				}
				((BgL_objectz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1284z00_4508)));
				{	/* Cgen/cop.scm 122 */
					long BgL_arg2289z00_5108;

					{	/* Cgen/cop.scm 122 */
						long BgL_res2466z00_5109;

						BgL_res2466z00_5109 = BGL_CLASS_INDEX(BGl_sfunzf2Czf2zzcgen_copz00);
						BgL_arg2289z00_5108 = BgL_res2466z00_5109;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_sfunz00_bglt)
								((BgL_sfunz00_bglt) BgL_o1284z00_4508))), BgL_arg2289z00_5108);
				}
				return
					((BgL_sfunz00_bglt)
					((BgL_sfunz00_bglt) ((BgL_sfunz00_bglt) BgL_o1284z00_4508)));
			}
		}

	}



/* &lambda2285 */
	BgL_sfunz00_bglt BGl_z62lambda2285z62zzcgen_copz00(obj_t BgL_envz00_4509,
		obj_t BgL_arity1261z00_4510, obj_t BgL_sidezd2effect1262zd2_4511,
		obj_t BgL_predicatezd2of1263zd2_4512,
		obj_t BgL_stackzd2allocator1264zd2_4513, obj_t BgL_topzf31265zf3_4514,
		obj_t BgL_thezd2closure1266zd2_4515, obj_t BgL_effect1267z00_4516,
		obj_t BgL_failsafe1268z00_4517, obj_t BgL_argszd2noescape1269zd2_4518,
		obj_t BgL_property1270z00_4519, obj_t BgL_args1271z00_4520,
		obj_t BgL_argszd2name1272zd2_4521, obj_t BgL_body1273z00_4522,
		obj_t BgL_class1274z00_4523, obj_t BgL_dssslzd2keywords1275zd2_4524,
		obj_t BgL_loc1276z00_4525, obj_t BgL_optionals1277z00_4526,
		obj_t BgL_keys1278z00_4527, obj_t BgL_thezd2closurezd2global1279z00_4528,
		obj_t BgL_strength1280z00_4529, obj_t BgL_stackable1281z00_4530,
		obj_t BgL_label1282z00_4531, obj_t BgL_integrated1283z00_4532)
	{
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				long BgL_arity1261z00_5110;
				bool_t BgL_topzf31265zf3_5111;
				bool_t BgL_integrated1283z00_5114;

				BgL_arity1261z00_5110 = (long) CINT(BgL_arity1261z00_4510);
				BgL_topzf31265zf3_5111 = CBOOL(BgL_topzf31265zf3_4514);
				BgL_integrated1283z00_5114 = CBOOL(BgL_integrated1283z00_4532);
				{	/* Cgen/cop.scm 122 */
					BgL_sfunz00_bglt BgL_new1409z00_5115;

					{	/* Cgen/cop.scm 122 */
						BgL_sfunz00_bglt BgL_tmp1407z00_5116;
						BgL_sfunzf2czf2_bglt BgL_wide1408z00_5117;

						{
							BgL_sfunz00_bglt BgL_auxz00_7235;

							{	/* Cgen/cop.scm 122 */
								BgL_sfunz00_bglt BgL_new1406z00_5118;

								BgL_new1406z00_5118 =
									((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_sfunz00_bgl))));
								{	/* Cgen/cop.scm 122 */
									long BgL_arg2287z00_5119;

									{	/* Cgen/cop.scm 122 */
										long BgL_res2464z00_5120;

										BgL_res2464z00_5120 =
											BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
										BgL_arg2287z00_5119 = BgL_res2464z00_5120;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1406z00_5118),
										BgL_arg2287z00_5119);
								}
								{	/* Cgen/cop.scm 122 */
									BgL_objectz00_bglt BgL_tmpz00_7240;

									BgL_tmpz00_7240 = ((BgL_objectz00_bglt) BgL_new1406z00_5118);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7240, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1406z00_5118);
								BgL_auxz00_7235 = BgL_new1406z00_5118;
							}
							BgL_tmp1407z00_5116 = ((BgL_sfunz00_bglt) BgL_auxz00_7235);
						}
						BgL_wide1408z00_5117 =
							((BgL_sfunzf2czf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sfunzf2czf2_bgl))));
						{	/* Cgen/cop.scm 122 */
							obj_t BgL_auxz00_7248;
							BgL_objectz00_bglt BgL_tmpz00_7246;

							BgL_auxz00_7248 = ((obj_t) BgL_wide1408z00_5117);
							BgL_tmpz00_7246 = ((BgL_objectz00_bglt) BgL_tmp1407z00_5116);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7246, BgL_auxz00_7248);
						}
						((BgL_objectz00_bglt) BgL_tmp1407z00_5116);
						{	/* Cgen/cop.scm 122 */
							long BgL_arg2286z00_5121;

							{	/* Cgen/cop.scm 122 */
								long BgL_res2465z00_5122;

								BgL_res2465z00_5122 =
									BGL_CLASS_INDEX(BGl_sfunzf2Czf2zzcgen_copz00);
								BgL_arg2286z00_5121 = BgL_res2465z00_5122;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1407z00_5116),
								BgL_arg2286z00_5121);
						}
						BgL_new1409z00_5115 = ((BgL_sfunz00_bglt) BgL_tmp1407z00_5116);
					}
					((((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt) BgL_new1409z00_5115)))->BgL_arityz00) =
						((long) BgL_arity1261z00_5110), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1262zd2_4511), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_predicatezd2ofzd2) =
						((obj_t) BgL_predicatezd2of1263zd2_4512), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_stackzd2allocatorzd2) =
						((obj_t) BgL_stackzd2allocator1264zd2_4513), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_topzf3zf3) =
						((bool_t) BgL_topzf31265zf3_5111), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_thezd2closurezd2) =
						((obj_t) BgL_thezd2closure1266zd2_4515), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_effectz00) =
						((obj_t) BgL_effect1267z00_4516), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_failsafez00) =
						((obj_t) BgL_failsafe1268z00_4517), BUNSPEC);
					((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
										BgL_new1409z00_5115)))->BgL_argszd2noescapezd2) =
						((obj_t) BgL_argszd2noescape1269zd2_4518), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_propertyz00) =
						((obj_t) BgL_property1270z00_4519), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_argsz00) =
						((obj_t) BgL_args1271z00_4520), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_argszd2namezd2) =
						((obj_t) BgL_argszd2name1272zd2_4521), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_bodyz00) =
						((obj_t) BgL_body1273z00_4522), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_classz00) =
						((obj_t) BgL_class1274z00_4523), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_dssslzd2keywordszd2) =
						((obj_t) BgL_dssslzd2keywords1275zd2_4524), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_locz00) =
						((obj_t) BgL_loc1276z00_4525), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_optionalsz00) =
						((obj_t) BgL_optionals1277z00_4526), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_keysz00) =
						((obj_t) BgL_keys1278z00_4527), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_thezd2closurezd2globalz00) =
						((obj_t) BgL_thezd2closurezd2global1279z00_4528), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_strengthz00) =
						((obj_t) ((obj_t) BgL_strength1280z00_4529)), BUNSPEC);
					((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
										BgL_new1409z00_5115)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1281z00_4530), BUNSPEC);
					{
						BgL_sfunzf2czf2_bglt BgL_auxz00_7299;

						{
							obj_t BgL_auxz00_7300;

							{	/* Cgen/cop.scm 122 */
								BgL_objectz00_bglt BgL_tmpz00_7301;

								BgL_tmpz00_7301 = ((BgL_objectz00_bglt) BgL_new1409z00_5115);
								BgL_auxz00_7300 = BGL_OBJECT_WIDENING(BgL_tmpz00_7301);
							}
							BgL_auxz00_7299 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7300);
						}
						((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7299))->BgL_labelz00) =
							((BgL_clabelz00_bglt) ((BgL_clabelz00_bglt)
									BgL_label1282z00_4531)), BUNSPEC);
					}
					{
						BgL_sfunzf2czf2_bglt BgL_auxz00_7307;

						{
							obj_t BgL_auxz00_7308;

							{	/* Cgen/cop.scm 122 */
								BgL_objectz00_bglt BgL_tmpz00_7309;

								BgL_tmpz00_7309 = ((BgL_objectz00_bglt) BgL_new1409z00_5115);
								BgL_auxz00_7308 = BGL_OBJECT_WIDENING(BgL_tmpz00_7309);
							}
							BgL_auxz00_7307 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7308);
						}
						((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7307))->
								BgL_integratedz00) =
							((bool_t) BgL_integrated1283z00_5114), BUNSPEC);
					}
					return BgL_new1409z00_5115;
				}
			}
		}

	}



/* &lambda2307 */
	obj_t BGl_z62lambda2307z62zzcgen_copz00(obj_t BgL_envz00_4533,
		obj_t BgL_oz00_4534, obj_t BgL_vz00_4535)
	{
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				bool_t BgL_vz00_5124;

				BgL_vz00_5124 = CBOOL(BgL_vz00_4535);
				{
					BgL_sfunzf2czf2_bglt BgL_auxz00_7315;

					{
						obj_t BgL_auxz00_7316;

						{	/* Cgen/cop.scm 122 */
							BgL_objectz00_bglt BgL_tmpz00_7317;

							BgL_tmpz00_7317 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4534));
							BgL_auxz00_7316 = BGL_OBJECT_WIDENING(BgL_tmpz00_7317);
						}
						BgL_auxz00_7315 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7316);
					}
					return
						((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7315))->
							BgL_integratedz00) = ((bool_t) BgL_vz00_5124), BUNSPEC);
				}
			}
		}

	}



/* &lambda2306 */
	obj_t BGl_z62lambda2306z62zzcgen_copz00(obj_t BgL_envz00_4536,
		obj_t BgL_oz00_4537)
	{
		{	/* Cgen/cop.scm 122 */
			{	/* Cgen/cop.scm 122 */
				bool_t BgL_tmpz00_7323;

				{
					BgL_sfunzf2czf2_bglt BgL_auxz00_7324;

					{
						obj_t BgL_auxz00_7325;

						{	/* Cgen/cop.scm 122 */
							BgL_objectz00_bglt BgL_tmpz00_7326;

							BgL_tmpz00_7326 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4537));
							BgL_auxz00_7325 = BGL_OBJECT_WIDENING(BgL_tmpz00_7326);
						}
						BgL_auxz00_7324 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7325);
					}
					BgL_tmpz00_7323 =
						(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7324))->
						BgL_integratedz00);
				}
				return BBOOL(BgL_tmpz00_7323);
			}
		}

	}



/* &lambda2300 */
	obj_t BGl_z62lambda2300z62zzcgen_copz00(obj_t BgL_envz00_4538,
		obj_t BgL_oz00_4539, obj_t BgL_vz00_4540)
	{
		{	/* Cgen/cop.scm 122 */
			{
				BgL_sfunzf2czf2_bglt BgL_auxz00_7333;

				{
					obj_t BgL_auxz00_7334;

					{	/* Cgen/cop.scm 122 */
						BgL_objectz00_bglt BgL_tmpz00_7335;

						BgL_tmpz00_7335 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4539));
						BgL_auxz00_7334 = BGL_OBJECT_WIDENING(BgL_tmpz00_7335);
					}
					BgL_auxz00_7333 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7334);
				}
				return
					((((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7333))->BgL_labelz00) =
					((BgL_clabelz00_bglt) ((BgL_clabelz00_bglt) BgL_vz00_4540)), BUNSPEC);
			}
		}

	}



/* &lambda2299 */
	BgL_clabelz00_bglt BGl_z62lambda2299z62zzcgen_copz00(obj_t BgL_envz00_4541,
		obj_t BgL_oz00_4542)
	{
		{	/* Cgen/cop.scm 122 */
			{
				BgL_sfunzf2czf2_bglt BgL_auxz00_7342;

				{
					obj_t BgL_auxz00_7343;

					{	/* Cgen/cop.scm 122 */
						BgL_objectz00_bglt BgL_tmpz00_7344;

						BgL_tmpz00_7344 =
							((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_oz00_4542));
						BgL_auxz00_7343 = BGL_OBJECT_WIDENING(BgL_tmpz00_7344);
					}
					BgL_auxz00_7342 = ((BgL_sfunzf2czf2_bglt) BgL_auxz00_7343);
				}
				return
					(((BgL_sfunzf2czf2_bglt) COBJECT(BgL_auxz00_7342))->BgL_labelz00);
			}
		}

	}



/* &<@anonymous:2266> */
	obj_t BGl_z62zc3z04anonymousza32266ze3ze5zzcgen_copz00(obj_t BgL_envz00_4543,
		obj_t BgL_new1259z00_4544)
	{
		{	/* Cgen/cop.scm 118 */
			{
				BgL_cjumpzd2exzd2itz00_bglt BgL_auxz00_7350;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cjumpzd2exzd2itz00_bglt) BgL_new1259z00_4544))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7354;

					{	/* Cgen/cop.scm 118 */
						obj_t BgL_classz00_5130;

						BgL_classz00_5130 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 118 */
							obj_t BgL__ortest_1106z00_5131;

							BgL__ortest_1106z00_5131 = BGL_CLASS_NIL(BgL_classz00_5130);
							if (CBOOL(BgL__ortest_1106z00_5131))
								{	/* Cgen/cop.scm 118 */
									BgL_auxz00_7354 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5131);
								}
							else
								{	/* Cgen/cop.scm 118 */
									BgL_auxz00_7354 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5130));
								}
						}
					}
					((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_cjumpzd2exzd2itz00_bglt) BgL_new1259z00_4544)))->
							BgL_exitz00) = ((BgL_copz00_bglt) BgL_auxz00_7354), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7363;

					{	/* Cgen/cop.scm 118 */
						obj_t BgL_classz00_5132;

						BgL_classz00_5132 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 118 */
							obj_t BgL__ortest_1106z00_5133;

							BgL__ortest_1106z00_5133 = BGL_CLASS_NIL(BgL_classz00_5132);
							if (CBOOL(BgL__ortest_1106z00_5133))
								{	/* Cgen/cop.scm 118 */
									BgL_auxz00_7363 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5133);
								}
							else
								{	/* Cgen/cop.scm 118 */
									BgL_auxz00_7363 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5132));
								}
						}
					}
					((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(
									((BgL_cjumpzd2exzd2itz00_bglt) BgL_new1259z00_4544)))->
							BgL_valuez00) = ((BgL_copz00_bglt) BgL_auxz00_7363), BUNSPEC);
				}
				BgL_auxz00_7350 = ((BgL_cjumpzd2exzd2itz00_bglt) BgL_new1259z00_4544);
				return ((obj_t) BgL_auxz00_7350);
			}
		}

	}



/* &lambda2264 */
	BgL_cjumpzd2exzd2itz00_bglt BGl_z62lambda2264z62zzcgen_copz00(obj_t
		BgL_envz00_4545)
	{
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_cjumpzd2exzd2itz00_bglt BgL_new1258z00_5134;

				BgL_new1258z00_5134 =
					((BgL_cjumpzd2exzd2itz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cjumpzd2exzd2itz00_bgl))));
				{	/* Cgen/cop.scm 118 */
					long BgL_arg2265z00_5135;

					{	/* Cgen/cop.scm 118 */
						long BgL_res2463z00_5136;

						BgL_res2463z00_5136 =
							BGL_CLASS_INDEX(BGl_cjumpzd2exzd2itz00zzcgen_copz00);
						BgL_arg2265z00_5135 = BgL_res2463z00_5136;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1258z00_5134), BgL_arg2265z00_5135);
				}
				return BgL_new1258z00_5134;
			}
		}

	}



/* &lambda2262 */
	BgL_cjumpzd2exzd2itz00_bglt BGl_z62lambda2262z62zzcgen_copz00(obj_t
		BgL_envz00_4546, obj_t BgL_loc1255z00_4547, obj_t BgL_exit1256z00_4548,
		obj_t BgL_value1257z00_4549)
	{
		{	/* Cgen/cop.scm 118 */
			{	/* Cgen/cop.scm 118 */
				BgL_cjumpzd2exzd2itz00_bglt BgL_new1405z00_5139;

				{	/* Cgen/cop.scm 118 */
					BgL_cjumpzd2exzd2itz00_bglt BgL_new1404z00_5140;

					BgL_new1404z00_5140 =
						((BgL_cjumpzd2exzd2itz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cjumpzd2exzd2itz00_bgl))));
					{	/* Cgen/cop.scm 118 */
						long BgL_arg2263z00_5141;

						{	/* Cgen/cop.scm 118 */
							long BgL_res2462z00_5142;

							BgL_res2462z00_5142 =
								BGL_CLASS_INDEX(BGl_cjumpzd2exzd2itz00zzcgen_copz00);
							BgL_arg2263z00_5141 = BgL_res2462z00_5142;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1404z00_5140), BgL_arg2263z00_5141);
					}
					BgL_new1405z00_5139 = BgL_new1404z00_5140;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1405z00_5139)))->BgL_locz00) =
					((obj_t) BgL_loc1255z00_4547), BUNSPEC);
				((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(BgL_new1405z00_5139))->
						BgL_exitz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_exit1256z00_4548)),
					BUNSPEC);
				((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(BgL_new1405z00_5139))->
						BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_value1257z00_4549)),
					BUNSPEC);
				return BgL_new1405z00_5139;
			}
		}

	}



/* &lambda2277 */
	obj_t BGl_z62lambda2277z62zzcgen_copz00(obj_t BgL_envz00_4550,
		obj_t BgL_oz00_4551, obj_t BgL_vz00_4552)
	{
		{	/* Cgen/cop.scm 118 */
			return
				((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4551)))->BgL_valuez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4552)), BUNSPEC);
		}

	}



/* &lambda2276 */
	BgL_copz00_bglt BGl_z62lambda2276z62zzcgen_copz00(obj_t BgL_envz00_4553,
		obj_t BgL_oz00_4554)
	{
		{	/* Cgen/cop.scm 118 */
			return
				(((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(
						((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4554)))->BgL_valuez00);
		}

	}



/* &lambda2271 */
	obj_t BGl_z62lambda2271z62zzcgen_copz00(obj_t BgL_envz00_4555,
		obj_t BgL_oz00_4556, obj_t BgL_vz00_4557)
	{
		{	/* Cgen/cop.scm 118 */
			return
				((((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4556)))->BgL_exitz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4557)), BUNSPEC);
		}

	}



/* &lambda2270 */
	BgL_copz00_bglt BGl_z62lambda2270z62zzcgen_copz00(obj_t BgL_envz00_4558,
		obj_t BgL_oz00_4559)
	{
		{	/* Cgen/cop.scm 118 */
			return
				(((BgL_cjumpzd2exzd2itz00_bglt) COBJECT(
						((BgL_cjumpzd2exzd2itz00_bglt) BgL_oz00_4559)))->BgL_exitz00);
		}

	}



/* &<@anonymous:2241> */
	obj_t BGl_z62zc3z04anonymousza32241ze3ze5zzcgen_copz00(obj_t BgL_envz00_4560,
		obj_t BgL_new1253z00_4561)
	{
		{	/* Cgen/cop.scm 113 */
			{
				BgL_csetzd2exzd2itz00_bglt BgL_auxz00_7398;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_csetzd2exzd2itz00_bglt) BgL_new1253z00_4561))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7402;

					{	/* Cgen/cop.scm 113 */
						obj_t BgL_classz00_5150;

						BgL_classz00_5150 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 113 */
							obj_t BgL__ortest_1106z00_5151;

							BgL__ortest_1106z00_5151 = BGL_CLASS_NIL(BgL_classz00_5150);
							if (CBOOL(BgL__ortest_1106z00_5151))
								{	/* Cgen/cop.scm 113 */
									BgL_auxz00_7402 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5151);
								}
							else
								{	/* Cgen/cop.scm 113 */
									BgL_auxz00_7402 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5150));
								}
						}
					}
					((((BgL_csetzd2exzd2itz00_bglt) COBJECT(
									((BgL_csetzd2exzd2itz00_bglt) BgL_new1253z00_4561)))->
							BgL_exitz00) = ((BgL_copz00_bglt) BgL_auxz00_7402), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7411;

					{	/* Cgen/cop.scm 113 */
						obj_t BgL_classz00_5152;

						BgL_classz00_5152 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 113 */
							obj_t BgL__ortest_1106z00_5153;

							BgL__ortest_1106z00_5153 = BGL_CLASS_NIL(BgL_classz00_5152);
							if (CBOOL(BgL__ortest_1106z00_5153))
								{	/* Cgen/cop.scm 113 */
									BgL_auxz00_7411 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5153);
								}
							else
								{	/* Cgen/cop.scm 113 */
									BgL_auxz00_7411 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5152));
								}
						}
					}
					((((BgL_csetzd2exzd2itz00_bglt) COBJECT(
									((BgL_csetzd2exzd2itz00_bglt) BgL_new1253z00_4561)))->
							BgL_jumpzd2valuezd2) =
						((BgL_copz00_bglt) BgL_auxz00_7411), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7420;

					{	/* Cgen/cop.scm 113 */
						obj_t BgL_classz00_5154;

						BgL_classz00_5154 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 113 */
							obj_t BgL__ortest_1106z00_5155;

							BgL__ortest_1106z00_5155 = BGL_CLASS_NIL(BgL_classz00_5154);
							if (CBOOL(BgL__ortest_1106z00_5155))
								{	/* Cgen/cop.scm 113 */
									BgL_auxz00_7420 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5155);
								}
							else
								{	/* Cgen/cop.scm 113 */
									BgL_auxz00_7420 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5154));
								}
						}
					}
					((((BgL_csetzd2exzd2itz00_bglt) COBJECT(
									((BgL_csetzd2exzd2itz00_bglt) BgL_new1253z00_4561)))->
							BgL_bodyz00) = ((BgL_copz00_bglt) BgL_auxz00_7420), BUNSPEC);
				}
				BgL_auxz00_7398 = ((BgL_csetzd2exzd2itz00_bglt) BgL_new1253z00_4561);
				return ((obj_t) BgL_auxz00_7398);
			}
		}

	}



/* &lambda2239 */
	BgL_csetzd2exzd2itz00_bglt BGl_z62lambda2239z62zzcgen_copz00(obj_t
		BgL_envz00_4562)
	{
		{	/* Cgen/cop.scm 113 */
			{	/* Cgen/cop.scm 113 */
				BgL_csetzd2exzd2itz00_bglt BgL_new1252z00_5156;

				BgL_new1252z00_5156 =
					((BgL_csetzd2exzd2itz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_csetzd2exzd2itz00_bgl))));
				{	/* Cgen/cop.scm 113 */
					long BgL_arg2240z00_5157;

					{	/* Cgen/cop.scm 113 */
						long BgL_res2461z00_5158;

						BgL_res2461z00_5158 =
							BGL_CLASS_INDEX(BGl_csetzd2exzd2itz00zzcgen_copz00);
						BgL_arg2240z00_5157 = BgL_res2461z00_5158;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1252z00_5156), BgL_arg2240z00_5157);
				}
				return BgL_new1252z00_5156;
			}
		}

	}



/* &lambda2237 */
	BgL_csetzd2exzd2itz00_bglt BGl_z62lambda2237z62zzcgen_copz00(obj_t
		BgL_envz00_4563, obj_t BgL_loc1248z00_4564, obj_t BgL_exit1249z00_4565,
		obj_t BgL_jumpzd2value1250zd2_4566, obj_t BgL_body1251z00_4567)
	{
		{	/* Cgen/cop.scm 113 */
			{	/* Cgen/cop.scm 113 */
				BgL_csetzd2exzd2itz00_bglt BgL_new1403z00_5162;

				{	/* Cgen/cop.scm 113 */
					BgL_csetzd2exzd2itz00_bglt BgL_new1402z00_5163;

					BgL_new1402z00_5163 =
						((BgL_csetzd2exzd2itz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_csetzd2exzd2itz00_bgl))));
					{	/* Cgen/cop.scm 113 */
						long BgL_arg2238z00_5164;

						{	/* Cgen/cop.scm 113 */
							long BgL_res2460z00_5165;

							BgL_res2460z00_5165 =
								BGL_CLASS_INDEX(BGl_csetzd2exzd2itz00zzcgen_copz00);
							BgL_arg2238z00_5164 = BgL_res2460z00_5165;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1402z00_5163), BgL_arg2238z00_5164);
					}
					BgL_new1403z00_5162 = BgL_new1402z00_5163;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1403z00_5162)))->BgL_locz00) =
					((obj_t) BgL_loc1248z00_4564), BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_new1403z00_5162))->
						BgL_exitz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_exit1249z00_4565)),
					BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_new1403z00_5162))->
						BgL_jumpzd2valuezd2) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_jumpzd2value1250zd2_4566)),
					BUNSPEC);
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(BgL_new1403z00_5162))->
						BgL_bodyz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_body1251z00_4567)),
					BUNSPEC);
				return BgL_new1403z00_5162;
			}
		}

	}



/* &lambda2256 */
	obj_t BGl_z62lambda2256z62zzcgen_copz00(obj_t BgL_envz00_4568,
		obj_t BgL_oz00_4569, obj_t BgL_vz00_4570)
	{
		{	/* Cgen/cop.scm 113 */
			return
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(
							((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4569)))->BgL_bodyz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4570)), BUNSPEC);
		}

	}



/* &lambda2255 */
	BgL_copz00_bglt BGl_z62lambda2255z62zzcgen_copz00(obj_t BgL_envz00_4571,
		obj_t BgL_oz00_4572)
	{
		{	/* Cgen/cop.scm 113 */
			return
				(((BgL_csetzd2exzd2itz00_bglt) COBJECT(
						((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4572)))->BgL_bodyz00);
		}

	}



/* &lambda2251 */
	obj_t BGl_z62lambda2251z62zzcgen_copz00(obj_t BgL_envz00_4573,
		obj_t BgL_oz00_4574, obj_t BgL_vz00_4575)
	{
		{	/* Cgen/cop.scm 113 */
			return
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(
							((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4574)))->
					BgL_jumpzd2valuezd2) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4575)), BUNSPEC);
		}

	}



/* &lambda2250 */
	BgL_copz00_bglt BGl_z62lambda2250z62zzcgen_copz00(obj_t BgL_envz00_4576,
		obj_t BgL_oz00_4577)
	{
		{	/* Cgen/cop.scm 113 */
			return
				(((BgL_csetzd2exzd2itz00_bglt) COBJECT(
						((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4577)))->
				BgL_jumpzd2valuezd2);
		}

	}



/* &lambda2246 */
	obj_t BGl_z62lambda2246z62zzcgen_copz00(obj_t BgL_envz00_4578,
		obj_t BgL_oz00_4579, obj_t BgL_vz00_4580)
	{
		{	/* Cgen/cop.scm 113 */
			return
				((((BgL_csetzd2exzd2itz00_bglt) COBJECT(
							((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4579)))->BgL_exitz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4580)), BUNSPEC);
		}

	}



/* &lambda2245 */
	BgL_copz00_bglt BGl_z62lambda2245z62zzcgen_copz00(obj_t BgL_envz00_4581,
		obj_t BgL_oz00_4582)
	{
		{	/* Cgen/cop.scm 113 */
			return
				(((BgL_csetzd2exzd2itz00_bglt) COBJECT(
						((BgL_csetzd2exzd2itz00_bglt) BgL_oz00_4582)))->BgL_exitz00);
		}

	}



/* &<@anonymous:2221> */
	obj_t BGl_z62zc3z04anonymousza32221ze3ze5zzcgen_copz00(obj_t BgL_envz00_4583,
		obj_t BgL_new1246z00_4584)
	{
		{	/* Cgen/cop.scm 109 */
			{
				BgL_cboxzd2setz12zc0_bglt BgL_auxz00_7462;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cboxzd2setz12zc0_bglt) BgL_new1246z00_4584))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7466;

					{	/* Cgen/cop.scm 109 */
						obj_t BgL_classz00_5176;

						BgL_classz00_5176 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 109 */
							obj_t BgL__ortest_1106z00_5177;

							BgL__ortest_1106z00_5177 = BGL_CLASS_NIL(BgL_classz00_5176);
							if (CBOOL(BgL__ortest_1106z00_5177))
								{	/* Cgen/cop.scm 109 */
									BgL_auxz00_7466 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5177);
								}
							else
								{	/* Cgen/cop.scm 109 */
									BgL_auxz00_7466 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5176));
								}
						}
					}
					((((BgL_cboxzd2setz12zc0_bglt) COBJECT(
									((BgL_cboxzd2setz12zc0_bglt) BgL_new1246z00_4584)))->
							BgL_varz00) = ((BgL_copz00_bglt) BgL_auxz00_7466), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7475;

					{	/* Cgen/cop.scm 109 */
						obj_t BgL_classz00_5178;

						BgL_classz00_5178 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 109 */
							obj_t BgL__ortest_1106z00_5179;

							BgL__ortest_1106z00_5179 = BGL_CLASS_NIL(BgL_classz00_5178);
							if (CBOOL(BgL__ortest_1106z00_5179))
								{	/* Cgen/cop.scm 109 */
									BgL_auxz00_7475 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5179);
								}
							else
								{	/* Cgen/cop.scm 109 */
									BgL_auxz00_7475 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5178));
								}
						}
					}
					((((BgL_cboxzd2setz12zc0_bglt) COBJECT(
									((BgL_cboxzd2setz12zc0_bglt) BgL_new1246z00_4584)))->
							BgL_valuez00) = ((BgL_copz00_bglt) BgL_auxz00_7475), BUNSPEC);
				}
				BgL_auxz00_7462 = ((BgL_cboxzd2setz12zc0_bglt) BgL_new1246z00_4584);
				return ((obj_t) BgL_auxz00_7462);
			}
		}

	}



/* &lambda2219 */
	BgL_cboxzd2setz12zc0_bglt BGl_z62lambda2219z62zzcgen_copz00(obj_t
		BgL_envz00_4585)
	{
		{	/* Cgen/cop.scm 109 */
			{	/* Cgen/cop.scm 109 */
				BgL_cboxzd2setz12zc0_bglt BgL_new1245z00_5180;

				BgL_new1245z00_5180 =
					((BgL_cboxzd2setz12zc0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cboxzd2setz12zc0_bgl))));
				{	/* Cgen/cop.scm 109 */
					long BgL_arg2220z00_5181;

					{	/* Cgen/cop.scm 109 */
						long BgL_res2459z00_5182;

						BgL_res2459z00_5182 =
							BGL_CLASS_INDEX(BGl_cboxzd2setz12zc0zzcgen_copz00);
						BgL_arg2220z00_5181 = BgL_res2459z00_5182;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1245z00_5180), BgL_arg2220z00_5181);
				}
				return BgL_new1245z00_5180;
			}
		}

	}



/* &lambda2217 */
	BgL_cboxzd2setz12zc0_bglt BGl_z62lambda2217z62zzcgen_copz00(obj_t
		BgL_envz00_4586, obj_t BgL_loc1242z00_4587, obj_t BgL_var1243z00_4588,
		obj_t BgL_value1244z00_4589)
	{
		{	/* Cgen/cop.scm 109 */
			{	/* Cgen/cop.scm 109 */
				BgL_cboxzd2setz12zc0_bglt BgL_new1401z00_5185;

				{	/* Cgen/cop.scm 109 */
					BgL_cboxzd2setz12zc0_bglt BgL_new1400z00_5186;

					BgL_new1400z00_5186 =
						((BgL_cboxzd2setz12zc0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cboxzd2setz12zc0_bgl))));
					{	/* Cgen/cop.scm 109 */
						long BgL_arg2218z00_5187;

						{	/* Cgen/cop.scm 109 */
							long BgL_res2458z00_5188;

							BgL_res2458z00_5188 =
								BGL_CLASS_INDEX(BGl_cboxzd2setz12zc0zzcgen_copz00);
							BgL_arg2218z00_5187 = BgL_res2458z00_5188;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1400z00_5186), BgL_arg2218z00_5187);
					}
					BgL_new1401z00_5185 = BgL_new1400z00_5186;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1401z00_5185)))->BgL_locz00) =
					((obj_t) BgL_loc1242z00_4587), BUNSPEC);
				((((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_new1401z00_5185))->
						BgL_varz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_var1243z00_4588)), BUNSPEC);
				((((BgL_cboxzd2setz12zc0_bglt) COBJECT(BgL_new1401z00_5185))->
						BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_value1244z00_4589)),
					BUNSPEC);
				return BgL_new1401z00_5185;
			}
		}

	}



/* &lambda2231 */
	obj_t BGl_z62lambda2231z62zzcgen_copz00(obj_t BgL_envz00_4590,
		obj_t BgL_oz00_4591, obj_t BgL_vz00_4592)
	{
		{	/* Cgen/cop.scm 109 */
			return
				((((BgL_cboxzd2setz12zc0_bglt) COBJECT(
							((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4591)))->BgL_valuez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4592)), BUNSPEC);
		}

	}



/* &lambda2230 */
	BgL_copz00_bglt BGl_z62lambda2230z62zzcgen_copz00(obj_t BgL_envz00_4593,
		obj_t BgL_oz00_4594)
	{
		{	/* Cgen/cop.scm 109 */
			return
				(((BgL_cboxzd2setz12zc0_bglt) COBJECT(
						((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4594)))->BgL_valuez00);
		}

	}



/* &lambda2226 */
	obj_t BGl_z62lambda2226z62zzcgen_copz00(obj_t BgL_envz00_4595,
		obj_t BgL_oz00_4596, obj_t BgL_vz00_4597)
	{
		{	/* Cgen/cop.scm 109 */
			return
				((((BgL_cboxzd2setz12zc0_bglt) COBJECT(
							((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4596)))->BgL_varz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4597)), BUNSPEC);
		}

	}



/* &lambda2225 */
	BgL_copz00_bglt BGl_z62lambda2225z62zzcgen_copz00(obj_t BgL_envz00_4598,
		obj_t BgL_oz00_4599)
	{
		{	/* Cgen/cop.scm 109 */
			return
				(((BgL_cboxzd2setz12zc0_bglt) COBJECT(
						((BgL_cboxzd2setz12zc0_bglt) BgL_oz00_4599)))->BgL_varz00);
		}

	}



/* &<@anonymous:2206> */
	obj_t BGl_z62zc3z04anonymousza32206ze3ze5zzcgen_copz00(obj_t BgL_envz00_4600,
		obj_t BgL_new1240z00_4601)
	{
		{	/* Cgen/cop.scm 106 */
			{
				BgL_cboxzd2refzd2_bglt BgL_auxz00_7510;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cboxzd2refzd2_bglt) BgL_new1240z00_4601))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7514;

					{	/* Cgen/cop.scm 106 */
						obj_t BgL_classz00_5196;

						BgL_classz00_5196 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 106 */
							obj_t BgL__ortest_1106z00_5197;

							BgL__ortest_1106z00_5197 = BGL_CLASS_NIL(BgL_classz00_5196);
							if (CBOOL(BgL__ortest_1106z00_5197))
								{	/* Cgen/cop.scm 106 */
									BgL_auxz00_7514 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5197);
								}
							else
								{	/* Cgen/cop.scm 106 */
									BgL_auxz00_7514 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5196));
								}
						}
					}
					((((BgL_cboxzd2refzd2_bglt) COBJECT(
									((BgL_cboxzd2refzd2_bglt) BgL_new1240z00_4601)))->
							BgL_varz00) = ((BgL_copz00_bglt) BgL_auxz00_7514), BUNSPEC);
				}
				BgL_auxz00_7510 = ((BgL_cboxzd2refzd2_bglt) BgL_new1240z00_4601);
				return ((obj_t) BgL_auxz00_7510);
			}
		}

	}



/* &lambda2204 */
	BgL_cboxzd2refzd2_bglt BGl_z62lambda2204z62zzcgen_copz00(obj_t
		BgL_envz00_4602)
	{
		{	/* Cgen/cop.scm 106 */
			{	/* Cgen/cop.scm 106 */
				BgL_cboxzd2refzd2_bglt BgL_new1239z00_5198;

				BgL_new1239z00_5198 =
					((BgL_cboxzd2refzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cboxzd2refzd2_bgl))));
				{	/* Cgen/cop.scm 106 */
					long BgL_arg2205z00_5199;

					{	/* Cgen/cop.scm 106 */
						long BgL_res2457z00_5200;

						BgL_res2457z00_5200 =
							BGL_CLASS_INDEX(BGl_cboxzd2refzd2zzcgen_copz00);
						BgL_arg2205z00_5199 = BgL_res2457z00_5200;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1239z00_5198), BgL_arg2205z00_5199);
				}
				return BgL_new1239z00_5198;
			}
		}

	}



/* &lambda2202 */
	BgL_cboxzd2refzd2_bglt BGl_z62lambda2202z62zzcgen_copz00(obj_t
		BgL_envz00_4603, obj_t BgL_loc1237z00_4604, obj_t BgL_var1238z00_4605)
	{
		{	/* Cgen/cop.scm 106 */
			{	/* Cgen/cop.scm 106 */
				BgL_cboxzd2refzd2_bglt BgL_new1399z00_5202;

				{	/* Cgen/cop.scm 106 */
					BgL_cboxzd2refzd2_bglt BgL_new1398z00_5203;

					BgL_new1398z00_5203 =
						((BgL_cboxzd2refzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cboxzd2refzd2_bgl))));
					{	/* Cgen/cop.scm 106 */
						long BgL_arg2203z00_5204;

						{	/* Cgen/cop.scm 106 */
							long BgL_res2456z00_5205;

							BgL_res2456z00_5205 =
								BGL_CLASS_INDEX(BGl_cboxzd2refzd2zzcgen_copz00);
							BgL_arg2203z00_5204 = BgL_res2456z00_5205;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1398z00_5203), BgL_arg2203z00_5204);
					}
					BgL_new1399z00_5202 = BgL_new1398z00_5203;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1399z00_5202)))->BgL_locz00) =
					((obj_t) BgL_loc1237z00_4604), BUNSPEC);
				((((BgL_cboxzd2refzd2_bglt) COBJECT(BgL_new1399z00_5202))->BgL_varz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_var1238z00_4605)), BUNSPEC);
				return BgL_new1399z00_5202;
			}
		}

	}



/* &lambda2211 */
	obj_t BGl_z62lambda2211z62zzcgen_copz00(obj_t BgL_envz00_4606,
		obj_t BgL_oz00_4607, obj_t BgL_vz00_4608)
	{
		{	/* Cgen/cop.scm 106 */
			return
				((((BgL_cboxzd2refzd2_bglt) COBJECT(
							((BgL_cboxzd2refzd2_bglt) BgL_oz00_4607)))->BgL_varz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4608)), BUNSPEC);
		}

	}



/* &lambda2210 */
	BgL_copz00_bglt BGl_z62lambda2210z62zzcgen_copz00(obj_t BgL_envz00_4609,
		obj_t BgL_oz00_4610)
	{
		{	/* Cgen/cop.scm 106 */
			return
				(((BgL_cboxzd2refzd2_bglt) COBJECT(
						((BgL_cboxzd2refzd2_bglt) BgL_oz00_4610)))->BgL_varz00);
		}

	}



/* &<@anonymous:2186> */
	obj_t BGl_z62zc3z04anonymousza32186ze3ze5zzcgen_copz00(obj_t BgL_envz00_4611,
		obj_t BgL_new1235z00_4612)
	{
		{	/* Cgen/cop.scm 102 */
			{
				BgL_cmakezd2boxzd2_bglt BgL_auxz00_7542;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cmakezd2boxzd2_bglt) BgL_new1235z00_4612))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7546;

					{	/* Cgen/cop.scm 102 */
						obj_t BgL_classz00_5210;

						BgL_classz00_5210 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 102 */
							obj_t BgL__ortest_1106z00_5211;

							BgL__ortest_1106z00_5211 = BGL_CLASS_NIL(BgL_classz00_5210);
							if (CBOOL(BgL__ortest_1106z00_5211))
								{	/* Cgen/cop.scm 102 */
									BgL_auxz00_7546 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5211);
								}
							else
								{	/* Cgen/cop.scm 102 */
									BgL_auxz00_7546 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5210));
								}
						}
					}
					((((BgL_cmakezd2boxzd2_bglt) COBJECT(
									((BgL_cmakezd2boxzd2_bglt) BgL_new1235z00_4612)))->
							BgL_valuez00) = ((BgL_copz00_bglt) BgL_auxz00_7546), BUNSPEC);
				}
				((((BgL_cmakezd2boxzd2_bglt) COBJECT(
								((BgL_cmakezd2boxzd2_bglt) BgL_new1235z00_4612)))->
						BgL_stackablez00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_7542 = ((BgL_cmakezd2boxzd2_bglt) BgL_new1235z00_4612);
				return ((obj_t) BgL_auxz00_7542);
			}
		}

	}



/* &lambda2184 */
	BgL_cmakezd2boxzd2_bglt BGl_z62lambda2184z62zzcgen_copz00(obj_t
		BgL_envz00_4613)
	{
		{	/* Cgen/cop.scm 102 */
			{	/* Cgen/cop.scm 102 */
				BgL_cmakezd2boxzd2_bglt BgL_new1234z00_5212;

				BgL_new1234z00_5212 =
					((BgL_cmakezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cmakezd2boxzd2_bgl))));
				{	/* Cgen/cop.scm 102 */
					long BgL_arg2185z00_5213;

					{	/* Cgen/cop.scm 102 */
						long BgL_res2455z00_5214;

						BgL_res2455z00_5214 =
							BGL_CLASS_INDEX(BGl_cmakezd2boxzd2zzcgen_copz00);
						BgL_arg2185z00_5213 = BgL_res2455z00_5214;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1234z00_5212), BgL_arg2185z00_5213);
				}
				return BgL_new1234z00_5212;
			}
		}

	}



/* &lambda2182 */
	BgL_cmakezd2boxzd2_bglt BGl_z62lambda2182z62zzcgen_copz00(obj_t
		BgL_envz00_4614, obj_t BgL_loc1231z00_4615, obj_t BgL_value1232z00_4616,
		obj_t BgL_stackable1233z00_4617)
	{
		{	/* Cgen/cop.scm 102 */
			{	/* Cgen/cop.scm 102 */
				BgL_cmakezd2boxzd2_bglt BgL_new1397z00_5216;

				{	/* Cgen/cop.scm 102 */
					BgL_cmakezd2boxzd2_bglt BgL_new1396z00_5217;

					BgL_new1396z00_5217 =
						((BgL_cmakezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cmakezd2boxzd2_bgl))));
					{	/* Cgen/cop.scm 102 */
						long BgL_arg2183z00_5218;

						{	/* Cgen/cop.scm 102 */
							long BgL_res2454z00_5219;

							BgL_res2454z00_5219 =
								BGL_CLASS_INDEX(BGl_cmakezd2boxzd2zzcgen_copz00);
							BgL_arg2183z00_5218 = BgL_res2454z00_5219;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1396z00_5217), BgL_arg2183z00_5218);
					}
					BgL_new1397z00_5216 = BgL_new1396z00_5217;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1397z00_5216)))->BgL_locz00) =
					((obj_t) BgL_loc1231z00_4615), BUNSPEC);
				((((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_new1397z00_5216))->
						BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_value1232z00_4616)),
					BUNSPEC);
				((((BgL_cmakezd2boxzd2_bglt) COBJECT(BgL_new1397z00_5216))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1233z00_4617), BUNSPEC);
				return BgL_new1397z00_5216;
			}
		}

	}



/* &lambda2196 */
	obj_t BGl_z62lambda2196z62zzcgen_copz00(obj_t BgL_envz00_4618,
		obj_t BgL_oz00_4619, obj_t BgL_vz00_4620)
	{
		{	/* Cgen/cop.scm 102 */
			return
				((((BgL_cmakezd2boxzd2_bglt) COBJECT(
							((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4619)))->BgL_stackablez00) =
				((obj_t) BgL_vz00_4620), BUNSPEC);
		}

	}



/* &lambda2195 */
	obj_t BGl_z62lambda2195z62zzcgen_copz00(obj_t BgL_envz00_4621,
		obj_t BgL_oz00_4622)
	{
		{	/* Cgen/cop.scm 102 */
			return
				(((BgL_cmakezd2boxzd2_bglt) COBJECT(
						((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4622)))->BgL_stackablez00);
		}

	}



/* &lambda2191 */
	obj_t BGl_z62lambda2191z62zzcgen_copz00(obj_t BgL_envz00_4623,
		obj_t BgL_oz00_4624, obj_t BgL_vz00_4625)
	{
		{	/* Cgen/cop.scm 102 */
			return
				((((BgL_cmakezd2boxzd2_bglt) COBJECT(
							((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4624)))->BgL_valuez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4625)), BUNSPEC);
		}

	}



/* &lambda2190 */
	BgL_copz00_bglt BGl_z62lambda2190z62zzcgen_copz00(obj_t BgL_envz00_4626,
		obj_t BgL_oz00_4627)
	{
		{	/* Cgen/cop.scm 102 */
			return
				(((BgL_cmakezd2boxzd2_bglt) COBJECT(
						((BgL_cmakezd2boxzd2_bglt) BgL_oz00_4627)))->BgL_valuez00);
		}

	}



/* &<@anonymous:2166> */
	obj_t BGl_z62zc3z04anonymousza32166ze3ze5zzcgen_copz00(obj_t BgL_envz00_4628,
		obj_t BgL_new1229z00_4629)
	{
		{	/* Cgen/cop.scm 98 */
			{
				BgL_cswitchz00_bglt BgL_auxz00_7581;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cswitchz00_bglt) BgL_new1229z00_4629))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7585;

					{	/* Cgen/cop.scm 98 */
						obj_t BgL_classz00_5226;

						BgL_classz00_5226 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 98 */
							obj_t BgL__ortest_1106z00_5227;

							BgL__ortest_1106z00_5227 = BGL_CLASS_NIL(BgL_classz00_5226);
							if (CBOOL(BgL__ortest_1106z00_5227))
								{	/* Cgen/cop.scm 98 */
									BgL_auxz00_7585 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5227);
								}
							else
								{	/* Cgen/cop.scm 98 */
									BgL_auxz00_7585 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5226));
								}
						}
					}
					((((BgL_cswitchz00_bglt) COBJECT(
									((BgL_cswitchz00_bglt) BgL_new1229z00_4629)))->BgL_testz00) =
						((BgL_copz00_bglt) BgL_auxz00_7585), BUNSPEC);
				}
				((((BgL_cswitchz00_bglt) COBJECT(
								((BgL_cswitchz00_bglt) BgL_new1229z00_4629)))->BgL_clausesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_7581 = ((BgL_cswitchz00_bglt) BgL_new1229z00_4629);
				return ((obj_t) BgL_auxz00_7581);
			}
		}

	}



/* &lambda2164 */
	BgL_cswitchz00_bglt BGl_z62lambda2164z62zzcgen_copz00(obj_t BgL_envz00_4630)
	{
		{	/* Cgen/cop.scm 98 */
			{	/* Cgen/cop.scm 98 */
				BgL_cswitchz00_bglt BgL_new1228z00_5228;

				BgL_new1228z00_5228 =
					((BgL_cswitchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cswitchz00_bgl))));
				{	/* Cgen/cop.scm 98 */
					long BgL_arg2165z00_5229;

					{	/* Cgen/cop.scm 98 */
						long BgL_res2453z00_5230;

						BgL_res2453z00_5230 = BGL_CLASS_INDEX(BGl_cswitchz00zzcgen_copz00);
						BgL_arg2165z00_5229 = BgL_res2453z00_5230;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1228z00_5228), BgL_arg2165z00_5229);
				}
				return BgL_new1228z00_5228;
			}
		}

	}



/* &lambda2162 */
	BgL_cswitchz00_bglt BGl_z62lambda2162z62zzcgen_copz00(obj_t BgL_envz00_4631,
		obj_t BgL_loc1225z00_4632, obj_t BgL_test1226z00_4633,
		obj_t BgL_clauses1227z00_4634)
	{
		{	/* Cgen/cop.scm 98 */
			{	/* Cgen/cop.scm 98 */
				BgL_cswitchz00_bglt BgL_new1395z00_5232;

				{	/* Cgen/cop.scm 98 */
					BgL_cswitchz00_bglt BgL_new1394z00_5233;

					BgL_new1394z00_5233 =
						((BgL_cswitchz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cswitchz00_bgl))));
					{	/* Cgen/cop.scm 98 */
						long BgL_arg2163z00_5234;

						{	/* Cgen/cop.scm 98 */
							long BgL_res2452z00_5235;

							BgL_res2452z00_5235 =
								BGL_CLASS_INDEX(BGl_cswitchz00zzcgen_copz00);
							BgL_arg2163z00_5234 = BgL_res2452z00_5235;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1394z00_5233), BgL_arg2163z00_5234);
					}
					BgL_new1395z00_5232 = BgL_new1394z00_5233;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1395z00_5232)))->BgL_locz00) =
					((obj_t) BgL_loc1225z00_4632), BUNSPEC);
				((((BgL_cswitchz00_bglt) COBJECT(BgL_new1395z00_5232))->BgL_testz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_test1226z00_4633)),
					BUNSPEC);
				((((BgL_cswitchz00_bglt) COBJECT(BgL_new1395z00_5232))->
						BgL_clausesz00) = ((obj_t) BgL_clauses1227z00_4634), BUNSPEC);
				return BgL_new1395z00_5232;
			}
		}

	}



/* &lambda2176 */
	obj_t BGl_z62lambda2176z62zzcgen_copz00(obj_t BgL_envz00_4635,
		obj_t BgL_oz00_4636, obj_t BgL_vz00_4637)
	{
		{	/* Cgen/cop.scm 98 */
			return
				((((BgL_cswitchz00_bglt) COBJECT(
							((BgL_cswitchz00_bglt) BgL_oz00_4636)))->BgL_clausesz00) =
				((obj_t) BgL_vz00_4637), BUNSPEC);
		}

	}



/* &lambda2175 */
	obj_t BGl_z62lambda2175z62zzcgen_copz00(obj_t BgL_envz00_4638,
		obj_t BgL_oz00_4639)
	{
		{	/* Cgen/cop.scm 98 */
			return
				(((BgL_cswitchz00_bglt) COBJECT(
						((BgL_cswitchz00_bglt) BgL_oz00_4639)))->BgL_clausesz00);
		}

	}



/* &lambda2171 */
	obj_t BGl_z62lambda2171z62zzcgen_copz00(obj_t BgL_envz00_4640,
		obj_t BgL_oz00_4641, obj_t BgL_vz00_4642)
	{
		{	/* Cgen/cop.scm 98 */
			return
				((((BgL_cswitchz00_bglt) COBJECT(
							((BgL_cswitchz00_bglt) BgL_oz00_4641)))->BgL_testz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4642)), BUNSPEC);
		}

	}



/* &lambda2170 */
	BgL_copz00_bglt BGl_z62lambda2170z62zzcgen_copz00(obj_t BgL_envz00_4643,
		obj_t BgL_oz00_4644)
	{
		{	/* Cgen/cop.scm 98 */
			return
				(((BgL_cswitchz00_bglt) COBJECT(
						((BgL_cswitchz00_bglt) BgL_oz00_4644)))->BgL_testz00);
		}

	}



/* &<@anonymous:2141> */
	obj_t BGl_z62zc3z04anonymousza32141ze3ze5zzcgen_copz00(obj_t BgL_envz00_4645,
		obj_t BgL_new1223z00_4646)
	{
		{	/* Cgen/cop.scm 93 */
			{
				BgL_cfailz00_bglt BgL_auxz00_7620;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cfailz00_bglt) BgL_new1223z00_4646))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7624;

					{	/* Cgen/cop.scm 93 */
						obj_t BgL_classz00_5242;

						BgL_classz00_5242 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 93 */
							obj_t BgL__ortest_1106z00_5243;

							BgL__ortest_1106z00_5243 = BGL_CLASS_NIL(BgL_classz00_5242);
							if (CBOOL(BgL__ortest_1106z00_5243))
								{	/* Cgen/cop.scm 93 */
									BgL_auxz00_7624 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5243);
								}
							else
								{	/* Cgen/cop.scm 93 */
									BgL_auxz00_7624 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5242));
								}
						}
					}
					((((BgL_cfailz00_bglt) COBJECT(
									((BgL_cfailz00_bglt) BgL_new1223z00_4646)))->BgL_procz00) =
						((BgL_copz00_bglt) BgL_auxz00_7624), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7633;

					{	/* Cgen/cop.scm 93 */
						obj_t BgL_classz00_5244;

						BgL_classz00_5244 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 93 */
							obj_t BgL__ortest_1106z00_5245;

							BgL__ortest_1106z00_5245 = BGL_CLASS_NIL(BgL_classz00_5244);
							if (CBOOL(BgL__ortest_1106z00_5245))
								{	/* Cgen/cop.scm 93 */
									BgL_auxz00_7633 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5245);
								}
							else
								{	/* Cgen/cop.scm 93 */
									BgL_auxz00_7633 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5244));
								}
						}
					}
					((((BgL_cfailz00_bglt) COBJECT(
									((BgL_cfailz00_bglt) BgL_new1223z00_4646)))->BgL_msgz00) =
						((BgL_copz00_bglt) BgL_auxz00_7633), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7642;

					{	/* Cgen/cop.scm 93 */
						obj_t BgL_classz00_5246;

						BgL_classz00_5246 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 93 */
							obj_t BgL__ortest_1106z00_5247;

							BgL__ortest_1106z00_5247 = BGL_CLASS_NIL(BgL_classz00_5246);
							if (CBOOL(BgL__ortest_1106z00_5247))
								{	/* Cgen/cop.scm 93 */
									BgL_auxz00_7642 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5247);
								}
							else
								{	/* Cgen/cop.scm 93 */
									BgL_auxz00_7642 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5246));
								}
						}
					}
					((((BgL_cfailz00_bglt) COBJECT(
									((BgL_cfailz00_bglt) BgL_new1223z00_4646)))->BgL_objz00) =
						((BgL_copz00_bglt) BgL_auxz00_7642), BUNSPEC);
				}
				BgL_auxz00_7620 = ((BgL_cfailz00_bglt) BgL_new1223z00_4646);
				return ((obj_t) BgL_auxz00_7620);
			}
		}

	}



/* &lambda2138 */
	BgL_cfailz00_bglt BGl_z62lambda2138z62zzcgen_copz00(obj_t BgL_envz00_4647)
	{
		{	/* Cgen/cop.scm 93 */
			{	/* Cgen/cop.scm 93 */
				BgL_cfailz00_bglt BgL_new1222z00_5248;

				BgL_new1222z00_5248 =
					((BgL_cfailz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cfailz00_bgl))));
				{	/* Cgen/cop.scm 93 */
					long BgL_arg2140z00_5249;

					{	/* Cgen/cop.scm 93 */
						long BgL_res2451z00_5250;

						BgL_res2451z00_5250 = BGL_CLASS_INDEX(BGl_cfailz00zzcgen_copz00);
						BgL_arg2140z00_5249 = BgL_res2451z00_5250;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1222z00_5248), BgL_arg2140z00_5249);
				}
				return BgL_new1222z00_5248;
			}
		}

	}



/* &lambda2136 */
	BgL_cfailz00_bglt BGl_z62lambda2136z62zzcgen_copz00(obj_t BgL_envz00_4648,
		obj_t BgL_loc1218z00_4649, obj_t BgL_proc1219z00_4650,
		obj_t BgL_msg1220z00_4651, obj_t BgL_obj1221z00_4652)
	{
		{	/* Cgen/cop.scm 93 */
			{	/* Cgen/cop.scm 93 */
				BgL_cfailz00_bglt BgL_new1393z00_5254;

				{	/* Cgen/cop.scm 93 */
					BgL_cfailz00_bglt BgL_new1392z00_5255;

					BgL_new1392z00_5255 =
						((BgL_cfailz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cfailz00_bgl))));
					{	/* Cgen/cop.scm 93 */
						long BgL_arg2137z00_5256;

						{	/* Cgen/cop.scm 93 */
							long BgL_res2450z00_5257;

							BgL_res2450z00_5257 = BGL_CLASS_INDEX(BGl_cfailz00zzcgen_copz00);
							BgL_arg2137z00_5256 = BgL_res2450z00_5257;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1392z00_5255), BgL_arg2137z00_5256);
					}
					BgL_new1393z00_5254 = BgL_new1392z00_5255;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1393z00_5254)))->BgL_locz00) =
					((obj_t) BgL_loc1218z00_4649), BUNSPEC);
				((((BgL_cfailz00_bglt) COBJECT(BgL_new1393z00_5254))->BgL_procz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_proc1219z00_4650)),
					BUNSPEC);
				((((BgL_cfailz00_bglt) COBJECT(BgL_new1393z00_5254))->BgL_msgz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_msg1220z00_4651)), BUNSPEC);
				((((BgL_cfailz00_bglt) COBJECT(BgL_new1393z00_5254))->BgL_objz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_obj1221z00_4652)), BUNSPEC);
				return BgL_new1393z00_5254;
			}
		}

	}



/* &lambda2156 */
	obj_t BGl_z62lambda2156z62zzcgen_copz00(obj_t BgL_envz00_4653,
		obj_t BgL_oz00_4654, obj_t BgL_vz00_4655)
	{
		{	/* Cgen/cop.scm 93 */
			return
				((((BgL_cfailz00_bglt) COBJECT(
							((BgL_cfailz00_bglt) BgL_oz00_4654)))->BgL_objz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4655)), BUNSPEC);
		}

	}



/* &lambda2155 */
	BgL_copz00_bglt BGl_z62lambda2155z62zzcgen_copz00(obj_t BgL_envz00_4656,
		obj_t BgL_oz00_4657)
	{
		{	/* Cgen/cop.scm 93 */
			return
				(((BgL_cfailz00_bglt) COBJECT(
						((BgL_cfailz00_bglt) BgL_oz00_4657)))->BgL_objz00);
		}

	}



/* &lambda2151 */
	obj_t BGl_z62lambda2151z62zzcgen_copz00(obj_t BgL_envz00_4658,
		obj_t BgL_oz00_4659, obj_t BgL_vz00_4660)
	{
		{	/* Cgen/cop.scm 93 */
			return
				((((BgL_cfailz00_bglt) COBJECT(
							((BgL_cfailz00_bglt) BgL_oz00_4659)))->BgL_msgz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4660)), BUNSPEC);
		}

	}



/* &lambda2150 */
	BgL_copz00_bglt BGl_z62lambda2150z62zzcgen_copz00(obj_t BgL_envz00_4661,
		obj_t BgL_oz00_4662)
	{
		{	/* Cgen/cop.scm 93 */
			return
				(((BgL_cfailz00_bglt) COBJECT(
						((BgL_cfailz00_bglt) BgL_oz00_4662)))->BgL_msgz00);
		}

	}



/* &lambda2146 */
	obj_t BGl_z62lambda2146z62zzcgen_copz00(obj_t BgL_envz00_4663,
		obj_t BgL_oz00_4664, obj_t BgL_vz00_4665)
	{
		{	/* Cgen/cop.scm 93 */
			return
				((((BgL_cfailz00_bglt) COBJECT(
							((BgL_cfailz00_bglt) BgL_oz00_4664)))->BgL_procz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4665)), BUNSPEC);
		}

	}



/* &lambda2145 */
	BgL_copz00_bglt BGl_z62lambda2145z62zzcgen_copz00(obj_t BgL_envz00_4666,
		obj_t BgL_oz00_4667)
	{
		{	/* Cgen/cop.scm 93 */
			return
				(((BgL_cfailz00_bglt) COBJECT(
						((BgL_cfailz00_bglt) BgL_oz00_4667)))->BgL_procz00);
		}

	}



/* &<@anonymous:2120> */
	obj_t BGl_z62zc3z04anonymousza32120ze3ze5zzcgen_copz00(obj_t BgL_envz00_4668,
		obj_t BgL_new1216z00_4669)
	{
		{	/* Cgen/cop.scm 89 */
			{
				BgL_cappz00_bglt BgL_auxz00_7684;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cappz00_bglt) BgL_new1216z00_4669))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7688;

					{	/* Cgen/cop.scm 89 */
						obj_t BgL_classz00_5268;

						BgL_classz00_5268 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 89 */
							obj_t BgL__ortest_1106z00_5269;

							BgL__ortest_1106z00_5269 = BGL_CLASS_NIL(BgL_classz00_5268);
							if (CBOOL(BgL__ortest_1106z00_5269))
								{	/* Cgen/cop.scm 89 */
									BgL_auxz00_7688 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5269);
								}
							else
								{	/* Cgen/cop.scm 89 */
									BgL_auxz00_7688 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5268));
								}
						}
					}
					((((BgL_cappz00_bglt) COBJECT(
									((BgL_cappz00_bglt) BgL_new1216z00_4669)))->BgL_funz00) =
						((BgL_copz00_bglt) BgL_auxz00_7688), BUNSPEC);
				}
				((((BgL_cappz00_bglt) COBJECT(
								((BgL_cappz00_bglt) BgL_new1216z00_4669)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_7684 = ((BgL_cappz00_bglt) BgL_new1216z00_4669);
				return ((obj_t) BgL_auxz00_7684);
			}
		}

	}



/* &lambda2118 */
	BgL_cappz00_bglt BGl_z62lambda2118z62zzcgen_copz00(obj_t BgL_envz00_4670)
	{
		{	/* Cgen/cop.scm 89 */
			{	/* Cgen/cop.scm 89 */
				BgL_cappz00_bglt BgL_new1215z00_5270;

				BgL_new1215z00_5270 =
					((BgL_cappz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cappz00_bgl))));
				{	/* Cgen/cop.scm 89 */
					long BgL_arg2119z00_5271;

					{	/* Cgen/cop.scm 89 */
						long BgL_res2449z00_5272;

						BgL_res2449z00_5272 = BGL_CLASS_INDEX(BGl_cappz00zzcgen_copz00);
						BgL_arg2119z00_5271 = BgL_res2449z00_5272;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1215z00_5270), BgL_arg2119z00_5271);
				}
				return BgL_new1215z00_5270;
			}
		}

	}



/* &lambda2116 */
	BgL_cappz00_bglt BGl_z62lambda2116z62zzcgen_copz00(obj_t BgL_envz00_4671,
		obj_t BgL_loc1212z00_4672, obj_t BgL_fun1213z00_4673,
		obj_t BgL_args1214z00_4674)
	{
		{	/* Cgen/cop.scm 89 */
			{	/* Cgen/cop.scm 89 */
				BgL_cappz00_bglt BgL_new1391z00_5274;

				{	/* Cgen/cop.scm 89 */
					BgL_cappz00_bglt BgL_new1390z00_5275;

					BgL_new1390z00_5275 =
						((BgL_cappz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cappz00_bgl))));
					{	/* Cgen/cop.scm 89 */
						long BgL_arg2117z00_5276;

						{	/* Cgen/cop.scm 89 */
							long BgL_res2448z00_5277;

							BgL_res2448z00_5277 = BGL_CLASS_INDEX(BGl_cappz00zzcgen_copz00);
							BgL_arg2117z00_5276 = BgL_res2448z00_5277;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1390z00_5275), BgL_arg2117z00_5276);
					}
					BgL_new1391z00_5274 = BgL_new1390z00_5275;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1391z00_5274)))->BgL_locz00) =
					((obj_t) BgL_loc1212z00_4672), BUNSPEC);
				((((BgL_cappz00_bglt) COBJECT(BgL_new1391z00_5274))->BgL_funz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_fun1213z00_4673)), BUNSPEC);
				((((BgL_cappz00_bglt) COBJECT(BgL_new1391z00_5274))->BgL_argsz00) =
					((obj_t) BgL_args1214z00_4674), BUNSPEC);
				return BgL_new1391z00_5274;
			}
		}

	}



/* &lambda2130 */
	obj_t BGl_z62lambda2130z62zzcgen_copz00(obj_t BgL_envz00_4675,
		obj_t BgL_oz00_4676, obj_t BgL_vz00_4677)
	{
		{	/* Cgen/cop.scm 89 */
			return
				((((BgL_cappz00_bglt) COBJECT(
							((BgL_cappz00_bglt) BgL_oz00_4676)))->BgL_argsz00) =
				((obj_t) BgL_vz00_4677), BUNSPEC);
		}

	}



/* &lambda2129 */
	obj_t BGl_z62lambda2129z62zzcgen_copz00(obj_t BgL_envz00_4678,
		obj_t BgL_oz00_4679)
	{
		{	/* Cgen/cop.scm 89 */
			return
				(((BgL_cappz00_bglt) COBJECT(
						((BgL_cappz00_bglt) BgL_oz00_4679)))->BgL_argsz00);
		}

	}



/* &lambda2125 */
	obj_t BGl_z62lambda2125z62zzcgen_copz00(obj_t BgL_envz00_4680,
		obj_t BgL_oz00_4681, obj_t BgL_vz00_4682)
	{
		{	/* Cgen/cop.scm 89 */
			return
				((((BgL_cappz00_bglt) COBJECT(
							((BgL_cappz00_bglt) BgL_oz00_4681)))->BgL_funz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4682)), BUNSPEC);
		}

	}



/* &lambda2124 */
	BgL_copz00_bglt BGl_z62lambda2124z62zzcgen_copz00(obj_t BgL_envz00_4683,
		obj_t BgL_oz00_4684)
	{
		{	/* Cgen/cop.scm 89 */
			return
				(((BgL_cappz00_bglt) COBJECT(
						((BgL_cappz00_bglt) BgL_oz00_4684)))->BgL_funz00);
		}

	}



/* &<@anonymous:2099> */
	obj_t BGl_z62zc3z04anonymousza32099ze3ze5zzcgen_copz00(obj_t BgL_envz00_4685,
		obj_t BgL_new1210z00_4686)
	{
		{	/* Cgen/cop.scm 85 */
			{
				BgL_capplyz00_bglt BgL_auxz00_7723;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_capplyz00_bglt) BgL_new1210z00_4686))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7727;

					{	/* Cgen/cop.scm 85 */
						obj_t BgL_classz00_5284;

						BgL_classz00_5284 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 85 */
							obj_t BgL__ortest_1106z00_5285;

							BgL__ortest_1106z00_5285 = BGL_CLASS_NIL(BgL_classz00_5284);
							if (CBOOL(BgL__ortest_1106z00_5285))
								{	/* Cgen/cop.scm 85 */
									BgL_auxz00_7727 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5285);
								}
							else
								{	/* Cgen/cop.scm 85 */
									BgL_auxz00_7727 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5284));
								}
						}
					}
					((((BgL_capplyz00_bglt) COBJECT(
									((BgL_capplyz00_bglt) BgL_new1210z00_4686)))->BgL_funz00) =
						((BgL_copz00_bglt) BgL_auxz00_7727), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7736;

					{	/* Cgen/cop.scm 85 */
						obj_t BgL_classz00_5286;

						BgL_classz00_5286 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 85 */
							obj_t BgL__ortest_1106z00_5287;

							BgL__ortest_1106z00_5287 = BGL_CLASS_NIL(BgL_classz00_5286);
							if (CBOOL(BgL__ortest_1106z00_5287))
								{	/* Cgen/cop.scm 85 */
									BgL_auxz00_7736 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5287);
								}
							else
								{	/* Cgen/cop.scm 85 */
									BgL_auxz00_7736 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5286));
								}
						}
					}
					((((BgL_capplyz00_bglt) COBJECT(
									((BgL_capplyz00_bglt) BgL_new1210z00_4686)))->BgL_argz00) =
						((BgL_copz00_bglt) BgL_auxz00_7736), BUNSPEC);
				}
				BgL_auxz00_7723 = ((BgL_capplyz00_bglt) BgL_new1210z00_4686);
				return ((obj_t) BgL_auxz00_7723);
			}
		}

	}



/* &lambda2097 */
	BgL_capplyz00_bglt BGl_z62lambda2097z62zzcgen_copz00(obj_t BgL_envz00_4687)
	{
		{	/* Cgen/cop.scm 85 */
			{	/* Cgen/cop.scm 85 */
				BgL_capplyz00_bglt BgL_new1209z00_5288;

				BgL_new1209z00_5288 =
					((BgL_capplyz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_capplyz00_bgl))));
				{	/* Cgen/cop.scm 85 */
					long BgL_arg2098z00_5289;

					{	/* Cgen/cop.scm 85 */
						long BgL_res2447z00_5290;

						BgL_res2447z00_5290 = BGL_CLASS_INDEX(BGl_capplyz00zzcgen_copz00);
						BgL_arg2098z00_5289 = BgL_res2447z00_5290;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1209z00_5288), BgL_arg2098z00_5289);
				}
				return BgL_new1209z00_5288;
			}
		}

	}



/* &lambda2095 */
	BgL_capplyz00_bglt BGl_z62lambda2095z62zzcgen_copz00(obj_t BgL_envz00_4688,
		obj_t BgL_loc1201z00_4689, obj_t BgL_fun1202z00_4690,
		obj_t BgL_arg1208z00_4691)
	{
		{	/* Cgen/cop.scm 85 */
			{	/* Cgen/cop.scm 85 */
				BgL_capplyz00_bglt BgL_new1389z00_5293;

				{	/* Cgen/cop.scm 85 */
					BgL_capplyz00_bglt BgL_new1388z00_5294;

					BgL_new1388z00_5294 =
						((BgL_capplyz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_capplyz00_bgl))));
					{	/* Cgen/cop.scm 85 */
						long BgL_arg2096z00_5295;

						{	/* Cgen/cop.scm 85 */
							long BgL_res2446z00_5296;

							BgL_res2446z00_5296 = BGL_CLASS_INDEX(BGl_capplyz00zzcgen_copz00);
							BgL_arg2096z00_5295 = BgL_res2446z00_5296;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1388z00_5294), BgL_arg2096z00_5295);
					}
					BgL_new1389z00_5293 = BgL_new1388z00_5294;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1389z00_5293)))->BgL_locz00) =
					((obj_t) BgL_loc1201z00_4689), BUNSPEC);
				((((BgL_capplyz00_bglt) COBJECT(BgL_new1389z00_5293))->BgL_funz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_fun1202z00_4690)), BUNSPEC);
				((((BgL_capplyz00_bglt) COBJECT(BgL_new1389z00_5293))->BgL_argz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_arg1208z00_4691)), BUNSPEC);
				return BgL_new1389z00_5293;
			}
		}

	}



/* &lambda2109 */
	obj_t BGl_z62lambda2109z62zzcgen_copz00(obj_t BgL_envz00_4692,
		obj_t BgL_oz00_4693, obj_t BgL_vz00_4694)
	{
		{	/* Cgen/cop.scm 85 */
			return
				((((BgL_capplyz00_bglt) COBJECT(
							((BgL_capplyz00_bglt) BgL_oz00_4693)))->BgL_argz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4694)), BUNSPEC);
		}

	}



/* &lambda2108 */
	BgL_copz00_bglt BGl_z62lambda2108z62zzcgen_copz00(obj_t BgL_envz00_4695,
		obj_t BgL_oz00_4696)
	{
		{	/* Cgen/cop.scm 85 */
			return
				(((BgL_capplyz00_bglt) COBJECT(
						((BgL_capplyz00_bglt) BgL_oz00_4696)))->BgL_argz00);
		}

	}



/* &lambda2104 */
	obj_t BGl_z62lambda2104z62zzcgen_copz00(obj_t BgL_envz00_4697,
		obj_t BgL_oz00_4698, obj_t BgL_vz00_4699)
	{
		{	/* Cgen/cop.scm 85 */
			return
				((((BgL_capplyz00_bglt) COBJECT(
							((BgL_capplyz00_bglt) BgL_oz00_4698)))->BgL_funz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4699)), BUNSPEC);
		}

	}



/* &lambda2103 */
	BgL_copz00_bglt BGl_z62lambda2103z62zzcgen_copz00(obj_t BgL_envz00_4700,
		obj_t BgL_oz00_4701)
	{
		{	/* Cgen/cop.scm 85 */
			return
				(((BgL_capplyz00_bglt) COBJECT(
						((BgL_capplyz00_bglt) BgL_oz00_4701)))->BgL_funz00);
		}

	}



/* &<@anonymous:2069> */
	obj_t BGl_z62zc3z04anonymousza32069ze3ze5zzcgen_copz00(obj_t BgL_envz00_4702,
		obj_t BgL_new1199z00_4703)
	{
		{	/* Cgen/cop.scm 79 */
			{
				BgL_cfuncallz00_bglt BgL_auxz00_7771;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cfuncallz00_bglt) BgL_new1199z00_4703))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7775;

					{	/* Cgen/cop.scm 79 */
						obj_t BgL_classz00_5304;

						BgL_classz00_5304 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 79 */
							obj_t BgL__ortest_1106z00_5305;

							BgL__ortest_1106z00_5305 = BGL_CLASS_NIL(BgL_classz00_5304);
							if (CBOOL(BgL__ortest_1106z00_5305))
								{	/* Cgen/cop.scm 79 */
									BgL_auxz00_7775 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5305);
								}
							else
								{	/* Cgen/cop.scm 79 */
									BgL_auxz00_7775 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5304));
								}
						}
					}
					((((BgL_cfuncallz00_bglt) COBJECT(
									((BgL_cfuncallz00_bglt) BgL_new1199z00_4703)))->BgL_funz00) =
						((BgL_copz00_bglt) BgL_auxz00_7775), BUNSPEC);
				}
				((((BgL_cfuncallz00_bglt) COBJECT(
								((BgL_cfuncallz00_bglt) BgL_new1199z00_4703)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(((BgL_cfuncallz00_bglt)
									BgL_new1199z00_4703)))->BgL_strengthz00) =
					((obj_t) CNST_TABLE_REF(((long) 60))), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(((BgL_cfuncallz00_bglt)
									BgL_new1199z00_4703)))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_7771 = ((BgL_cfuncallz00_bglt) BgL_new1199z00_4703);
				return ((obj_t) BgL_auxz00_7771);
			}
		}

	}



/* &lambda2066 */
	BgL_cfuncallz00_bglt BGl_z62lambda2066z62zzcgen_copz00(obj_t BgL_envz00_4704)
	{
		{	/* Cgen/cop.scm 79 */
			{	/* Cgen/cop.scm 79 */
				BgL_cfuncallz00_bglt BgL_new1198z00_5306;

				BgL_new1198z00_5306 =
					((BgL_cfuncallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cfuncallz00_bgl))));
				{	/* Cgen/cop.scm 79 */
					long BgL_arg2068z00_5307;

					{	/* Cgen/cop.scm 79 */
						long BgL_res2445z00_5308;

						BgL_res2445z00_5308 = BGL_CLASS_INDEX(BGl_cfuncallz00zzcgen_copz00);
						BgL_arg2068z00_5307 = BgL_res2445z00_5308;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1198z00_5306), BgL_arg2068z00_5307);
				}
				return BgL_new1198z00_5306;
			}
		}

	}



/* &lambda2064 */
	BgL_cfuncallz00_bglt BGl_z62lambda2064z62zzcgen_copz00(obj_t BgL_envz00_4705,
		obj_t BgL_loc1193z00_4706, obj_t BgL_fun1194z00_4707,
		obj_t BgL_args1195z00_4708, obj_t BgL_strength1196z00_4709,
		obj_t BgL_type1197z00_4710)
	{
		{	/* Cgen/cop.scm 79 */
			{	/* Cgen/cop.scm 79 */
				BgL_cfuncallz00_bglt BgL_new1387z00_5311;

				{	/* Cgen/cop.scm 79 */
					BgL_cfuncallz00_bglt BgL_new1386z00_5312;

					BgL_new1386z00_5312 =
						((BgL_cfuncallz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cfuncallz00_bgl))));
					{	/* Cgen/cop.scm 79 */
						long BgL_arg2065z00_5313;

						{	/* Cgen/cop.scm 79 */
							long BgL_res2444z00_5314;

							BgL_res2444z00_5314 =
								BGL_CLASS_INDEX(BGl_cfuncallz00zzcgen_copz00);
							BgL_arg2065z00_5313 = BgL_res2444z00_5314;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1386z00_5312), BgL_arg2065z00_5313);
					}
					BgL_new1387z00_5311 = BgL_new1386z00_5312;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1387z00_5311)))->BgL_locz00) =
					((obj_t) BgL_loc1193z00_4706), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1387z00_5311))->BgL_funz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_fun1194z00_4707)), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1387z00_5311))->BgL_argsz00) =
					((obj_t) BgL_args1195z00_4708), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1387z00_5311))->
						BgL_strengthz00) =
					((obj_t) ((obj_t) BgL_strength1196z00_4709)), BUNSPEC);
				((((BgL_cfuncallz00_bglt) COBJECT(BgL_new1387z00_5311))->BgL_typez00) =
					((obj_t) BgL_type1197z00_4710), BUNSPEC);
				return BgL_new1387z00_5311;
			}
		}

	}



/* &lambda2089 */
	obj_t BGl_z62lambda2089z62zzcgen_copz00(obj_t BgL_envz00_4711,
		obj_t BgL_oz00_4712, obj_t BgL_vz00_4713)
	{
		{	/* Cgen/cop.scm 79 */
			return
				((((BgL_cfuncallz00_bglt) COBJECT(
							((BgL_cfuncallz00_bglt) BgL_oz00_4712)))->BgL_typez00) =
				((obj_t) BgL_vz00_4713), BUNSPEC);
		}

	}



/* &lambda2088 */
	obj_t BGl_z62lambda2088z62zzcgen_copz00(obj_t BgL_envz00_4714,
		obj_t BgL_oz00_4715)
	{
		{	/* Cgen/cop.scm 79 */
			return
				(((BgL_cfuncallz00_bglt) COBJECT(
						((BgL_cfuncallz00_bglt) BgL_oz00_4715)))->BgL_typez00);
		}

	}



/* &lambda2084 */
	obj_t BGl_z62lambda2084z62zzcgen_copz00(obj_t BgL_envz00_4716,
		obj_t BgL_oz00_4717, obj_t BgL_vz00_4718)
	{
		{	/* Cgen/cop.scm 79 */
			return
				((((BgL_cfuncallz00_bglt) COBJECT(
							((BgL_cfuncallz00_bglt) BgL_oz00_4717)))->BgL_strengthz00) =
				((obj_t) ((obj_t) BgL_vz00_4718)), BUNSPEC);
		}

	}



/* &lambda2083 */
	obj_t BGl_z62lambda2083z62zzcgen_copz00(obj_t BgL_envz00_4719,
		obj_t BgL_oz00_4720)
	{
		{	/* Cgen/cop.scm 79 */
			return
				(((BgL_cfuncallz00_bglt) COBJECT(
						((BgL_cfuncallz00_bglt) BgL_oz00_4720)))->BgL_strengthz00);
		}

	}



/* &lambda2079 */
	obj_t BGl_z62lambda2079z62zzcgen_copz00(obj_t BgL_envz00_4721,
		obj_t BgL_oz00_4722, obj_t BgL_vz00_4723)
	{
		{	/* Cgen/cop.scm 79 */
			return
				((((BgL_cfuncallz00_bglt) COBJECT(
							((BgL_cfuncallz00_bglt) BgL_oz00_4722)))->BgL_argsz00) =
				((obj_t) BgL_vz00_4723), BUNSPEC);
		}

	}



/* &lambda2078 */
	obj_t BGl_z62lambda2078z62zzcgen_copz00(obj_t BgL_envz00_4724,
		obj_t BgL_oz00_4725)
	{
		{	/* Cgen/cop.scm 79 */
			return
				(((BgL_cfuncallz00_bglt) COBJECT(
						((BgL_cfuncallz00_bglt) BgL_oz00_4725)))->BgL_argsz00);
		}

	}



/* &lambda2074 */
	obj_t BGl_z62lambda2074z62zzcgen_copz00(obj_t BgL_envz00_4726,
		obj_t BgL_oz00_4727, obj_t BgL_vz00_4728)
	{
		{	/* Cgen/cop.scm 79 */
			return
				((((BgL_cfuncallz00_bglt) COBJECT(
							((BgL_cfuncallz00_bglt) BgL_oz00_4727)))->BgL_funz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4728)), BUNSPEC);
		}

	}



/* &lambda2073 */
	BgL_copz00_bglt BGl_z62lambda2073z62zzcgen_copz00(obj_t BgL_envz00_4729,
		obj_t BgL_oz00_4730)
	{
		{	/* Cgen/cop.scm 79 */
			return
				(((BgL_cfuncallz00_bglt) COBJECT(
						((BgL_cfuncallz00_bglt) BgL_oz00_4730)))->BgL_funz00);
		}

	}



/* &<@anonymous:2052> */
	obj_t BGl_z62zc3z04anonymousza32052ze3ze5zzcgen_copz00(obj_t BgL_envz00_4731,
		obj_t BgL_new1190z00_4732)
	{
		{	/* Cgen/cop.scm 76 */
			{
				BgL_localzd2varzd2_bglt BgL_auxz00_7827;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_localzd2varzd2_bglt) BgL_new1190z00_4732))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_localzd2varzd2_bglt) COBJECT(((BgL_localzd2varzd2_bglt)
									BgL_new1190z00_4732)))->BgL_varsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_7827 = ((BgL_localzd2varzd2_bglt) BgL_new1190z00_4732);
				return ((obj_t) BgL_auxz00_7827);
			}
		}

	}



/* &lambda2050 */
	BgL_localzd2varzd2_bglt BGl_z62lambda2050z62zzcgen_copz00(obj_t
		BgL_envz00_4733)
	{
		{	/* Cgen/cop.scm 76 */
			{	/* Cgen/cop.scm 76 */
				BgL_localzd2varzd2_bglt BgL_new1189z00_5326;

				BgL_new1189z00_5326 =
					((BgL_localzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzd2varzd2_bgl))));
				{	/* Cgen/cop.scm 76 */
					long BgL_arg2051z00_5327;

					{	/* Cgen/cop.scm 76 */
						long BgL_res2443z00_5328;

						BgL_res2443z00_5328 =
							BGL_CLASS_INDEX(BGl_localzd2varzd2zzcgen_copz00);
						BgL_arg2051z00_5327 = BgL_res2443z00_5328;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1189z00_5326), BgL_arg2051z00_5327);
				}
				return BgL_new1189z00_5326;
			}
		}

	}



/* &lambda2048 */
	BgL_localzd2varzd2_bglt BGl_z62lambda2048z62zzcgen_copz00(obj_t
		BgL_envz00_4734, obj_t BgL_loc1187z00_4735, obj_t BgL_vars1188z00_4736)
	{
		{	/* Cgen/cop.scm 76 */
			{	/* Cgen/cop.scm 76 */
				BgL_localzd2varzd2_bglt BgL_new1385z00_5329;

				{	/* Cgen/cop.scm 76 */
					BgL_localzd2varzd2_bglt BgL_new1384z00_5330;

					BgL_new1384z00_5330 =
						((BgL_localzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_localzd2varzd2_bgl))));
					{	/* Cgen/cop.scm 76 */
						long BgL_arg2049z00_5331;

						{	/* Cgen/cop.scm 76 */
							long BgL_res2442z00_5332;

							BgL_res2442z00_5332 =
								BGL_CLASS_INDEX(BGl_localzd2varzd2zzcgen_copz00);
							BgL_arg2049z00_5331 = BgL_res2442z00_5332;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1384z00_5330), BgL_arg2049z00_5331);
					}
					BgL_new1385z00_5329 = BgL_new1384z00_5330;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1385z00_5329)))->BgL_locz00) =
					((obj_t) BgL_loc1187z00_4735), BUNSPEC);
				((((BgL_localzd2varzd2_bglt) COBJECT(BgL_new1385z00_5329))->
						BgL_varsz00) = ((obj_t) BgL_vars1188z00_4736), BUNSPEC);
				return BgL_new1385z00_5329;
			}
		}

	}



/* &lambda2058 */
	obj_t BGl_z62lambda2058z62zzcgen_copz00(obj_t BgL_envz00_4737,
		obj_t BgL_oz00_4738, obj_t BgL_vz00_4739)
	{
		{	/* Cgen/cop.scm 76 */
			return
				((((BgL_localzd2varzd2_bglt) COBJECT(
							((BgL_localzd2varzd2_bglt) BgL_oz00_4738)))->BgL_varsz00) =
				((obj_t) BgL_vz00_4739), BUNSPEC);
		}

	}



/* &lambda2057 */
	obj_t BGl_z62lambda2057z62zzcgen_copz00(obj_t BgL_envz00_4740,
		obj_t BgL_oz00_4741)
	{
		{	/* Cgen/cop.scm 76 */
			return
				(((BgL_localzd2varzd2_bglt) COBJECT(
						((BgL_localzd2varzd2_bglt) BgL_oz00_4741)))->BgL_varsz00);
		}

	}



/* &<@anonymous:2023> */
	obj_t BGl_z62zc3z04anonymousza32023ze3ze5zzcgen_copz00(obj_t BgL_envz00_4742,
		obj_t BgL_new1185z00_4743)
	{
		{	/* Cgen/cop.scm 71 */
			{
				BgL_cifz00_bglt BgL_auxz00_7850;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cifz00_bglt) BgL_new1185z00_4743))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7854;

					{	/* Cgen/cop.scm 71 */
						obj_t BgL_classz00_5336;

						BgL_classz00_5336 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 71 */
							obj_t BgL__ortest_1106z00_5337;

							BgL__ortest_1106z00_5337 = BGL_CLASS_NIL(BgL_classz00_5336);
							if (CBOOL(BgL__ortest_1106z00_5337))
								{	/* Cgen/cop.scm 71 */
									BgL_auxz00_7854 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5337);
								}
							else
								{	/* Cgen/cop.scm 71 */
									BgL_auxz00_7854 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5336));
								}
						}
					}
					((((BgL_cifz00_bglt) COBJECT(
									((BgL_cifz00_bglt) BgL_new1185z00_4743)))->BgL_testz00) =
						((BgL_copz00_bglt) BgL_auxz00_7854), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7863;

					{	/* Cgen/cop.scm 71 */
						obj_t BgL_classz00_5338;

						BgL_classz00_5338 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 71 */
							obj_t BgL__ortest_1106z00_5339;

							BgL__ortest_1106z00_5339 = BGL_CLASS_NIL(BgL_classz00_5338);
							if (CBOOL(BgL__ortest_1106z00_5339))
								{	/* Cgen/cop.scm 71 */
									BgL_auxz00_7863 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5339);
								}
							else
								{	/* Cgen/cop.scm 71 */
									BgL_auxz00_7863 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5338));
								}
						}
					}
					((((BgL_cifz00_bglt) COBJECT(
									((BgL_cifz00_bglt) BgL_new1185z00_4743)))->BgL_truez00) =
						((BgL_copz00_bglt) BgL_auxz00_7863), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7872;

					{	/* Cgen/cop.scm 71 */
						obj_t BgL_classz00_5340;

						BgL_classz00_5340 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 71 */
							obj_t BgL__ortest_1106z00_5341;

							BgL__ortest_1106z00_5341 = BGL_CLASS_NIL(BgL_classz00_5340);
							if (CBOOL(BgL__ortest_1106z00_5341))
								{	/* Cgen/cop.scm 71 */
									BgL_auxz00_7872 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5341);
								}
							else
								{	/* Cgen/cop.scm 71 */
									BgL_auxz00_7872 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5340));
								}
						}
					}
					((((BgL_cifz00_bglt) COBJECT(
									((BgL_cifz00_bglt) BgL_new1185z00_4743)))->BgL_falsez00) =
						((BgL_copz00_bglt) BgL_auxz00_7872), BUNSPEC);
				}
				BgL_auxz00_7850 = ((BgL_cifz00_bglt) BgL_new1185z00_4743);
				return ((obj_t) BgL_auxz00_7850);
			}
		}

	}



/* &lambda2021 */
	BgL_cifz00_bglt BGl_z62lambda2021z62zzcgen_copz00(obj_t BgL_envz00_4744)
	{
		{	/* Cgen/cop.scm 71 */
			{	/* Cgen/cop.scm 71 */
				BgL_cifz00_bglt BgL_new1184z00_5342;

				BgL_new1184z00_5342 =
					((BgL_cifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_cifz00_bgl))));
				{	/* Cgen/cop.scm 71 */
					long BgL_arg2022z00_5343;

					{	/* Cgen/cop.scm 71 */
						long BgL_res2441z00_5344;

						BgL_res2441z00_5344 = BGL_CLASS_INDEX(BGl_cifz00zzcgen_copz00);
						BgL_arg2022z00_5343 = BgL_res2441z00_5344;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1184z00_5342), BgL_arg2022z00_5343);
				}
				return BgL_new1184z00_5342;
			}
		}

	}



/* &lambda2019 */
	BgL_cifz00_bglt BGl_z62lambda2019z62zzcgen_copz00(obj_t BgL_envz00_4745,
		obj_t BgL_loc1180z00_4746, obj_t BgL_test1181z00_4747,
		obj_t BgL_true1182z00_4748, obj_t BgL_false1183z00_4749)
	{
		{	/* Cgen/cop.scm 71 */
			{	/* Cgen/cop.scm 71 */
				BgL_cifz00_bglt BgL_new1383z00_5348;

				{	/* Cgen/cop.scm 71 */
					BgL_cifz00_bglt BgL_new1382z00_5349;

					BgL_new1382z00_5349 =
						((BgL_cifz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cifz00_bgl))));
					{	/* Cgen/cop.scm 71 */
						long BgL_arg2020z00_5350;

						{	/* Cgen/cop.scm 71 */
							long BgL_res2440z00_5351;

							BgL_res2440z00_5351 = BGL_CLASS_INDEX(BGl_cifz00zzcgen_copz00);
							BgL_arg2020z00_5350 = BgL_res2440z00_5351;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1382z00_5349), BgL_arg2020z00_5350);
					}
					BgL_new1383z00_5348 = BgL_new1382z00_5349;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1383z00_5348)))->BgL_locz00) =
					((obj_t) BgL_loc1180z00_4746), BUNSPEC);
				((((BgL_cifz00_bglt) COBJECT(BgL_new1383z00_5348))->BgL_testz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_test1181z00_4747)),
					BUNSPEC);
				((((BgL_cifz00_bglt) COBJECT(BgL_new1383z00_5348))->BgL_truez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_true1182z00_4748)),
					BUNSPEC);
				((((BgL_cifz00_bglt) COBJECT(BgL_new1383z00_5348))->BgL_falsez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_false1183z00_4749)),
					BUNSPEC);
				return BgL_new1383z00_5348;
			}
		}

	}



/* &lambda2042 */
	obj_t BGl_z62lambda2042z62zzcgen_copz00(obj_t BgL_envz00_4750,
		obj_t BgL_oz00_4751, obj_t BgL_vz00_4752)
	{
		{	/* Cgen/cop.scm 71 */
			return
				((((BgL_cifz00_bglt) COBJECT(
							((BgL_cifz00_bglt) BgL_oz00_4751)))->BgL_falsez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4752)), BUNSPEC);
		}

	}



/* &lambda2041 */
	BgL_copz00_bglt BGl_z62lambda2041z62zzcgen_copz00(obj_t BgL_envz00_4753,
		obj_t BgL_oz00_4754)
	{
		{	/* Cgen/cop.scm 71 */
			return
				(((BgL_cifz00_bglt) COBJECT(
						((BgL_cifz00_bglt) BgL_oz00_4754)))->BgL_falsez00);
		}

	}



/* &lambda2037 */
	obj_t BGl_z62lambda2037z62zzcgen_copz00(obj_t BgL_envz00_4755,
		obj_t BgL_oz00_4756, obj_t BgL_vz00_4757)
	{
		{	/* Cgen/cop.scm 71 */
			return
				((((BgL_cifz00_bglt) COBJECT(
							((BgL_cifz00_bglt) BgL_oz00_4756)))->BgL_truez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4757)), BUNSPEC);
		}

	}



/* &lambda2036 */
	BgL_copz00_bglt BGl_z62lambda2036z62zzcgen_copz00(obj_t BgL_envz00_4758,
		obj_t BgL_oz00_4759)
	{
		{	/* Cgen/cop.scm 71 */
			return
				(((BgL_cifz00_bglt) COBJECT(
						((BgL_cifz00_bglt) BgL_oz00_4759)))->BgL_truez00);
		}

	}



/* &lambda2031 */
	obj_t BGl_z62lambda2031z62zzcgen_copz00(obj_t BgL_envz00_4760,
		obj_t BgL_oz00_4761, obj_t BgL_vz00_4762)
	{
		{	/* Cgen/cop.scm 71 */
			return
				((((BgL_cifz00_bglt) COBJECT(
							((BgL_cifz00_bglt) BgL_oz00_4761)))->BgL_testz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4762)), BUNSPEC);
		}

	}



/* &lambda2030 */
	BgL_copz00_bglt BGl_z62lambda2030z62zzcgen_copz00(obj_t BgL_envz00_4763,
		obj_t BgL_oz00_4764)
	{
		{	/* Cgen/cop.scm 71 */
			return
				(((BgL_cifz00_bglt) COBJECT(
						((BgL_cifz00_bglt) BgL_oz00_4764)))->BgL_testz00);
		}

	}



/* &<@anonymous:2001> */
	obj_t BGl_z62zc3z04anonymousza32001ze3ze5zzcgen_copz00(obj_t BgL_envz00_4765,
		obj_t BgL_new1178z00_4766)
	{
		{	/* Cgen/cop.scm 67 */
			{
				BgL_csetqz00_bglt BgL_auxz00_7914;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_csetqz00_bglt) BgL_new1178z00_4766))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varcz00_bglt BgL_auxz00_7918;

					{	/* Cgen/cop.scm 67 */
						obj_t BgL_classz00_5362;

						BgL_classz00_5362 = BGl_varcz00zzcgen_copz00;
						{	/* Cgen/cop.scm 67 */
							obj_t BgL__ortest_1106z00_5363;

							BgL__ortest_1106z00_5363 = BGL_CLASS_NIL(BgL_classz00_5362);
							if (CBOOL(BgL__ortest_1106z00_5363))
								{	/* Cgen/cop.scm 67 */
									BgL_auxz00_7918 =
										((BgL_varcz00_bglt) BgL__ortest_1106z00_5363);
								}
							else
								{	/* Cgen/cop.scm 67 */
									BgL_auxz00_7918 =
										((BgL_varcz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5362));
								}
						}
					}
					((((BgL_csetqz00_bglt) COBJECT(
									((BgL_csetqz00_bglt) BgL_new1178z00_4766)))->BgL_varz00) =
						((BgL_varcz00_bglt) BgL_auxz00_7918), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_7927;

					{	/* Cgen/cop.scm 67 */
						obj_t BgL_classz00_5364;

						BgL_classz00_5364 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 67 */
							obj_t BgL__ortest_1106z00_5365;

							BgL__ortest_1106z00_5365 = BGL_CLASS_NIL(BgL_classz00_5364);
							if (CBOOL(BgL__ortest_1106z00_5365))
								{	/* Cgen/cop.scm 67 */
									BgL_auxz00_7927 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5365);
								}
							else
								{	/* Cgen/cop.scm 67 */
									BgL_auxz00_7927 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5364));
								}
						}
					}
					((((BgL_csetqz00_bglt) COBJECT(
									((BgL_csetqz00_bglt) BgL_new1178z00_4766)))->BgL_valuez00) =
						((BgL_copz00_bglt) BgL_auxz00_7927), BUNSPEC);
				}
				BgL_auxz00_7914 = ((BgL_csetqz00_bglt) BgL_new1178z00_4766);
				return ((obj_t) BgL_auxz00_7914);
			}
		}

	}



/* &lambda1999 */
	BgL_csetqz00_bglt BGl_z62lambda1999z62zzcgen_copz00(obj_t BgL_envz00_4767)
	{
		{	/* Cgen/cop.scm 67 */
			{	/* Cgen/cop.scm 67 */
				BgL_csetqz00_bglt BgL_new1177z00_5366;

				BgL_new1177z00_5366 =
					((BgL_csetqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_csetqz00_bgl))));
				{	/* Cgen/cop.scm 67 */
					long BgL_arg2000z00_5367;

					{	/* Cgen/cop.scm 67 */
						long BgL_res2439z00_5368;

						BgL_res2439z00_5368 = BGL_CLASS_INDEX(BGl_csetqz00zzcgen_copz00);
						BgL_arg2000z00_5367 = BgL_res2439z00_5368;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1177z00_5366), BgL_arg2000z00_5367);
				}
				return BgL_new1177z00_5366;
			}
		}

	}



/* &lambda1997 */
	BgL_csetqz00_bglt BGl_z62lambda1997z62zzcgen_copz00(obj_t BgL_envz00_4768,
		obj_t BgL_loc1174z00_4769, obj_t BgL_var1175z00_4770,
		obj_t BgL_value1176z00_4771)
	{
		{	/* Cgen/cop.scm 67 */
			{	/* Cgen/cop.scm 67 */
				BgL_csetqz00_bglt BgL_new1381z00_5371;

				{	/* Cgen/cop.scm 67 */
					BgL_csetqz00_bglt BgL_new1380z00_5372;

					BgL_new1380z00_5372 =
						((BgL_csetqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_csetqz00_bgl))));
					{	/* Cgen/cop.scm 67 */
						long BgL_arg1998z00_5373;

						{	/* Cgen/cop.scm 67 */
							long BgL_res2438z00_5374;

							BgL_res2438z00_5374 = BGL_CLASS_INDEX(BGl_csetqz00zzcgen_copz00);
							BgL_arg1998z00_5373 = BgL_res2438z00_5374;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1380z00_5372), BgL_arg1998z00_5373);
					}
					BgL_new1381z00_5371 = BgL_new1380z00_5372;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1381z00_5371)))->BgL_locz00) =
					((obj_t) BgL_loc1174z00_4769), BUNSPEC);
				((((BgL_csetqz00_bglt) COBJECT(BgL_new1381z00_5371))->BgL_varz00) =
					((BgL_varcz00_bglt) ((BgL_varcz00_bglt) BgL_var1175z00_4770)),
					BUNSPEC);
				((((BgL_csetqz00_bglt) COBJECT(BgL_new1381z00_5371))->BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_value1176z00_4771)),
					BUNSPEC);
				return BgL_new1381z00_5371;
			}
		}

	}



/* &lambda2012 */
	obj_t BGl_z62lambda2012z62zzcgen_copz00(obj_t BgL_envz00_4772,
		obj_t BgL_oz00_4773, obj_t BgL_vz00_4774)
	{
		{	/* Cgen/cop.scm 67 */
			return
				((((BgL_csetqz00_bglt) COBJECT(
							((BgL_csetqz00_bglt) BgL_oz00_4773)))->BgL_valuez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4774)), BUNSPEC);
		}

	}



/* &lambda2011 */
	BgL_copz00_bglt BGl_z62lambda2011z62zzcgen_copz00(obj_t BgL_envz00_4775,
		obj_t BgL_oz00_4776)
	{
		{	/* Cgen/cop.scm 67 */
			return
				(((BgL_csetqz00_bglt) COBJECT(
						((BgL_csetqz00_bglt) BgL_oz00_4776)))->BgL_valuez00);
		}

	}



/* &lambda2006 */
	obj_t BGl_z62lambda2006z62zzcgen_copz00(obj_t BgL_envz00_4777,
		obj_t BgL_oz00_4778, obj_t BgL_vz00_4779)
	{
		{	/* Cgen/cop.scm 67 */
			return
				((((BgL_csetqz00_bglt) COBJECT(
							((BgL_csetqz00_bglt) BgL_oz00_4778)))->BgL_varz00) =
				((BgL_varcz00_bglt) ((BgL_varcz00_bglt) BgL_vz00_4779)), BUNSPEC);
		}

	}



/* &lambda2005 */
	BgL_varcz00_bglt BGl_z62lambda2005z62zzcgen_copz00(obj_t BgL_envz00_4780,
		obj_t BgL_oz00_4781)
	{
		{	/* Cgen/cop.scm 67 */
			return
				(((BgL_csetqz00_bglt) COBJECT(
						((BgL_csetqz00_bglt) BgL_oz00_4781)))->BgL_varz00);
		}

	}



/* &<@anonymous:1985> */
	obj_t BGl_z62zc3z04anonymousza31985ze3ze5zzcgen_copz00(obj_t BgL_envz00_4782,
		obj_t BgL_new1172z00_4783)
	{
		{	/* Cgen/cop.scm 64 */
			{
				BgL_stopz00_bglt BgL_auxz00_7962;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_stopz00_bglt) BgL_new1172z00_4783))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_7966;

					{	/* Cgen/cop.scm 64 */
						obj_t BgL_classz00_5382;

						BgL_classz00_5382 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 64 */
							obj_t BgL__ortest_1106z00_5383;

							BgL__ortest_1106z00_5383 = BGL_CLASS_NIL(BgL_classz00_5382);
							if (CBOOL(BgL__ortest_1106z00_5383))
								{	/* Cgen/cop.scm 64 */
									BgL_auxz00_7966 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5383);
								}
							else
								{	/* Cgen/cop.scm 64 */
									BgL_auxz00_7966 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5382));
								}
						}
					}
					((((BgL_stopz00_bglt) COBJECT(
									((BgL_stopz00_bglt) BgL_new1172z00_4783)))->BgL_valuez00) =
						((BgL_copz00_bglt) BgL_auxz00_7966), BUNSPEC);
				}
				BgL_auxz00_7962 = ((BgL_stopz00_bglt) BgL_new1172z00_4783);
				return ((obj_t) BgL_auxz00_7962);
			}
		}

	}



/* &lambda1983 */
	BgL_stopz00_bglt BGl_z62lambda1983z62zzcgen_copz00(obj_t BgL_envz00_4784)
	{
		{	/* Cgen/cop.scm 64 */
			{	/* Cgen/cop.scm 64 */
				BgL_stopz00_bglt BgL_new1171z00_5384;

				BgL_new1171z00_5384 =
					((BgL_stopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_stopz00_bgl))));
				{	/* Cgen/cop.scm 64 */
					long BgL_arg1984z00_5385;

					{	/* Cgen/cop.scm 64 */
						long BgL_res2437z00_5386;

						BgL_res2437z00_5386 = BGL_CLASS_INDEX(BGl_stopz00zzcgen_copz00);
						BgL_arg1984z00_5385 = BgL_res2437z00_5386;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1171z00_5384), BgL_arg1984z00_5385);
				}
				return BgL_new1171z00_5384;
			}
		}

	}



/* &lambda1981 */
	BgL_stopz00_bglt BGl_z62lambda1981z62zzcgen_copz00(obj_t BgL_envz00_4785,
		obj_t BgL_loc1169z00_4786, obj_t BgL_value1170z00_4787)
	{
		{	/* Cgen/cop.scm 64 */
			{	/* Cgen/cop.scm 64 */
				BgL_stopz00_bglt BgL_new1379z00_5388;

				{	/* Cgen/cop.scm 64 */
					BgL_stopz00_bglt BgL_new1378z00_5389;

					BgL_new1378z00_5389 =
						((BgL_stopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_stopz00_bgl))));
					{	/* Cgen/cop.scm 64 */
						long BgL_arg1982z00_5390;

						{	/* Cgen/cop.scm 64 */
							long BgL_res2436z00_5391;

							BgL_res2436z00_5391 = BGL_CLASS_INDEX(BGl_stopz00zzcgen_copz00);
							BgL_arg1982z00_5390 = BgL_res2436z00_5391;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1378z00_5389), BgL_arg1982z00_5390);
					}
					BgL_new1379z00_5388 = BgL_new1378z00_5389;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1379z00_5388)))->BgL_locz00) =
					((obj_t) BgL_loc1169z00_4786), BUNSPEC);
				((((BgL_stopz00_bglt) COBJECT(BgL_new1379z00_5388))->BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_value1170z00_4787)),
					BUNSPEC);
				return BgL_new1379z00_5388;
			}
		}

	}



/* &lambda1990 */
	obj_t BGl_z62lambda1990z62zzcgen_copz00(obj_t BgL_envz00_4788,
		obj_t BgL_oz00_4789, obj_t BgL_vz00_4790)
	{
		{	/* Cgen/cop.scm 64 */
			return
				((((BgL_stopz00_bglt) COBJECT(
							((BgL_stopz00_bglt) BgL_oz00_4789)))->BgL_valuez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4790)), BUNSPEC);
		}

	}



/* &lambda1989 */
	BgL_copz00_bglt BGl_z62lambda1989z62zzcgen_copz00(obj_t BgL_envz00_4791,
		obj_t BgL_oz00_4792)
	{
		{	/* Cgen/cop.scm 64 */
			return
				(((BgL_stopz00_bglt) COBJECT(
						((BgL_stopz00_bglt) BgL_oz00_4792)))->BgL_valuez00);
		}

	}



/* &<@anonymous:1974> */
	obj_t BGl_z62zc3z04anonymousza31974ze3ze5zzcgen_copz00(obj_t BgL_envz00_4793,
		obj_t BgL_new1167z00_4794)
	{
		{	/* Cgen/cop.scm 62 */
			{
				BgL_nopz00_bglt BgL_auxz00_7994;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_nopz00_bglt) BgL_new1167z00_4794))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_7994 = ((BgL_nopz00_bglt) BgL_new1167z00_4794);
				return ((obj_t) BgL_auxz00_7994);
			}
		}

	}



/* &lambda1972 */
	BgL_nopz00_bglt BGl_z62lambda1972z62zzcgen_copz00(obj_t BgL_envz00_4795)
	{
		{	/* Cgen/cop.scm 62 */
			{	/* Cgen/cop.scm 62 */
				BgL_nopz00_bglt BgL_new1166z00_5396;

				BgL_new1166z00_5396 =
					((BgL_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_nopz00_bgl))));
				{	/* Cgen/cop.scm 62 */
					long BgL_arg1973z00_5397;

					{	/* Cgen/cop.scm 62 */
						long BgL_res2435z00_5398;

						BgL_res2435z00_5398 = BGL_CLASS_INDEX(BGl_nopz00zzcgen_copz00);
						BgL_arg1973z00_5397 = BgL_res2435z00_5398;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1166z00_5396), BgL_arg1973z00_5397);
				}
				return BgL_new1166z00_5396;
			}
		}

	}



/* &lambda1970 */
	BgL_nopz00_bglt BGl_z62lambda1970z62zzcgen_copz00(obj_t BgL_envz00_4796,
		obj_t BgL_loc1165z00_4797)
	{
		{	/* Cgen/cop.scm 62 */
			{	/* Cgen/cop.scm 62 */
				BgL_nopz00_bglt BgL_new1377z00_5399;

				{	/* Cgen/cop.scm 62 */
					BgL_nopz00_bglt BgL_new1376z00_5400;

					BgL_new1376z00_5400 =
						((BgL_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_nopz00_bgl))));
					{	/* Cgen/cop.scm 62 */
						long BgL_arg1971z00_5401;

						{	/* Cgen/cop.scm 62 */
							long BgL_res2434z00_5402;

							BgL_res2434z00_5402 = BGL_CLASS_INDEX(BGl_nopz00zzcgen_copz00);
							BgL_arg1971z00_5401 = BgL_res2434z00_5402;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1376z00_5400), BgL_arg1971z00_5401);
					}
					BgL_new1377z00_5399 = BgL_new1376z00_5400;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1377z00_5399)))->BgL_locz00) =
					((obj_t) BgL_loc1165z00_4797), BUNSPEC);
				return BgL_new1377z00_5399;
			}
		}

	}



/* &<@anonymous:1952> */
	obj_t BGl_z62zc3z04anonymousza31952ze3ze5zzcgen_copz00(obj_t BgL_envz00_4798,
		obj_t BgL_new1163z00_4799)
	{
		{	/* Cgen/cop.scm 58 */
			{
				BgL_csequencez00_bglt BgL_auxz00_8010;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_csequencez00_bglt) BgL_new1163z00_4799))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_csequencez00_bglt) COBJECT(((BgL_csequencez00_bglt)
									BgL_new1163z00_4799)))->BgL_czd2expzf3z21) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_csequencez00_bglt) COBJECT(((BgL_csequencez00_bglt)
									BgL_new1163z00_4799)))->BgL_copsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8010 = ((BgL_csequencez00_bglt) BgL_new1163z00_4799);
				return ((obj_t) BgL_auxz00_8010);
			}
		}

	}



/* &lambda1949 */
	BgL_csequencez00_bglt BGl_z62lambda1949z62zzcgen_copz00(obj_t BgL_envz00_4800)
	{
		{	/* Cgen/cop.scm 58 */
			{	/* Cgen/cop.scm 58 */
				BgL_csequencez00_bglt BgL_new1162z00_5404;

				BgL_new1162z00_5404 =
					((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_csequencez00_bgl))));
				{	/* Cgen/cop.scm 58 */
					long BgL_arg1951z00_5405;

					{	/* Cgen/cop.scm 58 */
						long BgL_res2433z00_5406;

						BgL_res2433z00_5406 =
							BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
						BgL_arg1951z00_5405 = BgL_res2433z00_5406;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1162z00_5404), BgL_arg1951z00_5405);
				}
				return BgL_new1162z00_5404;
			}
		}

	}



/* &lambda1947 */
	BgL_csequencez00_bglt BGl_z62lambda1947z62zzcgen_copz00(obj_t BgL_envz00_4801,
		obj_t BgL_loc1159z00_4802, obj_t BgL_czd2expzf31160z21_4803,
		obj_t BgL_cops1161z00_4804)
	{
		{	/* Cgen/cop.scm 58 */
			{	/* Cgen/cop.scm 58 */
				bool_t BgL_czd2expzf31160z21_5407;

				BgL_czd2expzf31160z21_5407 = CBOOL(BgL_czd2expzf31160z21_4803);
				{	/* Cgen/cop.scm 58 */
					BgL_csequencez00_bglt BgL_new1375z00_5408;

					{	/* Cgen/cop.scm 58 */
						BgL_csequencez00_bglt BgL_new1374z00_5409;

						BgL_new1374z00_5409 =
							((BgL_csequencez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_csequencez00_bgl))));
						{	/* Cgen/cop.scm 58 */
							long BgL_arg1948z00_5410;

							{	/* Cgen/cop.scm 58 */
								long BgL_res2432z00_5411;

								BgL_res2432z00_5411 =
									BGL_CLASS_INDEX(BGl_csequencez00zzcgen_copz00);
								BgL_arg1948z00_5410 = BgL_res2432z00_5411;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1374z00_5409),
								BgL_arg1948z00_5410);
						}
						BgL_new1375z00_5408 = BgL_new1374z00_5409;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1375z00_5408)))->BgL_locz00) =
						((obj_t) BgL_loc1159z00_4802), BUNSPEC);
					((((BgL_csequencez00_bglt) COBJECT(BgL_new1375z00_5408))->
							BgL_czd2expzf3z21) =
						((bool_t) BgL_czd2expzf31160z21_5407), BUNSPEC);
					((((BgL_csequencez00_bglt) COBJECT(BgL_new1375z00_5408))->
							BgL_copsz00) = ((obj_t) BgL_cops1161z00_4804), BUNSPEC);
					return BgL_new1375z00_5408;
				}
			}
		}

	}



/* &lambda1964 */
	obj_t BGl_z62lambda1964z62zzcgen_copz00(obj_t BgL_envz00_4805,
		obj_t BgL_oz00_4806, obj_t BgL_vz00_4807)
	{
		{	/* Cgen/cop.scm 58 */
			return
				((((BgL_csequencez00_bglt) COBJECT(
							((BgL_csequencez00_bglt) BgL_oz00_4806)))->BgL_copsz00) =
				((obj_t) BgL_vz00_4807), BUNSPEC);
		}

	}



/* &lambda1963 */
	obj_t BGl_z62lambda1963z62zzcgen_copz00(obj_t BgL_envz00_4808,
		obj_t BgL_oz00_4809)
	{
		{	/* Cgen/cop.scm 58 */
			return
				(((BgL_csequencez00_bglt) COBJECT(
						((BgL_csequencez00_bglt) BgL_oz00_4809)))->BgL_copsz00);
		}

	}



/* &<@anonymous:1959> */
	obj_t BGl_z62zc3z04anonymousza31959ze3ze5zzcgen_copz00(obj_t BgL_envz00_4810)
	{
		{	/* Cgen/cop.scm 58 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1958 */
	obj_t BGl_z62lambda1958z62zzcgen_copz00(obj_t BgL_envz00_4811,
		obj_t BgL_oz00_4812, obj_t BgL_vz00_4813)
	{
		{	/* Cgen/cop.scm 58 */
			{	/* Cgen/cop.scm 58 */
				bool_t BgL_vz00_5415;

				BgL_vz00_5415 = CBOOL(BgL_vz00_4813);
				return
					((((BgL_csequencez00_bglt) COBJECT(
								((BgL_csequencez00_bglt) BgL_oz00_4812)))->BgL_czd2expzf3z21) =
					((bool_t) BgL_vz00_5415), BUNSPEC);
			}
		}

	}



/* &lambda1957 */
	obj_t BGl_z62lambda1957z62zzcgen_copz00(obj_t BgL_envz00_4814,
		obj_t BgL_oz00_4815)
	{
		{	/* Cgen/cop.scm 58 */
			return
				BBOOL(
				(((BgL_csequencez00_bglt) COBJECT(
							((BgL_csequencez00_bglt) BgL_oz00_4815)))->BgL_czd2expzf3z21));
		}

	}



/* &<@anonymous:1931> */
	obj_t BGl_z62zc3z04anonymousza31931ze3ze5zzcgen_copz00(obj_t BgL_envz00_4816,
		obj_t BgL_new1157z00_4817)
	{
		{	/* Cgen/cop.scm 54 */
			{
				BgL_ccastz00_bglt BgL_auxz00_8044;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_ccastz00_bglt) BgL_new1157z00_4817))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_8048;

					{	/* Cgen/cop.scm 54 */
						obj_t BgL_classz00_5418;

						BgL_classz00_5418 = BGl_typez00zztype_typez00;
						{	/* Cgen/cop.scm 54 */
							obj_t BgL__ortest_1106z00_5419;

							BgL__ortest_1106z00_5419 = BGL_CLASS_NIL(BgL_classz00_5418);
							if (CBOOL(BgL__ortest_1106z00_5419))
								{	/* Cgen/cop.scm 54 */
									BgL_auxz00_8048 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5419);
								}
							else
								{	/* Cgen/cop.scm 54 */
									BgL_auxz00_8048 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5418));
								}
						}
					}
					((((BgL_ccastz00_bglt) COBJECT(
									((BgL_ccastz00_bglt) BgL_new1157z00_4817)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_8048), BUNSPEC);
				}
				{
					BgL_copz00_bglt BgL_auxz00_8057;

					{	/* Cgen/cop.scm 54 */
						obj_t BgL_classz00_5420;

						BgL_classz00_5420 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 54 */
							obj_t BgL__ortest_1106z00_5421;

							BgL__ortest_1106z00_5421 = BGL_CLASS_NIL(BgL_classz00_5420);
							if (CBOOL(BgL__ortest_1106z00_5421))
								{	/* Cgen/cop.scm 54 */
									BgL_auxz00_8057 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5421);
								}
							else
								{	/* Cgen/cop.scm 54 */
									BgL_auxz00_8057 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5420));
								}
						}
					}
					((((BgL_ccastz00_bglt) COBJECT(
									((BgL_ccastz00_bglt) BgL_new1157z00_4817)))->BgL_argz00) =
						((BgL_copz00_bglt) BgL_auxz00_8057), BUNSPEC);
				}
				BgL_auxz00_8044 = ((BgL_ccastz00_bglt) BgL_new1157z00_4817);
				return ((obj_t) BgL_auxz00_8044);
			}
		}

	}



/* &lambda1929 */
	BgL_ccastz00_bglt BGl_z62lambda1929z62zzcgen_copz00(obj_t BgL_envz00_4818)
	{
		{	/* Cgen/cop.scm 54 */
			{	/* Cgen/cop.scm 54 */
				BgL_ccastz00_bglt BgL_new1156z00_5422;

				BgL_new1156z00_5422 =
					((BgL_ccastz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ccastz00_bgl))));
				{	/* Cgen/cop.scm 54 */
					long BgL_arg1930z00_5423;

					{	/* Cgen/cop.scm 54 */
						long BgL_res2431z00_5424;

						BgL_res2431z00_5424 = BGL_CLASS_INDEX(BGl_ccastz00zzcgen_copz00);
						BgL_arg1930z00_5423 = BgL_res2431z00_5424;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1156z00_5422), BgL_arg1930z00_5423);
				}
				return BgL_new1156z00_5422;
			}
		}

	}



/* &lambda1927 */
	BgL_ccastz00_bglt BGl_z62lambda1927z62zzcgen_copz00(obj_t BgL_envz00_4819,
		obj_t BgL_loc1149z00_4820, obj_t BgL_type1150z00_4821,
		obj_t BgL_arg1155z00_4822)
	{
		{	/* Cgen/cop.scm 54 */
			{	/* Cgen/cop.scm 54 */
				BgL_ccastz00_bglt BgL_new1373z00_5427;

				{	/* Cgen/cop.scm 54 */
					BgL_ccastz00_bglt BgL_new1372z00_5428;

					BgL_new1372z00_5428 =
						((BgL_ccastz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccastz00_bgl))));
					{	/* Cgen/cop.scm 54 */
						long BgL_arg1928z00_5429;

						{	/* Cgen/cop.scm 54 */
							long BgL_res2430z00_5430;

							BgL_res2430z00_5430 = BGL_CLASS_INDEX(BGl_ccastz00zzcgen_copz00);
							BgL_arg1928z00_5429 = BgL_res2430z00_5430;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1372z00_5428), BgL_arg1928z00_5429);
					}
					BgL_new1373z00_5427 = BgL_new1372z00_5428;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1373z00_5427)))->BgL_locz00) =
					((obj_t) BgL_loc1149z00_4820), BUNSPEC);
				((((BgL_ccastz00_bglt) COBJECT(BgL_new1373z00_5427))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1150z00_4821)),
					BUNSPEC);
				((((BgL_ccastz00_bglt) COBJECT(BgL_new1373z00_5427))->BgL_argz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_arg1155z00_4822)), BUNSPEC);
				return BgL_new1373z00_5427;
			}
		}

	}



/* &lambda1941 */
	obj_t BGl_z62lambda1941z62zzcgen_copz00(obj_t BgL_envz00_4823,
		obj_t BgL_oz00_4824, obj_t BgL_vz00_4825)
	{
		{	/* Cgen/cop.scm 54 */
			return
				((((BgL_ccastz00_bglt) COBJECT(
							((BgL_ccastz00_bglt) BgL_oz00_4824)))->BgL_argz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4825)), BUNSPEC);
		}

	}



/* &lambda1940 */
	BgL_copz00_bglt BGl_z62lambda1940z62zzcgen_copz00(obj_t BgL_envz00_4826,
		obj_t BgL_oz00_4827)
	{
		{	/* Cgen/cop.scm 54 */
			return
				(((BgL_ccastz00_bglt) COBJECT(
						((BgL_ccastz00_bglt) BgL_oz00_4827)))->BgL_argz00);
		}

	}



/* &lambda1936 */
	obj_t BGl_z62lambda1936z62zzcgen_copz00(obj_t BgL_envz00_4828,
		obj_t BgL_oz00_4829, obj_t BgL_vz00_4830)
	{
		{	/* Cgen/cop.scm 54 */
			return
				((((BgL_ccastz00_bglt) COBJECT(
							((BgL_ccastz00_bglt) BgL_oz00_4829)))->BgL_typez00) =
				((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_4830)), BUNSPEC);
		}

	}



/* &lambda1935 */
	BgL_typez00_bglt BGl_z62lambda1935z62zzcgen_copz00(obj_t BgL_envz00_4831,
		obj_t BgL_oz00_4832)
	{
		{	/* Cgen/cop.scm 54 */
			return
				(((BgL_ccastz00_bglt) COBJECT(
						((BgL_ccastz00_bglt) BgL_oz00_4832)))->BgL_typez00);
		}

	}



/* &<@anonymous:1910> */
	obj_t BGl_z62zc3z04anonymousza31910ze3ze5zzcgen_copz00(obj_t BgL_envz00_4833,
		obj_t BgL_new1147z00_4834)
	{
		{	/* Cgen/cop.scm 50 */
			{
				BgL_cpragmaz00_bglt BgL_auxz00_8092;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cpragmaz00_bglt) BgL_new1147z00_4834))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_cpragmaz00_bglt) COBJECT(((BgL_cpragmaz00_bglt)
									BgL_new1147z00_4834)))->BgL_formatz00) =
					((obj_t) BGl_string2659z00zzcgen_copz00), BUNSPEC);
				((((BgL_cpragmaz00_bglt) COBJECT(((BgL_cpragmaz00_bglt)
									BgL_new1147z00_4834)))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8092 = ((BgL_cpragmaz00_bglt) BgL_new1147z00_4834);
				return ((obj_t) BgL_auxz00_8092);
			}
		}

	}



/* &lambda1908 */
	BgL_cpragmaz00_bglt BGl_z62lambda1908z62zzcgen_copz00(obj_t BgL_envz00_4835)
	{
		{	/* Cgen/cop.scm 50 */
			{	/* Cgen/cop.scm 50 */
				BgL_cpragmaz00_bglt BgL_new1146z00_5438;

				BgL_new1146z00_5438 =
					((BgL_cpragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cpragmaz00_bgl))));
				{	/* Cgen/cop.scm 50 */
					long BgL_arg1909z00_5439;

					{	/* Cgen/cop.scm 50 */
						long BgL_res2429z00_5440;

						BgL_res2429z00_5440 = BGL_CLASS_INDEX(BGl_cpragmaz00zzcgen_copz00);
						BgL_arg1909z00_5439 = BgL_res2429z00_5440;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1146z00_5438), BgL_arg1909z00_5439);
				}
				return BgL_new1146z00_5438;
			}
		}

	}



/* &lambda1906 */
	BgL_cpragmaz00_bglt BGl_z62lambda1906z62zzcgen_copz00(obj_t BgL_envz00_4836,
		obj_t BgL_loc1143z00_4837, obj_t BgL_format1144z00_4838,
		obj_t BgL_args1145z00_4839)
	{
		{	/* Cgen/cop.scm 50 */
			{	/* Cgen/cop.scm 50 */
				BgL_cpragmaz00_bglt BgL_new1371z00_5442;

				{	/* Cgen/cop.scm 50 */
					BgL_cpragmaz00_bglt BgL_new1370z00_5443;

					BgL_new1370z00_5443 =
						((BgL_cpragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cpragmaz00_bgl))));
					{	/* Cgen/cop.scm 50 */
						long BgL_arg1907z00_5444;

						{	/* Cgen/cop.scm 50 */
							long BgL_res2428z00_5445;

							BgL_res2428z00_5445 =
								BGL_CLASS_INDEX(BGl_cpragmaz00zzcgen_copz00);
							BgL_arg1907z00_5444 = BgL_res2428z00_5445;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1370z00_5443), BgL_arg1907z00_5444);
					}
					BgL_new1371z00_5442 = BgL_new1370z00_5443;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1371z00_5442)))->BgL_locz00) =
					((obj_t) BgL_loc1143z00_4837), BUNSPEC);
				((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1371z00_5442))->BgL_formatz00) =
					((obj_t) ((obj_t) BgL_format1144z00_4838)), BUNSPEC);
				((((BgL_cpragmaz00_bglt) COBJECT(BgL_new1371z00_5442))->BgL_argsz00) =
					((obj_t) BgL_args1145z00_4839), BUNSPEC);
				return BgL_new1371z00_5442;
			}
		}

	}



/* &lambda1920 */
	obj_t BGl_z62lambda1920z62zzcgen_copz00(obj_t BgL_envz00_4840,
		obj_t BgL_oz00_4841, obj_t BgL_vz00_4842)
	{
		{	/* Cgen/cop.scm 50 */
			return
				((((BgL_cpragmaz00_bglt) COBJECT(
							((BgL_cpragmaz00_bglt) BgL_oz00_4841)))->BgL_argsz00) =
				((obj_t) BgL_vz00_4842), BUNSPEC);
		}

	}



/* &lambda1919 */
	obj_t BGl_z62lambda1919z62zzcgen_copz00(obj_t BgL_envz00_4843,
		obj_t BgL_oz00_4844)
	{
		{	/* Cgen/cop.scm 50 */
			return
				(((BgL_cpragmaz00_bglt) COBJECT(
						((BgL_cpragmaz00_bglt) BgL_oz00_4844)))->BgL_argsz00);
		}

	}



/* &lambda1915 */
	obj_t BGl_z62lambda1915z62zzcgen_copz00(obj_t BgL_envz00_4845,
		obj_t BgL_oz00_4846, obj_t BgL_vz00_4847)
	{
		{	/* Cgen/cop.scm 50 */
			return
				((((BgL_cpragmaz00_bglt) COBJECT(
							((BgL_cpragmaz00_bglt) BgL_oz00_4846)))->BgL_formatz00) = ((obj_t)
					((obj_t) BgL_vz00_4847)), BUNSPEC);
		}

	}



/* &lambda1914 */
	obj_t BGl_z62lambda1914z62zzcgen_copz00(obj_t BgL_envz00_4848,
		obj_t BgL_oz00_4849)
	{
		{	/* Cgen/cop.scm 50 */
			return
				(((BgL_cpragmaz00_bglt) COBJECT(
						((BgL_cpragmaz00_bglt) BgL_oz00_4849)))->BgL_formatz00);
		}

	}



/* &<@anonymous:1894> */
	obj_t BGl_z62zc3z04anonymousza31894ze3ze5zzcgen_copz00(obj_t BgL_envz00_4850,
		obj_t BgL_new1141z00_4851)
	{
		{	/* Cgen/cop.scm 47 */
			{
				BgL_varcz00_bglt BgL_auxz00_8124;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_varcz00_bglt) BgL_new1141z00_4851))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_variablez00_bglt BgL_auxz00_8128;

					{	/* Cgen/cop.scm 47 */
						obj_t BgL_classz00_5452;

						BgL_classz00_5452 = BGl_variablez00zzast_varz00;
						{	/* Cgen/cop.scm 47 */
							obj_t BgL__ortest_1106z00_5453;

							BgL__ortest_1106z00_5453 = BGL_CLASS_NIL(BgL_classz00_5452);
							if (CBOOL(BgL__ortest_1106z00_5453))
								{	/* Cgen/cop.scm 47 */
									BgL_auxz00_8128 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_5453);
								}
							else
								{	/* Cgen/cop.scm 47 */
									BgL_auxz00_8128 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5452));
								}
						}
					}
					((((BgL_varcz00_bglt) COBJECT(
									((BgL_varcz00_bglt) BgL_new1141z00_4851)))->BgL_variablez00) =
						((BgL_variablez00_bglt) BgL_auxz00_8128), BUNSPEC);
				}
				BgL_auxz00_8124 = ((BgL_varcz00_bglt) BgL_new1141z00_4851);
				return ((obj_t) BgL_auxz00_8124);
			}
		}

	}



/* &lambda1892 */
	BgL_varcz00_bglt BGl_z62lambda1892z62zzcgen_copz00(obj_t BgL_envz00_4852)
	{
		{	/* Cgen/cop.scm 47 */
			{	/* Cgen/cop.scm 47 */
				BgL_varcz00_bglt BgL_new1140z00_5454;

				BgL_new1140z00_5454 =
					((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_varcz00_bgl))));
				{	/* Cgen/cop.scm 47 */
					long BgL_arg1893z00_5455;

					{	/* Cgen/cop.scm 47 */
						long BgL_res2427z00_5456;

						BgL_res2427z00_5456 = BGL_CLASS_INDEX(BGl_varcz00zzcgen_copz00);
						BgL_arg1893z00_5455 = BgL_res2427z00_5456;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1140z00_5454), BgL_arg1893z00_5455);
				}
				return BgL_new1140z00_5454;
			}
		}

	}



/* &lambda1889 */
	BgL_varcz00_bglt BGl_z62lambda1889z62zzcgen_copz00(obj_t BgL_envz00_4853,
		obj_t BgL_loc1138z00_4854, obj_t BgL_variable1139z00_4855)
	{
		{	/* Cgen/cop.scm 47 */
			{	/* Cgen/cop.scm 47 */
				BgL_varcz00_bglt BgL_new1369z00_5458;

				{	/* Cgen/cop.scm 47 */
					BgL_varcz00_bglt BgL_new1368z00_5459;

					BgL_new1368z00_5459 =
						((BgL_varcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_varcz00_bgl))));
					{	/* Cgen/cop.scm 47 */
						long BgL_arg1891z00_5460;

						{	/* Cgen/cop.scm 47 */
							long BgL_res2426z00_5461;

							BgL_res2426z00_5461 = BGL_CLASS_INDEX(BGl_varcz00zzcgen_copz00);
							BgL_arg1891z00_5460 = BgL_res2426z00_5461;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1368z00_5459), BgL_arg1891z00_5460);
					}
					BgL_new1369z00_5458 = BgL_new1368z00_5459;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1369z00_5458)))->BgL_locz00) =
					((obj_t) BgL_loc1138z00_4854), BUNSPEC);
				((((BgL_varcz00_bglt) COBJECT(BgL_new1369z00_5458))->BgL_variablez00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
							BgL_variable1139z00_4855)), BUNSPEC);
				return BgL_new1369z00_5458;
			}
		}

	}



/* &lambda1899 */
	obj_t BGl_z62lambda1899z62zzcgen_copz00(obj_t BgL_envz00_4856,
		obj_t BgL_oz00_4857, obj_t BgL_vz00_4858)
	{
		{	/* Cgen/cop.scm 47 */
			return
				((((BgL_varcz00_bglt) COBJECT(
							((BgL_varcz00_bglt) BgL_oz00_4857)))->BgL_variablez00) =
				((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_4858)),
				BUNSPEC);
		}

	}



/* &lambda1898 */
	BgL_variablez00_bglt BGl_z62lambda1898z62zzcgen_copz00(obj_t BgL_envz00_4859,
		obj_t BgL_oz00_4860)
	{
		{	/* Cgen/cop.scm 47 */
			return
				(((BgL_varcz00_bglt) COBJECT(
						((BgL_varcz00_bglt) BgL_oz00_4860)))->BgL_variablez00);
		}

	}



/* &<@anonymous:1877> */
	obj_t BGl_z62zc3z04anonymousza31877ze3ze5zzcgen_copz00(obj_t BgL_envz00_4861,
		obj_t BgL_new1136z00_4862)
	{
		{	/* Cgen/cop.scm 44 */
			{
				BgL_catomz00_bglt BgL_auxz00_8156;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_catomz00_bglt) BgL_new1136z00_4862))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_catomz00_bglt) COBJECT(((BgL_catomz00_bglt)
									BgL_new1136z00_4862)))->BgL_valuez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8156 = ((BgL_catomz00_bglt) BgL_new1136z00_4862);
				return ((obj_t) BgL_auxz00_8156);
			}
		}

	}



/* &lambda1875 */
	BgL_catomz00_bglt BGl_z62lambda1875z62zzcgen_copz00(obj_t BgL_envz00_4863)
	{
		{	/* Cgen/cop.scm 44 */
			{	/* Cgen/cop.scm 44 */
				BgL_catomz00_bglt BgL_new1135z00_5466;

				BgL_new1135z00_5466 =
					((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_catomz00_bgl))));
				{	/* Cgen/cop.scm 44 */
					long BgL_arg1876z00_5467;

					{	/* Cgen/cop.scm 44 */
						long BgL_res2425z00_5468;

						BgL_res2425z00_5468 = BGL_CLASS_INDEX(BGl_catomz00zzcgen_copz00);
						BgL_arg1876z00_5467 = BgL_res2425z00_5468;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1135z00_5466), BgL_arg1876z00_5467);
				}
				return BgL_new1135z00_5466;
			}
		}

	}



/* &lambda1873 */
	BgL_catomz00_bglt BGl_z62lambda1873z62zzcgen_copz00(obj_t BgL_envz00_4864,
		obj_t BgL_loc1133z00_4865, obj_t BgL_value1134z00_4866)
	{
		{	/* Cgen/cop.scm 44 */
			{	/* Cgen/cop.scm 44 */
				BgL_catomz00_bglt BgL_new1367z00_5469;

				{	/* Cgen/cop.scm 44 */
					BgL_catomz00_bglt BgL_new1366z00_5470;

					BgL_new1366z00_5470 =
						((BgL_catomz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_catomz00_bgl))));
					{	/* Cgen/cop.scm 44 */
						long BgL_arg1874z00_5471;

						{	/* Cgen/cop.scm 44 */
							long BgL_res2424z00_5472;

							BgL_res2424z00_5472 = BGL_CLASS_INDEX(BGl_catomz00zzcgen_copz00);
							BgL_arg1874z00_5471 = BgL_res2424z00_5472;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1366z00_5470), BgL_arg1874z00_5471);
					}
					BgL_new1367z00_5469 = BgL_new1366z00_5470;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1367z00_5469)))->BgL_locz00) =
					((obj_t) BgL_loc1133z00_4865), BUNSPEC);
				((((BgL_catomz00_bglt) COBJECT(BgL_new1367z00_5469))->BgL_valuez00) =
					((obj_t) BgL_value1134z00_4866), BUNSPEC);
				return BgL_new1367z00_5469;
			}
		}

	}



/* &lambda1883 */
	obj_t BGl_z62lambda1883z62zzcgen_copz00(obj_t BgL_envz00_4867,
		obj_t BgL_oz00_4868, obj_t BgL_vz00_4869)
	{
		{	/* Cgen/cop.scm 44 */
			return
				((((BgL_catomz00_bglt) COBJECT(
							((BgL_catomz00_bglt) BgL_oz00_4868)))->BgL_valuez00) =
				((obj_t) BgL_vz00_4869), BUNSPEC);
		}

	}



/* &lambda1882 */
	obj_t BGl_z62lambda1882z62zzcgen_copz00(obj_t BgL_envz00_4870,
		obj_t BgL_oz00_4871)
	{
		{	/* Cgen/cop.scm 44 */
			return
				(((BgL_catomz00_bglt) COBJECT(
						((BgL_catomz00_bglt) BgL_oz00_4871)))->BgL_valuez00);
		}

	}



/* &<@anonymous:1860> */
	obj_t BGl_z62zc3z04anonymousza31860ze3ze5zzcgen_copz00(obj_t BgL_envz00_4872,
		obj_t BgL_new1131z00_4873)
	{
		{	/* Cgen/cop.scm 41 */
			{
				BgL_cvoidz00_bglt BgL_auxz00_8179;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cvoidz00_bglt) BgL_new1131z00_4873))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_8183;

					{	/* Cgen/cop.scm 41 */
						obj_t BgL_classz00_5476;

						BgL_classz00_5476 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 41 */
							obj_t BgL__ortest_1106z00_5477;

							BgL__ortest_1106z00_5477 = BGL_CLASS_NIL(BgL_classz00_5476);
							if (CBOOL(BgL__ortest_1106z00_5477))
								{	/* Cgen/cop.scm 41 */
									BgL_auxz00_8183 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5477);
								}
							else
								{	/* Cgen/cop.scm 41 */
									BgL_auxz00_8183 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5476));
								}
						}
					}
					((((BgL_cvoidz00_bglt) COBJECT(
									((BgL_cvoidz00_bglt) BgL_new1131z00_4873)))->BgL_valuez00) =
						((BgL_copz00_bglt) BgL_auxz00_8183), BUNSPEC);
				}
				BgL_auxz00_8179 = ((BgL_cvoidz00_bglt) BgL_new1131z00_4873);
				return ((obj_t) BgL_auxz00_8179);
			}
		}

	}



/* &lambda1858 */
	BgL_cvoidz00_bglt BGl_z62lambda1858z62zzcgen_copz00(obj_t BgL_envz00_4874)
	{
		{	/* Cgen/cop.scm 41 */
			{	/* Cgen/cop.scm 41 */
				BgL_cvoidz00_bglt BgL_new1130z00_5478;

				BgL_new1130z00_5478 =
					((BgL_cvoidz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cvoidz00_bgl))));
				{	/* Cgen/cop.scm 41 */
					long BgL_arg1859z00_5479;

					{	/* Cgen/cop.scm 41 */
						long BgL_res2423z00_5480;

						BgL_res2423z00_5480 = BGL_CLASS_INDEX(BGl_cvoidz00zzcgen_copz00);
						BgL_arg1859z00_5479 = BgL_res2423z00_5480;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1130z00_5478), BgL_arg1859z00_5479);
				}
				return BgL_new1130z00_5478;
			}
		}

	}



/* &lambda1856 */
	BgL_cvoidz00_bglt BGl_z62lambda1856z62zzcgen_copz00(obj_t BgL_envz00_4875,
		obj_t BgL_loc1128z00_4876, obj_t BgL_value1129z00_4877)
	{
		{	/* Cgen/cop.scm 41 */
			{	/* Cgen/cop.scm 41 */
				BgL_cvoidz00_bglt BgL_new1365z00_5482;

				{	/* Cgen/cop.scm 41 */
					BgL_cvoidz00_bglt BgL_new1364z00_5483;

					BgL_new1364z00_5483 =
						((BgL_cvoidz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cvoidz00_bgl))));
					{	/* Cgen/cop.scm 41 */
						long BgL_arg1857z00_5484;

						{	/* Cgen/cop.scm 41 */
							long BgL_res2422z00_5485;

							BgL_res2422z00_5485 = BGL_CLASS_INDEX(BGl_cvoidz00zzcgen_copz00);
							BgL_arg1857z00_5484 = BgL_res2422z00_5485;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1364z00_5483), BgL_arg1857z00_5484);
					}
					BgL_new1365z00_5482 = BgL_new1364z00_5483;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1365z00_5482)))->BgL_locz00) =
					((obj_t) BgL_loc1128z00_4876), BUNSPEC);
				((((BgL_cvoidz00_bglt) COBJECT(BgL_new1365z00_5482))->BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_value1129z00_4877)),
					BUNSPEC);
				return BgL_new1365z00_5482;
			}
		}

	}



/* &lambda1865 */
	obj_t BGl_z62lambda1865z62zzcgen_copz00(obj_t BgL_envz00_4878,
		obj_t BgL_oz00_4879, obj_t BgL_vz00_4880)
	{
		{	/* Cgen/cop.scm 41 */
			return
				((((BgL_cvoidz00_bglt) COBJECT(
							((BgL_cvoidz00_bglt) BgL_oz00_4879)))->BgL_valuez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4880)), BUNSPEC);
		}

	}



/* &lambda1864 */
	BgL_copz00_bglt BGl_z62lambda1864z62zzcgen_copz00(obj_t BgL_envz00_4881,
		obj_t BgL_oz00_4882)
	{
		{	/* Cgen/cop.scm 41 */
			return
				(((BgL_cvoidz00_bglt) COBJECT(
						((BgL_cvoidz00_bglt) BgL_oz00_4882)))->BgL_valuez00);
		}

	}



/* &<@anonymous:1841> */
	obj_t BGl_z62zc3z04anonymousza31841ze3ze5zzcgen_copz00(obj_t BgL_envz00_4883,
		obj_t BgL_new1126z00_4884)
	{
		{	/* Cgen/cop.scm 38 */
			{
				BgL_creturnz00_bglt BgL_auxz00_8211;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_creturnz00_bglt) BgL_new1126z00_4884))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_8215;

					{	/* Cgen/cop.scm 38 */
						obj_t BgL_classz00_5490;

						BgL_classz00_5490 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 38 */
							obj_t BgL__ortest_1106z00_5491;

							BgL__ortest_1106z00_5491 = BGL_CLASS_NIL(BgL_classz00_5490);
							if (CBOOL(BgL__ortest_1106z00_5491))
								{	/* Cgen/cop.scm 38 */
									BgL_auxz00_8215 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5491);
								}
							else
								{	/* Cgen/cop.scm 38 */
									BgL_auxz00_8215 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5490));
								}
						}
					}
					((((BgL_creturnz00_bglt) COBJECT(
									((BgL_creturnz00_bglt) BgL_new1126z00_4884)))->BgL_valuez00) =
						((BgL_copz00_bglt) BgL_auxz00_8215), BUNSPEC);
				}
				BgL_auxz00_8211 = ((BgL_creturnz00_bglt) BgL_new1126z00_4884);
				return ((obj_t) BgL_auxz00_8211);
			}
		}

	}



/* &lambda1839 */
	BgL_creturnz00_bglt BGl_z62lambda1839z62zzcgen_copz00(obj_t BgL_envz00_4885)
	{
		{	/* Cgen/cop.scm 38 */
			{	/* Cgen/cop.scm 38 */
				BgL_creturnz00_bglt BgL_new1125z00_5492;

				BgL_new1125z00_5492 =
					((BgL_creturnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_creturnz00_bgl))));
				{	/* Cgen/cop.scm 38 */
					long BgL_arg1840z00_5493;

					{	/* Cgen/cop.scm 38 */
						long BgL_res2421z00_5494;

						BgL_res2421z00_5494 = BGL_CLASS_INDEX(BGl_creturnz00zzcgen_copz00);
						BgL_arg1840z00_5493 = BgL_res2421z00_5494;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1125z00_5492), BgL_arg1840z00_5493);
				}
				return BgL_new1125z00_5492;
			}
		}

	}



/* &lambda1837 */
	BgL_creturnz00_bglt BGl_z62lambda1837z62zzcgen_copz00(obj_t BgL_envz00_4886,
		obj_t BgL_loc1123z00_4887, obj_t BgL_value1124z00_4888)
	{
		{	/* Cgen/cop.scm 38 */
			{	/* Cgen/cop.scm 38 */
				BgL_creturnz00_bglt BgL_new1363z00_5496;

				{	/* Cgen/cop.scm 38 */
					BgL_creturnz00_bglt BgL_new1362z00_5497;

					BgL_new1362z00_5497 =
						((BgL_creturnz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_creturnz00_bgl))));
					{	/* Cgen/cop.scm 38 */
						long BgL_arg1838z00_5498;

						{	/* Cgen/cop.scm 38 */
							long BgL_res2420z00_5499;

							BgL_res2420z00_5499 =
								BGL_CLASS_INDEX(BGl_creturnz00zzcgen_copz00);
							BgL_arg1838z00_5498 = BgL_res2420z00_5499;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1362z00_5497), BgL_arg1838z00_5498);
					}
					BgL_new1363z00_5496 = BgL_new1362z00_5497;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1363z00_5496)))->BgL_locz00) =
					((obj_t) BgL_loc1123z00_4887), BUNSPEC);
				((((BgL_creturnz00_bglt) COBJECT(BgL_new1363z00_5496))->BgL_valuez00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_value1124z00_4888)),
					BUNSPEC);
				return BgL_new1363z00_5496;
			}
		}

	}



/* &lambda1848 */
	obj_t BGl_z62lambda1848z62zzcgen_copz00(obj_t BgL_envz00_4889,
		obj_t BgL_oz00_4890, obj_t BgL_vz00_4891)
	{
		{	/* Cgen/cop.scm 38 */
			return
				((((BgL_creturnz00_bglt) COBJECT(
							((BgL_creturnz00_bglt) BgL_oz00_4890)))->BgL_valuez00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4891)), BUNSPEC);
		}

	}



/* &lambda1847 */
	BgL_copz00_bglt BGl_z62lambda1847z62zzcgen_copz00(obj_t BgL_envz00_4892,
		obj_t BgL_oz00_4893)
	{
		{	/* Cgen/cop.scm 38 */
			return
				(((BgL_creturnz00_bglt) COBJECT(
						((BgL_creturnz00_bglt) BgL_oz00_4893)))->BgL_valuez00);
		}

	}



/* &<@anonymous:1825> */
	obj_t BGl_z62zc3z04anonymousza31825ze3ze5zzcgen_copz00(obj_t BgL_envz00_4894,
		obj_t BgL_new1121z00_4895)
	{
		{	/* Cgen/cop.scm 35 */
			{
				BgL_cblockz00_bglt BgL_auxz00_8243;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cblockz00_bglt) BgL_new1121z00_4895))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_copz00_bglt BgL_auxz00_8247;

					{	/* Cgen/cop.scm 35 */
						obj_t BgL_classz00_5504;

						BgL_classz00_5504 = BGl_copz00zzcgen_copz00;
						{	/* Cgen/cop.scm 35 */
							obj_t BgL__ortest_1106z00_5505;

							BgL__ortest_1106z00_5505 = BGL_CLASS_NIL(BgL_classz00_5504);
							if (CBOOL(BgL__ortest_1106z00_5505))
								{	/* Cgen/cop.scm 35 */
									BgL_auxz00_8247 =
										((BgL_copz00_bglt) BgL__ortest_1106z00_5505);
								}
							else
								{	/* Cgen/cop.scm 35 */
									BgL_auxz00_8247 =
										((BgL_copz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5504));
								}
						}
					}
					((((BgL_cblockz00_bglt) COBJECT(
									((BgL_cblockz00_bglt) BgL_new1121z00_4895)))->BgL_bodyz00) =
						((BgL_copz00_bglt) BgL_auxz00_8247), BUNSPEC);
				}
				BgL_auxz00_8243 = ((BgL_cblockz00_bglt) BgL_new1121z00_4895);
				return ((obj_t) BgL_auxz00_8243);
			}
		}

	}



/* &lambda1823 */
	BgL_cblockz00_bglt BGl_z62lambda1823z62zzcgen_copz00(obj_t BgL_envz00_4896)
	{
		{	/* Cgen/cop.scm 35 */
			{	/* Cgen/cop.scm 35 */
				BgL_cblockz00_bglt BgL_new1120z00_5506;

				BgL_new1120z00_5506 =
					((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cblockz00_bgl))));
				{	/* Cgen/cop.scm 35 */
					long BgL_arg1824z00_5507;

					{	/* Cgen/cop.scm 35 */
						long BgL_res2419z00_5508;

						BgL_res2419z00_5508 = BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
						BgL_arg1824z00_5507 = BgL_res2419z00_5508;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1120z00_5506), BgL_arg1824z00_5507);
				}
				return BgL_new1120z00_5506;
			}
		}

	}



/* &lambda1821 */
	BgL_cblockz00_bglt BGl_z62lambda1821z62zzcgen_copz00(obj_t BgL_envz00_4897,
		obj_t BgL_loc1118z00_4898, obj_t BgL_body1119z00_4899)
	{
		{	/* Cgen/cop.scm 35 */
			{	/* Cgen/cop.scm 35 */
				BgL_cblockz00_bglt BgL_new1361z00_5510;

				{	/* Cgen/cop.scm 35 */
					BgL_cblockz00_bglt BgL_new1360z00_5511;

					BgL_new1360z00_5511 =
						((BgL_cblockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cblockz00_bgl))));
					{	/* Cgen/cop.scm 35 */
						long BgL_arg1822z00_5512;

						{	/* Cgen/cop.scm 35 */
							long BgL_res2418z00_5513;

							BgL_res2418z00_5513 = BGL_CLASS_INDEX(BGl_cblockz00zzcgen_copz00);
							BgL_arg1822z00_5512 = BgL_res2418z00_5513;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1360z00_5511), BgL_arg1822z00_5512);
					}
					BgL_new1361z00_5510 = BgL_new1360z00_5511;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1361z00_5510)))->BgL_locz00) =
					((obj_t) BgL_loc1118z00_4898), BUNSPEC);
				((((BgL_cblockz00_bglt) COBJECT(BgL_new1361z00_5510))->BgL_bodyz00) =
					((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_body1119z00_4899)),
					BUNSPEC);
				return BgL_new1361z00_5510;
			}
		}

	}



/* &lambda1830 */
	obj_t BGl_z62lambda1830z62zzcgen_copz00(obj_t BgL_envz00_4900,
		obj_t BgL_oz00_4901, obj_t BgL_vz00_4902)
	{
		{	/* Cgen/cop.scm 35 */
			return
				((((BgL_cblockz00_bglt) COBJECT(
							((BgL_cblockz00_bglt) BgL_oz00_4901)))->BgL_bodyz00) =
				((BgL_copz00_bglt) ((BgL_copz00_bglt) BgL_vz00_4902)), BUNSPEC);
		}

	}



/* &lambda1829 */
	BgL_copz00_bglt BGl_z62lambda1829z62zzcgen_copz00(obj_t BgL_envz00_4903,
		obj_t BgL_oz00_4904)
	{
		{	/* Cgen/cop.scm 35 */
			return
				(((BgL_cblockz00_bglt) COBJECT(
						((BgL_cblockz00_bglt) BgL_oz00_4904)))->BgL_bodyz00);
		}

	}



/* &<@anonymous:1785> */
	obj_t BGl_z62zc3z04anonymousza31785ze3ze5zzcgen_copz00(obj_t BgL_envz00_4905,
		obj_t BgL_new1116z00_4906)
	{
		{	/* Cgen/cop.scm 32 */
			{
				BgL_cgotoz00_bglt BgL_auxz00_8275;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_cgotoz00_bglt) BgL_new1116z00_4906))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_clabelz00_bglt BgL_auxz00_8279;

					{	/* Cgen/cop.scm 32 */
						obj_t BgL_classz00_5518;

						BgL_classz00_5518 = BGl_clabelz00zzcgen_copz00;
						{	/* Cgen/cop.scm 32 */
							obj_t BgL__ortest_1106z00_5519;

							BgL__ortest_1106z00_5519 = BGL_CLASS_NIL(BgL_classz00_5518);
							if (CBOOL(BgL__ortest_1106z00_5519))
								{	/* Cgen/cop.scm 32 */
									BgL_auxz00_8279 =
										((BgL_clabelz00_bglt) BgL__ortest_1106z00_5519);
								}
							else
								{	/* Cgen/cop.scm 32 */
									BgL_auxz00_8279 =
										((BgL_clabelz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5518));
								}
						}
					}
					((((BgL_cgotoz00_bglt) COBJECT(
									((BgL_cgotoz00_bglt) BgL_new1116z00_4906)))->BgL_labelz00) =
						((BgL_clabelz00_bglt) BgL_auxz00_8279), BUNSPEC);
				}
				BgL_auxz00_8275 = ((BgL_cgotoz00_bglt) BgL_new1116z00_4906);
				return ((obj_t) BgL_auxz00_8275);
			}
		}

	}



/* &lambda1783 */
	BgL_cgotoz00_bglt BGl_z62lambda1783z62zzcgen_copz00(obj_t BgL_envz00_4907)
	{
		{	/* Cgen/cop.scm 32 */
			{	/* Cgen/cop.scm 32 */
				BgL_cgotoz00_bglt BgL_new1114z00_5520;

				BgL_new1114z00_5520 =
					((BgL_cgotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cgotoz00_bgl))));
				{	/* Cgen/cop.scm 32 */
					long BgL_arg1784z00_5521;

					{	/* Cgen/cop.scm 32 */
						long BgL_res2417z00_5522;

						BgL_res2417z00_5522 = BGL_CLASS_INDEX(BGl_cgotoz00zzcgen_copz00);
						BgL_arg1784z00_5521 = BgL_res2417z00_5522;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1114z00_5520), BgL_arg1784z00_5521);
				}
				return BgL_new1114z00_5520;
			}
		}

	}



/* &lambda1779 */
	BgL_cgotoz00_bglt BGl_z62lambda1779z62zzcgen_copz00(obj_t BgL_envz00_4908,
		obj_t BgL_loc1112z00_4909, obj_t BgL_label1113z00_4910)
	{
		{	/* Cgen/cop.scm 32 */
			{	/* Cgen/cop.scm 32 */
				BgL_cgotoz00_bglt BgL_new1359z00_5524;

				{	/* Cgen/cop.scm 32 */
					BgL_cgotoz00_bglt BgL_new1358z00_5525;

					BgL_new1358z00_5525 =
						((BgL_cgotoz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cgotoz00_bgl))));
					{	/* Cgen/cop.scm 32 */
						long BgL_arg1782z00_5526;

						{	/* Cgen/cop.scm 32 */
							long BgL_res2416z00_5527;

							BgL_res2416z00_5527 = BGL_CLASS_INDEX(BGl_cgotoz00zzcgen_copz00);
							BgL_arg1782z00_5526 = BgL_res2416z00_5527;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1358z00_5525), BgL_arg1782z00_5526);
					}
					BgL_new1359z00_5524 = BgL_new1358z00_5525;
				}
				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1359z00_5524)))->BgL_locz00) =
					((obj_t) BgL_loc1112z00_4909), BUNSPEC);
				((((BgL_cgotoz00_bglt) COBJECT(BgL_new1359z00_5524))->BgL_labelz00) =
					((BgL_clabelz00_bglt) ((BgL_clabelz00_bglt) BgL_label1113z00_4910)),
					BUNSPEC);
				return BgL_new1359z00_5524;
			}
		}

	}



/* &lambda1800 */
	obj_t BGl_z62lambda1800z62zzcgen_copz00(obj_t BgL_envz00_4911,
		obj_t BgL_oz00_4912, obj_t BgL_vz00_4913)
	{
		{	/* Cgen/cop.scm 32 */
			return
				((((BgL_cgotoz00_bglt) COBJECT(
							((BgL_cgotoz00_bglt) BgL_oz00_4912)))->BgL_labelz00) =
				((BgL_clabelz00_bglt) ((BgL_clabelz00_bglt) BgL_vz00_4913)), BUNSPEC);
		}

	}



/* &lambda1799 */
	BgL_clabelz00_bglt BGl_z62lambda1799z62zzcgen_copz00(obj_t BgL_envz00_4914,
		obj_t BgL_oz00_4915)
	{
		{	/* Cgen/cop.scm 32 */
			return
				(((BgL_cgotoz00_bglt) COBJECT(
						((BgL_cgotoz00_bglt) BgL_oz00_4915)))->BgL_labelz00);
		}

	}



/* &<@anonymous:1732> */
	obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzcgen_copz00(obj_t BgL_envz00_4916,
		obj_t BgL_new1110z00_4917)
	{
		{	/* Cgen/cop.scm 27 */
			{
				BgL_clabelz00_bglt BgL_auxz00_8307;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt)
									((BgL_clabelz00_bglt) BgL_new1110z00_4917))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_clabelz00_bglt) COBJECT(((BgL_clabelz00_bglt)
									BgL_new1110z00_4917)))->BgL_namez00) =
					((obj_t) BGl_string2659z00zzcgen_copz00), BUNSPEC);
				((((BgL_clabelz00_bglt) COBJECT(((BgL_clabelz00_bglt)
									BgL_new1110z00_4917)))->BgL_usedzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_clabelz00_bglt) COBJECT(((BgL_clabelz00_bglt)
									BgL_new1110z00_4917)))->BgL_bodyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8307 = ((BgL_clabelz00_bglt) BgL_new1110z00_4917);
				return ((obj_t) BgL_auxz00_8307);
			}
		}

	}



/* &lambda1730 */
	BgL_clabelz00_bglt BGl_z62lambda1730z62zzcgen_copz00(obj_t BgL_envz00_4918)
	{
		{	/* Cgen/cop.scm 27 */
			{	/* Cgen/cop.scm 27 */
				BgL_clabelz00_bglt BgL_new1109z00_5532;

				BgL_new1109z00_5532 =
					((BgL_clabelz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_clabelz00_bgl))));
				{	/* Cgen/cop.scm 27 */
					long BgL_arg1731z00_5533;

					{	/* Cgen/cop.scm 27 */
						long BgL_res2415z00_5534;

						BgL_res2415z00_5534 = BGL_CLASS_INDEX(BGl_clabelz00zzcgen_copz00);
						BgL_arg1731z00_5533 = BgL_res2415z00_5534;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1109z00_5532), BgL_arg1731z00_5533);
				}
				return BgL_new1109z00_5532;
			}
		}

	}



/* &lambda1728 */
	BgL_clabelz00_bglt BGl_z62lambda1728z62zzcgen_copz00(obj_t BgL_envz00_4919,
		obj_t BgL_loc1105z00_4920, obj_t BgL_name1106z00_4921,
		obj_t BgL_usedzf31107zf3_4922, obj_t BgL_body1108z00_4923)
	{
		{	/* Cgen/cop.scm 27 */
			{	/* Cgen/cop.scm 27 */
				bool_t BgL_usedzf31107zf3_5536;

				BgL_usedzf31107zf3_5536 = CBOOL(BgL_usedzf31107zf3_4922);
				{	/* Cgen/cop.scm 27 */
					BgL_clabelz00_bglt BgL_new1357z00_5537;

					{	/* Cgen/cop.scm 27 */
						BgL_clabelz00_bglt BgL_new1356z00_5538;

						BgL_new1356z00_5538 =
							((BgL_clabelz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_clabelz00_bgl))));
						{	/* Cgen/cop.scm 27 */
							long BgL_arg1729z00_5539;

							{	/* Cgen/cop.scm 27 */
								long BgL_res2414z00_5540;

								BgL_res2414z00_5540 =
									BGL_CLASS_INDEX(BGl_clabelz00zzcgen_copz00);
								BgL_arg1729z00_5539 = BgL_res2414z00_5540;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1356z00_5538),
								BgL_arg1729z00_5539);
						}
						BgL_new1357z00_5537 = BgL_new1356z00_5538;
					}
					((((BgL_copz00_bglt) COBJECT(
									((BgL_copz00_bglt) BgL_new1357z00_5537)))->BgL_locz00) =
						((obj_t) BgL_loc1105z00_4920), BUNSPEC);
					((((BgL_clabelz00_bglt) COBJECT(BgL_new1357z00_5537))->BgL_namez00) =
						((obj_t) ((obj_t) BgL_name1106z00_4921)), BUNSPEC);
					((((BgL_clabelz00_bglt) COBJECT(BgL_new1357z00_5537))->
							BgL_usedzf3zf3) = ((bool_t) BgL_usedzf31107zf3_5536), BUNSPEC);
					((((BgL_clabelz00_bglt) COBJECT(BgL_new1357z00_5537))->BgL_bodyz00) =
						((obj_t) BgL_body1108z00_4923), BUNSPEC);
					return BgL_new1357z00_5537;
				}
			}
		}

	}



/* &<@anonymous:1760> */
	obj_t BGl_z62zc3z04anonymousza31760ze3ze5zzcgen_copz00(obj_t BgL_envz00_4924)
	{
		{	/* Cgen/cop.scm 27 */
			return BUNSPEC;
		}

	}



/* &lambda1759 */
	obj_t BGl_z62lambda1759z62zzcgen_copz00(obj_t BgL_envz00_4925,
		obj_t BgL_oz00_4926, obj_t BgL_vz00_4927)
	{
		{	/* Cgen/cop.scm 27 */
			return
				((((BgL_clabelz00_bglt) COBJECT(
							((BgL_clabelz00_bglt) BgL_oz00_4926)))->BgL_bodyz00) =
				((obj_t) BgL_vz00_4927), BUNSPEC);
		}

	}



/* &lambda1758 */
	obj_t BGl_z62lambda1758z62zzcgen_copz00(obj_t BgL_envz00_4928,
		obj_t BgL_oz00_4929)
	{
		{	/* Cgen/cop.scm 27 */
			return
				(((BgL_clabelz00_bglt) COBJECT(
						((BgL_clabelz00_bglt) BgL_oz00_4929)))->BgL_bodyz00);
		}

	}



/* &<@anonymous:1748> */
	obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzcgen_copz00(obj_t BgL_envz00_4930)
	{
		{	/* Cgen/cop.scm 27 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1747 */
	obj_t BGl_z62lambda1747z62zzcgen_copz00(obj_t BgL_envz00_4931,
		obj_t BgL_oz00_4932, obj_t BgL_vz00_4933)
	{
		{	/* Cgen/cop.scm 27 */
			{	/* Cgen/cop.scm 27 */
				bool_t BgL_vz00_5544;

				BgL_vz00_5544 = CBOOL(BgL_vz00_4933);
				return
					((((BgL_clabelz00_bglt) COBJECT(
								((BgL_clabelz00_bglt) BgL_oz00_4932)))->BgL_usedzf3zf3) =
					((bool_t) BgL_vz00_5544), BUNSPEC);
			}
		}

	}



/* &lambda1746 */
	obj_t BGl_z62lambda1746z62zzcgen_copz00(obj_t BgL_envz00_4934,
		obj_t BgL_oz00_4935)
	{
		{	/* Cgen/cop.scm 27 */
			return
				BBOOL(
				(((BgL_clabelz00_bglt) COBJECT(
							((BgL_clabelz00_bglt) BgL_oz00_4935)))->BgL_usedzf3zf3));
		}

	}



/* &lambda1741 */
	obj_t BGl_z62lambda1741z62zzcgen_copz00(obj_t BgL_envz00_4936,
		obj_t BgL_oz00_4937, obj_t BgL_vz00_4938)
	{
		{	/* Cgen/cop.scm 27 */
			return
				((((BgL_clabelz00_bglt) COBJECT(
							((BgL_clabelz00_bglt) BgL_oz00_4937)))->BgL_namez00) = ((obj_t)
					((obj_t) BgL_vz00_4938)), BUNSPEC);
		}

	}



/* &lambda1740 */
	obj_t BGl_z62lambda1740z62zzcgen_copz00(obj_t BgL_envz00_4939,
		obj_t BgL_oz00_4940)
	{
		{	/* Cgen/cop.scm 27 */
			return
				(((BgL_clabelz00_bglt) COBJECT(
						((BgL_clabelz00_bglt) BgL_oz00_4940)))->BgL_namez00);
		}

	}



/* &<@anonymous:1696> */
	obj_t BGl_z62zc3z04anonymousza31696ze3ze5zzcgen_copz00(obj_t BgL_envz00_4941,
		obj_t BgL_new1103z00_4942)
	{
		{	/* Cgen/cop.scm 23 */
			{
				BgL_copz00_bglt BgL_auxz00_8350;

				((((BgL_copz00_bglt) COBJECT(
								((BgL_copz00_bglt) BgL_new1103z00_4942)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_8350 = ((BgL_copz00_bglt) BgL_new1103z00_4942);
				return ((obj_t) BgL_auxz00_8350);
			}
		}

	}



/* &lambda1693 */
	BgL_copz00_bglt BGl_z62lambda1693z62zzcgen_copz00(obj_t BgL_envz00_4943)
	{
		{	/* Cgen/cop.scm 23 */
			{	/* Cgen/cop.scm 23 */
				BgL_copz00_bglt BgL_new1102z00_5550;

				BgL_new1102z00_5550 =
					((BgL_copz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_copz00_bgl))));
				{	/* Cgen/cop.scm 23 */
					long BgL_arg1695z00_5551;

					{	/* Cgen/cop.scm 23 */
						long BgL_res2413z00_5552;

						BgL_res2413z00_5552 = BGL_CLASS_INDEX(BGl_copz00zzcgen_copz00);
						BgL_arg1695z00_5551 = BgL_res2413z00_5552;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1102z00_5550), BgL_arg1695z00_5551);
				}
				return BgL_new1102z00_5550;
			}
		}

	}



/* &lambda1689 */
	BgL_copz00_bglt BGl_z62lambda1689z62zzcgen_copz00(obj_t BgL_envz00_4944,
		obj_t BgL_loc1101z00_4945)
	{
		{	/* Cgen/cop.scm 23 */
			{	/* Cgen/cop.scm 23 */
				BgL_copz00_bglt BgL_new1355z00_5553;

				{	/* Cgen/cop.scm 23 */
					BgL_copz00_bglt BgL_new1354z00_5554;

					BgL_new1354z00_5554 =
						((BgL_copz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_copz00_bgl))));
					{	/* Cgen/cop.scm 23 */
						long BgL_arg1692z00_5555;

						{	/* Cgen/cop.scm 23 */
							long BgL_res2412z00_5556;

							BgL_res2412z00_5556 = BGL_CLASS_INDEX(BGl_copz00zzcgen_copz00);
							BgL_arg1692z00_5555 = BgL_res2412z00_5556;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1354z00_5554), BgL_arg1692z00_5555);
					}
					BgL_new1355z00_5553 = BgL_new1354z00_5554;
				}
				((((BgL_copz00_bglt) COBJECT(BgL_new1355z00_5553))->BgL_locz00) =
					((obj_t) BgL_loc1101z00_4945), BUNSPEC);
				return BgL_new1355z00_5553;
			}
		}

	}



/* &<@anonymous:1711> */
	obj_t BGl_z62zc3z04anonymousza31711ze3ze5zzcgen_copz00(obj_t BgL_envz00_4946)
	{
		{	/* Cgen/cop.scm 23 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1710 */
	obj_t BGl_z62lambda1710z62zzcgen_copz00(obj_t BgL_envz00_4947,
		obj_t BgL_oz00_4948, obj_t BgL_vz00_4949)
	{
		{	/* Cgen/cop.scm 23 */
			return
				((((BgL_copz00_bglt) COBJECT(
							((BgL_copz00_bglt) BgL_oz00_4948)))->BgL_locz00) =
				((obj_t) BgL_vz00_4949), BUNSPEC);
		}

	}



/* &lambda1709 */
	obj_t BGl_z62lambda1709z62zzcgen_copz00(obj_t BgL_envz00_4950,
		obj_t BgL_oz00_4951)
	{
		{	/* Cgen/cop.scm 23 */
			return
				(((BgL_copz00_bglt) COBJECT(
						((BgL_copz00_bglt) BgL_oz00_4951)))->BgL_locz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_copz00()
	{
		{	/* Cgen/cop.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2660z00zzcgen_copz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2660z00zzcgen_copz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2660z00zzcgen_copz00));
		}

	}

#ifdef __cplusplus
}
#endif
