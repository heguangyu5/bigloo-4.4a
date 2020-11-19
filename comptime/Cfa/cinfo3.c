/*===========================================================================*/
/*   (Cfa/cinfo3.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/cinfo3.scm) */
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

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

	typedef struct BgL_privatez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
	}                 *BgL_privatez00_bglt;

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_setfieldz00_bglt;

	typedef struct BgL_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		obj_t BgL_argszd2typezd2;
	}             *BgL_newz00_bglt;

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_ftypez00;
	}                 *BgL_vlengthz00_bglt;

	typedef struct BgL_instanceofz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_classz00;
	}                    *BgL_instanceofz00_bglt;

	typedef struct BgL_castzd2nullzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
	}                     *BgL_castzd2nullzd2_bglt;

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

	typedef struct BgL_pragmazf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_pragmazf2cinfozf2_bglt;

	typedef struct BgL_getfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_getfieldzf2cinfozf2_bglt;

	typedef struct BgL_setfieldzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                          *BgL_setfieldzf2cinfozf2_bglt;

	typedef struct BgL_newzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                     *BgL_newzf2cinfozf2_bglt;

	typedef struct BgL_instanceofzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_instanceofzf2cinfozf2_bglt;

	typedef struct BgL_castzd2nullzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                             *BgL_castzd2nullzf2cinfoz20_bglt;

	typedef struct BgL_vrefzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                      *BgL_vrefzf2cinfozf2_bglt;

	typedef struct BgL_vsetz12zf2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vsetz12zf2cinfoze0_bglt;

	typedef struct BgL_vlengthzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vlengthzf2cinfozf2_bglt;

	typedef struct BgL_prezd2valloczf2cinfoz20_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                              *BgL_prezd2valloczf2cinfoz20_bglt;

	typedef struct BgL_valloczf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_valloczf2cinfozf2_bglt;

	typedef struct BgL_valloczf2cinfozb2optimz40_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		bool_t BgL_stackablezf3zf3;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                                *BgL_valloczf2cinfozb2optimz40_bglt;


	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2typezd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static BgL_castzd2nullzd2_bglt BGl_z62lambda1921z62zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62lambda1929z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62vsetz12zf2Cinfozd2tvectorzf3zd2setz12z63zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_pragmaz00_bglt
		BGl_makezd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_approxz00_bglt);
	static obj_t BGl_z62lambda1930z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62valloczf2Cinfozd2approxz42zzcfa_info3z00(obj_t, obj_t);
	static BgL_vrefz00_bglt BGl_z62lambda1937z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_setfieldz00_bglt
		BGl_setfieldzf2Cinfozd2nilz20zzcfa_info3z00();
	static BgL_instanceofz00_bglt
		BGl_z62instanceofzf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_vlengthz00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2typezd2setz12z30zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static BgL_vrefz00_bglt BGl_z62lambda1940z62zzcfa_info3z00(obj_t, obj_t);
	static BgL_vrefz00_bglt BGl_z62lambda1943z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2valloczf2Cinfozd2ftypezf2zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t
		BGl_z62castzd2nullzf2Cinfozd2sidezd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_approxz00zzcfa_infoz00;
	static BgL_approxz00_bglt BGl_z62lambda1950z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1951z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1956z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1957z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_instanceofz00_bglt
		BGl_instanceofzf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl_z62vsetz12zf2Cinfozd2effectz50zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2effectzf2zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31970ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static BgL_vsetz12z12_bglt BGl_z62lambda1965z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_vsetz12z12_bglt BGl_z62lambda1968z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_vsetz12z12_bglt BGl_z62lambda1971z62zzcfa_info3z00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2valuezd2approxz22zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62lambda1978z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1979z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static BgL_instanceofz00_bglt
		BGl_z62makezd2instanceofzf2Cinfoz42zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32120ze3ze5zzcfa_info3z00(obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2locz50zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2sidezd2effectzd2setz12ze2zzcfa_info3z00
		(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2ftypezd2setz12z30zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1984z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1985z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2exprza2zd2setz12z32zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_instanceofzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32016ze3ze5zzcfa_info3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_info3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt,
		obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2formatz42zzcfa_info3z00(obj_t, obj_t);
	static BgL_vlengthz00_bglt BGl_z62lambda1993z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_vlengthz00_bglt BGl_z62lambda1997z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2czd2formatz40zzcfa_info3z00
		(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_castzd2nullzf2Cinfozf3zd3zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_newz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_valloczf2Cinfozd2approxz20zzcfa_info3z00(BgL_vallocz00_bglt);
	static BgL_vallocz00_bglt BGl_z62makezd2valloczf2Cinfoz42zzcfa_info3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_getfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_vsetz12zf2Cinfozd2approxz32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	static obj_t BGl_z62vrefzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2keyzd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_info3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00
		(BgL_instanceofz00_bglt, obj_t);
	static obj_t BGl_z62vrefzf2Cinfozd2tvectorzf3zb1zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32054ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2fnamez42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32128ze3ze5zzcfa_info3z00(obj_t);
	static BgL_vallocz00_bglt BGl_z62valloczf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	static obj_t
		BGl_z62instanceofzf2Cinfozd2classzd2setz12z82zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2ftypez50zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2formatz20zzcfa_info3z00(BgL_pragmaz00_bglt);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_prezd2valloczf2Cinfozd2ownerzf2zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t BGl_z62prezd2valloczf2Cinfozf3zb1zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2fnamez20zzcfa_info3z00(BgL_getfieldz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_setfieldzf2Cinfozd2approxz20zzcfa_info3z00(BgL_setfieldz00_bglt);
	static BgL_approxz00_bglt
		BGl_z62instanceofzf2Cinfozd2approxz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62getfieldzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_setfieldz00_bglt);
	static BgL_approxz00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2approxzf0zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62instanceofzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2keyz20zzcfa_info3z00(BgL_vlengthz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z62vlengthzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2argszd2typez90zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62setfieldzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2sidezd2effectzd2setz12z20zzcfa_info3z00
		(BgL_vsetz12z12_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2czd2formatz20zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2ftypezd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt, BgL_typez00_bglt);
	static obj_t
		BGl_z62vlengthzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_vlengthzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62getfieldzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62vrefzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62vlengthzf2Cinfozd2tvectorzf3zd2setz12z71zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62prezd2valloczf2Cinfozd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00
		(BgL_getfieldz00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62valloczf2Cinfozd2ftypez42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_vrefzf2Cinfozd2tvectorzf3zd3zzcfa_info3z00(BgL_vrefz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2keyzd2setz12z32zzcfa_info3z00(BgL_vallocz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(BgL_newz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getfieldzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_getfieldz00_bglt);
	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2otypezd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62vrefzf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_pragmaz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62newzf2Cinfozd2effectz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_valloczf2Cinfozd2typez20zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2effectzd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2stackzd2stampz22zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62setfieldzf2Cinfozd2typez42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2keyz20zzcfa_info3z00(BgL_setfieldz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_vrefz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_instanceofzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z62instanceofzf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_vlengthz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_vlengthz00_bglt);
	static obj_t BGl_z62castzd2nullzf2Cinfozd2exprza2z32zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2argszd2typezf2zzcfa_info3z00(BgL_newz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2locz92zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2lostzd2stampz22zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_valloczf2Cinfozb2optimzd2typez92zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2exprza2z50zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t
		BGl_z62pragmazf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2lostzd2stampzd2setz12z80zzcfa_info3z00
		(BgL_vallocz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2keyz20zzcfa_info3z00(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62castzd2nullzf2Cinfozd2locz90zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2sidezd2effectz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozd2effectz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2sidezd2effectz20zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt);
	static obj_t BGl_z62vrefzf2Cinfozd2vtypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2ftypezd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt, BgL_typez00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2sidezd2effectz22zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2stackzd2stampz40zzcfa_info3z00
		(BgL_vallocz00_bglt);
	static BgL_approxz00_bglt BGl_z62vrefzf2Cinfozd2approxz42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2effectzf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_valloczf2Cinfozb2optimzd2otypez92zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2typezd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt, BgL_typez00_bglt);
	static BgL_approxz00_bglt
		BGl_z62vlengthzf2Cinfozd2approxz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_instanceofzf2Cinfozd2classz20zzcfa_info3z00(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_setfieldzf2Cinfozd2typez20zzcfa_info3z00(BgL_setfieldz00_bglt);
	static BgL_typez00_bglt
		BGl_z62instanceofzf2Cinfozd2typez42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vlengthzf2Cinfozd2typez20zzcfa_info3z00(BgL_vlengthz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt,
		obj_t);
	static BgL_vallocz00_bglt
		BGl_z62prezd2valloczf2Cinfozd2nilz90zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_getfieldzf2Cinfozd2approxz20zzcfa_info3z00(BgL_getfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2sidezd2effectze0zzcfa_info3z00(BgL_vsetz12z12_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_vlengthzf2Cinfozd2approxz20zzcfa_info3z00(BgL_vlengthz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_pragmazf2Cinfozf3z01zzcfa_info3z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31942ze3ze5zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_newz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_valloczf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static BgL_approxz00_bglt
		BGl_z62castzd2nullzf2Cinfozd2approxz90zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2approxzd2setz12z30zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_vallocz00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2nilzf0zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2ftypezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt,
		BgL_typez00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2exprza2zd2setz12z92zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2loczf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt);
	BGL_EXPORTED_DECL bool_t BGl_vrefzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2sidezd2effectz40zzcfa_info3z00
		(BgL_vallocz00_bglt);
	extern obj_t BGl_newz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_getfieldz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2vtypez32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2valloczf2Cinfozd2typezf2zzcfa_info3z00(BgL_vallocz00_bglt);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t BGl_z62vlengthzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2tvectorzf3zd2setz12z01zzcfa_info3z00
		(BgL_vsetz12z12_bglt, bool_t);
	static obj_t BGl_z62valloczf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2exprza2zf2zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_valloczf2Cinfozb2optimzd2lostzd2stampz40zzcfa_info3z00
		(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_setfieldz00_bglt);
	static obj_t BGl_z62instanceofzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_pragmaz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31874ze3ze5zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2locz32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	static obj_t BGl_z62vrefzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_vlengthz00_bglt
		BGl_z62vlengthzf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_valloczf2Cinfozf3z01zzcfa_info3z00(obj_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2czd2formatz20zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2approxzd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt, BgL_approxz00_bglt);
	static obj_t BGl_z62getfieldzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_valloczf2Cinfozd2nilz20zzcfa_info3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2locz20zzcfa_info3z00(BgL_pragmaz00_bglt);
	static obj_t BGl_z62vrefzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2typezf0zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_vrefzf2Cinfozd2unsafez20zzcfa_info3z00(BgL_vrefz00_bglt);
	static obj_t BGl_z62getfieldzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2effectz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2keyzd2setz12z32zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt, obj_t);
	static obj_t
		BGl_z62castzd2nullzf2Cinfozd2exprza2zd2setz12zf2zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62valloczf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62vsetz12zf2Cinfozf3z71zzcfa_info3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2effectz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_getfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_instanceofz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_pragmazf2Cinfozd2typez20zzcfa_info3z00(BgL_pragmaz00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2lostzd2stampzd2setz12ze2zzcfa_info3z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31986ze3ze5zzcfa_info3z00(obj_t);
	static BgL_pragmaz00_bglt BGl_z62makezd2pragmazf2Cinfoz42zzcfa_info3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62castzd2nullzf2Cinfozd2typezd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2exprza2zd2setz12zf0zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	static BgL_vsetz12z12_bglt
		BGl_z62makezd2vsetz12zf2Cinfoz50zzcfa_info3z00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_newz00_bglt BGl_newzf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl_z62vlengthzf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2stackzd2stampzd2setz12ze2zzcfa_info3z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_vrefz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2sidezd2effectzd2setz12z80zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_vlengthzf2Cinfozd2tvectorzf3zd3zzcfa_info3z00(BgL_vlengthz00_bglt);
	static obj_t BGl_z62pragmazf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_vlengthz00_bglt BGl_z62lambda2000z62zzcfa_info3z00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2008z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2009z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2sidezd2effectz82zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2effectz20zzcfa_info3z00(BgL_newz00_bglt);
	static obj_t BGl_z62lambda2014z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2015z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2czd2formatz22zzcfa_info3z00(obj_t, obj_t);
	static BgL_vallocz00_bglt BGl_z62lambda2024z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_vallocz00_bglt BGl_z62lambda2029z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_getfieldz00_bglt);
	static obj_t BGl_z62setfieldzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2valloczf2Cinfozd2otypez90zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2vtypezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt,
		BgL_typez00_bglt);
	static BgL_vallocz00_bglt BGl_z62lambda2033z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_pragmaz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_vallocz00_bglt,
		obj_t);
	static BgL_variablez00_bglt BGl_z62lambda2040z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2041z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_setfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	static obj_t BGl_z62instanceofzf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	static BgL_vallocz00_bglt BGl_z62lambda2049z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2effectz20zzcfa_info3z00(BgL_pragmaz00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2keyzd2setz12z30zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2otypezf0zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
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
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_valloczf2Cinfozb2optimzd2approxz92zzcfa_info3z00(BgL_vallocz00_bglt);
	static BgL_setfieldz00_bglt
		BGl_z62setfieldzf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	static BgL_vallocz00_bglt BGl_z62lambda2052z62zzcfa_info3z00(obj_t, obj_t);
	static BgL_vallocz00_bglt BGl_z62lambda2055z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_valloczf2Cinfozb2optimzd2seenzf3z61zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt,
		obj_t);
	static obj_t BGl_z62pragmazf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00
		(BgL_setfieldz00_bglt, obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t
		BGl_z62instanceofzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2063z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2064z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2typezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62prezd2valloczf2Cinfozd2keyz90zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_getfieldz00_bglt
		BGl_getfieldzf2Cinfozd2nilz20zzcfa_info3z00();
	static BgL_vallocz00_bglt BGl_z62lambda2072z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_vallocz00_bglt BGl_z62lambda2077z62zzcfa_info3z00(obj_t, obj_t);
	static BgL_vallocz00_bglt
		BGl_z62makezd2prezd2valloczf2Cinfoz90zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_vallocz00_bglt BGl_z62lambda2080z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2effectz20zzcfa_info3z00(BgL_vrefz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2keyzf2zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2exprza2zd2setz12z90zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_info3z00();
	static BgL_approxz00_bglt BGl_z62lambda2087z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2088z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozb2optimzd2keyzf0zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_setfieldz00_bglt, obj_t);
	static obj_t
		BGl_z62instanceofzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2sidezd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2092z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2093z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2098z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2099z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62vrefzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_valloczf2Cinfozb2optimzd2ftypez92zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t BGl_z62vlengthzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_setfieldz00_bglt);
	static obj_t BGl_z62instanceofzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vrefz00_bglt BGl_vrefzf2Cinfozd2nilz20zzcfa_info3z00();
	static BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2typez42zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2typez50zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62valloczf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62vlengthzf2Cinfozd2vtypez42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2locz20zzcfa_info3z00(BgL_vlengthz00_bglt);
	static obj_t BGl_z62vrefzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2exprza2zd2setz12z50zzcfa_info3z00(BgL_vsetz12z12_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt,
		obj_t);
	static obj_t BGl_z62castzd2nullzf2Cinfozd2czd2formatz42zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2otypezd2setz12z90zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2sidezd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt, obj_t);
	static obj_t BGl_z62instanceofzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62vsetz12zf2Cinfozd2approxz50zzcfa_info3z00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62castzd2nullzf2Cinfozd2typez90zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_newz00_bglt
		BGl_makezd2newzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2argszd2typezd2setz12z32zzcfa_info3z00(BgL_newz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2keyz20zzcfa_info3z00(BgL_vallocz00_bglt);
	static BgL_typez00_bglt BGl_z62getfieldzf2Cinfozd2typez42zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2vtypez42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vlengthz00_bglt
		BGl_makezd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, obj_t, BgL_approxz00_bglt,
		bool_t);
	static obj_t BGl_z62vrefzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t
		BGl_z62vsetz12zf2Cinfozd2sidezd2effectzd2setz12z42zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_castzd2nullzf2Cinfozd2typezf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt);
	static BgL_pragmaz00_bglt BGl_z62lambda1760z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62castzd2nullzf2Cinfozd2keyzd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31772ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static BgL_pragmaz00_bglt BGl_z62lambda1769z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_vrefz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62instanceofzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_pragmaz00_bglt BGl_z62lambda1773z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_instanceofz00_bglt
		BGl_makezd2instanceofzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_approxz00_bglt);
	static BgL_newz00_bglt BGl_z62newzf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_newzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza32100ze3ze5zzcfa_info3z00(obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62valloczf2Cinfozd2typez42zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vlengthzf2Cinfozd2vtypez20zzcfa_info3z00(BgL_vlengthz00_bglt);
	static obj_t
		BGl_z62castzd2nullzf2Cinfozd2sidezd2effectz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_pragmazf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static BgL_approxz00_bglt BGl_z62lambda1791z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1792z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2locz20zzcfa_info3z00(BgL_setfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2keyz20zzcfa_info3z00(BgL_newz00_bglt);
	static obj_t BGl_z62instanceofzf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt, obj_t);
	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2sidezd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_vsetz12zf2Cinfozd2unsafez32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2ftypezd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_newzf2Cinfozd2typez20zzcfa_info3z00(BgL_newz00_bglt);
	static BgL_vsetz12z12_bglt
		BGl_z62vsetz12zf2Cinfozd2nilz50zzcfa_info3z00(obj_t);
	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2effectzd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31849ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_pragmaz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2effectzd2setz12z32zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_valloczf2Cinfozb2optimzd2ownerz92zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_valloczf2Cinfozb2optimzd2valuezd2approxz40zzcfa_info3z00
		(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2locz20zzcfa_info3z00(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2effectz20zzcfa_info3z00(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getfieldzf2Cinfozd2typez20zzcfa_info3z00(BgL_getfieldz00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2effectzd2setz12z30zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_valloczf2Cinfozd2otypez20zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2otypez32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32032ze3ze5zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vsetz12z12_bglt
		BGl_makezd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_typez00_bglt, bool_t, BgL_approxz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_newz00_bglt);
	static obj_t BGl_z62setfieldzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozd2effectz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2exprza2zd2setz12z90zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31958ze3ze5zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2effectzd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt,
		obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_pragmaz00_bglt);
	static obj_t BGl_z62setfieldzf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozb2optimzd2seenzf3z03zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_newz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_newz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2keyz20zzcfa_info3z00(BgL_getfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2effectzd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_pragmaz00_bglt BGl_z62pragmazf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2valloczf2Cinfozd2ftypez90zzcfa_info3z00(obj_t, obj_t);
	static BgL_getfieldz00_bglt
		BGl_z62makezd2getfieldzf2Cinfoz42zzcfa_info3z00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2tvectorzf3za3zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_setfieldz00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2vtypez50zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62instanceofzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2exprza2z30zzcfa_info3z00(BgL_vallocz00_bglt);
	static BgL_approxz00_bglt BGl_z62newzf2Cinfozd2approxz42zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2ftypezf0zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_getfieldz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_vsetz12zf2Cinfozd2tvectorzf3zc1zzcfa_info3z00(BgL_vsetz12z12_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2effectz20zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t BGl_z62newzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2keyz20zzcfa_info3z00(BgL_vrefz00_bglt);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_z62valloczf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2typezd2setz12z32zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt, BgL_typez00_bglt);
	static BgL_variablez00_bglt BGl_z62lambda2104z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2105z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62vlengthzf2Cinfozd2typez42zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62valloczf2Cinfozb2optimzf3zd1zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2effectz32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	static obj_t BGl_z62zc3z04anonymousza31999ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static BgL_vrefz00_bglt BGl_z62makezd2vrefzf2Cinfoz42zzcfa_info3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2110z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2111z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2118z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2119z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2126z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2127z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_vallocz00_bglt);
	static BgL_approxz00_bglt
		BGl_z62setfieldzf2Cinfozd2approxz42zzcfa_info3z00(obj_t, obj_t);
	static BgL_vrefz00_bglt BGl_z62vrefzf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2typezd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2exprza2z50zzcfa_info3z00(BgL_castzd2nullzd2_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2typez32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	static obj_t BGl_z62newzf2Cinfozd2argszd2typezd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vsetz12zf2Cinfoze0zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_getfieldz00_bglt
		BGl_makezd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2stackzd2stampzd2setz12z80zzcfa_info3z00
		(BgL_vallocz00_bglt, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vrefzf2Cinfozd2unsafez42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2effectz20zzcfa_info3z00(BgL_setfieldz00_bglt);
	static obj_t BGl_z62instanceofzf2Cinfozd2effectz42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vlengthzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza32079ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozb2optimzd2effectzf0zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_castzd2nullzf2Cinfozd2approxzf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(BgL_vrefz00_bglt,
		obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00();
	static obj_t BGl_gczd2rootszd2initz00zzcfa_info3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2vtypezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2otypezd2setz12z30zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	static BgL_castzd2nullzd2_bglt
		BGl_z62castzd2nullzf2Cinfozd2nilz90zzcfa_info3z00(obj_t);
	static BgL_typez00_bglt BGl_z62pragmazf2Cinfozd2typez42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2vtypez20zzcfa_info3z00(BgL_vrefz00_bglt);
	static BgL_newz00_bglt BGl_z62makezd2newzf2Cinfoz42zzcfa_info3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00(obj_t);
	static BgL_variablez00_bglt
		BGl_z62prezd2valloczf2Cinfozd2ownerz90zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2typez20zzcfa_info3z00(BgL_vrefz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_vlengthz00_bglt);
	static obj_t BGl_z62vsetz12zf2Cinfozd2effectzd2setz12z90zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2tvectorzf3zd2setz12z13zzcfa_info3z00(BgL_vrefz00_bglt,
		bool_t);
	static obj_t BGl_z62zc3z04anonymousza31920ze3ze5zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_instanceofzf2Cinfozd2typez20zzcfa_info3z00(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2vtypezd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62vsetz12zf2Cinfozd2keyz50zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	static BgL_variablez00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2ownerzf0zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62vrefzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62setfieldzf2Cinfozd2otypez42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_vsetz12zf2Cinfozf3z13zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_vlengthz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt,
		obj_t);
	static BgL_getfieldz00_bglt BGl_z62lambda1812z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2czd2formatzf2zzcfa_info3z00
		(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_makezd2valloczf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt);
	static BgL_getfieldz00_bglt BGl_z62lambda1822z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_setfieldzf2Cinfozd2otypez20zzcfa_info3z00(BgL_setfieldz00_bglt);
	static BgL_getfieldz00_bglt BGl_z62lambda1825z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt, BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62newzf2Cinfozd2typez42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt, BgL_approxz00_bglt, long, BgL_variablez00_bglt, bool_t,
		obj_t, bool_t);
	static BgL_approxz00_bglt BGl_z62lambda1832z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1833z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2exprza2zd2setz12zf2zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzd2_bglt
		BGl_castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00();
	static obj_t BGl_z62pragmazf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_setfieldz00_bglt BGl_z62lambda1843z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_setfieldz00_bglt BGl_z62lambda1847z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2stackablezf3z03zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt, obj_t);
	static obj_t BGl_z62prezd2valloczf2Cinfozd2locz90zzcfa_info3z00(obj_t, obj_t);
	static BgL_setfieldz00_bglt BGl_z62lambda1850z62zzcfa_info3z00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62lambda1858z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1859z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_getfieldzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_vrefz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_valloczf2Cinfozd2ftypez20zzcfa_info3z00(BgL_vallocz00_bglt);
	static BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2otypez42zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2ftypez32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_info3z00 = BUNSPEC;
	static BgL_newz00_bglt BGl_z62lambda1869z62zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2loczf2zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t BGl_z62valloczf2Cinfozb2optimzd2loczf0zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_prezd2valloczf2Cinfozf3zd3zzcfa_info3z00(obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62vrefzf2Cinfozd2effectz42zzcfa_info3z00(obj_t, obj_t);
	static BgL_newz00_bglt BGl_z62lambda1872z62zzcfa_info3z00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62getfieldzf2Cinfozd2approxz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2valloczf2Cinfozd2exprza2z32zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_newz00_bglt BGl_z62lambda1875z62zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2otypezd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt, BgL_typez00_bglt);
	static obj_t BGl_z62vlengthzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL BgL_vsetz12z12_bglt
		BGl_vsetz12zf2Cinfozd2nilz32zzcfa_info3z00();
	static BgL_approxz00_bglt BGl_z62lambda1883z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1884z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2effectz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_approxz00_bglt
		BGl_z62pragmazf2Cinfozd2approxz42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_info3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_vlengthz00_bglt,
		obj_t);
	static BgL_instanceofz00_bglt BGl_z62lambda1892z62zzcfa_info3z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozb2optimzd2exprza2z52zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_instanceofz00_bglt BGl_z62lambda1896z62zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_instanceofz00_bglt BGl_z62lambda1899z62zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2effectz20zzcfa_info3z00(BgL_getfieldz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32112ze3ze5zzcfa_info3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2classzd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2effectz20zzcfa_info3z00(BgL_vlengthz00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_info3z00();
	BGL_EXPORTED_DECL BgL_pragmaz00_bglt
		BGl_pragmazf2Cinfozd2nilz20zzcfa_info3z00();
	static BgL_typez00_bglt
		BGl_z62prezd2valloczf2Cinfozd2typez90zzcfa_info3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2valloczf2Cinfozd2otypezf2zzcfa_info3z00(BgL_vallocz00_bglt);
	static obj_t BGl_z62castzd2nullzf2Cinfozd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_getfieldz00_bglt
		BGl_z62getfieldzf2Cinfozd2nilz42zzcfa_info3z00(obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static BgL_typez00_bglt
		BGl_z62instanceofzf2Cinfozd2classz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_newzf2Cinfozd2approxz20zzcfa_info3z00(BgL_newz00_bglt);
	static obj_t BGl_z62vrefzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_setfieldz00_bglt
		BGl_z62makezd2setfieldzf2Cinfoz42zzcfa_info3z00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2locz20zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_pragmaz00_bglt,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vrefzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static obj_t BGl_z62vrefzf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62vrefzf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2stackablezf3zd2setz12za1zzcfa_info3z00
		(BgL_vallocz00_bglt, bool_t);
	static obj_t BGl_z62getfieldzf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt,
		BgL_typez00_bglt);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2seenzf3zd2setz12zc3zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2ftypezd2setz12z90zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2sidezd2effectz20zzcfa_info3z00
		(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vlengthzf2Cinfozd2tvectorzf3zd2setz12z13zzcfa_info3z00
		(BgL_vlengthz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_valloczf2Cinfozb2optimzd2stackablezf3z61zzcfa_info3z00
		(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_pragmazf2Cinfozd2approxz20zzcfa_info3z00(BgL_pragmaz00_bglt);
	static BgL_castzd2nullzd2_bglt
		BGl_z62makezd2castzd2nullzf2Cinfoz90zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2keyz92zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2valloczf2Cinfozd2otypezd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt, BgL_typez00_bglt);
	static obj_t
		BGl_z62castzd2nullzf2Cinfozd2effectzd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31898ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2valloczf2Cinfozd2czd2formatz42zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62castzd2nullzf2Cinfozd2keyz90zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62castzd2nullzf2Cinfozf3zb1zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_castzd2nullzd2_bglt
		BGl_makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_approxz00_bglt);
	static BgL_vallocz00_bglt
		BGl_z62makezd2valloczf2Cinfozb2optimzf0zzcfa_info3z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2locz20zzcfa_info3z00(BgL_newz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_newz00_bglt);
	static obj_t BGl_z62vrefzf2Cinfozd2tvectorzf3zd2setz12z71zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_vrefzf2Cinfozd2approxz20zzcfa_info3z00(BgL_vrefz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_newzf2Cinfozf3z01zzcfa_info3z00(obj_t);
	static obj_t
		BGl_z62getfieldzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2vtypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_vlengthz00_bglt
		BGl_z62makezd2vlengthzf2Cinfoz42zzcfa_info3z00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2valloczf2Cinfozd2keyzd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_vrefz00_bglt
		BGl_makezd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_typez00_bglt, bool_t, BgL_approxz00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_setfieldz00_bglt
		BGl_makezd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_z62setfieldzf2Cinfozd2fnamez42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2otypezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_vallocz00_bglt
		BGl_makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2otypez50zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62newzf2Cinfozf3z63zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setfieldzf2Cinfozd2fnamez20zzcfa_info3z00(BgL_setfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_pragmaz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_vrefz00_bglt);
	static obj_t BGl_z62newzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62setfieldzf2Cinfozd2locz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_castzd2nullzf2Cinfozd2keyzf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt);
	static obj_t BGl_z62setfieldzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_info3z00();
	static obj_t BGl_z62vsetz12zf2Cinfozd2unsafez50zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_newzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_newz00_bglt, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_instanceofzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00
		(BgL_instanceofz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2locz20zzcfa_info3z00(BgL_getfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2seenzf3zd2setz12za1zzcfa_info3z00
		(BgL_vallocz00_bglt, bool_t);
	static obj_t BGl_z62valloczf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62pragmazf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t, obj_t);
	static obj_t
		BGl_z62newzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62setfieldzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62getfieldzf2Cinfozd2otypez42zzcfa_info3z00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62setfieldzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2tvectorzf3zb1zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_vallocz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_getfieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2exprza2z90zzcfa_info3z00(BgL_vsetz12z12_bglt);
	extern obj_t BGl_instanceofz00zzast_nodez00;
	static obj_t BGl_z62valloczf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62valloczf2Cinfozd2otypez42zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62valloczf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2czd2formatz82zzcfa_info3z00(obj_t,
		obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2typezd2setz12z90zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getfieldzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getfieldzf2Cinfozd2otypez20zzcfa_info3z00(BgL_getfieldz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_setfieldzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_setfieldz00_bglt);
	BGL_EXPORTED_DECL BgL_vlengthz00_bglt
		BGl_vlengthzf2Cinfozd2nilz20zzcfa_info3z00();
	static obj_t BGl_z62vlengthzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2keyz32zzcfa_info3z00(BgL_vsetz12z12_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozb2optimzd2effectz92zzcfa_info3z00(BgL_vallocz00_bglt);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2czd2formatze0zzcfa_info3z00(BgL_vsetz12z12_bglt);
	static obj_t BGl_z62zc3z04anonymousza31824ze3ze5zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62vlengthzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vrefzf2Cinfozd2locz20zzcfa_info3z00(BgL_vrefz00_bglt);
	static obj_t BGl_z62vsetz12zf2Cinfozd2vtypezd2setz12z90zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2otypez20zzcfa_info3z00(BgL_vrefz00_bglt);
	static obj_t BGl_z62valloczf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62valloczf2Cinfozb2optimzd2stackablezf3zd2setz12zc3zzcfa_info3z00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62vsetz12zf2Cinfozd2keyzd2setz12z90zzcfa_info3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62newzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_pragmazf2Cinfozd2keyz20zzcfa_info3z00(BgL_pragmaz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_valloczf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt,
		obj_t);
	static obj_t BGl_z62getfieldzf2Cinfozd2keyz42zzcfa_info3z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_setfieldzf2Cinfozf2zzcfa_info3z00 = BUNSPEC;
	static BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62lambda1907z62zzcfa_info3z00(obj_t, obj_t);
	static obj_t BGl_z62lambda1908z62zzcfa_info3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vsetz12zf2Cinfozd2keyzd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt,
		obj_t);
	static obj_t
		BGl_z62vrefzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t, obj_t,
		obj_t);
	static BgL_castzd2nullzd2_bglt BGl_z62lambda1915z62zzcfa_info3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_castzd2nullzd2_bglt BGl_z62lambda1918z62zzcfa_info3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_instanceofzf2Cinfozd2approxz20zzcfa_info3z00(BgL_instanceofz00_bglt);
	static obj_t __cnst[24];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2ftypezd2setz12zd2envz20zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2445za7,
		BGl_z62vsetz12zf2Cinfozd2ftypezd2setz12z90zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vrefzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2vrefza7f2446za7,
		BGl_z62makezd2vrefzf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72447za7,
		BGl_z62vrefzf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22448z00,
		BGl_z62instanceofzf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22449z00,
		BGl_z62instanceofzf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22450z00,
		BGl_z62instanceofzf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22451z00,
		BGl_z62instanceofzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2452z00,
		BGl_z62vlengthzf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2453za7,
		BGl_z62newzf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2400z00zzcfa_info3z00,
		BgL_bgl_za762lambda2014za7622454z00, BGl_z62lambda2014z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2401z00zzcfa_info3z00,
		BgL_bgl_za762lambda2000za7622455z00, BGl_z62lambda2000z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2402z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2456za7,
		BGl_z62zc3z04anonymousza31999ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2403z00zzcfa_info3z00,
		BgL_bgl_za762lambda1997za7622457z00, BGl_z62lambda1997z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2404z00zzcfa_info3z00,
		BgL_bgl_za762lambda1993za7622458z00, BGl_z62lambda1993z62zzcfa_info3z00, 0L,
		BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2405z00zzcfa_info3z00,
		BgL_bgl_za762lambda2041za7622459z00, BGl_z62lambda2041z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2406z00zzcfa_info3z00,
		BgL_bgl_za762lambda2040za7622460z00, BGl_z62lambda2040z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2407z00zzcfa_info3z00,
		BgL_bgl_za762lambda2033za7622461z00, BGl_z62lambda2033z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2408z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2462za7,
		BGl_z62zc3z04anonymousza32032ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2409z00zzcfa_info3z00,
		BgL_bgl_za762lambda2029za7622463z00, BGl_z62lambda2029z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2410z00zzcfa_info3z00,
		BgL_bgl_za762lambda2024za7622464z00, BGl_z62lambda2024z62zzcfa_info3z00, 0L,
		BUNSPEC, 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2411z00zzcfa_info3z00,
		BgL_bgl_za762lambda2064za7622465z00, BGl_z62lambda2064z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2fnamezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2466z00,
		BGl_z62getfieldzf2Cinfozd2fnamez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2412z00zzcfa_info3z00,
		BgL_bgl_za762lambda2063za7622467z00, BGl_z62lambda2063z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2468z00,
		BGl_z62setfieldzf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2413z00zzcfa_info3z00,
		BgL_bgl_za762lambda2055za7622469z00, BGl_z62lambda2055z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2414z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2470za7,
		BGl_z62zc3z04anonymousza32054ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2471za7,
		BGl_z62newzf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2415z00zzcfa_info3z00,
		BgL_bgl_za762lambda2052za7622472z00, BGl_z62lambda2052z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2416z00zzcfa_info3z00,
		BgL_bgl_za762lambda2049za7622473z00, BGl_z62lambda2049z62zzcfa_info3z00, 0L,
		BUNSPEC, 10);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2417z00zzcfa_info3z00,
		BgL_bgl_za762lambda2088za7622474z00, BGl_z62lambda2088z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2418z00zzcfa_info3z00,
		BgL_bgl_za762lambda2087za7622475z00, BGl_z62lambda2087z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2419z00zzcfa_info3z00,
		BgL_bgl_za762lambda2093za7622476z00, BGl_z62lambda2093z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2nilzd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2477za7,
		BGl_z62vsetz12zf2Cinfozd2nilz50zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2420z00zzcfa_info3z00,
		BgL_bgl_za762lambda2092za7622478z00, BGl_z62lambda2092z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2421z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2479za7,
		BGl_z62zc3z04anonymousza32100ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2422z00zzcfa_info3z00,
		BgL_bgl_za762lambda2099za7622480z00, BGl_z62lambda2099z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2423z00zzcfa_info3z00,
		BgL_bgl_za762lambda2098za7622481z00, BGl_z62lambda2098z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2424z00zzcfa_info3z00,
		BgL_bgl_za762lambda2105za7622482z00, BGl_z62lambda2105z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2425z00zzcfa_info3z00,
		BgL_bgl_za762lambda2104za7622483z00, BGl_z62lambda2104z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2426z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2484za7,
		BGl_z62zc3z04anonymousza32112ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2427z00zzcfa_info3z00,
		BgL_bgl_za762lambda2111za7622485z00, BGl_z62lambda2111z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2428z00zzcfa_info3z00,
		BgL_bgl_za762lambda2110za7622486z00, BGl_z62lambda2110z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2429z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2487za7,
		BGl_z62zc3z04anonymousza32120ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2430z00zzcfa_info3z00,
		BgL_bgl_za762lambda2119za7622488z00, BGl_z62lambda2119z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2431z00zzcfa_info3z00,
		BgL_bgl_za762lambda2118za7622489z00, BGl_z62lambda2118z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2432z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2490za7,
		BGl_z62zc3z04anonymousza32128ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2433z00zzcfa_info3z00,
		BgL_bgl_za762lambda2127za7622491z00, BGl_z62lambda2127z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2434z00zzcfa_info3z00,
		BgL_bgl_za762lambda2126za7622492z00, BGl_z62lambda2126z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2435z00zzcfa_info3z00,
		BgL_bgl_za762lambda2080za7622493z00, BGl_z62lambda2080z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2436z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2494za7,
		BGl_z62zc3z04anonymousza32079ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2437z00zzcfa_info3z00,
		BgL_bgl_za762lambda2077za7622495z00, BGl_z62lambda2077z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2438z00zzcfa_info3z00,
		BgL_bgl_za762lambda2072za7622496z00, BGl_z62lambda2072z62zzcfa_info3z00, 0L,
		BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2valloczf2Cinfozd2envz20zzcfa_info3z00,
		BgL_bgl_za762makeza7d2preza7d22497za7,
		BGl_z62makezd2prezd2valloczf2Cinfoz90zzcfa_info3z00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2498z00,
		BGl_z62getfieldzf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2otypezd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72499za7,
		BGl_z62prezd2valloczf2Cinfozd2otypez90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72500za7,
		BGl_z62vrefzf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2501z00,
		BGl_z62pragmazf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22502z00,
		BGl_z62instanceofzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2nilzd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72503za7,
		BGl_z62prezd2valloczf2Cinfozd2nilz90zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2sidezd2effectzd2setz12zd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2504za7,
		BGl_z62vsetz12zf2Cinfozd2sidezd2effectzd2setz12z42zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2keyzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2505za7,
		BGl_z62castzd2nullzf2Cinfozd2keyzd2setz12z50zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2ftypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2506z00,
		BGl_z62vlengthzf2Cinfozd2ftypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2effectzd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2507z00,
		BGl_z62valloczf2Cinfozb2optimzd2effectzf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2vtypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2508z00,
		BGl_z62vlengthzf2Cinfozd2vtypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2vtypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2509z00,
		BGl_z62vlengthzf2Cinfozd2vtypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2510z00,
		BGl_z62getfieldzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2511za7,
		BGl_z62newzf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72512za7,
		BGl_z62prezd2valloczf2Cinfozd2effectzd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72513za7,
		BGl_z62vrefzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2514z00,
		BGl_z62vlengthzf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72515za7,
		BGl_z62vrefzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2516z00,
		BGl_z62pragmazf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2517z00,
		BGl_z62valloczf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2lostzd2stampzd2envz92zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2518z00,
		BGl_z62valloczf2Cinfozb2optimzd2lostzd2stampz22zzcfa_info3z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2519z00,
		BGl_z62vlengthzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2520z00,
		BGl_z62pragmazf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2521z00,
		BGl_z62setfieldzf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22522z00,
		BGl_z62instanceofzf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2approxzd2setz12zd2envz80zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2523z00,
		BGl_z62valloczf2Cinfozb2optimzd2approxzd2setz12z30zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vsetz12zf2Cinfozd2envze0zzcfa_info3z00,
		BgL_bgl_za762makeza7d2vsetza712524za7,
		BGl_z62makezd2vsetz12zf2Cinfoz50zzcfa_info3z00, 0L, BUNSPEC, 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2otypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72525za7,
		BGl_z62vrefzf2Cinfozd2otypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72526za7,
		BGl_z62prezd2valloczf2Cinfozd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2exprza2zd2setz12zd2envz22zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2527z00,
		BGl_z62valloczf2Cinfozb2optimzd2exprza2zd2setz12z92zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2528z00,
		BGl_z62setfieldzf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2otypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2529z00,
		BGl_z62getfieldzf2Cinfozd2otypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2otypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2530z00,
		BGl_z62valloczf2Cinfozd2otypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2531z00,
		BGl_z62getfieldzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2532za7,
		BGl_z62newzf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2ownerzd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72533za7,
		BGl_z62prezd2valloczf2Cinfozd2ownerz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22534z00,
		BGl_z62instanceofzf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2fnamezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2535z00,
		BGl_z62setfieldzf2Cinfozd2fnamez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2otypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72536za7,
		BGl_z62vrefzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2537z00,
		BGl_z62getfieldzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2538z00,
		BGl_z62vlengthzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2exprza2zd2envz82zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72539za7,
		BGl_z62prezd2valloczf2Cinfozd2exprza2z32zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2540z00,
		BGl_z62getfieldzf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2ftypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2541z00,
		BGl_z62getfieldzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2effectzd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2542za7,
		BGl_z62vsetz12zf2Cinfozd2effectz50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72543za7,
		BGl_z62vrefzf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2544z00,
		BGl_z62pragmazf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2czd2formatzd2envz20zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2545za7,
		BGl_z62newzf2Cinfozd2czd2formatz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2546z00,
		BGl_z62vlengthzf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2547z00,
		BGl_z62pragmazf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2548z00,
		BGl_z62pragmazf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2keyzd2setz12zd2envz20zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2549za7,
		BGl_z62vsetz12zf2Cinfozd2keyzd2setz12z90zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2otypezd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2550za7,
		BGl_z62vsetz12zf2Cinfozd2otypez50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vlengthzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2vlengt2551z00,
		BGl_z62makezd2vlengthzf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2exprza2zd2setz12zd2envz42zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72552za7,
		BGl_z62prezd2valloczf2Cinfozd2exprza2zd2setz12zf2zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2553z00,
		BGl_z62getfieldzf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2otypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2554z00,
		BGl_z62setfieldzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2unsafezd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2555za7,
		BGl_z62vsetz12zf2Cinfozd2unsafez50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2otypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2556z00,
		BGl_z62valloczf2Cinfozd2otypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2valloczf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2valloc2557z00,
		BGl_z62makezd2valloczf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2seenzf3zd2setz12zd2envz73zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2558z00,
		BGl_z62valloczf2Cinfozb2optimzd2seenzf3zd2setz12zc3zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2559z00,
		BGl_z62setfieldzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72560za7,
		BGl_z62vrefzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2561z00,
		BGl_z62vlengthzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2czd2formatzd2envz20zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2562z00,
		BGl_z62valloczf2Cinfozd2czd2formatz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2563za7,
		BGl_z62castzd2nullzf2Cinfozd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2564z00,
		BGl_z62valloczf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2czd2formatzd2envz20zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2565z00,
		BGl_z62setfieldzf2Cinfozd2czd2formatz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72566za7,
		BGl_z62vrefzf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2classzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22567z00,
		BGl_z62instanceofzf2Cinfozd2classz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2568z00,
		BGl_z62getfieldzf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2exprza2zd2setz12zd2envz42zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2569za7,
		BGl_z62castzd2nullzf2Cinfozd2exprza2zd2setz12zf2zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2570za7,
		BGl_z62newzf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2571z00,
		BGl_z62valloczf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2572z00,
		BGl_z62setfieldzf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2573za7,
		BGl_z62newzf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2typezd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72574za7,
		BGl_z62prezd2valloczf2Cinfozd2typezd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2otypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2575z00,
		BGl_z62setfieldzf2Cinfozd2otypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2576z00,
		BGl_z62valloczf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2loczd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2577z00,
		BGl_z62valloczf2Cinfozb2optimzd2loczf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22578z00,
		BGl_z62instanceofzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2loczd2envz20zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2579za7,
		BGl_z62castzd2nullzf2Cinfozd2locz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22580z00,
		BGl_z62instanceofzf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2581z00,
		BGl_z62vlengthzf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2582z00,
		BGl_z62valloczf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2tvectorzf3zd2envz01zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2583z00,
		BGl_z62vlengthzf2Cinfozd2tvectorzf3zb1zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72584za7,
		BGl_z62vrefzf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2sidezd2effectzd2envz32zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2585za7,
		BGl_z62vsetz12zf2Cinfozd2sidezd2effectz82zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2typezd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2586za7,
		BGl_z62vsetz12zf2Cinfozd2typez50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2exprza2zd2envz42zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2587za7,
		BGl_z62vsetz12zf2Cinfozd2exprza2zf2zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2588z00,
		BGl_z62pragmazf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2czd2formatzd2envz20zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22589z00,
		BGl_z62instanceofzf2Cinfozd2czd2formatz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2setfieldzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2setfie2590z00,
		BGl_z62makezd2setfieldzf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2keyzd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2591za7,
		BGl_z62vsetz12zf2Cinfozd2keyz50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2otypezd2setz12zd2envz20zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2592za7,
		BGl_z62vsetz12zf2Cinfozd2otypezd2setz12z90zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2vtypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72593za7,
		BGl_z62vrefzf2Cinfozd2vtypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2594z00,
		BGl_z62getfieldzf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2595za7,
		BGl_z62castzd2nullzf2Cinfozd2effectzd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2ftypezd2setz12zd2envz80zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2596z00,
		BGl_z62valloczf2Cinfozb2optimzd2ftypezd2setz12z30zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2keyzd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72597za7,
		BGl_z62prezd2valloczf2Cinfozd2keyz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2approxzd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2598z00,
		BGl_z62valloczf2Cinfozb2optimzd2approxzf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2599z00,
		BGl_z62pragmazf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2argszd2typezd2envz20zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2600za7,
		BGl_z62newzf2Cinfozd2argszd2typez90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2601z00,
		BGl_z62valloczf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2tvectorzf3zd2envz13zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2602za7,
		BGl_z62vsetz12zf2Cinfozd2tvectorzf3za3zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2603z00,
		BGl_z62setfieldzf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2604z00,
		BGl_z62pragmazf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2typezd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2605z00,
		BGl_z62valloczf2Cinfozb2optimzd2typezf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2606z00,
		BGl_z62valloczf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzf3zd2envz61zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2607z00,
		BGl_z62valloczf2Cinfozb2optimzf3zd1zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2otypezd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2608z00,
		BGl_z62valloczf2Cinfozb2optimzd2otypezf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2nilzd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2609z00,
		BGl_z62valloczf2Cinfozb2optimzd2nilzf0zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72610za7,
		BGl_z62vrefzf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2ftypezd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72611za7,
		BGl_z62prezd2valloczf2Cinfozd2ftypez90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2612z00,
		BGl_z62setfieldzf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2nilzd2envz20zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2613za7,
		BGl_z62castzd2nullzf2Cinfozd2nilz90zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2ftypezd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72614za7,
		BGl_z62prezd2valloczf2Cinfozd2ftypezd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczf2Cinfozd2nilzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2615z00,
		BGl_z62valloczf2Cinfozd2nilz42zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2616z00,
		BGl_z62vlengthzf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2tvectorzf3zd2envz01zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72617za7,
		BGl_z62vrefzf2Cinfozd2tvectorzf3zb1zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72618za7,
		BGl_z62vrefzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2619z00,
		BGl_z62vlengthzf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setfieldzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2620z00,
		BGl_z62setfieldzf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vlengthzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2621z00,
		BGl_z62vlengthzf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2622z00,
		BGl_z62setfieldzf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2sidezd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72623za7,
		BGl_z62prezd2valloczf2Cinfozd2sidezd2effectz42zzcfa_info3z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2effectzd2setz12zd2envz80zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2624z00,
		BGl_z62valloczf2Cinfozb2optimzd2effectzd2setz12z30zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72625za7,
		BGl_z62vrefzf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2unsafezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72626za7,
		BGl_z62vrefzf2Cinfozd2unsafez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2argszd2typezd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2627za7,
		BGl_z62newzf2Cinfozd2argszd2typezd2setz12z50zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2628za7,
		BGl_z62newzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2typezd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72629za7,
		BGl_z62prezd2valloczf2Cinfozd2typez90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2approxzd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2630za7,
		BGl_z62vsetz12zf2Cinfozd2approxz50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozf3zd2envz01zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72631za7,
		BGl_z62prezd2valloczf2Cinfozf3zb1zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2632z00,
		BGl_z62getfieldzf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2czd2formatzd2envz92zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2633z00,
		BGl_z62valloczf2Cinfozb2optimzd2czd2formatz22zzcfa_info3z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72634za7,
		BGl_z62vrefzf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2635z00,
		BGl_z62setfieldzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2636z00,
		BGl_z62pragmazf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2637z00,
		BGl_z62valloczf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2638z00,
		BGl_z62vlengthzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2ftypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72639za7,
		BGl_z62vrefzf2Cinfozd2ftypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2exprza2zd2envz82zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2640za7,
		BGl_z62castzd2nullzf2Cinfozd2exprza2z32zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2vtypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72641za7,
		BGl_z62vrefzf2Cinfozd2vtypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2642z00,
		BGl_z62getfieldzf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2ownerzd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2643z00,
		BGl_z62valloczf2Cinfozb2optimzd2ownerzf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2ftypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2644z00,
		BGl_z62getfieldzf2Cinfozd2ftypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2vtypezd2setz12zd2envz20zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2645za7,
		BGl_z62vsetz12zf2Cinfozd2vtypezd2setz12z90zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2ftypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2646z00,
		BGl_z62valloczf2Cinfozd2ftypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2otypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2647z00,
		BGl_z62getfieldzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2exprza2zd2envze2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2648z00,
		BGl_z62valloczf2Cinfozb2optimzd2exprza2z52zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pragmazf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2649z00,
		BGl_z62pragmazf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2650z00,
		BGl_z62valloczf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2651z00,
		BGl_z62setfieldzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2czd2formatzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72652za7,
		BGl_z62prezd2valloczf2Cinfozd2czd2formatz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2stackablezf3zd2setz12zd2envz73zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2653z00,
		BGl_z62valloczf2Cinfozb2optimzd2stackablezf3zd2setz12zc3zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2approxzd2envz20zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2654za7,
		BGl_z62castzd2nullzf2Cinfozd2approxz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2655za7,
		BGl_z62newzf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2tvectorzf3zd2setz12zd2envzc1zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2656z00,
		BGl_z62vlengthzf2Cinfozd2tvectorzf3zd2setz12z71zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2typezd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2657za7,
		BGl_z62castzd2nullzf2Cinfozd2typezd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2classzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22658z00,
		BGl_z62instanceofzf2Cinfozd2classzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2ftypezd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2659za7,
		BGl_z62vsetz12zf2Cinfozd2ftypez50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2660za7,
		BGl_z62newzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2vtypezd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2661za7,
		BGl_z62vsetz12zf2Cinfozd2vtypez50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2662za7,
		BGl_z62newzf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2stackzd2stampzd2envz92zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2663z00,
		BGl_z62valloczf2Cinfozb2optimzd2stackzd2stampz22zzcfa_info3z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22664z00,
		BGl_z62instanceofzf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2formatzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2665z00,
		BGl_z62pragmazf2Cinfozd2formatz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2666z00,
		BGl_z62valloczf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2typezd2envz20zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2667za7,
		BGl_z62castzd2nullzf2Cinfozd2typez90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2668z00,
		BGl_z62vlengthzf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2exprza2zd2setz12zd2envz82zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2669za7,
		BGl_z62vsetz12zf2Cinfozd2exprza2zd2setz12z32zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2keyzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22670z00,
		BGl_z62instanceofzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2czd2formatzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2671za7,
		BGl_z62castzd2nullzf2Cinfozd2czd2formatz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2typezd2setz12zd2envz80zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2672z00,
		BGl_z62valloczf2Cinfozb2optimzd2typezd2setz12z30zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2pragma2673z00,
		BGl_z62makezd2pragmazf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2ftypezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2674z00,
		BGl_z62setfieldzf2Cinfozd2ftypez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22675z00,
		BGl_z62instanceofzf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2ftypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72676za7,
		BGl_z62vrefzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2exprza2zd2envz50zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2677z00,
		BGl_z62vlengthzf2Cinfozd2exprza2ze0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozf3zd2envz01zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2678za7,
		BGl_z62castzd2nullzf2Cinfozf3zb1zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2342z00zzcfa_info3z00,
		BgL_bgl_za762lambda1792za7622679z00, BGl_z62lambda1792z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2343z00zzcfa_info3z00,
		BgL_bgl_za762lambda1791za7622680z00, BGl_z62lambda1791z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2344z00zzcfa_info3z00,
		BgL_bgl_za762lambda1773za7622681z00, BGl_z62lambda1773z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2345z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2682za7,
		BGl_z62zc3z04anonymousza31772ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2346z00zzcfa_info3z00,
		BgL_bgl_za762lambda1769za7622683z00, BGl_z62lambda1769z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2347z00zzcfa_info3z00,
		BgL_bgl_za762lambda1760za7622684z00, BGl_z62lambda1760z62zzcfa_info3z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2348z00zzcfa_info3z00,
		BgL_bgl_za762lambda1833za7622685z00, BGl_z62lambda1833z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2349z00zzcfa_info3z00,
		BgL_bgl_za762lambda1832za7622686z00, BGl_z62lambda1832z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2439z00zzcfa_info3z00,
		BgL_bgl_string2439za700za7za7c2687za7, "", 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2getfieldzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2getfie2688z00,
		BGl_z62makezd2getfieldzf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2350z00zzcfa_info3z00,
		BgL_bgl_za762lambda1825za7622689z00, BGl_z62lambda1825z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2351z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2690za7,
		BGl_z62zc3z04anonymousza31824ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2352z00zzcfa_info3z00,
		BgL_bgl_za762lambda1822za7622691z00, BGl_z62lambda1822z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2353z00zzcfa_info3z00,
		BgL_bgl_za762lambda1812za7622692z00, BGl_z62lambda1812z62zzcfa_info3z00, 0L,
		BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2354z00zzcfa_info3z00,
		BgL_bgl_za762lambda1859za7622693z00, BGl_z62lambda1859z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2440z00zzcfa_info3z00,
		BgL_bgl_string2440za700za7za7c2694za7, "cfa_info3", 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2355z00zzcfa_info3z00,
		BgL_bgl_za762lambda1858za7622695z00, BGl_z62lambda1858z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2441z00zzcfa_info3z00,
		BgL_bgl_string2441za700za7za7c2696za7,
		"valloc/Cinfo+optim seen? obj stack-stamp stackable? long lost-stamp value-approx valloc/Cinfo pre-valloc/Cinfo owner vlength/Cinfo vset!/Cinfo vref/Cinfo bool tvector? cast-null/Cinfo instanceof/Cinfo new/Cinfo setfield/Cinfo getfield/Cinfo cfa_info3 pragma/Cinfo approx ",
		271);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2356z00zzcfa_info3z00,
		BgL_bgl_za762lambda1850za7622697z00, BGl_z62lambda1850z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2czd2formatzd2envz20zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2698z00,
		BGl_z62vlengthzf2Cinfozd2czd2formatz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2357z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2699za7,
		BGl_z62zc3z04anonymousza31849ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2358z00zzcfa_info3z00,
		BgL_bgl_za762lambda1847za7622700z00, BGl_z62lambda1847z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2359z00zzcfa_info3z00,
		BgL_bgl_za762lambda1843za7622701z00, BGl_z62lambda1843z62zzcfa_info3z00, 0L,
		BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2702z00,
		BGl_z62pragmazf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2newzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2newza7f22703za7,
		BGl_z62makezd2newzf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2704z00,
		BGl_z62getfieldzf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2360z00zzcfa_info3z00,
		BgL_bgl_za762lambda1884za7622705z00, BGl_z62lambda1884z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2361z00zzcfa_info3z00,
		BgL_bgl_za762lambda1883za7622706z00, BGl_z62lambda1883z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2362z00zzcfa_info3z00,
		BgL_bgl_za762lambda1875za7622707z00, BGl_z62lambda1875z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2363z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2708za7,
		BGl_z62zc3z04anonymousza31874ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2364z00zzcfa_info3z00,
		BgL_bgl_za762lambda1872za7622709z00, BGl_z62lambda1872z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2365z00zzcfa_info3z00,
		BgL_bgl_za762lambda1869za7622710z00, BGl_z62lambda1869z62zzcfa_info3z00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2366z00zzcfa_info3z00,
		BgL_bgl_za762lambda1908za7622711z00, BGl_z62lambda1908z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2367z00zzcfa_info3z00,
		BgL_bgl_za762lambda1907za7622712z00, BGl_z62lambda1907z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2368z00zzcfa_info3z00,
		BgL_bgl_za762lambda1899za7622713z00, BGl_z62lambda1899z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2369z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2714za7,
		BGl_z62zc3z04anonymousza31898ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2370z00zzcfa_info3z00,
		BgL_bgl_za762lambda1896za7622715z00, BGl_z62lambda1896z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2371z00zzcfa_info3z00,
		BgL_bgl_za762lambda1892za7622716z00, BGl_z62lambda1892z62zzcfa_info3z00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2372z00zzcfa_info3z00,
		BgL_bgl_za762lambda1930za7622717z00, BGl_z62lambda1930z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2373z00zzcfa_info3z00,
		BgL_bgl_za762lambda1929za7622718z00, BGl_z62lambda1929z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2374z00zzcfa_info3z00,
		BgL_bgl_za762lambda1921za7622719z00, BGl_z62lambda1921z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2375z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2720za7,
		BGl_z62zc3z04anonymousza31920ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2376z00zzcfa_info3z00,
		BgL_bgl_za762lambda1918za7622721z00, BGl_z62lambda1918z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2377z00zzcfa_info3z00,
		BgL_bgl_za762lambda1915za7622722z00, BGl_z62lambda1915z62zzcfa_info3z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2378z00zzcfa_info3z00,
		BgL_bgl_za762lambda1951za7622723z00, BGl_z62lambda1951z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2379z00zzcfa_info3z00,
		BgL_bgl_za762lambda1950za7622724z00, BGl_z62lambda1950z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2380z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2725za7,
		BGl_z62zc3z04anonymousza31958ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2381z00zzcfa_info3z00,
		BgL_bgl_za762lambda1957za7622726z00, BGl_z62lambda1957z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2382z00zzcfa_info3z00,
		BgL_bgl_za762lambda1956za7622727z00, BGl_z62lambda1956z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7f2728za7,
		BGl_z62newzf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2383z00zzcfa_info3z00,
		BgL_bgl_za762lambda1943za7622729z00, BGl_z62lambda1943z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2384z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2730za7,
		BGl_z62zc3z04anonymousza31942ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2385z00zzcfa_info3z00,
		BgL_bgl_za762lambda1940za7622731z00, BGl_z62lambda1940z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2386z00zzcfa_info3z00,
		BgL_bgl_za762lambda1937za7622732z00, BGl_z62lambda1937z62zzcfa_info3z00, 0L,
		BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2387z00zzcfa_info3z00,
		BgL_bgl_za762lambda1979za7622733z00, BGl_z62lambda1979z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2388z00zzcfa_info3z00,
		BgL_bgl_za762lambda1978za7622734z00, BGl_z62lambda1978z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2389z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2735za7,
		BGl_z62zc3z04anonymousza31986ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2736z00,
		BGl_z62valloczf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2sidezd2effectzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2737za7,
		BGl_z62newzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2instanceofzf2Cinfozd2envzf2zzcfa_info3z00,
		BgL_bgl_za762makeza7d2instan2738z00,
		BGl_z62makezd2instanceofzf2Cinfoz42zzcfa_info3z00, 0L, BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2390z00zzcfa_info3z00,
		BgL_bgl_za762lambda1985za7622739z00, BGl_z62lambda1985z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2391z00zzcfa_info3z00,
		BgL_bgl_za762lambda1984za7622740z00, BGl_z62lambda1984z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2392z00zzcfa_info3z00,
		BgL_bgl_za762lambda1971za7622741z00, BGl_z62lambda1971z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2393z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2742za7,
		BGl_z62zc3z04anonymousza31970ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2394z00zzcfa_info3z00,
		BgL_bgl_za762lambda1968za7622743z00, BGl_z62lambda1968z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2395z00zzcfa_info3z00,
		BgL_bgl_za762lambda1965za7622744z00, BGl_z62lambda1965z62zzcfa_info3z00, 0L,
		BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2396z00zzcfa_info3z00,
		BgL_bgl_za762lambda2009za7622745z00, BGl_z62lambda2009z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2ftypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2746z00,
		BGl_z62setfieldzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2397z00zzcfa_info3z00,
		BgL_bgl_za762lambda2008za7622747z00, BGl_z62lambda2008z62zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2398z00zzcfa_info3z00,
		BgL_bgl_za762za7c3za704anonymo2748za7,
		BGl_z62zc3z04anonymousza32016ze3ze5zzcfa_info3z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2399z00zzcfa_info3z00,
		BgL_bgl_za762lambda2015za7622749z00, BGl_z62lambda2015z62zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22750z00,
		BGl_z62instanceofzf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2751z00,
		BGl_z62valloczf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getfieldzf2Cinfozf3zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2752z00,
		BGl_z62getfieldzf2Cinfozf3z63zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2sidezd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2753za7,
		BGl_z62castzd2nullzf2Cinfozd2sidezd2effectz42zzcfa_info3z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozd2ftypezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2754z00,
		BGl_z62valloczf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2otypezd2setz12zd2envz80zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2755z00,
		BGl_z62valloczf2Cinfozb2optimzd2otypezd2setz12z30zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2stackablezf3zd2envzb3zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2756z00,
		BGl_z62valloczf2Cinfozb2optimzd2stackablezf3z03zzcfa_info3z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72757za7,
		BGl_z62vrefzf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2keyzd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2758z00,
		BGl_z62valloczf2Cinfozb2optimzd2keyzf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2czd2formatzd2envz20zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2759z00,
		BGl_z62getfieldzf2Cinfozd2czd2formatz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_instanceofzf2Cinfozd2loczd2envzf2zzcfa_info3z00,
		BgL_bgl_za762instanceofza7f22760z00,
		BGl_z62instanceofzf2Cinfozd2locz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2lostzd2stampzd2setz12zd2envz52zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2761z00,
		BGl_z62valloczf2Cinfozb2optimzd2lostzd2stampzd2setz12ze2zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2762z00,
		BGl_z62pragmazf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2tvectorzf3zd2setz12zd2envzc1zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72763za7,
		BGl_z62vrefzf2Cinfozd2tvectorzf3zd2setz12z71zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2Cinfozd2sidezd2effectzd2envz20zzcfa_info3z00,
		BgL_bgl_za762pragmaza7f2cinf2764z00,
		BGl_z62pragmazf2Cinfozd2sidezd2effectz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2keyzd2envz20zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2765za7,
		BGl_z62castzd2nullzf2Cinfozd2keyz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2sidezd2effectzd2setz12zd2envz52zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2766z00,
		BGl_z62valloczf2Cinfozb2optimzd2sidezd2effectzd2setz12ze2zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_valloczf2Cinfozd2keyzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2767z00,
		BGl_z62valloczf2Cinfozd2keyz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2768z00,
		BGl_z62setfieldzf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vlengthzf2Cinfozd2approxzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vlengthza7f2cin2769z00,
		BGl_z62vlengthzf2Cinfozd2approxz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2valuezd2approxzd2envz92zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2770z00,
		BGl_z62valloczf2Cinfozb2optimzd2valuezd2approxz22zzcfa_info3z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2effectzd2envzf2zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2771z00,
		BGl_z62getfieldzf2Cinfozd2effectz42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2loczd2envze0zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2772za7,
		BGl_z62vsetz12zf2Cinfozd2locz50zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_newzf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2773za7,
		BGl_z62newzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2valloczf2Cinfozb2optimzd2envz40zzcfa_info3z00,
		BgL_bgl_za762makeza7d2valloc2774z00,
		BGl_z62makezd2valloczf2Cinfozb2optimzf0zzcfa_info3z00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2czd2formatzd2envz32zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2775za7,
		BGl_z62vsetz12zf2Cinfozd2czd2formatz82zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2776z00,
		BGl_z62setfieldzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2keyzd2setz12zd2envz80zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2777z00,
		BGl_z62valloczf2Cinfozb2optimzd2keyzd2setz12z30zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_castzd2nullzf2Cinfozd2sidezd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762castza7d2nullza7f2778za7,
		BGl_z62castzd2nullzf2Cinfozd2sidezd2effectzd2setz12z82zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2ftypezd2envz40zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2779z00,
		BGl_z62valloczf2Cinfozb2optimzd2ftypezf0zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2otypezd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72780za7,
		BGl_z62prezd2valloczf2Cinfozd2otypezd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vrefzf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72781za7,
		BGl_z62vrefzf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2loczd2envz20zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72782za7,
		BGl_z62prezd2valloczf2Cinfozd2locz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2sidezd2effectzd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72783za7,
		BGl_z62prezd2valloczf2Cinfozd2sidezd2effectzd2setz12z82zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2seenzf3zd2envzb3zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2784z00,
		BGl_z62valloczf2Cinfozb2optimzd2seenzf3z03zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2tvectorzf3zd2setz12zd2envzd3zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2785za7,
		BGl_z62vsetz12zf2Cinfozd2tvectorzf3zd2setz12z63zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vrefzf2Cinfozd2czd2formatzd2envz20zzcfa_info3z00,
		BgL_bgl_za762vrefza7f2cinfoza72786za7,
		BGl_z62vrefzf2Cinfozd2czd2formatz90zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getfieldzf2Cinfozd2exprza2zd2setz12zd2envz90zzcfa_info3z00,
		BgL_bgl_za762getfieldza7f2ci2787z00,
		BGl_z62getfieldzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vsetz12zf2Cinfozf3zd2envzc1zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2788za7,
		BGl_z62vsetz12zf2Cinfozf3z71zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setfieldzf2Cinfozd2typezd2setz12zd2envz32zzcfa_info3z00,
		BgL_bgl_za762setfieldza7f2ci2789z00,
		BGl_z62setfieldzf2Cinfozd2typezd2setz12z82zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2typezd2setz12zd2envz20zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2790za7,
		BGl_z62vsetz12zf2Cinfozd2typezd2setz12z90zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2stackzd2stampzd2setz12zd2envz52zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2791z00,
		BGl_z62valloczf2Cinfozb2optimzd2stackzd2stampzd2setz12ze2zzcfa_info3z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vsetz12zf2Cinfozd2effectzd2setz12zd2envz20zzcfa_info3z00,
		BgL_bgl_za762vsetza712za7f2cin2792za7,
		BGl_z62vsetz12zf2Cinfozd2effectzd2setz12z90zzcfa_info3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_valloczf2Cinfozb2optimzd2sidezd2effectzd2envz92zzcfa_info3z00,
		BgL_bgl_za762vallocza7f2cinf2793z00,
		BGl_z62valloczf2Cinfozb2optimzd2sidezd2effectz22zzcfa_info3z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2castzd2nullzf2Cinfozd2envz20zzcfa_info3z00,
		BgL_bgl_za762makeza7d2castza7d2794za7,
		BGl_z62makezd2castzd2nullzf2Cinfoz90zzcfa_info3z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newzf2Cinfozd2typezd2envzf2zzcfa_info3z00,
		BgL_bgl_za762newza7f2cinfoza7d2795za7,
		BGl_z62newzf2Cinfozd2typez42zzcfa_info3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2valloczf2Cinfozd2keyzd2setz12zd2envze0zzcfa_info3z00,
		BgL_bgl_za762preza7d2vallocza72796za7,
		BGl_z62prezd2valloczf2Cinfozd2keyzd2setz12z50zzcfa_info3z00, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_instanceofzf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_valloczf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_newzf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_pragmazf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_vsetz12zf2Cinfoze0zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_vlengthzf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_getfieldzf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_vrefzf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_setfieldzf2Cinfozf2zzcfa_info3z00));
		     ADD_ROOT((void *) (&BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long
		BgL_checksumz00_6364, char *BgL_fromz00_6365)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_info3z00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_info3z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_info3z00();
					BGl_libraryzd2moduleszd2initz00zzcfa_info3z00();
					BGl_cnstzd2initzd2zzcfa_info3z00();
					BGl_importedzd2moduleszd2initz00zzcfa_info3z00();
					BGl_objectzd2initzd2zzcfa_info3z00();
					return BGl_toplevelzd2initzd2zzcfa_info3z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_info3");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_info3");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_info3");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_info3");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_info3");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_info3");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			{	/* Cfa/cinfo3.scm 16 */
				obj_t BgL_cportz00_5774;

				{	/* Cfa/cinfo3.scm 16 */
					obj_t BgL_stringz00_5782;

					BgL_stringz00_5782 = BGl_string2441z00zzcfa_info3z00;
					{	/* Cfa/cinfo3.scm 16 */
						obj_t BgL_startz00_5783;

						BgL_startz00_5783 = BINT(((long) 0));
						{	/* Cfa/cinfo3.scm 16 */
							obj_t BgL_endz00_5784;

							BgL_endz00_5784 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_5782)));
							{	/* Cfa/cinfo3.scm 16 */

								BgL_cportz00_5774 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_5782, BgL_startz00_5783, BgL_endz00_5784);
				}}}}
				{
					long BgL_iz00_5775;

					BgL_iz00_5775 = ((long) 23);
				BgL_loopz00_5776:
					if ((BgL_iz00_5775 == ((long) -1)))
						{	/* Cfa/cinfo3.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/cinfo3.scm 16 */
							{	/* Cfa/cinfo3.scm 16 */
								obj_t BgL_arg2443z00_5778;

								{	/* Cfa/cinfo3.scm 16 */

									{	/* Cfa/cinfo3.scm 16 */
										obj_t BgL_locationz00_5780;

										BgL_locationz00_5780 = BBOOL(((bool_t) 0));
										{	/* Cfa/cinfo3.scm 16 */

											BgL_arg2443z00_5778 =
												BGl_readz00zz__readerz00(BgL_cportz00_5774,
												BgL_locationz00_5780);
										}
									}
								}
								{	/* Cfa/cinfo3.scm 16 */
									int BgL_tmpz00_6390;

									BgL_tmpz00_6390 = (int) (BgL_iz00_5775);
									CNST_TABLE_SET(BgL_tmpz00_6390, BgL_arg2443z00_5778);
							}}
							{	/* Cfa/cinfo3.scm 16 */
								int BgL_auxz00_5781;

								BgL_auxz00_5781 = (int) ((BgL_iz00_5775 - ((long) 1)));
								{
									long BgL_iz00_6395;

									BgL_iz00_6395 = (long) (BgL_auxz00_5781);
									BgL_iz00_5775 = BgL_iz00_6395;
									goto BgL_loopz00_5776;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			return BUNSPEC;
		}

	}



/* make-pragma/Cinfo */
	BGL_EXPORTED_DEF BgL_pragmaz00_bglt
		BGl_makezd2pragmazf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc1461z00_3,
		BgL_typez00_bglt BgL_type1462z00_4, obj_t BgL_sidezd2effect1463zd2_5,
		obj_t BgL_key1464z00_6, obj_t BgL_exprza21465za2_7,
		obj_t BgL_effect1466z00_8, obj_t BgL_format1467z00_9,
		BgL_approxz00_bglt BgL_approx1468z00_10)
	{
		{	/* Cfa/cinfo3.sch 314 */
			{	/* Cfa/cinfo3.sch 314 */
				BgL_pragmaz00_bglt BgL_new1336z00_5787;

				{	/* Cfa/cinfo3.sch 314 */
					BgL_pragmaz00_bglt BgL_tmp1334z00_5788;
					BgL_pragmazf2cinfozf2_bglt BgL_wide1335z00_5789;

					{
						BgL_pragmaz00_bglt BgL_auxz00_6398;

						{	/* Cfa/cinfo3.sch 314 */
							BgL_pragmaz00_bglt BgL_new1333z00_5790;

							BgL_new1333z00_5790 =
								((BgL_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_pragmaz00_bgl))));
							{	/* Cfa/cinfo3.sch 314 */
								long BgL_arg1704z00_5791;

								{	/* Cfa/cinfo3.sch 314 */
									long BgL_res2246z00_5792;

									BgL_res2246z00_5792 =
										BGL_CLASS_INDEX(BGl_pragmaz00zzast_nodez00);
									BgL_arg1704z00_5791 = BgL_res2246z00_5792;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1333z00_5790),
									BgL_arg1704z00_5791);
							}
							{	/* Cfa/cinfo3.sch 314 */
								BgL_objectz00_bglt BgL_tmpz00_6403;

								BgL_tmpz00_6403 = ((BgL_objectz00_bglt) BgL_new1333z00_5790);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6403, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1333z00_5790);
							BgL_auxz00_6398 = BgL_new1333z00_5790;
						}
						BgL_tmp1334z00_5788 = ((BgL_pragmaz00_bglt) BgL_auxz00_6398);
					}
					BgL_wide1335z00_5789 =
						((BgL_pragmazf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_pragmazf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 314 */
						obj_t BgL_auxz00_6411;
						BgL_objectz00_bglt BgL_tmpz00_6409;

						BgL_auxz00_6411 = ((obj_t) BgL_wide1335z00_5789);
						BgL_tmpz00_6409 = ((BgL_objectz00_bglt) BgL_tmp1334z00_5788);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6409, BgL_auxz00_6411);
					}
					((BgL_objectz00_bglt) BgL_tmp1334z00_5788);
					{	/* Cfa/cinfo3.sch 314 */
						long BgL_arg1697z00_5793;

						{	/* Cfa/cinfo3.sch 314 */
							long BgL_res2247z00_5794;

							BgL_res2247z00_5794 =
								BGL_CLASS_INDEX(BGl_pragmazf2Cinfozf2zzcfa_info3z00);
							BgL_arg1697z00_5793 = BgL_res2247z00_5794;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1334z00_5788), BgL_arg1697z00_5793);
					}
					BgL_new1336z00_5787 = ((BgL_pragmaz00_bglt) BgL_tmp1334z00_5788);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1336z00_5787)))->BgL_locz00) =
					((obj_t) BgL_loc1461z00_3), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1336z00_5787)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1462z00_4), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1336z00_5787)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1463zd2_5), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1336z00_5787)))->BgL_keyz00) =
					((obj_t) BgL_key1464z00_6), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1336z00_5787)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21465za2_7), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1336z00_5787)))->BgL_effectz00) =
					((obj_t) BgL_effect1466z00_8), BUNSPEC);
				((((BgL_pragmaz00_bglt) COBJECT(((BgL_pragmaz00_bglt)
									BgL_new1336z00_5787)))->BgL_formatz00) =
					((obj_t) BgL_format1467z00_9), BUNSPEC);
				{
					BgL_pragmazf2cinfozf2_bglt BgL_auxz00_6433;

					{
						obj_t BgL_auxz00_6434;

						{	/* Cfa/cinfo3.sch 314 */
							BgL_objectz00_bglt BgL_tmpz00_6435;

							BgL_tmpz00_6435 = ((BgL_objectz00_bglt) BgL_new1336z00_5787);
							BgL_auxz00_6434 = BGL_OBJECT_WIDENING(BgL_tmpz00_6435);
						}
						BgL_auxz00_6433 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_6434);
					}
					((((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_6433))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1468z00_10), BUNSPEC);
				}
				return BgL_new1336z00_5787;
			}
		}

	}



/* &make-pragma/Cinfo */
	BgL_pragmaz00_bglt BGl_z62makezd2pragmazf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_4656, obj_t BgL_loc1461z00_4657, obj_t BgL_type1462z00_4658,
		obj_t BgL_sidezd2effect1463zd2_4659, obj_t BgL_key1464z00_4660,
		obj_t BgL_exprza21465za2_4661, obj_t BgL_effect1466z00_4662,
		obj_t BgL_format1467z00_4663, obj_t BgL_approx1468z00_4664)
	{
		{	/* Cfa/cinfo3.sch 314 */
			return
				BGl_makezd2pragmazf2Cinfoz20zzcfa_info3z00(BgL_loc1461z00_4657,
				((BgL_typez00_bglt) BgL_type1462z00_4658),
				BgL_sidezd2effect1463zd2_4659, BgL_key1464z00_4660,
				BgL_exprza21465za2_4661, BgL_effect1466z00_4662, BgL_format1467z00_4663,
				((BgL_approxz00_bglt) BgL_approx1468z00_4664));
		}

	}



/* pragma/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_pragmazf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_11)
	{
		{	/* Cfa/cinfo3.sch 315 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_11,
				BGl_pragmazf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &pragma/Cinfo? */
	obj_t BGl_z62pragmazf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_4665,
		obj_t BgL_objz00_4666)
	{
		{	/* Cfa/cinfo3.sch 315 */
			return BBOOL(BGl_pragmazf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_4666));
		}

	}



/* pragma/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_pragmaz00_bglt
		BGl_pragmazf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 316 */
			{	/* Cfa/cinfo3.sch 316 */
				obj_t BgL_classz00_3854;

				BgL_classz00_3854 = BGl_pragmazf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 316 */
					obj_t BgL__ortest_1106z00_3855;

					BgL__ortest_1106z00_3855 = BGL_CLASS_NIL(BgL_classz00_3854);
					if (CBOOL(BgL__ortest_1106z00_3855))
						{	/* Cfa/cinfo3.sch 316 */
							return ((BgL_pragmaz00_bglt) BgL__ortest_1106z00_3855);
						}
					else
						{	/* Cfa/cinfo3.sch 316 */
							return
								((BgL_pragmaz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3854));
						}
				}
			}
		}

	}



/* &pragma/Cinfo-nil */
	BgL_pragmaz00_bglt BGl_z62pragmazf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_4667)
	{
		{	/* Cfa/cinfo3.sch 316 */
			return BGl_pragmazf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* pragma/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_pragmazf2Cinfozd2approxz20zzcfa_info3z00(BgL_pragmaz00_bglt BgL_oz00_12)
	{
		{	/* Cfa/cinfo3.sch 317 */
			{
				BgL_pragmazf2cinfozf2_bglt BgL_auxz00_6453;

				{
					obj_t BgL_auxz00_6454;

					{	/* Cfa/cinfo3.sch 317 */
						BgL_objectz00_bglt BgL_tmpz00_6455;

						BgL_tmpz00_6455 = ((BgL_objectz00_bglt) BgL_oz00_12);
						BgL_auxz00_6454 = BGL_OBJECT_WIDENING(BgL_tmpz00_6455);
					}
					BgL_auxz00_6453 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_6454);
				}
				return
					(((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_6453))->
					BgL_approxz00);
			}
		}

	}



/* &pragma/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62pragmazf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_4668, obj_t BgL_oz00_4669)
	{
		{	/* Cfa/cinfo3.sch 317 */
			return
				BGl_pragmazf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4669));
		}

	}



/* pragma/Cinfo-format */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2formatz20zzcfa_info3z00(BgL_pragmaz00_bglt BgL_oz00_15)
	{
		{	/* Cfa/cinfo3.sch 319 */
			return
				(((BgL_pragmaz00_bglt) COBJECT(
						((BgL_pragmaz00_bglt) BgL_oz00_15)))->BgL_formatz00);
		}

	}



/* &pragma/Cinfo-format */
	obj_t BGl_z62pragmazf2Cinfozd2formatz42zzcfa_info3z00(obj_t BgL_envz00_4670,
		obj_t BgL_oz00_4671)
	{
		{	/* Cfa/cinfo3.sch 319 */
			return
				BGl_pragmazf2Cinfozd2formatz20zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4671));
		}

	}



/* pragma/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2effectz20zzcfa_info3z00(BgL_pragmaz00_bglt BgL_oz00_18)
	{
		{	/* Cfa/cinfo3.sch 321 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_18)))->BgL_effectz00);
		}

	}



/* &pragma/Cinfo-effect */
	obj_t BGl_z62pragmazf2Cinfozd2effectz42zzcfa_info3z00(obj_t BgL_envz00_4672,
		obj_t BgL_oz00_4673)
	{
		{	/* Cfa/cinfo3.sch 321 */
			return
				BGl_pragmazf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4673));
		}

	}



/* pragma/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_pragmaz00_bglt
		BgL_oz00_19, obj_t BgL_vz00_20)
	{
		{	/* Cfa/cinfo3.sch 322 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_19)))->BgL_effectz00) =
				((obj_t) BgL_vz00_20), BUNSPEC);
		}

	}



/* &pragma/Cinfo-effect-set! */
	obj_t BGl_z62pragmazf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4674, obj_t BgL_oz00_4675, obj_t BgL_vz00_4676)
	{
		{	/* Cfa/cinfo3.sch 322 */
			return
				BGl_pragmazf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4675), BgL_vz00_4676);
		}

	}



/* pragma/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_pragmaz00_bglt
		BgL_oz00_21)
	{
		{	/* Cfa/cinfo3.sch 323 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_21)))->BgL_exprza2za2);
		}

	}



/* &pragma/Cinfo-expr* */
	obj_t BGl_z62pragmazf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t BgL_envz00_4677,
		obj_t BgL_oz00_4678)
	{
		{	/* Cfa/cinfo3.sch 323 */
			return
				BGl_pragmazf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4678));
		}

	}



/* pragma/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_pragmaz00_bglt
		BgL_oz00_22, obj_t BgL_vz00_23)
	{
		{	/* Cfa/cinfo3.sch 324 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_22)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_23), BUNSPEC);
		}

	}



/* &pragma/Cinfo-expr*-set! */
	obj_t BGl_z62pragmazf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_4679, obj_t BgL_oz00_4680, obj_t BgL_vz00_4681)
	{
		{	/* Cfa/cinfo3.sch 324 */
			return
				BGl_pragmazf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4680), BgL_vz00_4681);
		}

	}



/* pragma/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2keyz20zzcfa_info3z00(BgL_pragmaz00_bglt BgL_oz00_24)
	{
		{	/* Cfa/cinfo3.sch 325 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_24)))->BgL_keyz00);
		}

	}



/* &pragma/Cinfo-key */
	obj_t BGl_z62pragmazf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_4682,
		obj_t BgL_oz00_4683)
	{
		{	/* Cfa/cinfo3.sch 325 */
			return
				BGl_pragmazf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4683));
		}

	}



/* pragma/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_pragmaz00_bglt
		BgL_oz00_25, obj_t BgL_vz00_26)
	{
		{	/* Cfa/cinfo3.sch 326 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_25)))->BgL_keyz00) =
				((obj_t) BgL_vz00_26), BUNSPEC);
		}

	}



/* &pragma/Cinfo-key-set! */
	obj_t BGl_z62pragmazf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4684, obj_t BgL_oz00_4685, obj_t BgL_vz00_4686)
	{
		{	/* Cfa/cinfo3.sch 326 */
			return
				BGl_pragmazf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4685), BgL_vz00_4686);
		}

	}



/* pragma/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_pragmaz00_bglt
		BgL_oz00_27)
	{
		{	/* Cfa/cinfo3.sch 327 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_27)))->BgL_sidezd2effectzd2);
		}

	}



/* &pragma/Cinfo-side-effect */
	obj_t BGl_z62pragmazf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_4687, obj_t BgL_oz00_4688)
	{
		{	/* Cfa/cinfo3.sch 327 */
			return
				BGl_pragmazf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4688));
		}

	}



/* pragma/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_pragmaz00_bglt BgL_oz00_28, obj_t BgL_vz00_29)
	{
		{	/* Cfa/cinfo3.sch 328 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_28)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_29), BUNSPEC);
		}

	}



/* &pragma/Cinfo-side-effect-set! */
	obj_t BGl_z62pragmazf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4689, obj_t BgL_oz00_4690, obj_t BgL_vz00_4691)
	{
		{	/* Cfa/cinfo3.sch 328 */
			return
				BGl_pragmazf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4690), BgL_vz00_4691);
		}

	}



/* pragma/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_pragmazf2Cinfozd2typez20zzcfa_info3z00(BgL_pragmaz00_bglt BgL_oz00_30)
	{
		{	/* Cfa/cinfo3.sch 329 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_30)))->BgL_typez00);
		}

	}



/* &pragma/Cinfo-type */
	BgL_typez00_bglt BGl_z62pragmazf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_4692, obj_t BgL_oz00_4693)
	{
		{	/* Cfa/cinfo3.sch 329 */
			return
				BGl_pragmazf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4693));
		}

	}



/* pragma/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_pragmaz00_bglt
		BgL_oz00_31, BgL_typez00_bglt BgL_vz00_32)
	{
		{	/* Cfa/cinfo3.sch 330 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_31)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_32), BUNSPEC);
		}

	}



/* &pragma/Cinfo-type-set! */
	obj_t BGl_z62pragmazf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4694, obj_t BgL_oz00_4695, obj_t BgL_vz00_4696)
	{
		{	/* Cfa/cinfo3.sch 330 */
			return
				BGl_pragmazf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4695),
				((BgL_typez00_bglt) BgL_vz00_4696));
		}

	}



/* pragma/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_pragmazf2Cinfozd2locz20zzcfa_info3z00(BgL_pragmaz00_bglt BgL_oz00_33)
	{
		{	/* Cfa/cinfo3.sch 331 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_33)))->BgL_locz00);
		}

	}



/* &pragma/Cinfo-loc */
	obj_t BGl_z62pragmazf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_4697,
		obj_t BgL_oz00_4698)
	{
		{	/* Cfa/cinfo3.sch 331 */
			return
				BGl_pragmazf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_pragmaz00_bglt) BgL_oz00_4698));
		}

	}



/* make-getfield/Cinfo */
	BGL_EXPORTED_DEF BgL_getfieldz00_bglt
		BGl_makezd2getfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc1449z00_36,
		BgL_typez00_bglt BgL_type1450z00_37, obj_t BgL_sidezd2effect1451zd2_38,
		obj_t BgL_key1452z00_39, obj_t BgL_exprza21453za2_40,
		obj_t BgL_effect1454z00_41, obj_t BgL_czd2format1455zd2_42,
		obj_t BgL_fname1456z00_43, BgL_typez00_bglt BgL_ftype1457z00_44,
		BgL_typez00_bglt BgL_otype1458z00_45,
		BgL_approxz00_bglt BgL_approx1459z00_46)
	{
		{	/* Cfa/cinfo3.sch 335 */
			{	/* Cfa/cinfo3.sch 335 */
				BgL_getfieldz00_bglt BgL_new1340z00_5795;

				{	/* Cfa/cinfo3.sch 335 */
					BgL_getfieldz00_bglt BgL_tmp1338z00_5796;
					BgL_getfieldzf2cinfozf2_bglt BgL_wide1339z00_5797;

					{
						BgL_getfieldz00_bglt BgL_auxz00_6511;

						{	/* Cfa/cinfo3.sch 335 */
							BgL_getfieldz00_bglt BgL_new1337z00_5798;

							BgL_new1337z00_5798 =
								((BgL_getfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_getfieldz00_bgl))));
							{	/* Cfa/cinfo3.sch 335 */
								long BgL_arg1708z00_5799;

								{	/* Cfa/cinfo3.sch 335 */
									long BgL_res2248z00_5800;

									BgL_res2248z00_5800 =
										BGL_CLASS_INDEX(BGl_getfieldz00zzast_nodez00);
									BgL_arg1708z00_5799 = BgL_res2248z00_5800;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1337z00_5798),
									BgL_arg1708z00_5799);
							}
							{	/* Cfa/cinfo3.sch 335 */
								BgL_objectz00_bglt BgL_tmpz00_6516;

								BgL_tmpz00_6516 = ((BgL_objectz00_bglt) BgL_new1337z00_5798);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6516, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1337z00_5798);
							BgL_auxz00_6511 = BgL_new1337z00_5798;
						}
						BgL_tmp1338z00_5796 = ((BgL_getfieldz00_bglt) BgL_auxz00_6511);
					}
					BgL_wide1339z00_5797 =
						((BgL_getfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_getfieldzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 335 */
						obj_t BgL_auxz00_6524;
						BgL_objectz00_bglt BgL_tmpz00_6522;

						BgL_auxz00_6524 = ((obj_t) BgL_wide1339z00_5797);
						BgL_tmpz00_6522 = ((BgL_objectz00_bglt) BgL_tmp1338z00_5796);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6522, BgL_auxz00_6524);
					}
					((BgL_objectz00_bglt) BgL_tmp1338z00_5796);
					{	/* Cfa/cinfo3.sch 335 */
						long BgL_arg1707z00_5801;

						{	/* Cfa/cinfo3.sch 335 */
							long BgL_res2249z00_5802;

							BgL_res2249z00_5802 =
								BGL_CLASS_INDEX(BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1707z00_5801 = BgL_res2249z00_5802;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1338z00_5796), BgL_arg1707z00_5801);
					}
					BgL_new1340z00_5795 = ((BgL_getfieldz00_bglt) BgL_tmp1338z00_5796);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1340z00_5795)))->BgL_locz00) =
					((obj_t) BgL_loc1449z00_36), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1340z00_5795)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1450z00_37), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1340z00_5795)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1451zd2_38), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1340z00_5795)))->BgL_keyz00) =
					((obj_t) BgL_key1452z00_39), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1340z00_5795)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21453za2_40), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1340z00_5795)))->BgL_effectz00) =
					((obj_t) BgL_effect1454z00_41), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1340z00_5795)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1455zd2_42), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(((BgL_getfieldz00_bglt)
									BgL_new1340z00_5795)))->BgL_fnamez00) =
					((obj_t) BgL_fname1456z00_43), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(((BgL_getfieldz00_bglt)
									BgL_new1340z00_5795)))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype1457z00_44), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(((BgL_getfieldz00_bglt)
									BgL_new1340z00_5795)))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype1458z00_45), BUNSPEC);
				{
					BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_6552;

					{
						obj_t BgL_auxz00_6553;

						{	/* Cfa/cinfo3.sch 335 */
							BgL_objectz00_bglt BgL_tmpz00_6554;

							BgL_tmpz00_6554 = ((BgL_objectz00_bglt) BgL_new1340z00_5795);
							BgL_auxz00_6553 = BGL_OBJECT_WIDENING(BgL_tmpz00_6554);
						}
						BgL_auxz00_6552 = ((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_6553);
					}
					((((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6552))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1459z00_46), BUNSPEC);
				}
				return BgL_new1340z00_5795;
			}
		}

	}



/* &make-getfield/Cinfo */
	BgL_getfieldz00_bglt BGl_z62makezd2getfieldzf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_4699, obj_t BgL_loc1449z00_4700, obj_t BgL_type1450z00_4701,
		obj_t BgL_sidezd2effect1451zd2_4702, obj_t BgL_key1452z00_4703,
		obj_t BgL_exprza21453za2_4704, obj_t BgL_effect1454z00_4705,
		obj_t BgL_czd2format1455zd2_4706, obj_t BgL_fname1456z00_4707,
		obj_t BgL_ftype1457z00_4708, obj_t BgL_otype1458z00_4709,
		obj_t BgL_approx1459z00_4710)
	{
		{	/* Cfa/cinfo3.sch 335 */
			return
				BGl_makezd2getfieldzf2Cinfoz20zzcfa_info3z00(BgL_loc1449z00_4700,
				((BgL_typez00_bglt) BgL_type1450z00_4701),
				BgL_sidezd2effect1451zd2_4702, BgL_key1452z00_4703,
				BgL_exprza21453za2_4704, BgL_effect1454z00_4705,
				BgL_czd2format1455zd2_4706, BgL_fname1456z00_4707,
				((BgL_typez00_bglt) BgL_ftype1457z00_4708),
				((BgL_typez00_bglt) BgL_otype1458z00_4709),
				((BgL_approxz00_bglt) BgL_approx1459z00_4710));
		}

	}



/* getfield/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_getfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_47)
	{
		{	/* Cfa/cinfo3.sch 336 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_47,
				BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &getfield/Cinfo? */
	obj_t BGl_z62getfieldzf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_4711,
		obj_t BgL_objz00_4712)
	{
		{	/* Cfa/cinfo3.sch 336 */
			return BBOOL(BGl_getfieldzf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_4712));
		}

	}



/* getfield/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_getfieldz00_bglt
		BGl_getfieldzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 337 */
			{	/* Cfa/cinfo3.sch 337 */
				obj_t BgL_classz00_3874;

				BgL_classz00_3874 = BGl_getfieldzf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 337 */
					obj_t BgL__ortest_1106z00_3875;

					BgL__ortest_1106z00_3875 = BGL_CLASS_NIL(BgL_classz00_3874);
					if (CBOOL(BgL__ortest_1106z00_3875))
						{	/* Cfa/cinfo3.sch 337 */
							return ((BgL_getfieldz00_bglt) BgL__ortest_1106z00_3875);
						}
					else
						{	/* Cfa/cinfo3.sch 337 */
							return
								((BgL_getfieldz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3874));
						}
				}
			}
		}

	}



/* &getfield/Cinfo-nil */
	BgL_getfieldz00_bglt BGl_z62getfieldzf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_4713)
	{
		{	/* Cfa/cinfo3.sch 337 */
			return BGl_getfieldzf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* getfield/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_getfieldzf2Cinfozd2approxz20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_48)
	{
		{	/* Cfa/cinfo3.sch 338 */
			{
				BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_6574;

				{
					obj_t BgL_auxz00_6575;

					{	/* Cfa/cinfo3.sch 338 */
						BgL_objectz00_bglt BgL_tmpz00_6576;

						BgL_tmpz00_6576 = ((BgL_objectz00_bglt) BgL_oz00_48);
						BgL_auxz00_6575 = BGL_OBJECT_WIDENING(BgL_tmpz00_6576);
					}
					BgL_auxz00_6574 = ((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_6575);
				}
				return
					(((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6574))->
					BgL_approxz00);
			}
		}

	}



/* &getfield/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62getfieldzf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_4714, obj_t BgL_oz00_4715)
	{
		{	/* Cfa/cinfo3.sch 338 */
			return
				BGl_getfieldzf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4715));
		}

	}



/* getfield/Cinfo-otype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getfieldzf2Cinfozd2otypez20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_51)
	{
		{	/* Cfa/cinfo3.sch 340 */
			return
				(((BgL_getfieldz00_bglt) COBJECT(
						((BgL_getfieldz00_bglt) BgL_oz00_51)))->BgL_otypez00);
		}

	}



/* &getfield/Cinfo-otype */
	BgL_typez00_bglt BGl_z62getfieldzf2Cinfozd2otypez42zzcfa_info3z00(obj_t
		BgL_envz00_4716, obj_t BgL_oz00_4717)
	{
		{	/* Cfa/cinfo3.sch 340 */
			return
				BGl_getfieldzf2Cinfozd2otypez20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4717));
		}

	}



/* getfield/Cinfo-otype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_52, BgL_typez00_bglt BgL_vz00_53)
	{
		{	/* Cfa/cinfo3.sch 341 */
			return
				((((BgL_getfieldz00_bglt) COBJECT(
							((BgL_getfieldz00_bglt) BgL_oz00_52)))->BgL_otypez00) =
				((BgL_typez00_bglt) BgL_vz00_53), BUNSPEC);
		}

	}



/* &getfield/Cinfo-otype-set! */
	obj_t BGl_z62getfieldzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4718, obj_t BgL_oz00_4719, obj_t BgL_vz00_4720)
	{
		{	/* Cfa/cinfo3.sch 341 */
			return
				BGl_getfieldzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4719),
				((BgL_typez00_bglt) BgL_vz00_4720));
		}

	}



/* getfield/Cinfo-ftype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getfieldzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_54)
	{
		{	/* Cfa/cinfo3.sch 342 */
			return
				(((BgL_getfieldz00_bglt) COBJECT(
						((BgL_getfieldz00_bglt) BgL_oz00_54)))->BgL_ftypez00);
		}

	}



/* &getfield/Cinfo-ftype */
	BgL_typez00_bglt BGl_z62getfieldzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t
		BgL_envz00_4721, obj_t BgL_oz00_4722)
	{
		{	/* Cfa/cinfo3.sch 342 */
			return
				BGl_getfieldzf2Cinfozd2ftypez20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4722));
		}

	}



/* getfield/Cinfo-ftype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_55, BgL_typez00_bglt BgL_vz00_56)
	{
		{	/* Cfa/cinfo3.sch 343 */
			return
				((((BgL_getfieldz00_bglt) COBJECT(
							((BgL_getfieldz00_bglt) BgL_oz00_55)))->BgL_ftypez00) =
				((BgL_typez00_bglt) BgL_vz00_56), BUNSPEC);
		}

	}



/* &getfield/Cinfo-ftype-set! */
	obj_t BGl_z62getfieldzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4723, obj_t BgL_oz00_4724, obj_t BgL_vz00_4725)
	{
		{	/* Cfa/cinfo3.sch 343 */
			return
				BGl_getfieldzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4724),
				((BgL_typez00_bglt) BgL_vz00_4725));
		}

	}



/* getfield/Cinfo-fname */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2fnamez20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_57)
	{
		{	/* Cfa/cinfo3.sch 344 */
			return
				(((BgL_getfieldz00_bglt) COBJECT(
						((BgL_getfieldz00_bglt) BgL_oz00_57)))->BgL_fnamez00);
		}

	}



/* &getfield/Cinfo-fname */
	obj_t BGl_z62getfieldzf2Cinfozd2fnamez42zzcfa_info3z00(obj_t BgL_envz00_4726,
		obj_t BgL_oz00_4727)
	{
		{	/* Cfa/cinfo3.sch 344 */
			return
				BGl_getfieldzf2Cinfozd2fnamez20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4727));
		}

	}



/* getfield/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_60)
	{
		{	/* Cfa/cinfo3.sch 346 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_60)))->BgL_czd2formatzd2);
		}

	}



/* &getfield/Cinfo-c-format */
	obj_t BGl_z62getfieldzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t
		BgL_envz00_4728, obj_t BgL_oz00_4729)
	{
		{	/* Cfa/cinfo3.sch 346 */
			return
				BGl_getfieldzf2Cinfozd2czd2formatzf2zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4729));
		}

	}



/* getfield/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2effectz20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_63)
	{
		{	/* Cfa/cinfo3.sch 348 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_63)))->BgL_effectz00);
		}

	}



/* &getfield/Cinfo-effect */
	obj_t BGl_z62getfieldzf2Cinfozd2effectz42zzcfa_info3z00(obj_t BgL_envz00_4730,
		obj_t BgL_oz00_4731)
	{
		{	/* Cfa/cinfo3.sch 348 */
			return
				BGl_getfieldzf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4731));
		}

	}



/* getfield/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_64, obj_t BgL_vz00_65)
	{
		{	/* Cfa/cinfo3.sch 349 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_64)))->BgL_effectz00) =
				((obj_t) BgL_vz00_65), BUNSPEC);
		}

	}



/* &getfield/Cinfo-effect-set! */
	obj_t BGl_z62getfieldzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4732, obj_t BgL_oz00_4733, obj_t BgL_vz00_4734)
	{
		{	/* Cfa/cinfo3.sch 349 */
			return
				BGl_getfieldzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4733), BgL_vz00_4734);
		}

	}



/* getfield/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_66)
	{
		{	/* Cfa/cinfo3.sch 350 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_66)))->BgL_exprza2za2);
		}

	}



/* &getfield/Cinfo-expr* */
	obj_t BGl_z62getfieldzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t
		BgL_envz00_4735, obj_t BgL_oz00_4736)
	{
		{	/* Cfa/cinfo3.sch 350 */
			return
				BGl_getfieldzf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4736));
		}

	}



/* getfield/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00
		(BgL_getfieldz00_bglt BgL_oz00_67, obj_t BgL_vz00_68)
	{
		{	/* Cfa/cinfo3.sch 351 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_67)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_68), BUNSPEC);
		}

	}



/* &getfield/Cinfo-expr*-set! */
	obj_t BGl_z62getfieldzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_4737, obj_t BgL_oz00_4738, obj_t BgL_vz00_4739)
	{
		{	/* Cfa/cinfo3.sch 351 */
			return
				BGl_getfieldzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4738), BgL_vz00_4739);
		}

	}



/* getfield/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2keyz20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_69)
	{
		{	/* Cfa/cinfo3.sch 352 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_69)))->BgL_keyz00);
		}

	}



/* &getfield/Cinfo-key */
	obj_t BGl_z62getfieldzf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_4740,
		obj_t BgL_oz00_4741)
	{
		{	/* Cfa/cinfo3.sch 352 */
			return
				BGl_getfieldzf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4741));
		}

	}



/* getfield/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_70, obj_t BgL_vz00_71)
	{
		{	/* Cfa/cinfo3.sch 353 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_70)))->BgL_keyz00) =
				((obj_t) BgL_vz00_71), BUNSPEC);
		}

	}



/* &getfield/Cinfo-key-set! */
	obj_t BGl_z62getfieldzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4742, obj_t BgL_oz00_4743, obj_t BgL_vz00_4744)
	{
		{	/* Cfa/cinfo3.sch 353 */
			return
				BGl_getfieldzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4743), BgL_vz00_4744);
		}

	}



/* getfield/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_72)
	{
		{	/* Cfa/cinfo3.sch 354 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_72)))->BgL_sidezd2effectzd2);
		}

	}



/* &getfield/Cinfo-side-effect */
	obj_t BGl_z62getfieldzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_4745, obj_t BgL_oz00_4746)
	{
		{	/* Cfa/cinfo3.sch 354 */
			return
				BGl_getfieldzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4746));
		}

	}



/* getfield/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_getfieldz00_bglt BgL_oz00_73, obj_t BgL_vz00_74)
	{
		{	/* Cfa/cinfo3.sch 355 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_73)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_74), BUNSPEC);
		}

	}



/* &getfield/Cinfo-side-effect-set! */
	obj_t BGl_z62getfieldzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4747, obj_t BgL_oz00_4748, obj_t BgL_vz00_4749)
	{
		{	/* Cfa/cinfo3.sch 355 */
			return
				BGl_getfieldzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4748), BgL_vz00_4749);
		}

	}



/* getfield/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getfieldzf2Cinfozd2typez20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_75)
	{
		{	/* Cfa/cinfo3.sch 356 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_75)))->BgL_typez00);
		}

	}



/* &getfield/Cinfo-type */
	BgL_typez00_bglt BGl_z62getfieldzf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_4750, obj_t BgL_oz00_4751)
	{
		{	/* Cfa/cinfo3.sch 356 */
			return
				BGl_getfieldzf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4751));
		}

	}



/* getfield/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_76, BgL_typez00_bglt BgL_vz00_77)
	{
		{	/* Cfa/cinfo3.sch 357 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_76)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_77), BUNSPEC);
		}

	}



/* &getfield/Cinfo-type-set! */
	obj_t BGl_z62getfieldzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4752, obj_t BgL_oz00_4753, obj_t BgL_vz00_4754)
	{
		{	/* Cfa/cinfo3.sch 357 */
			return
				BGl_getfieldzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4753),
				((BgL_typez00_bglt) BgL_vz00_4754));
		}

	}



/* getfield/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_getfieldzf2Cinfozd2locz20zzcfa_info3z00(BgL_getfieldz00_bglt
		BgL_oz00_78)
	{
		{	/* Cfa/cinfo3.sch 358 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_78)))->BgL_locz00);
		}

	}



/* &getfield/Cinfo-loc */
	obj_t BGl_z62getfieldzf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_4755,
		obj_t BgL_oz00_4756)
	{
		{	/* Cfa/cinfo3.sch 358 */
			return
				BGl_getfieldzf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_getfieldz00_bglt) BgL_oz00_4756));
		}

	}



/* make-setfield/Cinfo */
	BGL_EXPORTED_DEF BgL_setfieldz00_bglt
		BGl_makezd2setfieldzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc1437z00_81,
		BgL_typez00_bglt BgL_type1438z00_82, obj_t BgL_sidezd2effect1439zd2_83,
		obj_t BgL_key1440z00_84, obj_t BgL_exprza21441za2_85,
		obj_t BgL_effect1442z00_86, obj_t BgL_czd2format1443zd2_87,
		obj_t BgL_fname1444z00_88, BgL_typez00_bglt BgL_ftype1445z00_89,
		BgL_typez00_bglt BgL_otype1446z00_90,
		BgL_approxz00_bglt BgL_approx1447z00_91)
	{
		{	/* Cfa/cinfo3.sch 362 */
			{	/* Cfa/cinfo3.sch 362 */
				BgL_setfieldz00_bglt BgL_new1344z00_5803;

				{	/* Cfa/cinfo3.sch 362 */
					BgL_setfieldz00_bglt BgL_tmp1342z00_5804;
					BgL_setfieldzf2cinfozf2_bglt BgL_wide1343z00_5805;

					{
						BgL_setfieldz00_bglt BgL_auxz00_6654;

						{	/* Cfa/cinfo3.sch 362 */
							BgL_setfieldz00_bglt BgL_new1341z00_5806;

							BgL_new1341z00_5806 =
								((BgL_setfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_setfieldz00_bgl))));
							{	/* Cfa/cinfo3.sch 362 */
								long BgL_arg1712z00_5807;

								{	/* Cfa/cinfo3.sch 362 */
									long BgL_res2250z00_5808;

									BgL_res2250z00_5808 =
										BGL_CLASS_INDEX(BGl_setfieldz00zzast_nodez00);
									BgL_arg1712z00_5807 = BgL_res2250z00_5808;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1341z00_5806),
									BgL_arg1712z00_5807);
							}
							{	/* Cfa/cinfo3.sch 362 */
								BgL_objectz00_bglt BgL_tmpz00_6659;

								BgL_tmpz00_6659 = ((BgL_objectz00_bglt) BgL_new1341z00_5806);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6659, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1341z00_5806);
							BgL_auxz00_6654 = BgL_new1341z00_5806;
						}
						BgL_tmp1342z00_5804 = ((BgL_setfieldz00_bglt) BgL_auxz00_6654);
					}
					BgL_wide1343z00_5805 =
						((BgL_setfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_setfieldzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 362 */
						obj_t BgL_auxz00_6667;
						BgL_objectz00_bglt BgL_tmpz00_6665;

						BgL_auxz00_6667 = ((obj_t) BgL_wide1343z00_5805);
						BgL_tmpz00_6665 = ((BgL_objectz00_bglt) BgL_tmp1342z00_5804);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6665, BgL_auxz00_6667);
					}
					((BgL_objectz00_bglt) BgL_tmp1342z00_5804);
					{	/* Cfa/cinfo3.sch 362 */
						long BgL_arg1711z00_5809;

						{	/* Cfa/cinfo3.sch 362 */
							long BgL_res2251z00_5810;

							BgL_res2251z00_5810 =
								BGL_CLASS_INDEX(BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1711z00_5809 = BgL_res2251z00_5810;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1342z00_5804), BgL_arg1711z00_5809);
					}
					BgL_new1344z00_5803 = ((BgL_setfieldz00_bglt) BgL_tmp1342z00_5804);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1344z00_5803)))->BgL_locz00) =
					((obj_t) BgL_loc1437z00_81), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1344z00_5803)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1438z00_82), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1344z00_5803)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1439zd2_83), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1344z00_5803)))->BgL_keyz00) =
					((obj_t) BgL_key1440z00_84), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1344z00_5803)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21441za2_85), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1344z00_5803)))->BgL_effectz00) =
					((obj_t) BgL_effect1442z00_86), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1344z00_5803)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1443zd2_87), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(((BgL_setfieldz00_bglt)
									BgL_new1344z00_5803)))->BgL_fnamez00) =
					((obj_t) BgL_fname1444z00_88), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(((BgL_setfieldz00_bglt)
									BgL_new1344z00_5803)))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype1445z00_89), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(((BgL_setfieldz00_bglt)
									BgL_new1344z00_5803)))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype1446z00_90), BUNSPEC);
				{
					BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_6695;

					{
						obj_t BgL_auxz00_6696;

						{	/* Cfa/cinfo3.sch 362 */
							BgL_objectz00_bglt BgL_tmpz00_6697;

							BgL_tmpz00_6697 = ((BgL_objectz00_bglt) BgL_new1344z00_5803);
							BgL_auxz00_6696 = BGL_OBJECT_WIDENING(BgL_tmpz00_6697);
						}
						BgL_auxz00_6695 = ((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_6696);
					}
					((((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6695))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1447z00_91), BUNSPEC);
				}
				return BgL_new1344z00_5803;
			}
		}

	}



/* &make-setfield/Cinfo */
	BgL_setfieldz00_bglt BGl_z62makezd2setfieldzf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_4757, obj_t BgL_loc1437z00_4758, obj_t BgL_type1438z00_4759,
		obj_t BgL_sidezd2effect1439zd2_4760, obj_t BgL_key1440z00_4761,
		obj_t BgL_exprza21441za2_4762, obj_t BgL_effect1442z00_4763,
		obj_t BgL_czd2format1443zd2_4764, obj_t BgL_fname1444z00_4765,
		obj_t BgL_ftype1445z00_4766, obj_t BgL_otype1446z00_4767,
		obj_t BgL_approx1447z00_4768)
	{
		{	/* Cfa/cinfo3.sch 362 */
			return
				BGl_makezd2setfieldzf2Cinfoz20zzcfa_info3z00(BgL_loc1437z00_4758,
				((BgL_typez00_bglt) BgL_type1438z00_4759),
				BgL_sidezd2effect1439zd2_4760, BgL_key1440z00_4761,
				BgL_exprza21441za2_4762, BgL_effect1442z00_4763,
				BgL_czd2format1443zd2_4764, BgL_fname1444z00_4765,
				((BgL_typez00_bglt) BgL_ftype1445z00_4766),
				((BgL_typez00_bglt) BgL_otype1446z00_4767),
				((BgL_approxz00_bglt) BgL_approx1447z00_4768));
		}

	}



/* setfield/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_setfieldzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_92)
	{
		{	/* Cfa/cinfo3.sch 363 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_92,
				BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &setfield/Cinfo? */
	obj_t BGl_z62setfieldzf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_4769,
		obj_t BgL_objz00_4770)
	{
		{	/* Cfa/cinfo3.sch 363 */
			return BBOOL(BGl_setfieldzf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_4770));
		}

	}



/* setfield/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_setfieldz00_bglt
		BGl_setfieldzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 364 */
			{	/* Cfa/cinfo3.sch 364 */
				obj_t BgL_classz00_3894;

				BgL_classz00_3894 = BGl_setfieldzf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 364 */
					obj_t BgL__ortest_1106z00_3895;

					BgL__ortest_1106z00_3895 = BGL_CLASS_NIL(BgL_classz00_3894);
					if (CBOOL(BgL__ortest_1106z00_3895))
						{	/* Cfa/cinfo3.sch 364 */
							return ((BgL_setfieldz00_bglt) BgL__ortest_1106z00_3895);
						}
					else
						{	/* Cfa/cinfo3.sch 364 */
							return
								((BgL_setfieldz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3894));
						}
				}
			}
		}

	}



/* &setfield/Cinfo-nil */
	BgL_setfieldz00_bglt BGl_z62setfieldzf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_4771)
	{
		{	/* Cfa/cinfo3.sch 364 */
			return BGl_setfieldzf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* setfield/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_setfieldzf2Cinfozd2approxz20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_93)
	{
		{	/* Cfa/cinfo3.sch 365 */
			{
				BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_6717;

				{
					obj_t BgL_auxz00_6718;

					{	/* Cfa/cinfo3.sch 365 */
						BgL_objectz00_bglt BgL_tmpz00_6719;

						BgL_tmpz00_6719 = ((BgL_objectz00_bglt) BgL_oz00_93);
						BgL_auxz00_6718 = BGL_OBJECT_WIDENING(BgL_tmpz00_6719);
					}
					BgL_auxz00_6717 = ((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_6718);
				}
				return
					(((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6717))->
					BgL_approxz00);
			}
		}

	}



/* &setfield/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62setfieldzf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_4772, obj_t BgL_oz00_4773)
	{
		{	/* Cfa/cinfo3.sch 365 */
			return
				BGl_setfieldzf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4773));
		}

	}



/* setfield/Cinfo-otype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_setfieldzf2Cinfozd2otypez20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_96)
	{
		{	/* Cfa/cinfo3.sch 367 */
			return
				(((BgL_setfieldz00_bglt) COBJECT(
						((BgL_setfieldz00_bglt) BgL_oz00_96)))->BgL_otypez00);
		}

	}



/* &setfield/Cinfo-otype */
	BgL_typez00_bglt BGl_z62setfieldzf2Cinfozd2otypez42zzcfa_info3z00(obj_t
		BgL_envz00_4774, obj_t BgL_oz00_4775)
	{
		{	/* Cfa/cinfo3.sch 367 */
			return
				BGl_setfieldzf2Cinfozd2otypez20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4775));
		}

	}



/* setfield/Cinfo-otype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_97, BgL_typez00_bglt BgL_vz00_98)
	{
		{	/* Cfa/cinfo3.sch 368 */
			return
				((((BgL_setfieldz00_bglt) COBJECT(
							((BgL_setfieldz00_bglt) BgL_oz00_97)))->BgL_otypez00) =
				((BgL_typez00_bglt) BgL_vz00_98), BUNSPEC);
		}

	}



/* &setfield/Cinfo-otype-set! */
	obj_t BGl_z62setfieldzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4776, obj_t BgL_oz00_4777, obj_t BgL_vz00_4778)
	{
		{	/* Cfa/cinfo3.sch 368 */
			return
				BGl_setfieldzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4777),
				((BgL_typez00_bglt) BgL_vz00_4778));
		}

	}



/* setfield/Cinfo-ftype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_setfieldzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_99)
	{
		{	/* Cfa/cinfo3.sch 369 */
			return
				(((BgL_setfieldz00_bglt) COBJECT(
						((BgL_setfieldz00_bglt) BgL_oz00_99)))->BgL_ftypez00);
		}

	}



/* &setfield/Cinfo-ftype */
	BgL_typez00_bglt BGl_z62setfieldzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t
		BgL_envz00_4779, obj_t BgL_oz00_4780)
	{
		{	/* Cfa/cinfo3.sch 369 */
			return
				BGl_setfieldzf2Cinfozd2ftypez20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4780));
		}

	}



/* setfield/Cinfo-ftype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_100, BgL_typez00_bglt BgL_vz00_101)
	{
		{	/* Cfa/cinfo3.sch 370 */
			return
				((((BgL_setfieldz00_bglt) COBJECT(
							((BgL_setfieldz00_bglt) BgL_oz00_100)))->BgL_ftypez00) =
				((BgL_typez00_bglt) BgL_vz00_101), BUNSPEC);
		}

	}



/* &setfield/Cinfo-ftype-set! */
	obj_t BGl_z62setfieldzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4781, obj_t BgL_oz00_4782, obj_t BgL_vz00_4783)
	{
		{	/* Cfa/cinfo3.sch 370 */
			return
				BGl_setfieldzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4782),
				((BgL_typez00_bglt) BgL_vz00_4783));
		}

	}



/* setfield/Cinfo-fname */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2fnamez20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_102)
	{
		{	/* Cfa/cinfo3.sch 371 */
			return
				(((BgL_setfieldz00_bglt) COBJECT(
						((BgL_setfieldz00_bglt) BgL_oz00_102)))->BgL_fnamez00);
		}

	}



/* &setfield/Cinfo-fname */
	obj_t BGl_z62setfieldzf2Cinfozd2fnamez42zzcfa_info3z00(obj_t BgL_envz00_4784,
		obj_t BgL_oz00_4785)
	{
		{	/* Cfa/cinfo3.sch 371 */
			return
				BGl_setfieldzf2Cinfozd2fnamez20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4785));
		}

	}



/* setfield/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_105)
	{
		{	/* Cfa/cinfo3.sch 373 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_105)))->BgL_czd2formatzd2);
		}

	}



/* &setfield/Cinfo-c-format */
	obj_t BGl_z62setfieldzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t
		BgL_envz00_4786, obj_t BgL_oz00_4787)
	{
		{	/* Cfa/cinfo3.sch 373 */
			return
				BGl_setfieldzf2Cinfozd2czd2formatzf2zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4787));
		}

	}



/* setfield/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2effectz20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_108)
	{
		{	/* Cfa/cinfo3.sch 375 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_108)))->BgL_effectz00);
		}

	}



/* &setfield/Cinfo-effect */
	obj_t BGl_z62setfieldzf2Cinfozd2effectz42zzcfa_info3z00(obj_t BgL_envz00_4788,
		obj_t BgL_oz00_4789)
	{
		{	/* Cfa/cinfo3.sch 375 */
			return
				BGl_setfieldzf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4789));
		}

	}



/* setfield/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_109, obj_t BgL_vz00_110)
	{
		{	/* Cfa/cinfo3.sch 376 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_109)))->BgL_effectz00) =
				((obj_t) BgL_vz00_110), BUNSPEC);
		}

	}



/* &setfield/Cinfo-effect-set! */
	obj_t BGl_z62setfieldzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4790, obj_t BgL_oz00_4791, obj_t BgL_vz00_4792)
	{
		{	/* Cfa/cinfo3.sch 376 */
			return
				BGl_setfieldzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4791), BgL_vz00_4792);
		}

	}



/* setfield/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_111)
	{
		{	/* Cfa/cinfo3.sch 377 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_111)))->BgL_exprza2za2);
		}

	}



/* &setfield/Cinfo-expr* */
	obj_t BGl_z62setfieldzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t
		BgL_envz00_4793, obj_t BgL_oz00_4794)
	{
		{	/* Cfa/cinfo3.sch 377 */
			return
				BGl_setfieldzf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4794));
		}

	}



/* setfield/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00
		(BgL_setfieldz00_bglt BgL_oz00_112, obj_t BgL_vz00_113)
	{
		{	/* Cfa/cinfo3.sch 378 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_112)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_113), BUNSPEC);
		}

	}



/* &setfield/Cinfo-expr*-set! */
	obj_t BGl_z62setfieldzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_4795, obj_t BgL_oz00_4796, obj_t BgL_vz00_4797)
	{
		{	/* Cfa/cinfo3.sch 378 */
			return
				BGl_setfieldzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4796), BgL_vz00_4797);
		}

	}



/* setfield/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2keyz20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_114)
	{
		{	/* Cfa/cinfo3.sch 379 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_114)))->BgL_keyz00);
		}

	}



/* &setfield/Cinfo-key */
	obj_t BGl_z62setfieldzf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_4798,
		obj_t BgL_oz00_4799)
	{
		{	/* Cfa/cinfo3.sch 379 */
			return
				BGl_setfieldzf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4799));
		}

	}



/* setfield/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_115, obj_t BgL_vz00_116)
	{
		{	/* Cfa/cinfo3.sch 380 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_115)))->BgL_keyz00) =
				((obj_t) BgL_vz00_116), BUNSPEC);
		}

	}



/* &setfield/Cinfo-key-set! */
	obj_t BGl_z62setfieldzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4800, obj_t BgL_oz00_4801, obj_t BgL_vz00_4802)
	{
		{	/* Cfa/cinfo3.sch 380 */
			return
				BGl_setfieldzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4801), BgL_vz00_4802);
		}

	}



/* setfield/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_117)
	{
		{	/* Cfa/cinfo3.sch 381 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_117)))->BgL_sidezd2effectzd2);
		}

	}



/* &setfield/Cinfo-side-effect */
	obj_t BGl_z62setfieldzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_4803, obj_t BgL_oz00_4804)
	{
		{	/* Cfa/cinfo3.sch 381 */
			return
				BGl_setfieldzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4804));
		}

	}



/* setfield/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_setfieldz00_bglt BgL_oz00_118, obj_t BgL_vz00_119)
	{
		{	/* Cfa/cinfo3.sch 382 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_118)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_119), BUNSPEC);
		}

	}



/* &setfield/Cinfo-side-effect-set! */
	obj_t BGl_z62setfieldzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4805, obj_t BgL_oz00_4806, obj_t BgL_vz00_4807)
	{
		{	/* Cfa/cinfo3.sch 382 */
			return
				BGl_setfieldzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4806), BgL_vz00_4807);
		}

	}



/* setfield/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_setfieldzf2Cinfozd2typez20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_120)
	{
		{	/* Cfa/cinfo3.sch 383 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_120)))->BgL_typez00);
		}

	}



/* &setfield/Cinfo-type */
	BgL_typez00_bglt BGl_z62setfieldzf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_4808, obj_t BgL_oz00_4809)
	{
		{	/* Cfa/cinfo3.sch 383 */
			return
				BGl_setfieldzf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4809));
		}

	}



/* setfield/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_121, BgL_typez00_bglt BgL_vz00_122)
	{
		{	/* Cfa/cinfo3.sch 384 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_121)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_122), BUNSPEC);
		}

	}



/* &setfield/Cinfo-type-set! */
	obj_t BGl_z62setfieldzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4810, obj_t BgL_oz00_4811, obj_t BgL_vz00_4812)
	{
		{	/* Cfa/cinfo3.sch 384 */
			return
				BGl_setfieldzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4811),
				((BgL_typez00_bglt) BgL_vz00_4812));
		}

	}



/* setfield/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_setfieldzf2Cinfozd2locz20zzcfa_info3z00(BgL_setfieldz00_bglt
		BgL_oz00_123)
	{
		{	/* Cfa/cinfo3.sch 385 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_123)))->BgL_locz00);
		}

	}



/* &setfield/Cinfo-loc */
	obj_t BGl_z62setfieldzf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_4813,
		obj_t BgL_oz00_4814)
	{
		{	/* Cfa/cinfo3.sch 385 */
			return
				BGl_setfieldzf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_setfieldz00_bglt) BgL_oz00_4814));
		}

	}



/* make-new/Cinfo */
	BGL_EXPORTED_DEF BgL_newz00_bglt BGl_makezd2newzf2Cinfoz20zzcfa_info3z00(obj_t
		BgL_loc1427z00_126, BgL_typez00_bglt BgL_type1428z00_127,
		obj_t BgL_sidezd2effect1429zd2_128, obj_t BgL_key1430z00_129,
		obj_t BgL_exprza21431za2_130, obj_t BgL_effect1432z00_131,
		obj_t BgL_czd2format1433zd2_132, obj_t BgL_argszd2type1434zd2_133,
		BgL_approxz00_bglt BgL_approx1435z00_134)
	{
		{	/* Cfa/cinfo3.sch 389 */
			{	/* Cfa/cinfo3.sch 389 */
				BgL_newz00_bglt BgL_new1348z00_5811;

				{	/* Cfa/cinfo3.sch 389 */
					BgL_newz00_bglt BgL_tmp1346z00_5812;
					BgL_newzf2cinfozf2_bglt BgL_wide1347z00_5813;

					{
						BgL_newz00_bglt BgL_auxz00_6797;

						{	/* Cfa/cinfo3.sch 389 */
							BgL_newz00_bglt BgL_new1345z00_5814;

							BgL_new1345z00_5814 =
								((BgL_newz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_newz00_bgl))));
							{	/* Cfa/cinfo3.sch 389 */
								long BgL_arg1725z00_5815;

								{	/* Cfa/cinfo3.sch 389 */
									long BgL_res2252z00_5816;

									BgL_res2252z00_5816 =
										BGL_CLASS_INDEX(BGl_newz00zzast_nodez00);
									BgL_arg1725z00_5815 = BgL_res2252z00_5816;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1345z00_5814),
									BgL_arg1725z00_5815);
							}
							{	/* Cfa/cinfo3.sch 389 */
								BgL_objectz00_bglt BgL_tmpz00_6802;

								BgL_tmpz00_6802 = ((BgL_objectz00_bglt) BgL_new1345z00_5814);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6802, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1345z00_5814);
							BgL_auxz00_6797 = BgL_new1345z00_5814;
						}
						BgL_tmp1346z00_5812 = ((BgL_newz00_bglt) BgL_auxz00_6797);
					}
					BgL_wide1347z00_5813 =
						((BgL_newzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_newzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 389 */
						obj_t BgL_auxz00_6810;
						BgL_objectz00_bglt BgL_tmpz00_6808;

						BgL_auxz00_6810 = ((obj_t) BgL_wide1347z00_5813);
						BgL_tmpz00_6808 = ((BgL_objectz00_bglt) BgL_tmp1346z00_5812);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6808, BgL_auxz00_6810);
					}
					((BgL_objectz00_bglt) BgL_tmp1346z00_5812);
					{	/* Cfa/cinfo3.sch 389 */
						long BgL_arg1719z00_5817;

						{	/* Cfa/cinfo3.sch 389 */
							long BgL_res2253z00_5818;

							BgL_res2253z00_5818 =
								BGL_CLASS_INDEX(BGl_newzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1719z00_5817 = BgL_res2253z00_5818;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1346z00_5812), BgL_arg1719z00_5817);
					}
					BgL_new1348z00_5811 = ((BgL_newz00_bglt) BgL_tmp1346z00_5812);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1348z00_5811)))->BgL_locz00) =
					((obj_t) BgL_loc1427z00_126), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1348z00_5811)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1428z00_127), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1348z00_5811)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1429zd2_128), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1348z00_5811)))->BgL_keyz00) =
					((obj_t) BgL_key1430z00_129), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1348z00_5811)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21431za2_130), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1348z00_5811)))->BgL_effectz00) =
					((obj_t) BgL_effect1432z00_131), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1348z00_5811)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1433zd2_132), BUNSPEC);
				((((BgL_newz00_bglt) COBJECT(((BgL_newz00_bglt) BgL_new1348z00_5811)))->
						BgL_argszd2typezd2) =
					((obj_t) BgL_argszd2type1434zd2_133), BUNSPEC);
				{
					BgL_newzf2cinfozf2_bglt BgL_auxz00_6834;

					{
						obj_t BgL_auxz00_6835;

						{	/* Cfa/cinfo3.sch 389 */
							BgL_objectz00_bglt BgL_tmpz00_6836;

							BgL_tmpz00_6836 = ((BgL_objectz00_bglt) BgL_new1348z00_5811);
							BgL_auxz00_6835 = BGL_OBJECT_WIDENING(BgL_tmpz00_6836);
						}
						BgL_auxz00_6834 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_6835);
					}
					((((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6834))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1435z00_134), BUNSPEC);
				}
				return BgL_new1348z00_5811;
			}
		}

	}



/* &make-new/Cinfo */
	BgL_newz00_bglt BGl_z62makezd2newzf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_4815, obj_t BgL_loc1427z00_4816, obj_t BgL_type1428z00_4817,
		obj_t BgL_sidezd2effect1429zd2_4818, obj_t BgL_key1430z00_4819,
		obj_t BgL_exprza21431za2_4820, obj_t BgL_effect1432z00_4821,
		obj_t BgL_czd2format1433zd2_4822, obj_t BgL_argszd2type1434zd2_4823,
		obj_t BgL_approx1435z00_4824)
	{
		{	/* Cfa/cinfo3.sch 389 */
			return
				BGl_makezd2newzf2Cinfoz20zzcfa_info3z00(BgL_loc1427z00_4816,
				((BgL_typez00_bglt) BgL_type1428z00_4817),
				BgL_sidezd2effect1429zd2_4818, BgL_key1430z00_4819,
				BgL_exprza21431za2_4820, BgL_effect1432z00_4821,
				BgL_czd2format1433zd2_4822, BgL_argszd2type1434zd2_4823,
				((BgL_approxz00_bglt) BgL_approx1435z00_4824));
		}

	}



/* new/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_newzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_135)
	{
		{	/* Cfa/cinfo3.sch 390 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_135,
				BGl_newzf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &new/Cinfo? */
	obj_t BGl_z62newzf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_4825,
		obj_t BgL_objz00_4826)
	{
		{	/* Cfa/cinfo3.sch 390 */
			return BBOOL(BGl_newzf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_4826));
		}

	}



/* new/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_newz00_bglt BGl_newzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 391 */
			{	/* Cfa/cinfo3.sch 391 */
				obj_t BgL_classz00_3914;

				BgL_classz00_3914 = BGl_newzf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 391 */
					obj_t BgL__ortest_1106z00_3915;

					BgL__ortest_1106z00_3915 = BGL_CLASS_NIL(BgL_classz00_3914);
					if (CBOOL(BgL__ortest_1106z00_3915))
						{	/* Cfa/cinfo3.sch 391 */
							return ((BgL_newz00_bglt) BgL__ortest_1106z00_3915);
						}
					else
						{	/* Cfa/cinfo3.sch 391 */
							return
								((BgL_newz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3914));
						}
				}
			}
		}

	}



/* &new/Cinfo-nil */
	BgL_newz00_bglt BGl_z62newzf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_4827)
	{
		{	/* Cfa/cinfo3.sch 391 */
			return BGl_newzf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* new/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_newzf2Cinfozd2approxz20zzcfa_info3z00(BgL_newz00_bglt BgL_oz00_136)
	{
		{	/* Cfa/cinfo3.sch 392 */
			{
				BgL_newzf2cinfozf2_bglt BgL_auxz00_6854;

				{
					obj_t BgL_auxz00_6855;

					{	/* Cfa/cinfo3.sch 392 */
						BgL_objectz00_bglt BgL_tmpz00_6856;

						BgL_tmpz00_6856 = ((BgL_objectz00_bglt) BgL_oz00_136);
						BgL_auxz00_6855 = BGL_OBJECT_WIDENING(BgL_tmpz00_6856);
					}
					BgL_auxz00_6854 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_6855);
				}
				return
					(((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6854))->BgL_approxz00);
			}
		}

	}



/* &new/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62newzf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_4828, obj_t BgL_oz00_4829)
	{
		{	/* Cfa/cinfo3.sch 392 */
			return
				BGl_newzf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4829));
		}

	}



/* new/Cinfo-args-type */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2argszd2typezf2zzcfa_info3z00(BgL_newz00_bglt BgL_oz00_139)
	{
		{	/* Cfa/cinfo3.sch 394 */
			return
				(((BgL_newz00_bglt) COBJECT(
						((BgL_newz00_bglt) BgL_oz00_139)))->BgL_argszd2typezd2);
		}

	}



/* &new/Cinfo-args-type */
	obj_t BGl_z62newzf2Cinfozd2argszd2typez90zzcfa_info3z00(obj_t BgL_envz00_4830,
		obj_t BgL_oz00_4831)
	{
		{	/* Cfa/cinfo3.sch 394 */
			return
				BGl_newzf2Cinfozd2argszd2typezf2zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4831));
		}

	}



/* new/Cinfo-args-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2argszd2typezd2setz12z32zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_140, obj_t BgL_vz00_141)
	{
		{	/* Cfa/cinfo3.sch 395 */
			return
				((((BgL_newz00_bglt) COBJECT(
							((BgL_newz00_bglt) BgL_oz00_140)))->BgL_argszd2typezd2) =
				((obj_t) BgL_vz00_141), BUNSPEC);
		}

	}



/* &new/Cinfo-args-type-set! */
	obj_t BGl_z62newzf2Cinfozd2argszd2typezd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4832, obj_t BgL_oz00_4833, obj_t BgL_vz00_4834)
	{
		{	/* Cfa/cinfo3.sch 395 */
			return
				BGl_newzf2Cinfozd2argszd2typezd2setz12z32zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4833), BgL_vz00_4834);
		}

	}



/* new/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_newz00_bglt BgL_oz00_142)
	{
		{	/* Cfa/cinfo3.sch 396 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_142)))->BgL_czd2formatzd2);
		}

	}



/* &new/Cinfo-c-format */
	obj_t BGl_z62newzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t BgL_envz00_4835,
		obj_t BgL_oz00_4836)
	{
		{	/* Cfa/cinfo3.sch 396 */
			return
				BGl_newzf2Cinfozd2czd2formatzf2zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4836));
		}

	}



/* new/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2effectz20zzcfa_info3z00(BgL_newz00_bglt BgL_oz00_145)
	{
		{	/* Cfa/cinfo3.sch 398 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_145)))->BgL_effectz00);
		}

	}



/* &new/Cinfo-effect */
	obj_t BGl_z62newzf2Cinfozd2effectz42zzcfa_info3z00(obj_t BgL_envz00_4837,
		obj_t BgL_oz00_4838)
	{
		{	/* Cfa/cinfo3.sch 398 */
			return
				BGl_newzf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4838));
		}

	}



/* new/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_146, obj_t BgL_vz00_147)
	{
		{	/* Cfa/cinfo3.sch 399 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_146)))->BgL_effectz00) =
				((obj_t) BgL_vz00_147), BUNSPEC);
		}

	}



/* &new/Cinfo-effect-set! */
	obj_t BGl_z62newzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4839, obj_t BgL_oz00_4840, obj_t BgL_vz00_4841)
	{
		{	/* Cfa/cinfo3.sch 399 */
			return
				BGl_newzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4840), BgL_vz00_4841);
		}

	}



/* new/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_newz00_bglt BgL_oz00_148)
	{
		{	/* Cfa/cinfo3.sch 400 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_148)))->BgL_exprza2za2);
		}

	}



/* &new/Cinfo-expr* */
	obj_t BGl_z62newzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t BgL_envz00_4842,
		obj_t BgL_oz00_4843)
	{
		{	/* Cfa/cinfo3.sch 400 */
			return
				BGl_newzf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4843));
		}

	}



/* new/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_149, obj_t BgL_vz00_150)
	{
		{	/* Cfa/cinfo3.sch 401 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_149)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_150), BUNSPEC);
		}

	}



/* &new/Cinfo-expr*-set! */
	obj_t BGl_z62newzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_4844, obj_t BgL_oz00_4845, obj_t BgL_vz00_4846)
	{
		{	/* Cfa/cinfo3.sch 401 */
			return
				BGl_newzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4845), BgL_vz00_4846);
		}

	}



/* new/Cinfo-key */
	BGL_EXPORTED_DEF obj_t BGl_newzf2Cinfozd2keyz20zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_151)
	{
		{	/* Cfa/cinfo3.sch 402 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_151)))->BgL_keyz00);
		}

	}



/* &new/Cinfo-key */
	obj_t BGl_z62newzf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_4847,
		obj_t BgL_oz00_4848)
	{
		{	/* Cfa/cinfo3.sch 402 */
			return
				BGl_newzf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4848));
		}

	}



/* new/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_152, obj_t BgL_vz00_153)
	{
		{	/* Cfa/cinfo3.sch 403 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_152)))->BgL_keyz00) =
				((obj_t) BgL_vz00_153), BUNSPEC);
		}

	}



/* &new/Cinfo-key-set! */
	obj_t BGl_z62newzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4849, obj_t BgL_oz00_4850, obj_t BgL_vz00_4851)
	{
		{	/* Cfa/cinfo3.sch 403 */
			return
				BGl_newzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4850), BgL_vz00_4851);
		}

	}



/* new/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_154)
	{
		{	/* Cfa/cinfo3.sch 404 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_154)))->BgL_sidezd2effectzd2);
		}

	}



/* &new/Cinfo-side-effect */
	obj_t BGl_z62newzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_4852, obj_t BgL_oz00_4853)
	{
		{	/* Cfa/cinfo3.sch 404 */
			return
				BGl_newzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4853));
		}

	}



/* new/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_155, obj_t BgL_vz00_156)
	{
		{	/* Cfa/cinfo3.sch 405 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_155)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_156), BUNSPEC);
		}

	}



/* &new/Cinfo-side-effect-set! */
	obj_t BGl_z62newzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4854, obj_t BgL_oz00_4855, obj_t BgL_vz00_4856)
	{
		{	/* Cfa/cinfo3.sch 405 */
			return
				BGl_newzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4855), BgL_vz00_4856);
		}

	}



/* new/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_newzf2Cinfozd2typez20zzcfa_info3z00(BgL_newz00_bglt BgL_oz00_157)
	{
		{	/* Cfa/cinfo3.sch 406 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_157)))->BgL_typez00);
		}

	}



/* &new/Cinfo-type */
	BgL_typez00_bglt BGl_z62newzf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_4857, obj_t BgL_oz00_4858)
	{
		{	/* Cfa/cinfo3.sch 406 */
			return
				BGl_newzf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4858));
		}

	}



/* new/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_newzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_158, BgL_typez00_bglt BgL_vz00_159)
	{
		{	/* Cfa/cinfo3.sch 407 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_158)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_159), BUNSPEC);
		}

	}



/* &new/Cinfo-type-set! */
	obj_t BGl_z62newzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4859, obj_t BgL_oz00_4860, obj_t BgL_vz00_4861)
	{
		{	/* Cfa/cinfo3.sch 407 */
			return
				BGl_newzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4860), ((BgL_typez00_bglt) BgL_vz00_4861));
		}

	}



/* new/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t BGl_newzf2Cinfozd2locz20zzcfa_info3z00(BgL_newz00_bglt
		BgL_oz00_160)
	{
		{	/* Cfa/cinfo3.sch 408 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_160)))->BgL_locz00);
		}

	}



/* &new/Cinfo-loc */
	obj_t BGl_z62newzf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_4862,
		obj_t BgL_oz00_4863)
	{
		{	/* Cfa/cinfo3.sch 408 */
			return
				BGl_newzf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_newz00_bglt) BgL_oz00_4863));
		}

	}



/* make-instanceof/Cinfo */
	BGL_EXPORTED_DEF BgL_instanceofz00_bglt
		BGl_makezd2instanceofzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc1417z00_163,
		BgL_typez00_bglt BgL_type1418z00_164, obj_t BgL_sidezd2effect1419zd2_165,
		obj_t BgL_key1420z00_166, obj_t BgL_exprza21421za2_167,
		obj_t BgL_effect1422z00_168, obj_t BgL_czd2format1423zd2_169,
		BgL_typez00_bglt BgL_class1424z00_170,
		BgL_approxz00_bglt BgL_approx1425z00_171)
	{
		{	/* Cfa/cinfo3.sch 412 */
			{	/* Cfa/cinfo3.sch 412 */
				BgL_instanceofz00_bglt BgL_new1352z00_5819;

				{	/* Cfa/cinfo3.sch 412 */
					BgL_instanceofz00_bglt BgL_tmp1350z00_5820;
					BgL_instanceofzf2cinfozf2_bglt BgL_wide1351z00_5821;

					{
						BgL_instanceofz00_bglt BgL_auxz00_6920;

						{	/* Cfa/cinfo3.sch 412 */
							BgL_instanceofz00_bglt BgL_new1349z00_5822;

							BgL_new1349z00_5822 =
								((BgL_instanceofz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_instanceofz00_bgl))));
							{	/* Cfa/cinfo3.sch 412 */
								long BgL_arg1727z00_5823;

								{	/* Cfa/cinfo3.sch 412 */
									long BgL_res2254z00_5824;

									BgL_res2254z00_5824 =
										BGL_CLASS_INDEX(BGl_instanceofz00zzast_nodez00);
									BgL_arg1727z00_5823 = BgL_res2254z00_5824;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1349z00_5822),
									BgL_arg1727z00_5823);
							}
							{	/* Cfa/cinfo3.sch 412 */
								BgL_objectz00_bglt BgL_tmpz00_6925;

								BgL_tmpz00_6925 = ((BgL_objectz00_bglt) BgL_new1349z00_5822);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6925, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1349z00_5822);
							BgL_auxz00_6920 = BgL_new1349z00_5822;
						}
						BgL_tmp1350z00_5820 = ((BgL_instanceofz00_bglt) BgL_auxz00_6920);
					}
					BgL_wide1351z00_5821 =
						((BgL_instanceofzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_instanceofzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 412 */
						obj_t BgL_auxz00_6933;
						BgL_objectz00_bglt BgL_tmpz00_6931;

						BgL_auxz00_6933 = ((obj_t) BgL_wide1351z00_5821);
						BgL_tmpz00_6931 = ((BgL_objectz00_bglt) BgL_tmp1350z00_5820);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6931, BgL_auxz00_6933);
					}
					((BgL_objectz00_bglt) BgL_tmp1350z00_5820);
					{	/* Cfa/cinfo3.sch 412 */
						long BgL_arg1726z00_5825;

						{	/* Cfa/cinfo3.sch 412 */
							long BgL_res2255z00_5826;

							BgL_res2255z00_5826 =
								BGL_CLASS_INDEX(BGl_instanceofzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1726z00_5825 = BgL_res2255z00_5826;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1350z00_5820), BgL_arg1726z00_5825);
					}
					BgL_new1352z00_5819 = ((BgL_instanceofz00_bglt) BgL_tmp1350z00_5820);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1352z00_5819)))->BgL_locz00) =
					((obj_t) BgL_loc1417z00_163), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1352z00_5819)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1418z00_164), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1352z00_5819)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1419zd2_165), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1352z00_5819)))->BgL_keyz00) =
					((obj_t) BgL_key1420z00_166), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1352z00_5819)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21421za2_167), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1352z00_5819)))->BgL_effectz00) =
					((obj_t) BgL_effect1422z00_168), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1352z00_5819)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1423zd2_169), BUNSPEC);
				((((BgL_instanceofz00_bglt) COBJECT(((BgL_instanceofz00_bglt)
									BgL_new1352z00_5819)))->BgL_classz00) =
					((BgL_typez00_bglt) BgL_class1424z00_170), BUNSPEC);
				{
					BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_6957;

					{
						obj_t BgL_auxz00_6958;

						{	/* Cfa/cinfo3.sch 412 */
							BgL_objectz00_bglt BgL_tmpz00_6959;

							BgL_tmpz00_6959 = ((BgL_objectz00_bglt) BgL_new1352z00_5819);
							BgL_auxz00_6958 = BGL_OBJECT_WIDENING(BgL_tmpz00_6959);
						}
						BgL_auxz00_6957 =
							((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_6958);
					}
					((((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6957))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1425z00_171), BUNSPEC);
				}
				return BgL_new1352z00_5819;
			}
		}

	}



/* &make-instanceof/Cinfo */
	BgL_instanceofz00_bglt BGl_z62makezd2instanceofzf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_4864, obj_t BgL_loc1417z00_4865, obj_t BgL_type1418z00_4866,
		obj_t BgL_sidezd2effect1419zd2_4867, obj_t BgL_key1420z00_4868,
		obj_t BgL_exprza21421za2_4869, obj_t BgL_effect1422z00_4870,
		obj_t BgL_czd2format1423zd2_4871, obj_t BgL_class1424z00_4872,
		obj_t BgL_approx1425z00_4873)
	{
		{	/* Cfa/cinfo3.sch 412 */
			return
				BGl_makezd2instanceofzf2Cinfoz20zzcfa_info3z00(BgL_loc1417z00_4865,
				((BgL_typez00_bglt) BgL_type1418z00_4866),
				BgL_sidezd2effect1419zd2_4867, BgL_key1420z00_4868,
				BgL_exprza21421za2_4869, BgL_effect1422z00_4870,
				BgL_czd2format1423zd2_4871, ((BgL_typez00_bglt) BgL_class1424z00_4872),
				((BgL_approxz00_bglt) BgL_approx1425z00_4873));
		}

	}



/* instanceof/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_instanceofzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_172)
	{
		{	/* Cfa/cinfo3.sch 413 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_172,
				BGl_instanceofzf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &instanceof/Cinfo? */
	obj_t BGl_z62instanceofzf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_4874,
		obj_t BgL_objz00_4875)
	{
		{	/* Cfa/cinfo3.sch 413 */
			return BBOOL(BGl_instanceofzf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_4875));
		}

	}



/* instanceof/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_instanceofz00_bglt
		BGl_instanceofzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 414 */
			{	/* Cfa/cinfo3.sch 414 */
				obj_t BgL_classz00_3934;

				BgL_classz00_3934 = BGl_instanceofzf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 414 */
					obj_t BgL__ortest_1106z00_3935;

					BgL__ortest_1106z00_3935 = BGL_CLASS_NIL(BgL_classz00_3934);
					if (CBOOL(BgL__ortest_1106z00_3935))
						{	/* Cfa/cinfo3.sch 414 */
							return ((BgL_instanceofz00_bglt) BgL__ortest_1106z00_3935);
						}
					else
						{	/* Cfa/cinfo3.sch 414 */
							return
								((BgL_instanceofz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3934));
						}
				}
			}
		}

	}



/* &instanceof/Cinfo-nil */
	BgL_instanceofz00_bglt BGl_z62instanceofzf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_4876)
	{
		{	/* Cfa/cinfo3.sch 414 */
			return BGl_instanceofzf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* instanceof/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_instanceofzf2Cinfozd2approxz20zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_173)
	{
		{	/* Cfa/cinfo3.sch 415 */
			{
				BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_6978;

				{
					obj_t BgL_auxz00_6979;

					{	/* Cfa/cinfo3.sch 415 */
						BgL_objectz00_bglt BgL_tmpz00_6980;

						BgL_tmpz00_6980 = ((BgL_objectz00_bglt) BgL_oz00_173);
						BgL_auxz00_6979 = BGL_OBJECT_WIDENING(BgL_tmpz00_6980);
					}
					BgL_auxz00_6978 = ((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_6979);
				}
				return
					(((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_6978))->
					BgL_approxz00);
			}
		}

	}



/* &instanceof/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62instanceofzf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_4877, obj_t BgL_oz00_4878)
	{
		{	/* Cfa/cinfo3.sch 415 */
			return
				BGl_instanceofzf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4878));
		}

	}



/* instanceof/Cinfo-class */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_instanceofzf2Cinfozd2classz20zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_176)
	{
		{	/* Cfa/cinfo3.sch 417 */
			return
				(((BgL_instanceofz00_bglt) COBJECT(
						((BgL_instanceofz00_bglt) BgL_oz00_176)))->BgL_classz00);
		}

	}



/* &instanceof/Cinfo-class */
	BgL_typez00_bglt BGl_z62instanceofzf2Cinfozd2classz42zzcfa_info3z00(obj_t
		BgL_envz00_4879, obj_t BgL_oz00_4880)
	{
		{	/* Cfa/cinfo3.sch 417 */
			return
				BGl_instanceofzf2Cinfozd2classz20zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4880));
		}

	}



/* instanceof/Cinfo-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2classzd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt BgL_oz00_177, BgL_typez00_bglt BgL_vz00_178)
	{
		{	/* Cfa/cinfo3.sch 418 */
			return
				((((BgL_instanceofz00_bglt) COBJECT(
							((BgL_instanceofz00_bglt) BgL_oz00_177)))->BgL_classz00) =
				((BgL_typez00_bglt) BgL_vz00_178), BUNSPEC);
		}

	}



/* &instanceof/Cinfo-class-set! */
	obj_t BGl_z62instanceofzf2Cinfozd2classzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4881, obj_t BgL_oz00_4882, obj_t BgL_vz00_4883)
	{
		{	/* Cfa/cinfo3.sch 418 */
			return
				BGl_instanceofzf2Cinfozd2classzd2setz12ze0zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4882),
				((BgL_typez00_bglt) BgL_vz00_4883));
		}

	}



/* instanceof/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_179)
	{
		{	/* Cfa/cinfo3.sch 419 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_179)))->BgL_czd2formatzd2);
		}

	}



/* &instanceof/Cinfo-c-format */
	obj_t BGl_z62instanceofzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t
		BgL_envz00_4884, obj_t BgL_oz00_4885)
	{
		{	/* Cfa/cinfo3.sch 419 */
			return
				BGl_instanceofzf2Cinfozd2czd2formatzf2zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4885));
		}

	}



/* instanceof/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2effectz20zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_182)
	{
		{	/* Cfa/cinfo3.sch 421 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_182)))->BgL_effectz00);
		}

	}



/* &instanceof/Cinfo-effect */
	obj_t BGl_z62instanceofzf2Cinfozd2effectz42zzcfa_info3z00(obj_t
		BgL_envz00_4886, obj_t BgL_oz00_4887)
	{
		{	/* Cfa/cinfo3.sch 421 */
			return
				BGl_instanceofzf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4887));
		}

	}



/* instanceof/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt BgL_oz00_183, obj_t BgL_vz00_184)
	{
		{	/* Cfa/cinfo3.sch 422 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_183)))->BgL_effectz00) =
				((obj_t) BgL_vz00_184), BUNSPEC);
		}

	}



/* &instanceof/Cinfo-effect-set! */
	obj_t BGl_z62instanceofzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4888, obj_t BgL_oz00_4889, obj_t BgL_vz00_4890)
	{
		{	/* Cfa/cinfo3.sch 422 */
			return
				BGl_instanceofzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4889), BgL_vz00_4890);
		}

	}



/* instanceof/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_185)
	{
		{	/* Cfa/cinfo3.sch 423 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_185)))->BgL_exprza2za2);
		}

	}



/* &instanceof/Cinfo-expr* */
	obj_t BGl_z62instanceofzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t
		BgL_envz00_4891, obj_t BgL_oz00_4892)
	{
		{	/* Cfa/cinfo3.sch 423 */
			return
				BGl_instanceofzf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4892));
		}

	}



/* instanceof/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00
		(BgL_instanceofz00_bglt BgL_oz00_186, obj_t BgL_vz00_187)
	{
		{	/* Cfa/cinfo3.sch 424 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_186)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_187), BUNSPEC);
		}

	}



/* &instanceof/Cinfo-expr*-set! */
	obj_t BGl_z62instanceofzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_4893, obj_t BgL_oz00_4894, obj_t BgL_vz00_4895)
	{
		{	/* Cfa/cinfo3.sch 424 */
			return
				BGl_instanceofzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4894), BgL_vz00_4895);
		}

	}



/* instanceof/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2keyz20zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_188)
	{
		{	/* Cfa/cinfo3.sch 425 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_188)))->BgL_keyz00);
		}

	}



/* &instanceof/Cinfo-key */
	obj_t BGl_z62instanceofzf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_4896,
		obj_t BgL_oz00_4897)
	{
		{	/* Cfa/cinfo3.sch 425 */
			return
				BGl_instanceofzf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4897));
		}

	}



/* instanceof/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt BgL_oz00_189, obj_t BgL_vz00_190)
	{
		{	/* Cfa/cinfo3.sch 426 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_189)))->BgL_keyz00) =
				((obj_t) BgL_vz00_190), BUNSPEC);
		}

	}



/* &instanceof/Cinfo-key-set! */
	obj_t BGl_z62instanceofzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4898, obj_t BgL_oz00_4899, obj_t BgL_vz00_4900)
	{
		{	/* Cfa/cinfo3.sch 426 */
			return
				BGl_instanceofzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4899), BgL_vz00_4900);
		}

	}



/* instanceof/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00
		(BgL_instanceofz00_bglt BgL_oz00_191)
	{
		{	/* Cfa/cinfo3.sch 427 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_191)))->BgL_sidezd2effectzd2);
		}

	}



/* &instanceof/Cinfo-side-effect */
	obj_t BGl_z62instanceofzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_4901, obj_t BgL_oz00_4902)
	{
		{	/* Cfa/cinfo3.sch 427 */
			return
				BGl_instanceofzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4902));
		}

	}



/* instanceof/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_instanceofz00_bglt BgL_oz00_192, obj_t BgL_vz00_193)
	{
		{	/* Cfa/cinfo3.sch 428 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_192)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_193), BUNSPEC);
		}

	}



/* &instanceof/Cinfo-side-effect-set! */
	obj_t
		BGl_z62instanceofzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4903, obj_t BgL_oz00_4904, obj_t BgL_vz00_4905)
	{
		{	/* Cfa/cinfo3.sch 428 */
			return
				BGl_instanceofzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4904), BgL_vz00_4905);
		}

	}



/* instanceof/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_instanceofzf2Cinfozd2typez20zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_194)
	{
		{	/* Cfa/cinfo3.sch 429 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_194)))->BgL_typez00);
		}

	}



/* &instanceof/Cinfo-type */
	BgL_typez00_bglt BGl_z62instanceofzf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_4906, obj_t BgL_oz00_4907)
	{
		{	/* Cfa/cinfo3.sch 429 */
			return
				BGl_instanceofzf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4907));
		}

	}



/* instanceof/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00
		(BgL_instanceofz00_bglt BgL_oz00_195, BgL_typez00_bglt BgL_vz00_196)
	{
		{	/* Cfa/cinfo3.sch 430 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_195)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_196), BUNSPEC);
		}

	}



/* &instanceof/Cinfo-type-set! */
	obj_t BGl_z62instanceofzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4908, obj_t BgL_oz00_4909, obj_t BgL_vz00_4910)
	{
		{	/* Cfa/cinfo3.sch 430 */
			return
				BGl_instanceofzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4909),
				((BgL_typez00_bglt) BgL_vz00_4910));
		}

	}



/* instanceof/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_instanceofzf2Cinfozd2locz20zzcfa_info3z00(BgL_instanceofz00_bglt
		BgL_oz00_197)
	{
		{	/* Cfa/cinfo3.sch 431 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_197)))->BgL_locz00);
		}

	}



/* &instanceof/Cinfo-loc */
	obj_t BGl_z62instanceofzf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_4911,
		obj_t BgL_oz00_4912)
	{
		{	/* Cfa/cinfo3.sch 431 */
			return
				BGl_instanceofzf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_instanceofz00_bglt) BgL_oz00_4912));
		}

	}



/* make-cast-null/Cinfo */
	BGL_EXPORTED_DEF BgL_castzd2nullzd2_bglt
		BGl_makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00(obj_t BgL_loc1408z00_200,
		BgL_typez00_bglt BgL_type1409z00_201, obj_t BgL_sidezd2effect1410zd2_202,
		obj_t BgL_key1411z00_203, obj_t BgL_exprza21412za2_204,
		obj_t BgL_effect1413z00_205, obj_t BgL_czd2format1414zd2_206,
		BgL_approxz00_bglt BgL_approx1415z00_207)
	{
		{	/* Cfa/cinfo3.sch 435 */
			{	/* Cfa/cinfo3.sch 435 */
				BgL_castzd2nullzd2_bglt BgL_new1356z00_5827;

				{	/* Cfa/cinfo3.sch 435 */
					BgL_castzd2nullzd2_bglt BgL_tmp1354z00_5828;
					BgL_castzd2nullzf2cinfoz20_bglt BgL_wide1355z00_5829;

					{
						BgL_castzd2nullzd2_bglt BgL_auxz00_7045;

						{	/* Cfa/cinfo3.sch 435 */
							BgL_castzd2nullzd2_bglt BgL_new1353z00_5830;

							BgL_new1353z00_5830 =
								((BgL_castzd2nullzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_castzd2nullzd2_bgl))));
							{	/* Cfa/cinfo3.sch 435 */
								long BgL_arg1729z00_5831;

								{	/* Cfa/cinfo3.sch 435 */
									long BgL_res2256z00_5832;

									BgL_res2256z00_5832 =
										BGL_CLASS_INDEX(BGl_castzd2nullzd2zzast_nodez00);
									BgL_arg1729z00_5831 = BgL_res2256z00_5832;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1353z00_5830),
									BgL_arg1729z00_5831);
							}
							{	/* Cfa/cinfo3.sch 435 */
								BgL_objectz00_bglt BgL_tmpz00_7050;

								BgL_tmpz00_7050 = ((BgL_objectz00_bglt) BgL_new1353z00_5830);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7050, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1353z00_5830);
							BgL_auxz00_7045 = BgL_new1353z00_5830;
						}
						BgL_tmp1354z00_5828 = ((BgL_castzd2nullzd2_bglt) BgL_auxz00_7045);
					}
					BgL_wide1355z00_5829 =
						((BgL_castzd2nullzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_castzd2nullzf2cinfoz20_bgl))));
					{	/* Cfa/cinfo3.sch 435 */
						obj_t BgL_auxz00_7058;
						BgL_objectz00_bglt BgL_tmpz00_7056;

						BgL_auxz00_7058 = ((obj_t) BgL_wide1355z00_5829);
						BgL_tmpz00_7056 = ((BgL_objectz00_bglt) BgL_tmp1354z00_5828);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7056, BgL_auxz00_7058);
					}
					((BgL_objectz00_bglt) BgL_tmp1354z00_5828);
					{	/* Cfa/cinfo3.sch 435 */
						long BgL_arg1728z00_5833;

						{	/* Cfa/cinfo3.sch 435 */
							long BgL_res2257z00_5834;

							BgL_res2257z00_5834 =
								BGL_CLASS_INDEX(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
							BgL_arg1728z00_5833 = BgL_res2257z00_5834;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1354z00_5828), BgL_arg1728z00_5833);
					}
					BgL_new1356z00_5827 = ((BgL_castzd2nullzd2_bglt) BgL_tmp1354z00_5828);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1356z00_5827)))->BgL_locz00) =
					((obj_t) BgL_loc1408z00_200), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1356z00_5827)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1409z00_201), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1356z00_5827)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1410zd2_202), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1356z00_5827)))->BgL_keyz00) =
					((obj_t) BgL_key1411z00_203), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1356z00_5827)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21412za2_204), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1356z00_5827)))->BgL_effectz00) =
					((obj_t) BgL_effect1413z00_205), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1356z00_5827)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1414zd2_206), BUNSPEC);
				{
					BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_7080;

					{
						obj_t BgL_auxz00_7081;

						{	/* Cfa/cinfo3.sch 435 */
							BgL_objectz00_bglt BgL_tmpz00_7082;

							BgL_tmpz00_7082 = ((BgL_objectz00_bglt) BgL_new1356z00_5827);
							BgL_auxz00_7081 = BGL_OBJECT_WIDENING(BgL_tmpz00_7082);
						}
						BgL_auxz00_7080 =
							((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_7081);
					}
					((((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_7080))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1415z00_207), BUNSPEC);
				}
				return BgL_new1356z00_5827;
			}
		}

	}



/* &make-cast-null/Cinfo */
	BgL_castzd2nullzd2_bglt
		BGl_z62makezd2castzd2nullzf2Cinfoz90zzcfa_info3z00(obj_t BgL_envz00_4913,
		obj_t BgL_loc1408z00_4914, obj_t BgL_type1409z00_4915,
		obj_t BgL_sidezd2effect1410zd2_4916, obj_t BgL_key1411z00_4917,
		obj_t BgL_exprza21412za2_4918, obj_t BgL_effect1413z00_4919,
		obj_t BgL_czd2format1414zd2_4920, obj_t BgL_approx1415z00_4921)
	{
		{	/* Cfa/cinfo3.sch 435 */
			return
				BGl_makezd2castzd2nullzf2Cinfozf2zzcfa_info3z00(BgL_loc1408z00_4914,
				((BgL_typez00_bglt) BgL_type1409z00_4915),
				BgL_sidezd2effect1410zd2_4916, BgL_key1411z00_4917,
				BgL_exprza21412za2_4918, BgL_effect1413z00_4919,
				BgL_czd2format1414zd2_4920,
				((BgL_approxz00_bglt) BgL_approx1415z00_4921));
		}

	}



/* cast-null/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_castzd2nullzf2Cinfozf3zd3zzcfa_info3z00(obj_t
		BgL_objz00_208)
	{
		{	/* Cfa/cinfo3.sch 436 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_208,
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
		}

	}



/* &cast-null/Cinfo? */
	obj_t BGl_z62castzd2nullzf2Cinfozf3zb1zzcfa_info3z00(obj_t BgL_envz00_4922,
		obj_t BgL_objz00_4923)
	{
		{	/* Cfa/cinfo3.sch 436 */
			return
				BBOOL(BGl_castzd2nullzf2Cinfozf3zd3zzcfa_info3z00(BgL_objz00_4923));
		}

	}



/* cast-null/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_castzd2nullzd2_bglt
		BGl_castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 437 */
			{	/* Cfa/cinfo3.sch 437 */
				obj_t BgL_classz00_3954;

				BgL_classz00_3954 = BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 437 */
					obj_t BgL__ortest_1106z00_3955;

					BgL__ortest_1106z00_3955 = BGL_CLASS_NIL(BgL_classz00_3954);
					if (CBOOL(BgL__ortest_1106z00_3955))
						{	/* Cfa/cinfo3.sch 437 */
							return ((BgL_castzd2nullzd2_bglt) BgL__ortest_1106z00_3955);
						}
					else
						{	/* Cfa/cinfo3.sch 437 */
							return
								((BgL_castzd2nullzd2_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3954));
						}
				}
			}
		}

	}



/* &cast-null/Cinfo-nil */
	BgL_castzd2nullzd2_bglt
		BGl_z62castzd2nullzf2Cinfozd2nilz90zzcfa_info3z00(obj_t BgL_envz00_4924)
	{
		{	/* Cfa/cinfo3.sch 437 */
			return BGl_castzd2nullzf2Cinfozd2nilzf2zzcfa_info3z00();
		}

	}



/* cast-null/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_castzd2nullzf2Cinfozd2approxzf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt
		BgL_oz00_209)
	{
		{	/* Cfa/cinfo3.sch 438 */
			{
				BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_7100;

				{
					obj_t BgL_auxz00_7101;

					{	/* Cfa/cinfo3.sch 438 */
						BgL_objectz00_bglt BgL_tmpz00_7102;

						BgL_tmpz00_7102 = ((BgL_objectz00_bglt) BgL_oz00_209);
						BgL_auxz00_7101 = BGL_OBJECT_WIDENING(BgL_tmpz00_7102);
					}
					BgL_auxz00_7100 = ((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_7101);
				}
				return
					(((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_7100))->
					BgL_approxz00);
			}
		}

	}



/* &cast-null/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62castzd2nullzf2Cinfozd2approxz90zzcfa_info3z00(obj_t
		BgL_envz00_4925, obj_t BgL_oz00_4926)
	{
		{	/* Cfa/cinfo3.sch 438 */
			return
				BGl_castzd2nullzf2Cinfozd2approxzf2zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4926));
		}

	}



/* cast-null/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2czd2formatz20zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt BgL_oz00_212)
	{
		{	/* Cfa/cinfo3.sch 440 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_212)))->BgL_czd2formatzd2);
		}

	}



/* &cast-null/Cinfo-c-format */
	obj_t BGl_z62castzd2nullzf2Cinfozd2czd2formatz42zzcfa_info3z00(obj_t
		BgL_envz00_4927, obj_t BgL_oz00_4928)
	{
		{	/* Cfa/cinfo3.sch 440 */
			return
				BGl_castzd2nullzf2Cinfozd2czd2formatz20zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4928));
		}

	}



/* cast-null/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2effectzf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt
		BgL_oz00_215)
	{
		{	/* Cfa/cinfo3.sch 442 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_215)))->BgL_effectz00);
		}

	}



/* &cast-null/Cinfo-effect */
	obj_t BGl_z62castzd2nullzf2Cinfozd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_4929, obj_t BgL_oz00_4930)
	{
		{	/* Cfa/cinfo3.sch 442 */
			return
				BGl_castzd2nullzf2Cinfozd2effectzf2zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4930));
		}

	}



/* cast-null/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2effectzd2setz12z32zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt BgL_oz00_216, obj_t BgL_vz00_217)
	{
		{	/* Cfa/cinfo3.sch 443 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_216)))->BgL_effectz00) =
				((obj_t) BgL_vz00_217), BUNSPEC);
		}

	}



/* &cast-null/Cinfo-effect-set! */
	obj_t BGl_z62castzd2nullzf2Cinfozd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4931, obj_t BgL_oz00_4932, obj_t BgL_vz00_4933)
	{
		{	/* Cfa/cinfo3.sch 443 */
			return
				BGl_castzd2nullzf2Cinfozd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4932), BgL_vz00_4933);
		}

	}



/* cast-null/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2exprza2z50zzcfa_info3z00(BgL_castzd2nullzd2_bglt
		BgL_oz00_218)
	{
		{	/* Cfa/cinfo3.sch 444 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_218)))->BgL_exprza2za2);
		}

	}



/* &cast-null/Cinfo-expr* */
	obj_t BGl_z62castzd2nullzf2Cinfozd2exprza2z32zzcfa_info3z00(obj_t
		BgL_envz00_4934, obj_t BgL_oz00_4935)
	{
		{	/* Cfa/cinfo3.sch 444 */
			return
				BGl_castzd2nullzf2Cinfozd2exprza2z50zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4935));
		}

	}



/* cast-null/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2exprza2zd2setz12z90zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt BgL_oz00_219, obj_t BgL_vz00_220)
	{
		{	/* Cfa/cinfo3.sch 445 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_219)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_220), BUNSPEC);
		}

	}



/* &cast-null/Cinfo-expr*-set! */
	obj_t BGl_z62castzd2nullzf2Cinfozd2exprza2zd2setz12zf2zzcfa_info3z00(obj_t
		BgL_envz00_4936, obj_t BgL_oz00_4937, obj_t BgL_vz00_4938)
	{
		{	/* Cfa/cinfo3.sch 445 */
			return
				BGl_castzd2nullzf2Cinfozd2exprza2zd2setz12z90zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4937), BgL_vz00_4938);
		}

	}



/* cast-null/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2keyzf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt
		BgL_oz00_221)
	{
		{	/* Cfa/cinfo3.sch 446 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_221)))->BgL_keyz00);
		}

	}



/* &cast-null/Cinfo-key */
	obj_t BGl_z62castzd2nullzf2Cinfozd2keyz90zzcfa_info3z00(obj_t BgL_envz00_4939,
		obj_t BgL_oz00_4940)
	{
		{	/* Cfa/cinfo3.sch 446 */
			return
				BGl_castzd2nullzf2Cinfozd2keyzf2zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4940));
		}

	}



/* cast-null/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2keyzd2setz12z32zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt BgL_oz00_222, obj_t BgL_vz00_223)
	{
		{	/* Cfa/cinfo3.sch 447 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_222)))->BgL_keyz00) =
				((obj_t) BgL_vz00_223), BUNSPEC);
		}

	}



/* &cast-null/Cinfo-key-set! */
	obj_t BGl_z62castzd2nullzf2Cinfozd2keyzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4941, obj_t BgL_oz00_4942, obj_t BgL_vz00_4943)
	{
		{	/* Cfa/cinfo3.sch 447 */
			return
				BGl_castzd2nullzf2Cinfozd2keyzd2setz12z32zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4942), BgL_vz00_4943);
		}

	}



/* cast-null/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2sidezd2effectz20zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt BgL_oz00_224)
	{
		{	/* Cfa/cinfo3.sch 448 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_224)))->BgL_sidezd2effectzd2);
		}

	}



/* &cast-null/Cinfo-side-effect */
	obj_t BGl_z62castzd2nullzf2Cinfozd2sidezd2effectz42zzcfa_info3z00(obj_t
		BgL_envz00_4944, obj_t BgL_oz00_4945)
	{
		{	/* Cfa/cinfo3.sch 448 */
			return
				BGl_castzd2nullzf2Cinfozd2sidezd2effectz20zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4945));
		}

	}



/* cast-null/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2sidezd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt BgL_oz00_225, obj_t BgL_vz00_226)
	{
		{	/* Cfa/cinfo3.sch 449 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_225)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_226), BUNSPEC);
		}

	}



/* &cast-null/Cinfo-side-effect-set! */
	obj_t
		BGl_z62castzd2nullzf2Cinfozd2sidezd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4946, obj_t BgL_oz00_4947, obj_t BgL_vz00_4948)
	{
		{	/* Cfa/cinfo3.sch 449 */
			return
				BGl_castzd2nullzf2Cinfozd2sidezd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4947), BgL_vz00_4948);
		}

	}



/* cast-null/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_castzd2nullzf2Cinfozd2typezf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt
		BgL_oz00_227)
	{
		{	/* Cfa/cinfo3.sch 450 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_227)))->BgL_typez00);
		}

	}



/* &cast-null/Cinfo-type */
	BgL_typez00_bglt BGl_z62castzd2nullzf2Cinfozd2typez90zzcfa_info3z00(obj_t
		BgL_envz00_4949, obj_t BgL_oz00_4950)
	{
		{	/* Cfa/cinfo3.sch 450 */
			return
				BGl_castzd2nullzf2Cinfozd2typezf2zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4950));
		}

	}



/* cast-null/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2typezd2setz12z32zzcfa_info3z00
		(BgL_castzd2nullzd2_bglt BgL_oz00_228, BgL_typez00_bglt BgL_vz00_229)
	{
		{	/* Cfa/cinfo3.sch 451 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_228)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_229), BUNSPEC);
		}

	}



/* &cast-null/Cinfo-type-set! */
	obj_t BGl_z62castzd2nullzf2Cinfozd2typezd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_4951, obj_t BgL_oz00_4952, obj_t BgL_vz00_4953)
	{
		{	/* Cfa/cinfo3.sch 451 */
			return
				BGl_castzd2nullzf2Cinfozd2typezd2setz12z32zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4952),
				((BgL_typez00_bglt) BgL_vz00_4953));
		}

	}



/* cast-null/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_castzd2nullzf2Cinfozd2loczf2zzcfa_info3z00(BgL_castzd2nullzd2_bglt
		BgL_oz00_230)
	{
		{	/* Cfa/cinfo3.sch 452 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_230)))->BgL_locz00);
		}

	}



/* &cast-null/Cinfo-loc */
	obj_t BGl_z62castzd2nullzf2Cinfozd2locz90zzcfa_info3z00(obj_t BgL_envz00_4954,
		obj_t BgL_oz00_4955)
	{
		{	/* Cfa/cinfo3.sch 452 */
			return
				BGl_castzd2nullzf2Cinfozd2loczf2zzcfa_info3z00(
				((BgL_castzd2nullzd2_bglt) BgL_oz00_4955));
		}

	}



/* make-vref/Cinfo */
	BGL_EXPORTED_DEF BgL_vrefz00_bglt
		BGl_makezd2vrefzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc1394z00_233,
		BgL_typez00_bglt BgL_type1395z00_234, obj_t BgL_sidezd2effect1396zd2_235,
		obj_t BgL_key1397z00_236, obj_t BgL_exprza21398za2_237,
		obj_t BgL_effect1399z00_238, obj_t BgL_czd2format1400zd2_239,
		BgL_typez00_bglt BgL_ftype1401z00_240,
		BgL_typez00_bglt BgL_otype1402z00_241,
		BgL_typez00_bglt BgL_vtype1403z00_242, bool_t BgL_unsafe1404z00_243,
		BgL_approxz00_bglt BgL_approx1405z00_244, bool_t BgL_tvectorzf31406zf3_245)
	{
		{	/* Cfa/cinfo3.sch 456 */
			{	/* Cfa/cinfo3.sch 456 */
				BgL_vrefz00_bglt BgL_new1360z00_5835;

				{	/* Cfa/cinfo3.sch 456 */
					BgL_vrefz00_bglt BgL_tmp1358z00_5836;
					BgL_vrefzf2cinfozf2_bglt BgL_wide1359z00_5837;

					{
						BgL_vrefz00_bglt BgL_auxz00_7158;

						{	/* Cfa/cinfo3.sch 456 */
							BgL_vrefz00_bglt BgL_new1357z00_5838;

							BgL_new1357z00_5838 =
								((BgL_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vrefz00_bgl))));
							{	/* Cfa/cinfo3.sch 456 */
								long BgL_arg1732z00_5839;

								{	/* Cfa/cinfo3.sch 456 */
									long BgL_res2258z00_5840;

									BgL_res2258z00_5840 =
										BGL_CLASS_INDEX(BGl_vrefz00zzast_nodez00);
									BgL_arg1732z00_5839 = BgL_res2258z00_5840;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1357z00_5838),
									BgL_arg1732z00_5839);
							}
							{	/* Cfa/cinfo3.sch 456 */
								BgL_objectz00_bglt BgL_tmpz00_7163;

								BgL_tmpz00_7163 = ((BgL_objectz00_bglt) BgL_new1357z00_5838);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7163, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1357z00_5838);
							BgL_auxz00_7158 = BgL_new1357z00_5838;
						}
						BgL_tmp1358z00_5836 = ((BgL_vrefz00_bglt) BgL_auxz00_7158);
					}
					BgL_wide1359z00_5837 =
						((BgL_vrefzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vrefzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 456 */
						obj_t BgL_auxz00_7171;
						BgL_objectz00_bglt BgL_tmpz00_7169;

						BgL_auxz00_7171 = ((obj_t) BgL_wide1359z00_5837);
						BgL_tmpz00_7169 = ((BgL_objectz00_bglt) BgL_tmp1358z00_5836);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7169, BgL_auxz00_7171);
					}
					((BgL_objectz00_bglt) BgL_tmp1358z00_5836);
					{	/* Cfa/cinfo3.sch 456 */
						long BgL_arg1731z00_5841;

						{	/* Cfa/cinfo3.sch 456 */
							long BgL_res2259z00_5842;

							BgL_res2259z00_5842 =
								BGL_CLASS_INDEX(BGl_vrefzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1731z00_5841 = BgL_res2259z00_5842;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1358z00_5836), BgL_arg1731z00_5841);
					}
					BgL_new1360z00_5835 = ((BgL_vrefz00_bglt) BgL_tmp1358z00_5836);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1360z00_5835)))->BgL_locz00) =
					((obj_t) BgL_loc1394z00_233), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1360z00_5835)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1395z00_234), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1360z00_5835)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1396zd2_235), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1360z00_5835)))->BgL_keyz00) =
					((obj_t) BgL_key1397z00_236), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1360z00_5835)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21398za2_237), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1360z00_5835)))->BgL_effectz00) =
					((obj_t) BgL_effect1399z00_238), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1360z00_5835)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1400zd2_239), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
									BgL_new1360z00_5835)))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype1401z00_240), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
									BgL_new1360z00_5835)))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype1402z00_241), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
									BgL_new1360z00_5835)))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype1403z00_242), BUNSPEC);
				((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
									BgL_new1360z00_5835)))->BgL_unsafez00) =
					((bool_t) BgL_unsafe1404z00_243), BUNSPEC);
				{
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_7201;

					{
						obj_t BgL_auxz00_7202;

						{	/* Cfa/cinfo3.sch 456 */
							BgL_objectz00_bglt BgL_tmpz00_7203;

							BgL_tmpz00_7203 = ((BgL_objectz00_bglt) BgL_new1360z00_5835);
							BgL_auxz00_7202 = BGL_OBJECT_WIDENING(BgL_tmpz00_7203);
						}
						BgL_auxz00_7201 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_7202);
					}
					((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7201))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1405z00_244), BUNSPEC);
				}
				{
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_7208;

					{
						obj_t BgL_auxz00_7209;

						{	/* Cfa/cinfo3.sch 456 */
							BgL_objectz00_bglt BgL_tmpz00_7210;

							BgL_tmpz00_7210 = ((BgL_objectz00_bglt) BgL_new1360z00_5835);
							BgL_auxz00_7209 = BGL_OBJECT_WIDENING(BgL_tmpz00_7210);
						}
						BgL_auxz00_7208 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_7209);
					}
					((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7208))->
							BgL_tvectorzf3zf3) =
						((bool_t) BgL_tvectorzf31406zf3_245), BUNSPEC);
				}
				return BgL_new1360z00_5835;
			}
		}

	}



/* &make-vref/Cinfo */
	BgL_vrefz00_bglt BGl_z62makezd2vrefzf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_4956, obj_t BgL_loc1394z00_4957, obj_t BgL_type1395z00_4958,
		obj_t BgL_sidezd2effect1396zd2_4959, obj_t BgL_key1397z00_4960,
		obj_t BgL_exprza21398za2_4961, obj_t BgL_effect1399z00_4962,
		obj_t BgL_czd2format1400zd2_4963, obj_t BgL_ftype1401z00_4964,
		obj_t BgL_otype1402z00_4965, obj_t BgL_vtype1403z00_4966,
		obj_t BgL_unsafe1404z00_4967, obj_t BgL_approx1405z00_4968,
		obj_t BgL_tvectorzf31406zf3_4969)
	{
		{	/* Cfa/cinfo3.sch 456 */
			return
				BGl_makezd2vrefzf2Cinfoz20zzcfa_info3z00(BgL_loc1394z00_4957,
				((BgL_typez00_bglt) BgL_type1395z00_4958),
				BgL_sidezd2effect1396zd2_4959, BgL_key1397z00_4960,
				BgL_exprza21398za2_4961, BgL_effect1399z00_4962,
				BgL_czd2format1400zd2_4963, ((BgL_typez00_bglt) BgL_ftype1401z00_4964),
				((BgL_typez00_bglt) BgL_otype1402z00_4965),
				((BgL_typez00_bglt) BgL_vtype1403z00_4966),
				CBOOL(BgL_unsafe1404z00_4967),
				((BgL_approxz00_bglt) BgL_approx1405z00_4968),
				CBOOL(BgL_tvectorzf31406zf3_4969));
		}

	}



/* vref/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_vrefzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_246)
	{
		{	/* Cfa/cinfo3.sch 457 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_246,
				BGl_vrefzf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &vref/Cinfo? */
	obj_t BGl_z62vrefzf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_4970,
		obj_t BgL_objz00_4971)
	{
		{	/* Cfa/cinfo3.sch 457 */
			return BBOOL(BGl_vrefzf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_4971));
		}

	}



/* vref/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vrefz00_bglt BGl_vrefzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 458 */
			{	/* Cfa/cinfo3.sch 458 */
				obj_t BgL_classz00_3975;

				BgL_classz00_3975 = BGl_vrefzf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 458 */
					obj_t BgL__ortest_1106z00_3976;

					BgL__ortest_1106z00_3976 = BGL_CLASS_NIL(BgL_classz00_3975);
					if (CBOOL(BgL__ortest_1106z00_3976))
						{	/* Cfa/cinfo3.sch 458 */
							return ((BgL_vrefz00_bglt) BgL__ortest_1106z00_3976);
						}
					else
						{	/* Cfa/cinfo3.sch 458 */
							return
								((BgL_vrefz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3975));
						}
				}
			}
		}

	}



/* &vref/Cinfo-nil */
	BgL_vrefz00_bglt BGl_z62vrefzf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_4972)
	{
		{	/* Cfa/cinfo3.sch 458 */
			return BGl_vrefzf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* vref/Cinfo-tvector? */
	BGL_EXPORTED_DEF bool_t
		BGl_vrefzf2Cinfozd2tvectorzf3zd3zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_247)
	{
		{	/* Cfa/cinfo3.sch 459 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_auxz00_7233;

				{
					obj_t BgL_auxz00_7234;

					{	/* Cfa/cinfo3.sch 459 */
						BgL_objectz00_bglt BgL_tmpz00_7235;

						BgL_tmpz00_7235 = ((BgL_objectz00_bglt) BgL_oz00_247);
						BgL_auxz00_7234 = BGL_OBJECT_WIDENING(BgL_tmpz00_7235);
					}
					BgL_auxz00_7233 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_7234);
				}
				return
					(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7233))->
					BgL_tvectorzf3zf3);
			}
		}

	}



/* &vref/Cinfo-tvector? */
	obj_t BGl_z62vrefzf2Cinfozd2tvectorzf3zb1zzcfa_info3z00(obj_t BgL_envz00_4973,
		obj_t BgL_oz00_4974)
	{
		{	/* Cfa/cinfo3.sch 459 */
			return
				BBOOL(BGl_vrefzf2Cinfozd2tvectorzf3zd3zzcfa_info3z00(
					((BgL_vrefz00_bglt) BgL_oz00_4974)));
		}

	}



/* vref/Cinfo-tvector?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2tvectorzf3zd2setz12z13zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_248, bool_t BgL_vz00_249)
	{
		{	/* Cfa/cinfo3.sch 460 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_auxz00_7243;

				{
					obj_t BgL_auxz00_7244;

					{	/* Cfa/cinfo3.sch 460 */
						BgL_objectz00_bglt BgL_tmpz00_7245;

						BgL_tmpz00_7245 = ((BgL_objectz00_bglt) BgL_oz00_248);
						BgL_auxz00_7244 = BGL_OBJECT_WIDENING(BgL_tmpz00_7245);
					}
					BgL_auxz00_7243 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_7244);
				}
				return
					((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7243))->
						BgL_tvectorzf3zf3) = ((bool_t) BgL_vz00_249), BUNSPEC);
			}
		}

	}



/* &vref/Cinfo-tvector?-set! */
	obj_t BGl_z62vrefzf2Cinfozd2tvectorzf3zd2setz12z71zzcfa_info3z00(obj_t
		BgL_envz00_4975, obj_t BgL_oz00_4976, obj_t BgL_vz00_4977)
	{
		{	/* Cfa/cinfo3.sch 460 */
			return
				BGl_vrefzf2Cinfozd2tvectorzf3zd2setz12z13zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4976), CBOOL(BgL_vz00_4977));
		}

	}



/* vref/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_vrefzf2Cinfozd2approxz20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_250)
	{
		{	/* Cfa/cinfo3.sch 461 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_auxz00_7253;

				{
					obj_t BgL_auxz00_7254;

					{	/* Cfa/cinfo3.sch 461 */
						BgL_objectz00_bglt BgL_tmpz00_7255;

						BgL_tmpz00_7255 = ((BgL_objectz00_bglt) BgL_oz00_250);
						BgL_auxz00_7254 = BGL_OBJECT_WIDENING(BgL_tmpz00_7255);
					}
					BgL_auxz00_7253 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_7254);
				}
				return
					(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7253))->
					BgL_approxz00);
			}
		}

	}



/* &vref/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62vrefzf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_4978, obj_t BgL_oz00_4979)
	{
		{	/* Cfa/cinfo3.sch 461 */
			return
				BGl_vrefzf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4979));
		}

	}



/* vref/Cinfo-unsafe */
	BGL_EXPORTED_DEF bool_t
		BGl_vrefzf2Cinfozd2unsafez20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_253)
	{
		{	/* Cfa/cinfo3.sch 463 */
			return
				(((BgL_vrefz00_bglt) COBJECT(
						((BgL_vrefz00_bglt) BgL_oz00_253)))->BgL_unsafez00);
		}

	}



/* &vref/Cinfo-unsafe */
	obj_t BGl_z62vrefzf2Cinfozd2unsafez42zzcfa_info3z00(obj_t BgL_envz00_4980,
		obj_t BgL_oz00_4981)
	{
		{	/* Cfa/cinfo3.sch 463 */
			return
				BBOOL(BGl_vrefzf2Cinfozd2unsafez20zzcfa_info3z00(
					((BgL_vrefz00_bglt) BgL_oz00_4981)));
		}

	}



/* vref/Cinfo-vtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2vtypez20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_256)
	{
		{	/* Cfa/cinfo3.sch 465 */
			return
				(((BgL_vrefz00_bglt) COBJECT(
						((BgL_vrefz00_bglt) BgL_oz00_256)))->BgL_vtypez00);
		}

	}



/* &vref/Cinfo-vtype */
	BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2vtypez42zzcfa_info3z00(obj_t
		BgL_envz00_4982, obj_t BgL_oz00_4983)
	{
		{	/* Cfa/cinfo3.sch 465 */
			return
				BGl_vrefzf2Cinfozd2vtypez20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4983));
		}

	}



/* vref/Cinfo-vtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2vtypezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_257, BgL_typez00_bglt BgL_vz00_258)
	{
		{	/* Cfa/cinfo3.sch 466 */
			return
				((((BgL_vrefz00_bglt) COBJECT(
							((BgL_vrefz00_bglt) BgL_oz00_257)))->BgL_vtypez00) =
				((BgL_typez00_bglt) BgL_vz00_258), BUNSPEC);
		}

	}



/* &vref/Cinfo-vtype-set! */
	obj_t BGl_z62vrefzf2Cinfozd2vtypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4984, obj_t BgL_oz00_4985, obj_t BgL_vz00_4986)
	{
		{	/* Cfa/cinfo3.sch 466 */
			return
				BGl_vrefzf2Cinfozd2vtypezd2setz12ze0zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4985), ((BgL_typez00_bglt) BgL_vz00_4986));
		}

	}



/* vref/Cinfo-otype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2otypez20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_259)
	{
		{	/* Cfa/cinfo3.sch 467 */
			return
				(((BgL_vrefz00_bglt) COBJECT(
						((BgL_vrefz00_bglt) BgL_oz00_259)))->BgL_otypez00);
		}

	}



/* &vref/Cinfo-otype */
	BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2otypez42zzcfa_info3z00(obj_t
		BgL_envz00_4987, obj_t BgL_oz00_4988)
	{
		{	/* Cfa/cinfo3.sch 467 */
			return
				BGl_vrefzf2Cinfozd2otypez20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4988));
		}

	}



/* vref/Cinfo-otype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_260, BgL_typez00_bglt BgL_vz00_261)
	{
		{	/* Cfa/cinfo3.sch 468 */
			return
				((((BgL_vrefz00_bglt) COBJECT(
							((BgL_vrefz00_bglt) BgL_oz00_260)))->BgL_otypez00) =
				((BgL_typez00_bglt) BgL_vz00_261), BUNSPEC);
		}

	}



/* &vref/Cinfo-otype-set! */
	obj_t BGl_z62vrefzf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4989, obj_t BgL_oz00_4990, obj_t BgL_vz00_4991)
	{
		{	/* Cfa/cinfo3.sch 468 */
			return
				BGl_vrefzf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4990), ((BgL_typez00_bglt) BgL_vz00_4991));
		}

	}



/* vref/Cinfo-ftype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_262)
	{
		{	/* Cfa/cinfo3.sch 469 */
			return
				(((BgL_vrefz00_bglt) COBJECT(
						((BgL_vrefz00_bglt) BgL_oz00_262)))->BgL_ftypez00);
		}

	}



/* &vref/Cinfo-ftype */
	BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t
		BgL_envz00_4992, obj_t BgL_oz00_4993)
	{
		{	/* Cfa/cinfo3.sch 469 */
			return
				BGl_vrefzf2Cinfozd2ftypez20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4993));
		}

	}



/* vref/Cinfo-ftype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_263, BgL_typez00_bglt BgL_vz00_264)
	{
		{	/* Cfa/cinfo3.sch 470 */
			return
				((((BgL_vrefz00_bglt) COBJECT(
							((BgL_vrefz00_bglt) BgL_oz00_263)))->BgL_ftypez00) =
				((BgL_typez00_bglt) BgL_vz00_264), BUNSPEC);
		}

	}



/* &vref/Cinfo-ftype-set! */
	obj_t BGl_z62vrefzf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_4994, obj_t BgL_oz00_4995, obj_t BgL_vz00_4996)
	{
		{	/* Cfa/cinfo3.sch 470 */
			return
				BGl_vrefzf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4995), ((BgL_typez00_bglt) BgL_vz00_4996));
		}

	}



/* vref/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_265)
	{
		{	/* Cfa/cinfo3.sch 471 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_265)))->BgL_czd2formatzd2);
		}

	}



/* &vref/Cinfo-c-format */
	obj_t BGl_z62vrefzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t BgL_envz00_4997,
		obj_t BgL_oz00_4998)
	{
		{	/* Cfa/cinfo3.sch 471 */
			return
				BGl_vrefzf2Cinfozd2czd2formatzf2zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_4998));
		}

	}



/* vref/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2effectz20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_268)
	{
		{	/* Cfa/cinfo3.sch 473 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_268)))->BgL_effectz00);
		}

	}



/* &vref/Cinfo-effect */
	obj_t BGl_z62vrefzf2Cinfozd2effectz42zzcfa_info3z00(obj_t BgL_envz00_4999,
		obj_t BgL_oz00_5000)
	{
		{	/* Cfa/cinfo3.sch 473 */
			return
				BGl_vrefzf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5000));
		}

	}



/* vref/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_269, obj_t BgL_vz00_270)
	{
		{	/* Cfa/cinfo3.sch 474 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_269)))->BgL_effectz00) =
				((obj_t) BgL_vz00_270), BUNSPEC);
		}

	}



/* &vref/Cinfo-effect-set! */
	obj_t BGl_z62vrefzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5001, obj_t BgL_oz00_5002, obj_t BgL_vz00_5003)
	{
		{	/* Cfa/cinfo3.sch 474 */
			return
				BGl_vrefzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5002), BgL_vz00_5003);
		}

	}



/* vref/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_271)
	{
		{	/* Cfa/cinfo3.sch 475 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_271)))->BgL_exprza2za2);
		}

	}



/* &vref/Cinfo-expr* */
	obj_t BGl_z62vrefzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t BgL_envz00_5004,
		obj_t BgL_oz00_5005)
	{
		{	/* Cfa/cinfo3.sch 475 */
			return
				BGl_vrefzf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5005));
		}

	}



/* vref/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_272, obj_t BgL_vz00_273)
	{
		{	/* Cfa/cinfo3.sch 476 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_272)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_273), BUNSPEC);
		}

	}



/* &vref/Cinfo-expr*-set! */
	obj_t BGl_z62vrefzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_5006, obj_t BgL_oz00_5007, obj_t BgL_vz00_5008)
	{
		{	/* Cfa/cinfo3.sch 476 */
			return
				BGl_vrefzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5007), BgL_vz00_5008);
		}

	}



/* vref/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2keyz20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_274)
	{
		{	/* Cfa/cinfo3.sch 477 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_274)))->BgL_keyz00);
		}

	}



/* &vref/Cinfo-key */
	obj_t BGl_z62vrefzf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_5009,
		obj_t BgL_oz00_5010)
	{
		{	/* Cfa/cinfo3.sch 477 */
			return
				BGl_vrefzf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5010));
		}

	}



/* vref/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_275, obj_t BgL_vz00_276)
	{
		{	/* Cfa/cinfo3.sch 478 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_275)))->BgL_keyz00) =
				((obj_t) BgL_vz00_276), BUNSPEC);
		}

	}



/* &vref/Cinfo-key-set! */
	obj_t BGl_z62vrefzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5011, obj_t BgL_oz00_5012, obj_t BgL_vz00_5013)
	{
		{	/* Cfa/cinfo3.sch 478 */
			return
				BGl_vrefzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5012), BgL_vz00_5013);
		}

	}



/* vref/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_277)
	{
		{	/* Cfa/cinfo3.sch 479 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_277)))->BgL_sidezd2effectzd2);
		}

	}



/* &vref/Cinfo-side-effect */
	obj_t BGl_z62vrefzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_5014, obj_t BgL_oz00_5015)
	{
		{	/* Cfa/cinfo3.sch 479 */
			return
				BGl_vrefzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5015));
		}

	}



/* vref/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_278, obj_t BgL_vz00_279)
	{
		{	/* Cfa/cinfo3.sch 480 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_278)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_279), BUNSPEC);
		}

	}



/* &vref/Cinfo-side-effect-set! */
	obj_t BGl_z62vrefzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5016, obj_t BgL_oz00_5017, obj_t BgL_vz00_5018)
	{
		{	/* Cfa/cinfo3.sch 480 */
			return
				BGl_vrefzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5017), BgL_vz00_5018);
		}

	}



/* vref/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vrefzf2Cinfozd2typez20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_280)
	{
		{	/* Cfa/cinfo3.sch 481 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_280)))->BgL_typez00);
		}

	}



/* &vref/Cinfo-type */
	BgL_typez00_bglt BGl_z62vrefzf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_5019, obj_t BgL_oz00_5020)
	{
		{	/* Cfa/cinfo3.sch 481 */
			return
				BGl_vrefzf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5020));
		}

	}



/* vref/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_vrefz00_bglt
		BgL_oz00_281, BgL_typez00_bglt BgL_vz00_282)
	{
		{	/* Cfa/cinfo3.sch 482 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_281)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_282), BUNSPEC);
		}

	}



/* &vref/Cinfo-type-set! */
	obj_t BGl_z62vrefzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5021, obj_t BgL_oz00_5022, obj_t BgL_vz00_5023)
	{
		{	/* Cfa/cinfo3.sch 482 */
			return
				BGl_vrefzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5022), ((BgL_typez00_bglt) BgL_vz00_5023));
		}

	}



/* vref/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_vrefzf2Cinfozd2locz20zzcfa_info3z00(BgL_vrefz00_bglt BgL_oz00_283)
	{
		{	/* Cfa/cinfo3.sch 483 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_283)))->BgL_locz00);
		}

	}



/* &vref/Cinfo-loc */
	obj_t BGl_z62vrefzf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_5024,
		obj_t BgL_oz00_5025)
	{
		{	/* Cfa/cinfo3.sch 483 */
			return
				BGl_vrefzf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_vrefz00_bglt) BgL_oz00_5025));
		}

	}



/* make-vset!/Cinfo */
	BGL_EXPORTED_DEF BgL_vsetz12z12_bglt
		BGl_makezd2vsetz12zf2Cinfoz32zzcfa_info3z00(obj_t BgL_loc1380z00_286,
		BgL_typez00_bglt BgL_type1381z00_287, obj_t BgL_sidezd2effect1382zd2_288,
		obj_t BgL_key1383z00_289, obj_t BgL_exprza21384za2_290,
		obj_t BgL_effect1385z00_291, obj_t BgL_czd2format1386zd2_292,
		BgL_typez00_bglt BgL_ftype1387z00_293,
		BgL_typez00_bglt BgL_otype1388z00_294,
		BgL_typez00_bglt BgL_vtype1389z00_295, bool_t BgL_unsafe1390z00_296,
		BgL_approxz00_bglt BgL_approx1391z00_297, bool_t BgL_tvectorzf31392zf3_298)
	{
		{	/* Cfa/cinfo3.sch 487 */
			{	/* Cfa/cinfo3.sch 487 */
				BgL_vsetz12z12_bglt BgL_new1364z00_5843;

				{	/* Cfa/cinfo3.sch 487 */
					BgL_vsetz12z12_bglt BgL_tmp1362z00_5844;
					BgL_vsetz12zf2cinfoze0_bglt BgL_wide1363z00_5845;

					{
						BgL_vsetz12z12_bglt BgL_auxz00_7343;

						{	/* Cfa/cinfo3.sch 487 */
							BgL_vsetz12z12_bglt BgL_new1361z00_5846;

							BgL_new1361z00_5846 =
								((BgL_vsetz12z12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vsetz12z12_bgl))));
							{	/* Cfa/cinfo3.sch 487 */
								long BgL_arg1738z00_5847;

								{	/* Cfa/cinfo3.sch 487 */
									long BgL_res2260z00_5848;

									BgL_res2260z00_5848 =
										BGL_CLASS_INDEX(BGl_vsetz12z12zzast_nodez00);
									BgL_arg1738z00_5847 = BgL_res2260z00_5848;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1361z00_5846),
									BgL_arg1738z00_5847);
							}
							{	/* Cfa/cinfo3.sch 487 */
								BgL_objectz00_bglt BgL_tmpz00_7348;

								BgL_tmpz00_7348 = ((BgL_objectz00_bglt) BgL_new1361z00_5846);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7348, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1361z00_5846);
							BgL_auxz00_7343 = BgL_new1361z00_5846;
						}
						BgL_tmp1362z00_5844 = ((BgL_vsetz12z12_bglt) BgL_auxz00_7343);
					}
					BgL_wide1363z00_5845 =
						((BgL_vsetz12zf2cinfoze0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vsetz12zf2cinfoze0_bgl))));
					{	/* Cfa/cinfo3.sch 487 */
						obj_t BgL_auxz00_7356;
						BgL_objectz00_bglt BgL_tmpz00_7354;

						BgL_auxz00_7356 = ((obj_t) BgL_wide1363z00_5845);
						BgL_tmpz00_7354 = ((BgL_objectz00_bglt) BgL_tmp1362z00_5844);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7354, BgL_auxz00_7356);
					}
					((BgL_objectz00_bglt) BgL_tmp1362z00_5844);
					{	/* Cfa/cinfo3.sch 487 */
						long BgL_arg1733z00_5849;

						{	/* Cfa/cinfo3.sch 487 */
							long BgL_res2261z00_5850;

							BgL_res2261z00_5850 =
								BGL_CLASS_INDEX(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
							BgL_arg1733z00_5849 = BgL_res2261z00_5850;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1362z00_5844), BgL_arg1733z00_5849);
					}
					BgL_new1364z00_5843 = ((BgL_vsetz12z12_bglt) BgL_tmp1362z00_5844);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1364z00_5843)))->BgL_locz00) =
					((obj_t) BgL_loc1380z00_286), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1364z00_5843)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1381z00_287), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1364z00_5843)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1382zd2_288), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1364z00_5843)))->BgL_keyz00) =
					((obj_t) BgL_key1383z00_289), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1364z00_5843)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21384za2_290), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1364z00_5843)))->BgL_effectz00) =
					((obj_t) BgL_effect1385z00_291), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1364z00_5843)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1386zd2_292), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
									BgL_new1364z00_5843)))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype1387z00_293), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
									BgL_new1364z00_5843)))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype1388z00_294), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
									BgL_new1364z00_5843)))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype1389z00_295), BUNSPEC);
				((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
									BgL_new1364z00_5843)))->BgL_unsafez00) =
					((bool_t) BgL_unsafe1390z00_296), BUNSPEC);
				{
					BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_7386;

					{
						obj_t BgL_auxz00_7387;

						{	/* Cfa/cinfo3.sch 487 */
							BgL_objectz00_bglt BgL_tmpz00_7388;

							BgL_tmpz00_7388 = ((BgL_objectz00_bglt) BgL_new1364z00_5843);
							BgL_auxz00_7387 = BGL_OBJECT_WIDENING(BgL_tmpz00_7388);
						}
						BgL_auxz00_7386 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_7387);
					}
					((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_7386))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1391z00_297), BUNSPEC);
				}
				{
					BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_7393;

					{
						obj_t BgL_auxz00_7394;

						{	/* Cfa/cinfo3.sch 487 */
							BgL_objectz00_bglt BgL_tmpz00_7395;

							BgL_tmpz00_7395 = ((BgL_objectz00_bglt) BgL_new1364z00_5843);
							BgL_auxz00_7394 = BGL_OBJECT_WIDENING(BgL_tmpz00_7395);
						}
						BgL_auxz00_7393 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_7394);
					}
					((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_7393))->
							BgL_tvectorzf3zf3) =
						((bool_t) BgL_tvectorzf31392zf3_298), BUNSPEC);
				}
				return BgL_new1364z00_5843;
			}
		}

	}



/* &make-vset!/Cinfo */
	BgL_vsetz12z12_bglt BGl_z62makezd2vsetz12zf2Cinfoz50zzcfa_info3z00(obj_t
		BgL_envz00_5026, obj_t BgL_loc1380z00_5027, obj_t BgL_type1381z00_5028,
		obj_t BgL_sidezd2effect1382zd2_5029, obj_t BgL_key1383z00_5030,
		obj_t BgL_exprza21384za2_5031, obj_t BgL_effect1385z00_5032,
		obj_t BgL_czd2format1386zd2_5033, obj_t BgL_ftype1387z00_5034,
		obj_t BgL_otype1388z00_5035, obj_t BgL_vtype1389z00_5036,
		obj_t BgL_unsafe1390z00_5037, obj_t BgL_approx1391z00_5038,
		obj_t BgL_tvectorzf31392zf3_5039)
	{
		{	/* Cfa/cinfo3.sch 487 */
			return
				BGl_makezd2vsetz12zf2Cinfoz32zzcfa_info3z00(BgL_loc1380z00_5027,
				((BgL_typez00_bglt) BgL_type1381z00_5028),
				BgL_sidezd2effect1382zd2_5029, BgL_key1383z00_5030,
				BgL_exprza21384za2_5031, BgL_effect1385z00_5032,
				BgL_czd2format1386zd2_5033, ((BgL_typez00_bglt) BgL_ftype1387z00_5034),
				((BgL_typez00_bglt) BgL_otype1388z00_5035),
				((BgL_typez00_bglt) BgL_vtype1389z00_5036),
				CBOOL(BgL_unsafe1390z00_5037),
				((BgL_approxz00_bglt) BgL_approx1391z00_5038),
				CBOOL(BgL_tvectorzf31392zf3_5039));
		}

	}



/* vset!/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_vsetz12zf2Cinfozf3z13zzcfa_info3z00(obj_t
		BgL_objz00_299)
	{
		{	/* Cfa/cinfo3.sch 488 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_299,
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
		}

	}



/* &vset!/Cinfo? */
	obj_t BGl_z62vsetz12zf2Cinfozf3z71zzcfa_info3z00(obj_t BgL_envz00_5040,
		obj_t BgL_objz00_5041)
	{
		{	/* Cfa/cinfo3.sch 488 */
			return BBOOL(BGl_vsetz12zf2Cinfozf3z13zzcfa_info3z00(BgL_objz00_5041));
		}

	}



/* vset!/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vsetz12z12_bglt
		BGl_vsetz12zf2Cinfozd2nilz32zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 489 */
			{	/* Cfa/cinfo3.sch 489 */
				obj_t BgL_classz00_3998;

				BgL_classz00_3998 = BGl_vsetz12zf2Cinfoze0zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 489 */
					obj_t BgL__ortest_1106z00_3999;

					BgL__ortest_1106z00_3999 = BGL_CLASS_NIL(BgL_classz00_3998);
					if (CBOOL(BgL__ortest_1106z00_3999))
						{	/* Cfa/cinfo3.sch 489 */
							return ((BgL_vsetz12z12_bglt) BgL__ortest_1106z00_3999);
						}
					else
						{	/* Cfa/cinfo3.sch 489 */
							return
								((BgL_vsetz12z12_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3998));
						}
				}
			}
		}

	}



/* &vset!/Cinfo-nil */
	BgL_vsetz12z12_bglt BGl_z62vsetz12zf2Cinfozd2nilz50zzcfa_info3z00(obj_t
		BgL_envz00_5042)
	{
		{	/* Cfa/cinfo3.sch 489 */
			return BGl_vsetz12zf2Cinfozd2nilz32zzcfa_info3z00();
		}

	}



/* vset!/Cinfo-tvector? */
	BGL_EXPORTED_DEF bool_t
		BGl_vsetz12zf2Cinfozd2tvectorzf3zc1zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_300)
	{
		{	/* Cfa/cinfo3.sch 490 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_7418;

				{
					obj_t BgL_auxz00_7419;

					{	/* Cfa/cinfo3.sch 490 */
						BgL_objectz00_bglt BgL_tmpz00_7420;

						BgL_tmpz00_7420 = ((BgL_objectz00_bglt) BgL_oz00_300);
						BgL_auxz00_7419 = BGL_OBJECT_WIDENING(BgL_tmpz00_7420);
					}
					BgL_auxz00_7418 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_7419);
				}
				return
					(((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_7418))->
					BgL_tvectorzf3zf3);
			}
		}

	}



/* &vset!/Cinfo-tvector? */
	obj_t BGl_z62vsetz12zf2Cinfozd2tvectorzf3za3zzcfa_info3z00(obj_t
		BgL_envz00_5043, obj_t BgL_oz00_5044)
	{
		{	/* Cfa/cinfo3.sch 490 */
			return
				BBOOL(BGl_vsetz12zf2Cinfozd2tvectorzf3zc1zzcfa_info3z00(
					((BgL_vsetz12z12_bglt) BgL_oz00_5044)));
		}

	}



/* vset!/Cinfo-tvector?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2tvectorzf3zd2setz12z01zzcfa_info3z00
		(BgL_vsetz12z12_bglt BgL_oz00_301, bool_t BgL_vz00_302)
	{
		{	/* Cfa/cinfo3.sch 491 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_7428;

				{
					obj_t BgL_auxz00_7429;

					{	/* Cfa/cinfo3.sch 491 */
						BgL_objectz00_bglt BgL_tmpz00_7430;

						BgL_tmpz00_7430 = ((BgL_objectz00_bglt) BgL_oz00_301);
						BgL_auxz00_7429 = BGL_OBJECT_WIDENING(BgL_tmpz00_7430);
					}
					BgL_auxz00_7428 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_7429);
				}
				return
					((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_7428))->
						BgL_tvectorzf3zf3) = ((bool_t) BgL_vz00_302), BUNSPEC);
			}
		}

	}



/* &vset!/Cinfo-tvector?-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2tvectorzf3zd2setz12z63zzcfa_info3z00(obj_t
		BgL_envz00_5045, obj_t BgL_oz00_5046, obj_t BgL_vz00_5047)
	{
		{	/* Cfa/cinfo3.sch 491 */
			return
				BGl_vsetz12zf2Cinfozd2tvectorzf3zd2setz12z01zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5046), CBOOL(BgL_vz00_5047));
		}

	}



/* vset!/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_vsetz12zf2Cinfozd2approxz32zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_303)
	{
		{	/* Cfa/cinfo3.sch 492 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_7438;

				{
					obj_t BgL_auxz00_7439;

					{	/* Cfa/cinfo3.sch 492 */
						BgL_objectz00_bglt BgL_tmpz00_7440;

						BgL_tmpz00_7440 = ((BgL_objectz00_bglt) BgL_oz00_303);
						BgL_auxz00_7439 = BGL_OBJECT_WIDENING(BgL_tmpz00_7440);
					}
					BgL_auxz00_7438 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_7439);
				}
				return
					(((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_7438))->
					BgL_approxz00);
			}
		}

	}



/* &vset!/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62vsetz12zf2Cinfozd2approxz50zzcfa_info3z00(obj_t
		BgL_envz00_5048, obj_t BgL_oz00_5049)
	{
		{	/* Cfa/cinfo3.sch 492 */
			return
				BGl_vsetz12zf2Cinfozd2approxz32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5049));
		}

	}



/* vset!/Cinfo-unsafe */
	BGL_EXPORTED_DEF bool_t
		BGl_vsetz12zf2Cinfozd2unsafez32zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_306)
	{
		{	/* Cfa/cinfo3.sch 494 */
			return
				(((BgL_vsetz12z12_bglt) COBJECT(
						((BgL_vsetz12z12_bglt) BgL_oz00_306)))->BgL_unsafez00);
		}

	}



/* &vset!/Cinfo-unsafe */
	obj_t BGl_z62vsetz12zf2Cinfozd2unsafez50zzcfa_info3z00(obj_t BgL_envz00_5050,
		obj_t BgL_oz00_5051)
	{
		{	/* Cfa/cinfo3.sch 494 */
			return
				BBOOL(BGl_vsetz12zf2Cinfozd2unsafez32zzcfa_info3z00(
					((BgL_vsetz12z12_bglt) BgL_oz00_5051)));
		}

	}



/* vset!/Cinfo-vtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2vtypez32zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_309)
	{
		{	/* Cfa/cinfo3.sch 496 */
			return
				(((BgL_vsetz12z12_bglt) COBJECT(
						((BgL_vsetz12z12_bglt) BgL_oz00_309)))->BgL_vtypez00);
		}

	}



/* &vset!/Cinfo-vtype */
	BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2vtypez50zzcfa_info3z00(obj_t
		BgL_envz00_5052, obj_t BgL_oz00_5053)
	{
		{	/* Cfa/cinfo3.sch 496 */
			return
				BGl_vsetz12zf2Cinfozd2vtypez32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5053));
		}

	}



/* vset!/Cinfo-vtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2vtypezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_310, BgL_typez00_bglt BgL_vz00_311)
	{
		{	/* Cfa/cinfo3.sch 497 */
			return
				((((BgL_vsetz12z12_bglt) COBJECT(
							((BgL_vsetz12z12_bglt) BgL_oz00_310)))->BgL_vtypez00) =
				((BgL_typez00_bglt) BgL_vz00_311), BUNSPEC);
		}

	}



/* &vset!/Cinfo-vtype-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2vtypezd2setz12z90zzcfa_info3z00(obj_t
		BgL_envz00_5054, obj_t BgL_oz00_5055, obj_t BgL_vz00_5056)
	{
		{	/* Cfa/cinfo3.sch 497 */
			return
				BGl_vsetz12zf2Cinfozd2vtypezd2setz12zf2zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5055),
				((BgL_typez00_bglt) BgL_vz00_5056));
		}

	}



/* vset!/Cinfo-otype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2otypez32zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_312)
	{
		{	/* Cfa/cinfo3.sch 498 */
			return
				(((BgL_vsetz12z12_bglt) COBJECT(
						((BgL_vsetz12z12_bglt) BgL_oz00_312)))->BgL_otypez00);
		}

	}



/* &vset!/Cinfo-otype */
	BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2otypez50zzcfa_info3z00(obj_t
		BgL_envz00_5057, obj_t BgL_oz00_5058)
	{
		{	/* Cfa/cinfo3.sch 498 */
			return
				BGl_vsetz12zf2Cinfozd2otypez32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5058));
		}

	}



/* vset!/Cinfo-otype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2otypezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_313, BgL_typez00_bglt BgL_vz00_314)
	{
		{	/* Cfa/cinfo3.sch 499 */
			return
				((((BgL_vsetz12z12_bglt) COBJECT(
							((BgL_vsetz12z12_bglt) BgL_oz00_313)))->BgL_otypez00) =
				((BgL_typez00_bglt) BgL_vz00_314), BUNSPEC);
		}

	}



/* &vset!/Cinfo-otype-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2otypezd2setz12z90zzcfa_info3z00(obj_t
		BgL_envz00_5059, obj_t BgL_oz00_5060, obj_t BgL_vz00_5061)
	{
		{	/* Cfa/cinfo3.sch 499 */
			return
				BGl_vsetz12zf2Cinfozd2otypezd2setz12zf2zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5060),
				((BgL_typez00_bglt) BgL_vz00_5061));
		}

	}



/* vset!/Cinfo-ftype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2ftypez32zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_315)
	{
		{	/* Cfa/cinfo3.sch 500 */
			return
				(((BgL_vsetz12z12_bglt) COBJECT(
						((BgL_vsetz12z12_bglt) BgL_oz00_315)))->BgL_ftypez00);
		}

	}



/* &vset!/Cinfo-ftype */
	BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2ftypez50zzcfa_info3z00(obj_t
		BgL_envz00_5062, obj_t BgL_oz00_5063)
	{
		{	/* Cfa/cinfo3.sch 500 */
			return
				BGl_vsetz12zf2Cinfozd2ftypez32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5063));
		}

	}



/* vset!/Cinfo-ftype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2ftypezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_316, BgL_typez00_bglt BgL_vz00_317)
	{
		{	/* Cfa/cinfo3.sch 501 */
			return
				((((BgL_vsetz12z12_bglt) COBJECT(
							((BgL_vsetz12z12_bglt) BgL_oz00_316)))->BgL_ftypez00) =
				((BgL_typez00_bglt) BgL_vz00_317), BUNSPEC);
		}

	}



/* &vset!/Cinfo-ftype-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2ftypezd2setz12z90zzcfa_info3z00(obj_t
		BgL_envz00_5064, obj_t BgL_oz00_5065, obj_t BgL_vz00_5066)
	{
		{	/* Cfa/cinfo3.sch 501 */
			return
				BGl_vsetz12zf2Cinfozd2ftypezd2setz12zf2zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5065),
				((BgL_typez00_bglt) BgL_vz00_5066));
		}

	}



/* vset!/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2czd2formatze0zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_318)
	{
		{	/* Cfa/cinfo3.sch 502 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_318)))->BgL_czd2formatzd2);
		}

	}



/* &vset!/Cinfo-c-format */
	obj_t BGl_z62vsetz12zf2Cinfozd2czd2formatz82zzcfa_info3z00(obj_t
		BgL_envz00_5067, obj_t BgL_oz00_5068)
	{
		{	/* Cfa/cinfo3.sch 502 */
			return
				BGl_vsetz12zf2Cinfozd2czd2formatze0zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5068));
		}

	}



/* vset!/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2effectz32zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_321)
	{
		{	/* Cfa/cinfo3.sch 504 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_321)))->BgL_effectz00);
		}

	}



/* &vset!/Cinfo-effect */
	obj_t BGl_z62vsetz12zf2Cinfozd2effectz50zzcfa_info3z00(obj_t BgL_envz00_5069,
		obj_t BgL_oz00_5070)
	{
		{	/* Cfa/cinfo3.sch 504 */
			return
				BGl_vsetz12zf2Cinfozd2effectz32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5070));
		}

	}



/* vset!/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2effectzd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_322, obj_t BgL_vz00_323)
	{
		{	/* Cfa/cinfo3.sch 505 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_322)))->BgL_effectz00) =
				((obj_t) BgL_vz00_323), BUNSPEC);
		}

	}



/* &vset!/Cinfo-effect-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2effectzd2setz12z90zzcfa_info3z00(obj_t
		BgL_envz00_5071, obj_t BgL_oz00_5072, obj_t BgL_vz00_5073)
	{
		{	/* Cfa/cinfo3.sch 505 */
			return
				BGl_vsetz12zf2Cinfozd2effectzd2setz12zf2zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5072), BgL_vz00_5073);
		}

	}



/* vset!/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2exprza2z90zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_324)
	{
		{	/* Cfa/cinfo3.sch 506 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_324)))->BgL_exprza2za2);
		}

	}



/* &vset!/Cinfo-expr* */
	obj_t BGl_z62vsetz12zf2Cinfozd2exprza2zf2zzcfa_info3z00(obj_t BgL_envz00_5074,
		obj_t BgL_oz00_5075)
	{
		{	/* Cfa/cinfo3.sch 506 */
			return
				BGl_vsetz12zf2Cinfozd2exprza2z90zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5075));
		}

	}



/* vset!/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2exprza2zd2setz12z50zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_325, obj_t BgL_vz00_326)
	{
		{	/* Cfa/cinfo3.sch 507 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_325)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_326), BUNSPEC);
		}

	}



/* &vset!/Cinfo-expr*-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2exprza2zd2setz12z32zzcfa_info3z00(obj_t
		BgL_envz00_5076, obj_t BgL_oz00_5077, obj_t BgL_vz00_5078)
	{
		{	/* Cfa/cinfo3.sch 507 */
			return
				BGl_vsetz12zf2Cinfozd2exprza2zd2setz12z50zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5077), BgL_vz00_5078);
		}

	}



/* vset!/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2keyz32zzcfa_info3z00(BgL_vsetz12z12_bglt BgL_oz00_327)
	{
		{	/* Cfa/cinfo3.sch 508 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_327)))->BgL_keyz00);
		}

	}



/* &vset!/Cinfo-key */
	obj_t BGl_z62vsetz12zf2Cinfozd2keyz50zzcfa_info3z00(obj_t BgL_envz00_5079,
		obj_t BgL_oz00_5080)
	{
		{	/* Cfa/cinfo3.sch 508 */
			return
				BGl_vsetz12zf2Cinfozd2keyz32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5080));
		}

	}



/* vset!/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2keyzd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_328, obj_t BgL_vz00_329)
	{
		{	/* Cfa/cinfo3.sch 509 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_328)))->BgL_keyz00) =
				((obj_t) BgL_vz00_329), BUNSPEC);
		}

	}



/* &vset!/Cinfo-key-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2keyzd2setz12z90zzcfa_info3z00(obj_t
		BgL_envz00_5081, obj_t BgL_oz00_5082, obj_t BgL_vz00_5083)
	{
		{	/* Cfa/cinfo3.sch 509 */
			return
				BGl_vsetz12zf2Cinfozd2keyzd2setz12zf2zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5082), BgL_vz00_5083);
		}

	}



/* vset!/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2sidezd2effectze0zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_330)
	{
		{	/* Cfa/cinfo3.sch 510 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_330)))->BgL_sidezd2effectzd2);
		}

	}



/* &vset!/Cinfo-side-effect */
	obj_t BGl_z62vsetz12zf2Cinfozd2sidezd2effectz82zzcfa_info3z00(obj_t
		BgL_envz00_5084, obj_t BgL_oz00_5085)
	{
		{	/* Cfa/cinfo3.sch 510 */
			return
				BGl_vsetz12zf2Cinfozd2sidezd2effectze0zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5085));
		}

	}



/* vset!/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2sidezd2effectzd2setz12z20zzcfa_info3z00
		(BgL_vsetz12z12_bglt BgL_oz00_331, obj_t BgL_vz00_332)
	{
		{	/* Cfa/cinfo3.sch 511 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_331)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_332), BUNSPEC);
		}

	}



/* &vset!/Cinfo-side-effect-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2sidezd2effectzd2setz12z42zzcfa_info3z00(obj_t
		BgL_envz00_5086, obj_t BgL_oz00_5087, obj_t BgL_vz00_5088)
	{
		{	/* Cfa/cinfo3.sch 511 */
			return
				BGl_vsetz12zf2Cinfozd2sidezd2effectzd2setz12z20zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5087), BgL_vz00_5088);
		}

	}



/* vset!/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vsetz12zf2Cinfozd2typez32zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_333)
	{
		{	/* Cfa/cinfo3.sch 512 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_333)))->BgL_typez00);
		}

	}



/* &vset!/Cinfo-type */
	BgL_typez00_bglt BGl_z62vsetz12zf2Cinfozd2typez50zzcfa_info3z00(obj_t
		BgL_envz00_5089, obj_t BgL_oz00_5090)
	{
		{	/* Cfa/cinfo3.sch 512 */
			return
				BGl_vsetz12zf2Cinfozd2typez32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5090));
		}

	}



/* vset!/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2typezd2setz12zf2zzcfa_info3z00(BgL_vsetz12z12_bglt
		BgL_oz00_334, BgL_typez00_bglt BgL_vz00_335)
	{
		{	/* Cfa/cinfo3.sch 513 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_334)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_335), BUNSPEC);
		}

	}



/* &vset!/Cinfo-type-set! */
	obj_t BGl_z62vsetz12zf2Cinfozd2typezd2setz12z90zzcfa_info3z00(obj_t
		BgL_envz00_5091, obj_t BgL_oz00_5092, obj_t BgL_vz00_5093)
	{
		{	/* Cfa/cinfo3.sch 513 */
			return
				BGl_vsetz12zf2Cinfozd2typezd2setz12zf2zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5092),
				((BgL_typez00_bglt) BgL_vz00_5093));
		}

	}



/* vset!/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_vsetz12zf2Cinfozd2locz32zzcfa_info3z00(BgL_vsetz12z12_bglt BgL_oz00_336)
	{
		{	/* Cfa/cinfo3.sch 514 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_336)))->BgL_locz00);
		}

	}



/* &vset!/Cinfo-loc */
	obj_t BGl_z62vsetz12zf2Cinfozd2locz50zzcfa_info3z00(obj_t BgL_envz00_5094,
		obj_t BgL_oz00_5095)
	{
		{	/* Cfa/cinfo3.sch 514 */
			return
				BGl_vsetz12zf2Cinfozd2locz32zzcfa_info3z00(
				((BgL_vsetz12z12_bglt) BgL_oz00_5095));
		}

	}



/* make-vlength/Cinfo */
	BGL_EXPORTED_DEF BgL_vlengthz00_bglt
		BGl_makezd2vlengthzf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc1368z00_339,
		BgL_typez00_bglt BgL_type1369z00_340, obj_t BgL_sidezd2effect1370zd2_341,
		obj_t BgL_key1371z00_342, obj_t BgL_exprza21372za2_343,
		obj_t BgL_effect1373z00_344, obj_t BgL_czd2format1374zd2_345,
		BgL_typez00_bglt BgL_vtype1375z00_346, obj_t BgL_ftype1376z00_347,
		BgL_approxz00_bglt BgL_approx1377z00_348, bool_t BgL_tvectorzf31378zf3_349)
	{
		{	/* Cfa/cinfo3.sch 518 */
			{	/* Cfa/cinfo3.sch 518 */
				BgL_vlengthz00_bglt BgL_new1368z00_5851;

				{	/* Cfa/cinfo3.sch 518 */
					BgL_vlengthz00_bglt BgL_tmp1366z00_5852;
					BgL_vlengthzf2cinfozf2_bglt BgL_wide1367z00_5853;

					{
						BgL_vlengthz00_bglt BgL_auxz00_7528;

						{	/* Cfa/cinfo3.sch 518 */
							BgL_vlengthz00_bglt BgL_new1365z00_5854;

							BgL_new1365z00_5854 =
								((BgL_vlengthz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vlengthz00_bgl))));
							{	/* Cfa/cinfo3.sch 518 */
								long BgL_arg1740z00_5855;

								{	/* Cfa/cinfo3.sch 518 */
									long BgL_res2262z00_5856;

									BgL_res2262z00_5856 =
										BGL_CLASS_INDEX(BGl_vlengthz00zzast_nodez00);
									BgL_arg1740z00_5855 = BgL_res2262z00_5856;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1365z00_5854),
									BgL_arg1740z00_5855);
							}
							{	/* Cfa/cinfo3.sch 518 */
								BgL_objectz00_bglt BgL_tmpz00_7533;

								BgL_tmpz00_7533 = ((BgL_objectz00_bglt) BgL_new1365z00_5854);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7533, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1365z00_5854);
							BgL_auxz00_7528 = BgL_new1365z00_5854;
						}
						BgL_tmp1366z00_5852 = ((BgL_vlengthz00_bglt) BgL_auxz00_7528);
					}
					BgL_wide1367z00_5853 =
						((BgL_vlengthzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vlengthzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 518 */
						obj_t BgL_auxz00_7541;
						BgL_objectz00_bglt BgL_tmpz00_7539;

						BgL_auxz00_7541 = ((obj_t) BgL_wide1367z00_5853);
						BgL_tmpz00_7539 = ((BgL_objectz00_bglt) BgL_tmp1366z00_5852);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7539, BgL_auxz00_7541);
					}
					((BgL_objectz00_bglt) BgL_tmp1366z00_5852);
					{	/* Cfa/cinfo3.sch 518 */
						long BgL_arg1739z00_5857;

						{	/* Cfa/cinfo3.sch 518 */
							long BgL_res2263z00_5858;

							BgL_res2263z00_5858 =
								BGL_CLASS_INDEX(BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1739z00_5857 = BgL_res2263z00_5858;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1366z00_5852), BgL_arg1739z00_5857);
					}
					BgL_new1368z00_5851 = ((BgL_vlengthz00_bglt) BgL_tmp1366z00_5852);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1368z00_5851)))->BgL_locz00) =
					((obj_t) BgL_loc1368z00_339), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1368z00_5851)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1369z00_340), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1368z00_5851)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1370zd2_341), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1368z00_5851)))->BgL_keyz00) =
					((obj_t) BgL_key1371z00_342), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1368z00_5851)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21372za2_343), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1368z00_5851)))->BgL_effectz00) =
					((obj_t) BgL_effect1373z00_344), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1368z00_5851)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1374zd2_345), BUNSPEC);
				((((BgL_vlengthz00_bglt) COBJECT(((BgL_vlengthz00_bglt)
									BgL_new1368z00_5851)))->BgL_vtypez00) =
					((BgL_typez00_bglt) BgL_vtype1375z00_346), BUNSPEC);
				((((BgL_vlengthz00_bglt) COBJECT(((BgL_vlengthz00_bglt)
									BgL_new1368z00_5851)))->BgL_ftypez00) =
					((obj_t) BgL_ftype1376z00_347), BUNSPEC);
				{
					BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_7567;

					{
						obj_t BgL_auxz00_7568;

						{	/* Cfa/cinfo3.sch 518 */
							BgL_objectz00_bglt BgL_tmpz00_7569;

							BgL_tmpz00_7569 = ((BgL_objectz00_bglt) BgL_new1368z00_5851);
							BgL_auxz00_7568 = BGL_OBJECT_WIDENING(BgL_tmpz00_7569);
						}
						BgL_auxz00_7567 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_7568);
					}
					((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7567))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1377z00_348), BUNSPEC);
				}
				{
					BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_7574;

					{
						obj_t BgL_auxz00_7575;

						{	/* Cfa/cinfo3.sch 518 */
							BgL_objectz00_bglt BgL_tmpz00_7576;

							BgL_tmpz00_7576 = ((BgL_objectz00_bglt) BgL_new1368z00_5851);
							BgL_auxz00_7575 = BGL_OBJECT_WIDENING(BgL_tmpz00_7576);
						}
						BgL_auxz00_7574 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_7575);
					}
					((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7574))->
							BgL_tvectorzf3zf3) =
						((bool_t) BgL_tvectorzf31378zf3_349), BUNSPEC);
				}
				return BgL_new1368z00_5851;
			}
		}

	}



/* &make-vlength/Cinfo */
	BgL_vlengthz00_bglt BGl_z62makezd2vlengthzf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_5096, obj_t BgL_loc1368z00_5097, obj_t BgL_type1369z00_5098,
		obj_t BgL_sidezd2effect1370zd2_5099, obj_t BgL_key1371z00_5100,
		obj_t BgL_exprza21372za2_5101, obj_t BgL_effect1373z00_5102,
		obj_t BgL_czd2format1374zd2_5103, obj_t BgL_vtype1375z00_5104,
		obj_t BgL_ftype1376z00_5105, obj_t BgL_approx1377z00_5106,
		obj_t BgL_tvectorzf31378zf3_5107)
	{
		{	/* Cfa/cinfo3.sch 518 */
			return
				BGl_makezd2vlengthzf2Cinfoz20zzcfa_info3z00(BgL_loc1368z00_5097,
				((BgL_typez00_bglt) BgL_type1369z00_5098),
				BgL_sidezd2effect1370zd2_5099, BgL_key1371z00_5100,
				BgL_exprza21372za2_5101, BgL_effect1373z00_5102,
				BgL_czd2format1374zd2_5103, ((BgL_typez00_bglt) BgL_vtype1375z00_5104),
				BgL_ftype1376z00_5105, ((BgL_approxz00_bglt) BgL_approx1377z00_5106),
				CBOOL(BgL_tvectorzf31378zf3_5107));
		}

	}



/* vlength/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_vlengthzf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_350)
	{
		{	/* Cfa/cinfo3.sch 519 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_350,
				BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &vlength/Cinfo? */
	obj_t BGl_z62vlengthzf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_5108,
		obj_t BgL_objz00_5109)
	{
		{	/* Cfa/cinfo3.sch 519 */
			return BBOOL(BGl_vlengthzf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_5109));
		}

	}



/* vlength/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vlengthz00_bglt
		BGl_vlengthzf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 520 */
			{	/* Cfa/cinfo3.sch 520 */
				obj_t BgL_classz00_4021;

				BgL_classz00_4021 = BGl_vlengthzf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 520 */
					obj_t BgL__ortest_1106z00_4022;

					BgL__ortest_1106z00_4022 = BGL_CLASS_NIL(BgL_classz00_4021);
					if (CBOOL(BgL__ortest_1106z00_4022))
						{	/* Cfa/cinfo3.sch 520 */
							return ((BgL_vlengthz00_bglt) BgL__ortest_1106z00_4022);
						}
					else
						{	/* Cfa/cinfo3.sch 520 */
							return
								((BgL_vlengthz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4021));
						}
				}
			}
		}

	}



/* &vlength/Cinfo-nil */
	BgL_vlengthz00_bglt BGl_z62vlengthzf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_5110)
	{
		{	/* Cfa/cinfo3.sch 520 */
			return BGl_vlengthzf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* vlength/Cinfo-tvector? */
	BGL_EXPORTED_DEF bool_t
		BGl_vlengthzf2Cinfozd2tvectorzf3zd3zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_351)
	{
		{	/* Cfa/cinfo3.sch 521 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_7596;

				{
					obj_t BgL_auxz00_7597;

					{	/* Cfa/cinfo3.sch 521 */
						BgL_objectz00_bglt BgL_tmpz00_7598;

						BgL_tmpz00_7598 = ((BgL_objectz00_bglt) BgL_oz00_351);
						BgL_auxz00_7597 = BGL_OBJECT_WIDENING(BgL_tmpz00_7598);
					}
					BgL_auxz00_7596 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_7597);
				}
				return
					(((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7596))->
					BgL_tvectorzf3zf3);
			}
		}

	}



/* &vlength/Cinfo-tvector? */
	obj_t BGl_z62vlengthzf2Cinfozd2tvectorzf3zb1zzcfa_info3z00(obj_t
		BgL_envz00_5111, obj_t BgL_oz00_5112)
	{
		{	/* Cfa/cinfo3.sch 521 */
			return
				BBOOL(BGl_vlengthzf2Cinfozd2tvectorzf3zd3zzcfa_info3z00(
					((BgL_vlengthz00_bglt) BgL_oz00_5112)));
		}

	}



/* vlength/Cinfo-tvector?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2tvectorzf3zd2setz12z13zzcfa_info3z00
		(BgL_vlengthz00_bglt BgL_oz00_352, bool_t BgL_vz00_353)
	{
		{	/* Cfa/cinfo3.sch 522 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_7606;

				{
					obj_t BgL_auxz00_7607;

					{	/* Cfa/cinfo3.sch 522 */
						BgL_objectz00_bglt BgL_tmpz00_7608;

						BgL_tmpz00_7608 = ((BgL_objectz00_bglt) BgL_oz00_352);
						BgL_auxz00_7607 = BGL_OBJECT_WIDENING(BgL_tmpz00_7608);
					}
					BgL_auxz00_7606 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_7607);
				}
				return
					((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7606))->
						BgL_tvectorzf3zf3) = ((bool_t) BgL_vz00_353), BUNSPEC);
			}
		}

	}



/* &vlength/Cinfo-tvector?-set! */
	obj_t BGl_z62vlengthzf2Cinfozd2tvectorzf3zd2setz12z71zzcfa_info3z00(obj_t
		BgL_envz00_5113, obj_t BgL_oz00_5114, obj_t BgL_vz00_5115)
	{
		{	/* Cfa/cinfo3.sch 522 */
			return
				BGl_vlengthzf2Cinfozd2tvectorzf3zd2setz12z13zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5114), CBOOL(BgL_vz00_5115));
		}

	}



/* vlength/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_vlengthzf2Cinfozd2approxz20zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_354)
	{
		{	/* Cfa/cinfo3.sch 523 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_7616;

				{
					obj_t BgL_auxz00_7617;

					{	/* Cfa/cinfo3.sch 523 */
						BgL_objectz00_bglt BgL_tmpz00_7618;

						BgL_tmpz00_7618 = ((BgL_objectz00_bglt) BgL_oz00_354);
						BgL_auxz00_7617 = BGL_OBJECT_WIDENING(BgL_tmpz00_7618);
					}
					BgL_auxz00_7616 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_7617);
				}
				return
					(((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_7616))->
					BgL_approxz00);
			}
		}

	}



/* &vlength/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62vlengthzf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_5116, obj_t BgL_oz00_5117)
	{
		{	/* Cfa/cinfo3.sch 523 */
			return
				BGl_vlengthzf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5117));
		}

	}



/* vlength/Cinfo-ftype */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2ftypez20zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_357)
	{
		{	/* Cfa/cinfo3.sch 525 */
			return
				(((BgL_vlengthz00_bglt) COBJECT(
						((BgL_vlengthz00_bglt) BgL_oz00_357)))->BgL_ftypez00);
		}

	}



/* &vlength/Cinfo-ftype */
	obj_t BGl_z62vlengthzf2Cinfozd2ftypez42zzcfa_info3z00(obj_t BgL_envz00_5118,
		obj_t BgL_oz00_5119)
	{
		{	/* Cfa/cinfo3.sch 525 */
			return
				BGl_vlengthzf2Cinfozd2ftypez20zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5119));
		}

	}



/* vlength/Cinfo-vtype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vlengthzf2Cinfozd2vtypez20zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_360)
	{
		{	/* Cfa/cinfo3.sch 527 */
			return
				(((BgL_vlengthz00_bglt) COBJECT(
						((BgL_vlengthz00_bglt) BgL_oz00_360)))->BgL_vtypez00);
		}

	}



/* &vlength/Cinfo-vtype */
	BgL_typez00_bglt BGl_z62vlengthzf2Cinfozd2vtypez42zzcfa_info3z00(obj_t
		BgL_envz00_5120, obj_t BgL_oz00_5121)
	{
		{	/* Cfa/cinfo3.sch 527 */
			return
				BGl_vlengthzf2Cinfozd2vtypez20zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5121));
		}

	}



/* vlength/Cinfo-vtype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2vtypezd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_361, BgL_typez00_bglt BgL_vz00_362)
	{
		{	/* Cfa/cinfo3.sch 528 */
			return
				((((BgL_vlengthz00_bglt) COBJECT(
							((BgL_vlengthz00_bglt) BgL_oz00_361)))->BgL_vtypez00) =
				((BgL_typez00_bglt) BgL_vz00_362), BUNSPEC);
		}

	}



/* &vlength/Cinfo-vtype-set! */
	obj_t BGl_z62vlengthzf2Cinfozd2vtypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5122, obj_t BgL_oz00_5123, obj_t BgL_vz00_5124)
	{
		{	/* Cfa/cinfo3.sch 528 */
			return
				BGl_vlengthzf2Cinfozd2vtypezd2setz12ze0zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5123),
				((BgL_typez00_bglt) BgL_vz00_5124));
		}

	}



/* vlength/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_363)
	{
		{	/* Cfa/cinfo3.sch 529 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_363)))->BgL_czd2formatzd2);
		}

	}



/* &vlength/Cinfo-c-format */
	obj_t BGl_z62vlengthzf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t
		BgL_envz00_5125, obj_t BgL_oz00_5126)
	{
		{	/* Cfa/cinfo3.sch 529 */
			return
				BGl_vlengthzf2Cinfozd2czd2formatzf2zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5126));
		}

	}



/* vlength/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2effectz20zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_366)
	{
		{	/* Cfa/cinfo3.sch 531 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_366)))->BgL_effectz00);
		}

	}



/* &vlength/Cinfo-effect */
	obj_t BGl_z62vlengthzf2Cinfozd2effectz42zzcfa_info3z00(obj_t BgL_envz00_5127,
		obj_t BgL_oz00_5128)
	{
		{	/* Cfa/cinfo3.sch 531 */
			return
				BGl_vlengthzf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5128));
		}

	}



/* vlength/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_367, obj_t BgL_vz00_368)
	{
		{	/* Cfa/cinfo3.sch 532 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_367)))->BgL_effectz00) =
				((obj_t) BgL_vz00_368), BUNSPEC);
		}

	}



/* &vlength/Cinfo-effect-set! */
	obj_t BGl_z62vlengthzf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5129, obj_t BgL_oz00_5130, obj_t BgL_vz00_5131)
	{
		{	/* Cfa/cinfo3.sch 532 */
			return
				BGl_vlengthzf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5130), BgL_vz00_5131);
		}

	}



/* vlength/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_369)
	{
		{	/* Cfa/cinfo3.sch 533 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_369)))->BgL_exprza2za2);
		}

	}



/* &vlength/Cinfo-expr* */
	obj_t BGl_z62vlengthzf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t BgL_envz00_5132,
		obj_t BgL_oz00_5133)
	{
		{	/* Cfa/cinfo3.sch 533 */
			return
				BGl_vlengthzf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5133));
		}

	}



/* vlength/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_370, obj_t BgL_vz00_371)
	{
		{	/* Cfa/cinfo3.sch 534 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_370)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_371), BUNSPEC);
		}

	}



/* &vlength/Cinfo-expr*-set! */
	obj_t BGl_z62vlengthzf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_5134, obj_t BgL_oz00_5135, obj_t BgL_vz00_5136)
	{
		{	/* Cfa/cinfo3.sch 534 */
			return
				BGl_vlengthzf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5135), BgL_vz00_5136);
		}

	}



/* vlength/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2keyz20zzcfa_info3z00(BgL_vlengthz00_bglt BgL_oz00_372)
	{
		{	/* Cfa/cinfo3.sch 535 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_372)))->BgL_keyz00);
		}

	}



/* &vlength/Cinfo-key */
	obj_t BGl_z62vlengthzf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_5137,
		obj_t BgL_oz00_5138)
	{
		{	/* Cfa/cinfo3.sch 535 */
			return
				BGl_vlengthzf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5138));
		}

	}



/* vlength/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_373, obj_t BgL_vz00_374)
	{
		{	/* Cfa/cinfo3.sch 536 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_373)))->BgL_keyz00) =
				((obj_t) BgL_vz00_374), BUNSPEC);
		}

	}



/* &vlength/Cinfo-key-set! */
	obj_t BGl_z62vlengthzf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5139, obj_t BgL_oz00_5140, obj_t BgL_vz00_5141)
	{
		{	/* Cfa/cinfo3.sch 536 */
			return
				BGl_vlengthzf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5140), BgL_vz00_5141);
		}

	}



/* vlength/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_375)
	{
		{	/* Cfa/cinfo3.sch 537 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_375)))->BgL_sidezd2effectzd2);
		}

	}



/* &vlength/Cinfo-side-effect */
	obj_t BGl_z62vlengthzf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_5142, obj_t BgL_oz00_5143)
	{
		{	/* Cfa/cinfo3.sch 537 */
			return
				BGl_vlengthzf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5143));
		}

	}



/* vlength/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_vlengthz00_bglt BgL_oz00_376, obj_t BgL_vz00_377)
	{
		{	/* Cfa/cinfo3.sch 538 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_376)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_377), BUNSPEC);
		}

	}



/* &vlength/Cinfo-side-effect-set! */
	obj_t BGl_z62vlengthzf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5144, obj_t BgL_oz00_5145, obj_t BgL_vz00_5146)
	{
		{	/* Cfa/cinfo3.sch 538 */
			return
				BGl_vlengthzf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5145), BgL_vz00_5146);
		}

	}



/* vlength/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_vlengthzf2Cinfozd2typez20zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_378)
	{
		{	/* Cfa/cinfo3.sch 539 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_378)))->BgL_typez00);
		}

	}



/* &vlength/Cinfo-type */
	BgL_typez00_bglt BGl_z62vlengthzf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_5147, obj_t BgL_oz00_5148)
	{
		{	/* Cfa/cinfo3.sch 539 */
			return
				BGl_vlengthzf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5148));
		}

	}



/* vlength/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_vlengthz00_bglt
		BgL_oz00_379, BgL_typez00_bglt BgL_vz00_380)
	{
		{	/* Cfa/cinfo3.sch 540 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_379)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_380), BUNSPEC);
		}

	}



/* &vlength/Cinfo-type-set! */
	obj_t BGl_z62vlengthzf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5149, obj_t BgL_oz00_5150, obj_t BgL_vz00_5151)
	{
		{	/* Cfa/cinfo3.sch 540 */
			return
				BGl_vlengthzf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5150),
				((BgL_typez00_bglt) BgL_vz00_5151));
		}

	}



/* vlength/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_vlengthzf2Cinfozd2locz20zzcfa_info3z00(BgL_vlengthz00_bglt BgL_oz00_381)
	{
		{	/* Cfa/cinfo3.sch 541 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_381)))->BgL_locz00);
		}

	}



/* &vlength/Cinfo-loc */
	obj_t BGl_z62vlengthzf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_5152,
		obj_t BgL_oz00_5153)
	{
		{	/* Cfa/cinfo3.sch 541 */
			return
				BGl_vlengthzf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_vlengthz00_bglt) BgL_oz00_5153));
		}

	}



/* make-pre-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00(obj_t BgL_loc1357z00_384,
		BgL_typez00_bglt BgL_type1358z00_385, obj_t BgL_sidezd2effect1359zd2_386,
		obj_t BgL_key1360z00_387, obj_t BgL_exprza21361za2_388,
		obj_t BgL_effect1362z00_389, obj_t BgL_czd2format1363zd2_390,
		BgL_typez00_bglt BgL_ftype1364z00_391,
		BgL_typez00_bglt BgL_otype1365z00_392,
		BgL_variablez00_bglt BgL_owner1366z00_393)
	{
		{	/* Cfa/cinfo3.sch 545 */
			{	/* Cfa/cinfo3.sch 545 */
				BgL_vallocz00_bglt BgL_new1372z00_5859;

				{	/* Cfa/cinfo3.sch 545 */
					BgL_vallocz00_bglt BgL_tmp1370z00_5860;
					BgL_prezd2valloczf2cinfoz20_bglt BgL_wide1371z00_5861;

					{
						BgL_vallocz00_bglt BgL_auxz00_7687;

						{	/* Cfa/cinfo3.sch 545 */
							BgL_vallocz00_bglt BgL_new1369z00_5862;

							BgL_new1369z00_5862 =
								((BgL_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							{	/* Cfa/cinfo3.sch 545 */
								long BgL_arg1742z00_5863;

								{	/* Cfa/cinfo3.sch 545 */
									long BgL_res2264z00_5864;

									BgL_res2264z00_5864 =
										BGL_CLASS_INDEX(BGl_vallocz00zzast_nodez00);
									BgL_arg1742z00_5863 = BgL_res2264z00_5864;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1369z00_5862),
									BgL_arg1742z00_5863);
							}
							{	/* Cfa/cinfo3.sch 545 */
								BgL_objectz00_bglt BgL_tmpz00_7692;

								BgL_tmpz00_7692 = ((BgL_objectz00_bglt) BgL_new1369z00_5862);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7692, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1369z00_5862);
							BgL_auxz00_7687 = BgL_new1369z00_5862;
						}
						BgL_tmp1370z00_5860 = ((BgL_vallocz00_bglt) BgL_auxz00_7687);
					}
					BgL_wide1371z00_5861 =
						((BgL_prezd2valloczf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2valloczf2cinfoz20_bgl))));
					{	/* Cfa/cinfo3.sch 545 */
						obj_t BgL_auxz00_7700;
						BgL_objectz00_bglt BgL_tmpz00_7698;

						BgL_auxz00_7700 = ((obj_t) BgL_wide1371z00_5861);
						BgL_tmpz00_7698 = ((BgL_objectz00_bglt) BgL_tmp1370z00_5860);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7698, BgL_auxz00_7700);
					}
					((BgL_objectz00_bglt) BgL_tmp1370z00_5860);
					{	/* Cfa/cinfo3.sch 545 */
						long BgL_arg1741z00_5865;

						{	/* Cfa/cinfo3.sch 545 */
							long BgL_res2265z00_5866;

							BgL_res2265z00_5866 =
								BGL_CLASS_INDEX(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
							BgL_arg1741z00_5865 = BgL_res2265z00_5866;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1370z00_5860), BgL_arg1741z00_5865);
					}
					BgL_new1372z00_5859 = ((BgL_vallocz00_bglt) BgL_tmp1370z00_5860);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1372z00_5859)))->BgL_locz00) =
					((obj_t) BgL_loc1357z00_384), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1372z00_5859)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1358z00_385), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1372z00_5859)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1359zd2_386), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1372z00_5859)))->BgL_keyz00) =
					((obj_t) BgL_key1360z00_387), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1372z00_5859)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21361za2_388), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1372z00_5859)))->BgL_effectz00) =
					((obj_t) BgL_effect1362z00_389), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1372z00_5859)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1363zd2_390), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1372z00_5859)))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype1364z00_391), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1372z00_5859)))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype1365z00_392), BUNSPEC);
				{
					BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_7726;

					{
						obj_t BgL_auxz00_7727;

						{	/* Cfa/cinfo3.sch 545 */
							BgL_objectz00_bglt BgL_tmpz00_7728;

							BgL_tmpz00_7728 = ((BgL_objectz00_bglt) BgL_new1372z00_5859);
							BgL_auxz00_7727 = BGL_OBJECT_WIDENING(BgL_tmpz00_7728);
						}
						BgL_auxz00_7726 =
							((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_7727);
					}
					((((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_7726))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1366z00_393), BUNSPEC);
				}
				return BgL_new1372z00_5859;
			}
		}

	}



/* &make-pre-valloc/Cinfo */
	BgL_vallocz00_bglt BGl_z62makezd2prezd2valloczf2Cinfoz90zzcfa_info3z00(obj_t
		BgL_envz00_5154, obj_t BgL_loc1357z00_5155, obj_t BgL_type1358z00_5156,
		obj_t BgL_sidezd2effect1359zd2_5157, obj_t BgL_key1360z00_5158,
		obj_t BgL_exprza21361za2_5159, obj_t BgL_effect1362z00_5160,
		obj_t BgL_czd2format1363zd2_5161, obj_t BgL_ftype1364z00_5162,
		obj_t BgL_otype1365z00_5163, obj_t BgL_owner1366z00_5164)
	{
		{	/* Cfa/cinfo3.sch 545 */
			return
				BGl_makezd2prezd2valloczf2Cinfozf2zzcfa_info3z00(BgL_loc1357z00_5155,
				((BgL_typez00_bglt) BgL_type1358z00_5156),
				BgL_sidezd2effect1359zd2_5157, BgL_key1360z00_5158,
				BgL_exprza21361za2_5159, BgL_effect1362z00_5160,
				BgL_czd2format1363zd2_5161, ((BgL_typez00_bglt) BgL_ftype1364z00_5162),
				((BgL_typez00_bglt) BgL_otype1365z00_5163),
				((BgL_variablez00_bglt) BgL_owner1366z00_5164));
		}

	}



/* pre-valloc/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2valloczf2Cinfozf3zd3zzcfa_info3z00(obj_t
		BgL_objz00_394)
	{
		{	/* Cfa/cinfo3.sch 546 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_394,
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
		}

	}



/* &pre-valloc/Cinfo? */
	obj_t BGl_z62prezd2valloczf2Cinfozf3zb1zzcfa_info3z00(obj_t BgL_envz00_5165,
		obj_t BgL_objz00_5166)
	{
		{	/* Cfa/cinfo3.sch 546 */
			return
				BBOOL(BGl_prezd2valloczf2Cinfozf3zd3zzcfa_info3z00(BgL_objz00_5166));
		}

	}



/* pre-valloc/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 547 */
			{	/* Cfa/cinfo3.sch 547 */
				obj_t BgL_classz00_4043;

				BgL_classz00_4043 = BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 547 */
					obj_t BgL__ortest_1106z00_4044;

					BgL__ortest_1106z00_4044 = BGL_CLASS_NIL(BgL_classz00_4043);
					if (CBOOL(BgL__ortest_1106z00_4044))
						{	/* Cfa/cinfo3.sch 547 */
							return ((BgL_vallocz00_bglt) BgL__ortest_1106z00_4044);
						}
					else
						{	/* Cfa/cinfo3.sch 547 */
							return
								((BgL_vallocz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4043));
						}
				}
			}
		}

	}



/* &pre-valloc/Cinfo-nil */
	BgL_vallocz00_bglt BGl_z62prezd2valloczf2Cinfozd2nilz90zzcfa_info3z00(obj_t
		BgL_envz00_5167)
	{
		{	/* Cfa/cinfo3.sch 547 */
			return BGl_prezd2valloczf2Cinfozd2nilzf2zzcfa_info3z00();
		}

	}



/* pre-valloc/Cinfo-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_prezd2valloczf2Cinfozd2ownerzf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_395)
	{
		{	/* Cfa/cinfo3.sch 548 */
			{
				BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_7748;

				{
					obj_t BgL_auxz00_7749;

					{	/* Cfa/cinfo3.sch 548 */
						BgL_objectz00_bglt BgL_tmpz00_7750;

						BgL_tmpz00_7750 = ((BgL_objectz00_bglt) BgL_oz00_395);
						BgL_auxz00_7749 = BGL_OBJECT_WIDENING(BgL_tmpz00_7750);
					}
					BgL_auxz00_7748 =
						((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_7749);
				}
				return
					(((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_7748))->
					BgL_ownerz00);
			}
		}

	}



/* &pre-valloc/Cinfo-owner */
	BgL_variablez00_bglt
		BGl_z62prezd2valloczf2Cinfozd2ownerz90zzcfa_info3z00(obj_t BgL_envz00_5168,
		obj_t BgL_oz00_5169)
	{
		{	/* Cfa/cinfo3.sch 548 */
			return
				BGl_prezd2valloczf2Cinfozd2ownerzf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5169));
		}

	}



/* pre-valloc/Cinfo-otype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2valloczf2Cinfozd2otypezf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_398)
	{
		{	/* Cfa/cinfo3.sch 550 */
			return
				(((BgL_vallocz00_bglt) COBJECT(
						((BgL_vallocz00_bglt) BgL_oz00_398)))->BgL_otypez00);
		}

	}



/* &pre-valloc/Cinfo-otype */
	BgL_typez00_bglt BGl_z62prezd2valloczf2Cinfozd2otypez90zzcfa_info3z00(obj_t
		BgL_envz00_5170, obj_t BgL_oz00_5171)
	{
		{	/* Cfa/cinfo3.sch 550 */
			return
				BGl_prezd2valloczf2Cinfozd2otypezf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5171));
		}

	}



/* pre-valloc/Cinfo-otype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2otypezd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_399, BgL_typez00_bglt BgL_vz00_400)
	{
		{	/* Cfa/cinfo3.sch 551 */
			return
				((((BgL_vallocz00_bglt) COBJECT(
							((BgL_vallocz00_bglt) BgL_oz00_399)))->BgL_otypez00) =
				((BgL_typez00_bglt) BgL_vz00_400), BUNSPEC);
		}

	}



/* &pre-valloc/Cinfo-otype-set! */
	obj_t BGl_z62prezd2valloczf2Cinfozd2otypezd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5172, obj_t BgL_oz00_5173, obj_t BgL_vz00_5174)
	{
		{	/* Cfa/cinfo3.sch 551 */
			return
				BGl_prezd2valloczf2Cinfozd2otypezd2setz12z32zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5173),
				((BgL_typez00_bglt) BgL_vz00_5174));
		}

	}



/* pre-valloc/Cinfo-ftype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2valloczf2Cinfozd2ftypezf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_401)
	{
		{	/* Cfa/cinfo3.sch 552 */
			return
				(((BgL_vallocz00_bglt) COBJECT(
						((BgL_vallocz00_bglt) BgL_oz00_401)))->BgL_ftypez00);
		}

	}



/* &pre-valloc/Cinfo-ftype */
	BgL_typez00_bglt BGl_z62prezd2valloczf2Cinfozd2ftypez90zzcfa_info3z00(obj_t
		BgL_envz00_5175, obj_t BgL_oz00_5176)
	{
		{	/* Cfa/cinfo3.sch 552 */
			return
				BGl_prezd2valloczf2Cinfozd2ftypezf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5176));
		}

	}



/* pre-valloc/Cinfo-ftype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2ftypezd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_402, BgL_typez00_bglt BgL_vz00_403)
	{
		{	/* Cfa/cinfo3.sch 553 */
			return
				((((BgL_vallocz00_bglt) COBJECT(
							((BgL_vallocz00_bglt) BgL_oz00_402)))->BgL_ftypez00) =
				((BgL_typez00_bglt) BgL_vz00_403), BUNSPEC);
		}

	}



/* &pre-valloc/Cinfo-ftype-set! */
	obj_t BGl_z62prezd2valloczf2Cinfozd2ftypezd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5177, obj_t BgL_oz00_5178, obj_t BgL_vz00_5179)
	{
		{	/* Cfa/cinfo3.sch 553 */
			return
				BGl_prezd2valloczf2Cinfozd2ftypezd2setz12z32zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5178),
				((BgL_typez00_bglt) BgL_vz00_5179));
		}

	}



/* pre-valloc/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2czd2formatz20zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_404)
	{
		{	/* Cfa/cinfo3.sch 554 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_404)))->BgL_czd2formatzd2);
		}

	}



/* &pre-valloc/Cinfo-c-format */
	obj_t BGl_z62prezd2valloczf2Cinfozd2czd2formatz42zzcfa_info3z00(obj_t
		BgL_envz00_5180, obj_t BgL_oz00_5181)
	{
		{	/* Cfa/cinfo3.sch 554 */
			return
				BGl_prezd2valloczf2Cinfozd2czd2formatz20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5181));
		}

	}



/* pre-valloc/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2effectzf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_407)
	{
		{	/* Cfa/cinfo3.sch 556 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_407)))->BgL_effectz00);
		}

	}



/* &pre-valloc/Cinfo-effect */
	obj_t BGl_z62prezd2valloczf2Cinfozd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_5182, obj_t BgL_oz00_5183)
	{
		{	/* Cfa/cinfo3.sch 556 */
			return
				BGl_prezd2valloczf2Cinfozd2effectzf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5183));
		}

	}



/* pre-valloc/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2effectzd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_408, obj_t BgL_vz00_409)
	{
		{	/* Cfa/cinfo3.sch 557 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_408)))->BgL_effectz00) =
				((obj_t) BgL_vz00_409), BUNSPEC);
		}

	}



/* &pre-valloc/Cinfo-effect-set! */
	obj_t BGl_z62prezd2valloczf2Cinfozd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5184, obj_t BgL_oz00_5185, obj_t BgL_vz00_5186)
	{
		{	/* Cfa/cinfo3.sch 557 */
			return
				BGl_prezd2valloczf2Cinfozd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5185), BgL_vz00_5186);
		}

	}



/* pre-valloc/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2exprza2z50zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_410)
	{
		{	/* Cfa/cinfo3.sch 558 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_410)))->BgL_exprza2za2);
		}

	}



/* &pre-valloc/Cinfo-expr* */
	obj_t BGl_z62prezd2valloczf2Cinfozd2exprza2z32zzcfa_info3z00(obj_t
		BgL_envz00_5187, obj_t BgL_oz00_5188)
	{
		{	/* Cfa/cinfo3.sch 558 */
			return
				BGl_prezd2valloczf2Cinfozd2exprza2z50zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5188));
		}

	}



/* pre-valloc/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2exprza2zd2setz12z90zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_411, obj_t BgL_vz00_412)
	{
		{	/* Cfa/cinfo3.sch 559 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_411)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_412), BUNSPEC);
		}

	}



/* &pre-valloc/Cinfo-expr*-set! */
	obj_t BGl_z62prezd2valloczf2Cinfozd2exprza2zd2setz12zf2zzcfa_info3z00(obj_t
		BgL_envz00_5189, obj_t BgL_oz00_5190, obj_t BgL_vz00_5191)
	{
		{	/* Cfa/cinfo3.sch 559 */
			return
				BGl_prezd2valloczf2Cinfozd2exprza2zd2setz12z90zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5190), BgL_vz00_5191);
		}

	}



/* pre-valloc/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2keyzf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_413)
	{
		{	/* Cfa/cinfo3.sch 560 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_413)))->BgL_keyz00);
		}

	}



/* &pre-valloc/Cinfo-key */
	obj_t BGl_z62prezd2valloczf2Cinfozd2keyz90zzcfa_info3z00(obj_t
		BgL_envz00_5192, obj_t BgL_oz00_5193)
	{
		{	/* Cfa/cinfo3.sch 560 */
			return
				BGl_prezd2valloczf2Cinfozd2keyzf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5193));
		}

	}



/* pre-valloc/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2keyzd2setz12z32zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_414, obj_t BgL_vz00_415)
	{
		{	/* Cfa/cinfo3.sch 561 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_414)))->BgL_keyz00) =
				((obj_t) BgL_vz00_415), BUNSPEC);
		}

	}



/* &pre-valloc/Cinfo-key-set! */
	obj_t BGl_z62prezd2valloczf2Cinfozd2keyzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5194, obj_t BgL_oz00_5195, obj_t BgL_vz00_5196)
	{
		{	/* Cfa/cinfo3.sch 561 */
			return
				BGl_prezd2valloczf2Cinfozd2keyzd2setz12z32zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5195), BgL_vz00_5196);
		}

	}



/* pre-valloc/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2sidezd2effectz20zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_416)
	{
		{	/* Cfa/cinfo3.sch 562 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_416)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-valloc/Cinfo-side-effect */
	obj_t BGl_z62prezd2valloczf2Cinfozd2sidezd2effectz42zzcfa_info3z00(obj_t
		BgL_envz00_5197, obj_t BgL_oz00_5198)
	{
		{	/* Cfa/cinfo3.sch 562 */
			return
				BGl_prezd2valloczf2Cinfozd2sidezd2effectz20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5198));
		}

	}



/* pre-valloc/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2sidezd2effectzd2setz12ze0zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_417, obj_t BgL_vz00_418)
	{
		{	/* Cfa/cinfo3.sch 563 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_417)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_418), BUNSPEC);
		}

	}



/* &pre-valloc/Cinfo-side-effect-set! */
	obj_t
		BGl_z62prezd2valloczf2Cinfozd2sidezd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5199, obj_t BgL_oz00_5200, obj_t BgL_vz00_5201)
	{
		{	/* Cfa/cinfo3.sch 563 */
			return
				BGl_prezd2valloczf2Cinfozd2sidezd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5200), BgL_vz00_5201);
		}

	}



/* pre-valloc/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2valloczf2Cinfozd2typezf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_419)
	{
		{	/* Cfa/cinfo3.sch 564 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_419)))->BgL_typez00);
		}

	}



/* &pre-valloc/Cinfo-type */
	BgL_typez00_bglt BGl_z62prezd2valloczf2Cinfozd2typez90zzcfa_info3z00(obj_t
		BgL_envz00_5202, obj_t BgL_oz00_5203)
	{
		{	/* Cfa/cinfo3.sch 564 */
			return
				BGl_prezd2valloczf2Cinfozd2typezf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5203));
		}

	}



/* pre-valloc/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2typezd2setz12z32zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_420, BgL_typez00_bglt BgL_vz00_421)
	{
		{	/* Cfa/cinfo3.sch 565 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_420)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_421), BUNSPEC);
		}

	}



/* &pre-valloc/Cinfo-type-set! */
	obj_t BGl_z62prezd2valloczf2Cinfozd2typezd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5204, obj_t BgL_oz00_5205, obj_t BgL_vz00_5206)
	{
		{	/* Cfa/cinfo3.sch 565 */
			return
				BGl_prezd2valloczf2Cinfozd2typezd2setz12z32zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5205),
				((BgL_typez00_bglt) BgL_vz00_5206));
		}

	}



/* pre-valloc/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2valloczf2Cinfozd2loczf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_422)
	{
		{	/* Cfa/cinfo3.sch 566 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_422)))->BgL_locz00);
		}

	}



/* &pre-valloc/Cinfo-loc */
	obj_t BGl_z62prezd2valloczf2Cinfozd2locz90zzcfa_info3z00(obj_t
		BgL_envz00_5207, obj_t BgL_oz00_5208)
	{
		{	/* Cfa/cinfo3.sch 566 */
			return
				BGl_prezd2valloczf2Cinfozd2loczf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5208));
		}

	}



/* make-valloc/Cinfo */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_makezd2valloczf2Cinfoz20zzcfa_info3z00(obj_t BgL_loc1346z00_425,
		BgL_typez00_bglt BgL_type1347z00_426, obj_t BgL_sidezd2effect1348zd2_427,
		obj_t BgL_key1349z00_428, obj_t BgL_exprza21350za2_429,
		obj_t BgL_effect1351z00_430, obj_t BgL_czd2format1352zd2_431,
		BgL_typez00_bglt BgL_ftype1353z00_432,
		BgL_typez00_bglt BgL_otype1354z00_433,
		BgL_approxz00_bglt BgL_approx1355z00_434)
	{
		{	/* Cfa/cinfo3.sch 570 */
			{	/* Cfa/cinfo3.sch 570 */
				BgL_vallocz00_bglt BgL_new1376z00_5867;

				{	/* Cfa/cinfo3.sch 570 */
					BgL_vallocz00_bglt BgL_tmp1374z00_5868;
					BgL_valloczf2cinfozf2_bglt BgL_wide1375z00_5869;

					{
						BgL_vallocz00_bglt BgL_auxz00_7824;

						{	/* Cfa/cinfo3.sch 570 */
							BgL_vallocz00_bglt BgL_new1373z00_5870;

							BgL_new1373z00_5870 =
								((BgL_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							{	/* Cfa/cinfo3.sch 570 */
								long BgL_arg1744z00_5871;

								{	/* Cfa/cinfo3.sch 570 */
									long BgL_res2266z00_5872;

									BgL_res2266z00_5872 =
										BGL_CLASS_INDEX(BGl_vallocz00zzast_nodez00);
									BgL_arg1744z00_5871 = BgL_res2266z00_5872;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1373z00_5870),
									BgL_arg1744z00_5871);
							}
							{	/* Cfa/cinfo3.sch 570 */
								BgL_objectz00_bglt BgL_tmpz00_7829;

								BgL_tmpz00_7829 = ((BgL_objectz00_bglt) BgL_new1373z00_5870);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7829, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1373z00_5870);
							BgL_auxz00_7824 = BgL_new1373z00_5870;
						}
						BgL_tmp1374z00_5868 = ((BgL_vallocz00_bglt) BgL_auxz00_7824);
					}
					BgL_wide1375z00_5869 =
						((BgL_valloczf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_valloczf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.sch 570 */
						obj_t BgL_auxz00_7837;
						BgL_objectz00_bglt BgL_tmpz00_7835;

						BgL_auxz00_7837 = ((obj_t) BgL_wide1375z00_5869);
						BgL_tmpz00_7835 = ((BgL_objectz00_bglt) BgL_tmp1374z00_5868);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7835, BgL_auxz00_7837);
					}
					((BgL_objectz00_bglt) BgL_tmp1374z00_5868);
					{	/* Cfa/cinfo3.sch 570 */
						long BgL_arg1743z00_5873;

						{	/* Cfa/cinfo3.sch 570 */
							long BgL_res2267z00_5874;

							BgL_res2267z00_5874 =
								BGL_CLASS_INDEX(BGl_valloczf2Cinfozf2zzcfa_info3z00);
							BgL_arg1743z00_5873 = BgL_res2267z00_5874;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1374z00_5868), BgL_arg1743z00_5873);
					}
					BgL_new1376z00_5867 = ((BgL_vallocz00_bglt) BgL_tmp1374z00_5868);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1376z00_5867)))->BgL_locz00) =
					((obj_t) BgL_loc1346z00_425), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1376z00_5867)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1347z00_426), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1376z00_5867)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1348zd2_427), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1376z00_5867)))->BgL_keyz00) =
					((obj_t) BgL_key1349z00_428), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1376z00_5867)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21350za2_429), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1376z00_5867)))->BgL_effectz00) =
					((obj_t) BgL_effect1351z00_430), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1376z00_5867)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1352zd2_431), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1376z00_5867)))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype1353z00_432), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1376z00_5867)))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype1354z00_433), BUNSPEC);
				{
					BgL_valloczf2cinfozf2_bglt BgL_auxz00_7863;

					{
						obj_t BgL_auxz00_7864;

						{	/* Cfa/cinfo3.sch 570 */
							BgL_objectz00_bglt BgL_tmpz00_7865;

							BgL_tmpz00_7865 = ((BgL_objectz00_bglt) BgL_new1376z00_5867);
							BgL_auxz00_7864 = BGL_OBJECT_WIDENING(BgL_tmpz00_7865);
						}
						BgL_auxz00_7863 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_7864);
					}
					((((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_7863))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1355z00_434), BUNSPEC);
				}
				return BgL_new1376z00_5867;
			}
		}

	}



/* &make-valloc/Cinfo */
	BgL_vallocz00_bglt BGl_z62makezd2valloczf2Cinfoz42zzcfa_info3z00(obj_t
		BgL_envz00_5209, obj_t BgL_loc1346z00_5210, obj_t BgL_type1347z00_5211,
		obj_t BgL_sidezd2effect1348zd2_5212, obj_t BgL_key1349z00_5213,
		obj_t BgL_exprza21350za2_5214, obj_t BgL_effect1351z00_5215,
		obj_t BgL_czd2format1352zd2_5216, obj_t BgL_ftype1353z00_5217,
		obj_t BgL_otype1354z00_5218, obj_t BgL_approx1355z00_5219)
	{
		{	/* Cfa/cinfo3.sch 570 */
			return
				BGl_makezd2valloczf2Cinfoz20zzcfa_info3z00(BgL_loc1346z00_5210,
				((BgL_typez00_bglt) BgL_type1347z00_5211),
				BgL_sidezd2effect1348zd2_5212, BgL_key1349z00_5213,
				BgL_exprza21350za2_5214, BgL_effect1351z00_5215,
				BgL_czd2format1352zd2_5216, ((BgL_typez00_bglt) BgL_ftype1353z00_5217),
				((BgL_typez00_bglt) BgL_otype1354z00_5218),
				((BgL_approxz00_bglt) BgL_approx1355z00_5219));
		}

	}



/* valloc/Cinfo? */
	BGL_EXPORTED_DEF bool_t BGl_valloczf2Cinfozf3z01zzcfa_info3z00(obj_t
		BgL_objz00_435)
	{
		{	/* Cfa/cinfo3.sch 571 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_435,
				BGl_valloczf2Cinfozf2zzcfa_info3z00);
		}

	}



/* &valloc/Cinfo? */
	obj_t BGl_z62valloczf2Cinfozf3z63zzcfa_info3z00(obj_t BgL_envz00_5220,
		obj_t BgL_objz00_5221)
	{
		{	/* Cfa/cinfo3.sch 571 */
			return BBOOL(BGl_valloczf2Cinfozf3z01zzcfa_info3z00(BgL_objz00_5221));
		}

	}



/* valloc/Cinfo-nil */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_valloczf2Cinfozd2nilz20zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 572 */
			{	/* Cfa/cinfo3.sch 572 */
				obj_t BgL_classz00_4063;

				BgL_classz00_4063 = BGl_valloczf2Cinfozf2zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 572 */
					obj_t BgL__ortest_1106z00_4064;

					BgL__ortest_1106z00_4064 = BGL_CLASS_NIL(BgL_classz00_4063);
					if (CBOOL(BgL__ortest_1106z00_4064))
						{	/* Cfa/cinfo3.sch 572 */
							return ((BgL_vallocz00_bglt) BgL__ortest_1106z00_4064);
						}
					else
						{	/* Cfa/cinfo3.sch 572 */
							return
								((BgL_vallocz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4063));
						}
				}
			}
		}

	}



/* &valloc/Cinfo-nil */
	BgL_vallocz00_bglt BGl_z62valloczf2Cinfozd2nilz42zzcfa_info3z00(obj_t
		BgL_envz00_5222)
	{
		{	/* Cfa/cinfo3.sch 572 */
			return BGl_valloczf2Cinfozd2nilz20zzcfa_info3z00();
		}

	}



/* valloc/Cinfo-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_valloczf2Cinfozd2approxz20zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_436)
	{
		{	/* Cfa/cinfo3.sch 573 */
			{
				BgL_valloczf2cinfozf2_bglt BgL_auxz00_7885;

				{
					obj_t BgL_auxz00_7886;

					{	/* Cfa/cinfo3.sch 573 */
						BgL_objectz00_bglt BgL_tmpz00_7887;

						BgL_tmpz00_7887 = ((BgL_objectz00_bglt) BgL_oz00_436);
						BgL_auxz00_7886 = BGL_OBJECT_WIDENING(BgL_tmpz00_7887);
					}
					BgL_auxz00_7885 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_7886);
				}
				return
					(((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_7885))->
					BgL_approxz00);
			}
		}

	}



/* &valloc/Cinfo-approx */
	BgL_approxz00_bglt BGl_z62valloczf2Cinfozd2approxz42zzcfa_info3z00(obj_t
		BgL_envz00_5223, obj_t BgL_oz00_5224)
	{
		{	/* Cfa/cinfo3.sch 573 */
			return
				BGl_valloczf2Cinfozd2approxz20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5224));
		}

	}



/* valloc/Cinfo-otype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_valloczf2Cinfozd2otypez20zzcfa_info3z00(BgL_vallocz00_bglt BgL_oz00_439)
	{
		{	/* Cfa/cinfo3.sch 575 */
			return
				(((BgL_vallocz00_bglt) COBJECT(
						((BgL_vallocz00_bglt) BgL_oz00_439)))->BgL_otypez00);
		}

	}



/* &valloc/Cinfo-otype */
	BgL_typez00_bglt BGl_z62valloczf2Cinfozd2otypez42zzcfa_info3z00(obj_t
		BgL_envz00_5225, obj_t BgL_oz00_5226)
	{
		{	/* Cfa/cinfo3.sch 575 */
			return
				BGl_valloczf2Cinfozd2otypez20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5226));
		}

	}



/* valloc/Cinfo-otype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_440, BgL_typez00_bglt BgL_vz00_441)
	{
		{	/* Cfa/cinfo3.sch 576 */
			return
				((((BgL_vallocz00_bglt) COBJECT(
							((BgL_vallocz00_bglt) BgL_oz00_440)))->BgL_otypez00) =
				((BgL_typez00_bglt) BgL_vz00_441), BUNSPEC);
		}

	}



/* &valloc/Cinfo-otype-set! */
	obj_t BGl_z62valloczf2Cinfozd2otypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5227, obj_t BgL_oz00_5228, obj_t BgL_vz00_5229)
	{
		{	/* Cfa/cinfo3.sch 576 */
			return
				BGl_valloczf2Cinfozd2otypezd2setz12ze0zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5228),
				((BgL_typez00_bglt) BgL_vz00_5229));
		}

	}



/* valloc/Cinfo-ftype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_valloczf2Cinfozd2ftypez20zzcfa_info3z00(BgL_vallocz00_bglt BgL_oz00_442)
	{
		{	/* Cfa/cinfo3.sch 577 */
			return
				(((BgL_vallocz00_bglt) COBJECT(
						((BgL_vallocz00_bglt) BgL_oz00_442)))->BgL_ftypez00);
		}

	}



/* &valloc/Cinfo-ftype */
	BgL_typez00_bglt BGl_z62valloczf2Cinfozd2ftypez42zzcfa_info3z00(obj_t
		BgL_envz00_5230, obj_t BgL_oz00_5231)
	{
		{	/* Cfa/cinfo3.sch 577 */
			return
				BGl_valloczf2Cinfozd2ftypez20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5231));
		}

	}



/* valloc/Cinfo-ftype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_443, BgL_typez00_bglt BgL_vz00_444)
	{
		{	/* Cfa/cinfo3.sch 578 */
			return
				((((BgL_vallocz00_bglt) COBJECT(
							((BgL_vallocz00_bglt) BgL_oz00_443)))->BgL_ftypez00) =
				((BgL_typez00_bglt) BgL_vz00_444), BUNSPEC);
		}

	}



/* &valloc/Cinfo-ftype-set! */
	obj_t BGl_z62valloczf2Cinfozd2ftypezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5232, obj_t BgL_oz00_5233, obj_t BgL_vz00_5234)
	{
		{	/* Cfa/cinfo3.sch 578 */
			return
				BGl_valloczf2Cinfozd2ftypezd2setz12ze0zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5233),
				((BgL_typez00_bglt) BgL_vz00_5234));
		}

	}



/* valloc/Cinfo-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2czd2formatzf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_445)
	{
		{	/* Cfa/cinfo3.sch 579 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_445)))->BgL_czd2formatzd2);
		}

	}



/* &valloc/Cinfo-c-format */
	obj_t BGl_z62valloczf2Cinfozd2czd2formatz90zzcfa_info3z00(obj_t
		BgL_envz00_5235, obj_t BgL_oz00_5236)
	{
		{	/* Cfa/cinfo3.sch 579 */
			return
				BGl_valloczf2Cinfozd2czd2formatzf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5236));
		}

	}



/* valloc/Cinfo-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2effectz20zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_448)
	{
		{	/* Cfa/cinfo3.sch 581 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_448)))->BgL_effectz00);
		}

	}



/* &valloc/Cinfo-effect */
	obj_t BGl_z62valloczf2Cinfozd2effectz42zzcfa_info3z00(obj_t BgL_envz00_5237,
		obj_t BgL_oz00_5238)
	{
		{	/* Cfa/cinfo3.sch 581 */
			return
				BGl_valloczf2Cinfozd2effectz20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5238));
		}

	}



/* valloc/Cinfo-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_449, obj_t BgL_vz00_450)
	{
		{	/* Cfa/cinfo3.sch 582 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_449)))->BgL_effectz00) =
				((obj_t) BgL_vz00_450), BUNSPEC);
		}

	}



/* &valloc/Cinfo-effect-set! */
	obj_t BGl_z62valloczf2Cinfozd2effectzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5239, obj_t BgL_oz00_5240, obj_t BgL_vz00_5241)
	{
		{	/* Cfa/cinfo3.sch 582 */
			return
				BGl_valloczf2Cinfozd2effectzd2setz12ze0zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5240), BgL_vz00_5241);
		}

	}



/* valloc/Cinfo-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2exprza2z82zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_451)
	{
		{	/* Cfa/cinfo3.sch 583 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_451)))->BgL_exprza2za2);
		}

	}



/* &valloc/Cinfo-expr* */
	obj_t BGl_z62valloczf2Cinfozd2exprza2ze0zzcfa_info3z00(obj_t BgL_envz00_5242,
		obj_t BgL_oz00_5243)
	{
		{	/* Cfa/cinfo3.sch 583 */
			return
				BGl_valloczf2Cinfozd2exprza2z82zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5243));
		}

	}



/* valloc/Cinfo-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_452, obj_t BgL_vz00_453)
	{
		{	/* Cfa/cinfo3.sch 584 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_452)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_453), BUNSPEC);
		}

	}



/* &valloc/Cinfo-expr*-set! */
	obj_t BGl_z62valloczf2Cinfozd2exprza2zd2setz12z20zzcfa_info3z00(obj_t
		BgL_envz00_5244, obj_t BgL_oz00_5245, obj_t BgL_vz00_5246)
	{
		{	/* Cfa/cinfo3.sch 584 */
			return
				BGl_valloczf2Cinfozd2exprza2zd2setz12z42zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5245), BgL_vz00_5246);
		}

	}



/* valloc/Cinfo-key */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2keyz20zzcfa_info3z00(BgL_vallocz00_bglt BgL_oz00_454)
	{
		{	/* Cfa/cinfo3.sch 585 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_454)))->BgL_keyz00);
		}

	}



/* &valloc/Cinfo-key */
	obj_t BGl_z62valloczf2Cinfozd2keyz42zzcfa_info3z00(obj_t BgL_envz00_5247,
		obj_t BgL_oz00_5248)
	{
		{	/* Cfa/cinfo3.sch 585 */
			return
				BGl_valloczf2Cinfozd2keyz20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5248));
		}

	}



/* valloc/Cinfo-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_455, obj_t BgL_vz00_456)
	{
		{	/* Cfa/cinfo3.sch 586 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_455)))->BgL_keyz00) =
				((obj_t) BgL_vz00_456), BUNSPEC);
		}

	}



/* &valloc/Cinfo-key-set! */
	obj_t BGl_z62valloczf2Cinfozd2keyzd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5249, obj_t BgL_oz00_5250, obj_t BgL_vz00_5251)
	{
		{	/* Cfa/cinfo3.sch 586 */
			return
				BGl_valloczf2Cinfozd2keyzd2setz12ze0zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5250), BgL_vz00_5251);
		}

	}



/* valloc/Cinfo-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_457)
	{
		{	/* Cfa/cinfo3.sch 587 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_457)))->BgL_sidezd2effectzd2);
		}

	}



/* &valloc/Cinfo-side-effect */
	obj_t BGl_z62valloczf2Cinfozd2sidezd2effectz90zzcfa_info3z00(obj_t
		BgL_envz00_5252, obj_t BgL_oz00_5253)
	{
		{	/* Cfa/cinfo3.sch 587 */
			return
				BGl_valloczf2Cinfozd2sidezd2effectzf2zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5253));
		}

	}



/* valloc/Cinfo-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_458, obj_t BgL_vz00_459)
	{
		{	/* Cfa/cinfo3.sch 588 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_458)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_459), BUNSPEC);
		}

	}



/* &valloc/Cinfo-side-effect-set! */
	obj_t BGl_z62valloczf2Cinfozd2sidezd2effectzd2setz12z50zzcfa_info3z00(obj_t
		BgL_envz00_5254, obj_t BgL_oz00_5255, obj_t BgL_vz00_5256)
	{
		{	/* Cfa/cinfo3.sch 588 */
			return
				BGl_valloczf2Cinfozd2sidezd2effectzd2setz12z32zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5255), BgL_vz00_5256);
		}

	}



/* valloc/Cinfo-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_valloczf2Cinfozd2typez20zzcfa_info3z00(BgL_vallocz00_bglt BgL_oz00_460)
	{
		{	/* Cfa/cinfo3.sch 589 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_460)))->BgL_typez00);
		}

	}



/* &valloc/Cinfo-type */
	BgL_typez00_bglt BGl_z62valloczf2Cinfozd2typez42zzcfa_info3z00(obj_t
		BgL_envz00_5257, obj_t BgL_oz00_5258)
	{
		{	/* Cfa/cinfo3.sch 589 */
			return
				BGl_valloczf2Cinfozd2typez20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5258));
		}

	}



/* valloc/Cinfo-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_461, BgL_typez00_bglt BgL_vz00_462)
	{
		{	/* Cfa/cinfo3.sch 590 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_461)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_462), BUNSPEC);
		}

	}



/* &valloc/Cinfo-type-set! */
	obj_t BGl_z62valloczf2Cinfozd2typezd2setz12z82zzcfa_info3z00(obj_t
		BgL_envz00_5259, obj_t BgL_oz00_5260, obj_t BgL_vz00_5261)
	{
		{	/* Cfa/cinfo3.sch 590 */
			return
				BGl_valloczf2Cinfozd2typezd2setz12ze0zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5260),
				((BgL_typez00_bglt) BgL_vz00_5261));
		}

	}



/* valloc/Cinfo-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozd2locz20zzcfa_info3z00(BgL_vallocz00_bglt BgL_oz00_463)
	{
		{	/* Cfa/cinfo3.sch 591 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_463)))->BgL_locz00);
		}

	}



/* &valloc/Cinfo-loc */
	obj_t BGl_z62valloczf2Cinfozd2locz42zzcfa_info3z00(obj_t BgL_envz00_5262,
		obj_t BgL_oz00_5263)
	{
		{	/* Cfa/cinfo3.sch 591 */
			return
				BGl_valloczf2Cinfozd2locz20zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5263));
		}

	}



/* make-valloc/Cinfo+optim */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00(obj_t BgL_loc1329z00_466,
		BgL_typez00_bglt BgL_type1330z00_467, obj_t BgL_sidezd2effect1331zd2_468,
		obj_t BgL_key1332z00_469, obj_t BgL_exprza21333za2_470,
		obj_t BgL_effect1334z00_471, obj_t BgL_czd2format1335zd2_472,
		BgL_typez00_bglt BgL_ftype1336z00_473,
		BgL_typez00_bglt BgL_otype1337z00_474,
		BgL_approxz00_bglt BgL_approx1338z00_475,
		BgL_approxz00_bglt BgL_valuezd2approx1339zd2_476,
		long BgL_lostzd2stamp1340zd2_477, BgL_variablez00_bglt BgL_owner1341z00_478,
		bool_t BgL_stackablezf31342zf3_479, obj_t BgL_stackzd2stamp1343zd2_480,
		bool_t BgL_seenzf31344zf3_481)
	{
		{	/* Cfa/cinfo3.sch 595 */
			{	/* Cfa/cinfo3.sch 595 */
				BgL_vallocz00_bglt BgL_new1380z00_5875;

				{	/* Cfa/cinfo3.sch 595 */
					BgL_vallocz00_bglt BgL_tmp1378z00_5876;
					BgL_valloczf2cinfozb2optimz40_bglt BgL_wide1379z00_5877;

					{
						BgL_vallocz00_bglt BgL_auxz00_7961;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_vallocz00_bglt BgL_new1377z00_5878;

							BgL_new1377z00_5878 =
								((BgL_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							{	/* Cfa/cinfo3.sch 595 */
								long BgL_arg1746z00_5879;

								{	/* Cfa/cinfo3.sch 595 */
									long BgL_res2268z00_5880;

									BgL_res2268z00_5880 =
										BGL_CLASS_INDEX(BGl_vallocz00zzast_nodez00);
									BgL_arg1746z00_5879 = BgL_res2268z00_5880;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1377z00_5878),
									BgL_arg1746z00_5879);
							}
							{	/* Cfa/cinfo3.sch 595 */
								BgL_objectz00_bglt BgL_tmpz00_7966;

								BgL_tmpz00_7966 = ((BgL_objectz00_bglt) BgL_new1377z00_5878);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7966, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1377z00_5878);
							BgL_auxz00_7961 = BgL_new1377z00_5878;
						}
						BgL_tmp1378z00_5876 = ((BgL_vallocz00_bglt) BgL_auxz00_7961);
					}
					BgL_wide1379z00_5877 =
						((BgL_valloczf2cinfozb2optimz40_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_valloczf2cinfozb2optimz40_bgl))));
					{	/* Cfa/cinfo3.sch 595 */
						obj_t BgL_auxz00_7974;
						BgL_objectz00_bglt BgL_tmpz00_7972;

						BgL_auxz00_7974 = ((obj_t) BgL_wide1379z00_5877);
						BgL_tmpz00_7972 = ((BgL_objectz00_bglt) BgL_tmp1378z00_5876);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7972, BgL_auxz00_7974);
					}
					((BgL_objectz00_bglt) BgL_tmp1378z00_5876);
					{	/* Cfa/cinfo3.sch 595 */
						long BgL_arg1745z00_5881;

						{	/* Cfa/cinfo3.sch 595 */
							long BgL_res2269z00_5882;

							BgL_res2269z00_5882 =
								BGL_CLASS_INDEX(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
							BgL_arg1745z00_5881 = BgL_res2269z00_5882;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1378z00_5876), BgL_arg1745z00_5881);
					}
					BgL_new1380z00_5875 = ((BgL_vallocz00_bglt) BgL_tmp1378z00_5876);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1380z00_5875)))->BgL_locz00) =
					((obj_t) BgL_loc1329z00_466), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1380z00_5875)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1330z00_467), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1380z00_5875)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1331zd2_468), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1380z00_5875)))->BgL_keyz00) =
					((obj_t) BgL_key1332z00_469), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1380z00_5875)))->BgL_exprza2za2) =
					((obj_t) BgL_exprza21333za2_470), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1380z00_5875)))->BgL_effectz00) =
					((obj_t) BgL_effect1334z00_471), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1380z00_5875)))->BgL_czd2formatzd2) =
					((obj_t) BgL_czd2format1335zd2_472), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1380z00_5875)))->BgL_ftypez00) =
					((BgL_typez00_bglt) BgL_ftype1336z00_473), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1380z00_5875)))->BgL_otypez00) =
					((BgL_typez00_bglt) BgL_otype1337z00_474), BUNSPEC);
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8000;

					{
						obj_t BgL_auxz00_8001;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_objectz00_bglt BgL_tmpz00_8002;

							BgL_tmpz00_8002 = ((BgL_objectz00_bglt) BgL_new1380z00_5875);
							BgL_auxz00_8001 = BGL_OBJECT_WIDENING(BgL_tmpz00_8002);
						}
						BgL_auxz00_8000 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8001);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8000))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1338z00_475), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8007;

					{
						obj_t BgL_auxz00_8008;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_objectz00_bglt BgL_tmpz00_8009;

							BgL_tmpz00_8009 = ((BgL_objectz00_bglt) BgL_new1380z00_5875);
							BgL_auxz00_8008 = BGL_OBJECT_WIDENING(BgL_tmpz00_8009);
						}
						BgL_auxz00_8007 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8008);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8007))->
							BgL_valuezd2approxzd2) =
						((BgL_approxz00_bglt) BgL_valuezd2approx1339zd2_476), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8014;

					{
						obj_t BgL_auxz00_8015;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_objectz00_bglt BgL_tmpz00_8016;

							BgL_tmpz00_8016 = ((BgL_objectz00_bglt) BgL_new1380z00_5875);
							BgL_auxz00_8015 = BGL_OBJECT_WIDENING(BgL_tmpz00_8016);
						}
						BgL_auxz00_8014 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8015);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8014))->
							BgL_lostzd2stampzd2) =
						((long) BgL_lostzd2stamp1340zd2_477), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8021;

					{
						obj_t BgL_auxz00_8022;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_objectz00_bglt BgL_tmpz00_8023;

							BgL_tmpz00_8023 = ((BgL_objectz00_bglt) BgL_new1380z00_5875);
							BgL_auxz00_8022 = BGL_OBJECT_WIDENING(BgL_tmpz00_8023);
						}
						BgL_auxz00_8021 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8022);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8021))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1341z00_478), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8028;

					{
						obj_t BgL_auxz00_8029;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_objectz00_bglt BgL_tmpz00_8030;

							BgL_tmpz00_8030 = ((BgL_objectz00_bglt) BgL_new1380z00_5875);
							BgL_auxz00_8029 = BGL_OBJECT_WIDENING(BgL_tmpz00_8030);
						}
						BgL_auxz00_8028 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8029);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8028))->
							BgL_stackablezf3zf3) =
						((bool_t) BgL_stackablezf31342zf3_479), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8035;

					{
						obj_t BgL_auxz00_8036;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_objectz00_bglt BgL_tmpz00_8037;

							BgL_tmpz00_8037 = ((BgL_objectz00_bglt) BgL_new1380z00_5875);
							BgL_auxz00_8036 = BGL_OBJECT_WIDENING(BgL_tmpz00_8037);
						}
						BgL_auxz00_8035 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8036);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8035))->
							BgL_stackzd2stampzd2) =
						((obj_t) BgL_stackzd2stamp1343zd2_480), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8042;

					{
						obj_t BgL_auxz00_8043;

						{	/* Cfa/cinfo3.sch 595 */
							BgL_objectz00_bglt BgL_tmpz00_8044;

							BgL_tmpz00_8044 = ((BgL_objectz00_bglt) BgL_new1380z00_5875);
							BgL_auxz00_8043 = BGL_OBJECT_WIDENING(BgL_tmpz00_8044);
						}
						BgL_auxz00_8042 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8043);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8042))->
							BgL_seenzf3zf3) = ((bool_t) BgL_seenzf31344zf3_481), BUNSPEC);
				}
				return BgL_new1380z00_5875;
			}
		}

	}



/* &make-valloc/Cinfo+optim */
	BgL_vallocz00_bglt BGl_z62makezd2valloczf2Cinfozb2optimzf0zzcfa_info3z00(obj_t
		BgL_envz00_5264, obj_t BgL_loc1329z00_5265, obj_t BgL_type1330z00_5266,
		obj_t BgL_sidezd2effect1331zd2_5267, obj_t BgL_key1332z00_5268,
		obj_t BgL_exprza21333za2_5269, obj_t BgL_effect1334z00_5270,
		obj_t BgL_czd2format1335zd2_5271, obj_t BgL_ftype1336z00_5272,
		obj_t BgL_otype1337z00_5273, obj_t BgL_approx1338z00_5274,
		obj_t BgL_valuezd2approx1339zd2_5275, obj_t BgL_lostzd2stamp1340zd2_5276,
		obj_t BgL_owner1341z00_5277, obj_t BgL_stackablezf31342zf3_5278,
		obj_t BgL_stackzd2stamp1343zd2_5279, obj_t BgL_seenzf31344zf3_5280)
	{
		{	/* Cfa/cinfo3.sch 595 */
			return
				BGl_makezd2valloczf2Cinfozb2optimz92zzcfa_info3z00(BgL_loc1329z00_5265,
				((BgL_typez00_bglt) BgL_type1330z00_5266),
				BgL_sidezd2effect1331zd2_5267, BgL_key1332z00_5268,
				BgL_exprza21333za2_5269, BgL_effect1334z00_5270,
				BgL_czd2format1335zd2_5271, ((BgL_typez00_bglt) BgL_ftype1336z00_5272),
				((BgL_typez00_bglt) BgL_otype1337z00_5273),
				((BgL_approxz00_bglt) BgL_approx1338z00_5274),
				((BgL_approxz00_bglt) BgL_valuezd2approx1339zd2_5275),
				(long) CINT(BgL_lostzd2stamp1340zd2_5276),
				((BgL_variablez00_bglt) BgL_owner1341z00_5277),
				CBOOL(BgL_stackablezf31342zf3_5278), BgL_stackzd2stamp1343zd2_5279,
				CBOOL(BgL_seenzf31344zf3_5280));
		}

	}



/* valloc/Cinfo+optim? */
	BGL_EXPORTED_DEF bool_t BGl_valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00(obj_t
		BgL_objz00_482)
	{
		{	/* Cfa/cinfo3.sch 596 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_482,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
		}

	}



/* &valloc/Cinfo+optim? */
	obj_t BGl_z62valloczf2Cinfozb2optimzf3zd1zzcfa_info3z00(obj_t BgL_envz00_5281,
		obj_t BgL_objz00_5282)
	{
		{	/* Cfa/cinfo3.sch 596 */
			return
				BBOOL(BGl_valloczf2Cinfozb2optimzf3zb3zzcfa_info3z00(BgL_objz00_5282));
		}

	}



/* valloc/Cinfo+optim-nil */
	BGL_EXPORTED_DEF BgL_vallocz00_bglt
		BGl_valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.sch 597 */
			{	/* Cfa/cinfo3.sch 597 */
				obj_t BgL_classz00_4089;

				BgL_classz00_4089 = BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
				{	/* Cfa/cinfo3.sch 597 */
					obj_t BgL__ortest_1106z00_4090;

					BgL__ortest_1106z00_4090 = BGL_CLASS_NIL(BgL_classz00_4089);
					if (CBOOL(BgL__ortest_1106z00_4090))
						{	/* Cfa/cinfo3.sch 597 */
							return ((BgL_vallocz00_bglt) BgL__ortest_1106z00_4090);
						}
					else
						{	/* Cfa/cinfo3.sch 597 */
							return
								((BgL_vallocz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4089));
						}
				}
			}
		}

	}



/* &valloc/Cinfo+optim-nil */
	BgL_vallocz00_bglt BGl_z62valloczf2Cinfozb2optimzd2nilzf0zzcfa_info3z00(obj_t
		BgL_envz00_5283)
	{
		{	/* Cfa/cinfo3.sch 597 */
			return BGl_valloczf2Cinfozb2optimzd2nilz92zzcfa_info3z00();
		}

	}



/* valloc/Cinfo+optim-seen? */
	BGL_EXPORTED_DEF bool_t
		BGl_valloczf2Cinfozb2optimzd2seenzf3z61zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_483)
	{
		{	/* Cfa/cinfo3.sch 598 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8069;

				{
					obj_t BgL_auxz00_8070;

					{	/* Cfa/cinfo3.sch 598 */
						BgL_objectz00_bglt BgL_tmpz00_8071;

						BgL_tmpz00_8071 = ((BgL_objectz00_bglt) BgL_oz00_483);
						BgL_auxz00_8070 = BGL_OBJECT_WIDENING(BgL_tmpz00_8071);
					}
					BgL_auxz00_8069 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8070);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8069))->
					BgL_seenzf3zf3);
			}
		}

	}



/* &valloc/Cinfo+optim-seen? */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2seenzf3z03zzcfa_info3z00(obj_t
		BgL_envz00_5284, obj_t BgL_oz00_5285)
	{
		{	/* Cfa/cinfo3.sch 598 */
			return
				BBOOL(BGl_valloczf2Cinfozb2optimzd2seenzf3z61zzcfa_info3z00(
					((BgL_vallocz00_bglt) BgL_oz00_5285)));
		}

	}



/* valloc/Cinfo+optim-seen?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2seenzf3zd2setz12za1zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_484, bool_t BgL_vz00_485)
	{
		{	/* Cfa/cinfo3.sch 599 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8079;

				{
					obj_t BgL_auxz00_8080;

					{	/* Cfa/cinfo3.sch 599 */
						BgL_objectz00_bglt BgL_tmpz00_8081;

						BgL_tmpz00_8081 = ((BgL_objectz00_bglt) BgL_oz00_484);
						BgL_auxz00_8080 = BGL_OBJECT_WIDENING(BgL_tmpz00_8081);
					}
					BgL_auxz00_8079 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8080);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8079))->
						BgL_seenzf3zf3) = ((bool_t) BgL_vz00_485), BUNSPEC);
			}
		}

	}



/* &valloc/Cinfo+optim-seen?-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2seenzf3zd2setz12zc3zzcfa_info3z00(obj_t
		BgL_envz00_5286, obj_t BgL_oz00_5287, obj_t BgL_vz00_5288)
	{
		{	/* Cfa/cinfo3.sch 599 */
			return
				BGl_valloczf2Cinfozb2optimzd2seenzf3zd2setz12za1zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5287), CBOOL(BgL_vz00_5288));
		}

	}



/* valloc/Cinfo+optim-stack-stamp */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2stackzd2stampz40zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_486)
	{
		{	/* Cfa/cinfo3.sch 600 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8089;

				{
					obj_t BgL_auxz00_8090;

					{	/* Cfa/cinfo3.sch 600 */
						BgL_objectz00_bglt BgL_tmpz00_8091;

						BgL_tmpz00_8091 = ((BgL_objectz00_bglt) BgL_oz00_486);
						BgL_auxz00_8090 = BGL_OBJECT_WIDENING(BgL_tmpz00_8091);
					}
					BgL_auxz00_8089 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8090);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8089))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &valloc/Cinfo+optim-stack-stamp */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2stackzd2stampz22zzcfa_info3z00(obj_t
		BgL_envz00_5289, obj_t BgL_oz00_5290)
	{
		{	/* Cfa/cinfo3.sch 600 */
			return
				BGl_valloczf2Cinfozb2optimzd2stackzd2stampz40zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5290));
		}

	}



/* valloc/Cinfo+optim-stack-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2stackzd2stampzd2setz12z80zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_487, obj_t BgL_vz00_488)
	{
		{	/* Cfa/cinfo3.sch 601 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8098;

				{
					obj_t BgL_auxz00_8099;

					{	/* Cfa/cinfo3.sch 601 */
						BgL_objectz00_bglt BgL_tmpz00_8100;

						BgL_tmpz00_8100 = ((BgL_objectz00_bglt) BgL_oz00_487);
						BgL_auxz00_8099 = BGL_OBJECT_WIDENING(BgL_tmpz00_8100);
					}
					BgL_auxz00_8098 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8099);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8098))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_488), BUNSPEC);
			}
		}

	}



/* &valloc/Cinfo+optim-stack-stamp-set! */
	obj_t
		BGl_z62valloczf2Cinfozb2optimzd2stackzd2stampzd2setz12ze2zzcfa_info3z00
		(obj_t BgL_envz00_5291, obj_t BgL_oz00_5292, obj_t BgL_vz00_5293)
	{
		{	/* Cfa/cinfo3.sch 601 */
			return
				BGl_valloczf2Cinfozb2optimzd2stackzd2stampzd2setz12z80zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5292), BgL_vz00_5293);
		}

	}



/* valloc/Cinfo+optim-stackable? */
	BGL_EXPORTED_DEF bool_t
		BGl_valloczf2Cinfozb2optimzd2stackablezf3z61zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_489)
	{
		{	/* Cfa/cinfo3.sch 602 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8107;

				{
					obj_t BgL_auxz00_8108;

					{	/* Cfa/cinfo3.sch 602 */
						BgL_objectz00_bglt BgL_tmpz00_8109;

						BgL_tmpz00_8109 = ((BgL_objectz00_bglt) BgL_oz00_489);
						BgL_auxz00_8108 = BGL_OBJECT_WIDENING(BgL_tmpz00_8109);
					}
					BgL_auxz00_8107 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8108);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8107))->
					BgL_stackablezf3zf3);
			}
		}

	}



/* &valloc/Cinfo+optim-stackable? */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2stackablezf3z03zzcfa_info3z00(obj_t
		BgL_envz00_5294, obj_t BgL_oz00_5295)
	{
		{	/* Cfa/cinfo3.sch 602 */
			return
				BBOOL(BGl_valloczf2Cinfozb2optimzd2stackablezf3z61zzcfa_info3z00(
					((BgL_vallocz00_bglt) BgL_oz00_5295)));
		}

	}



/* valloc/Cinfo+optim-stackable?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2stackablezf3zd2setz12za1zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_490, bool_t BgL_vz00_491)
	{
		{	/* Cfa/cinfo3.sch 603 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8117;

				{
					obj_t BgL_auxz00_8118;

					{	/* Cfa/cinfo3.sch 603 */
						BgL_objectz00_bglt BgL_tmpz00_8119;

						BgL_tmpz00_8119 = ((BgL_objectz00_bglt) BgL_oz00_490);
						BgL_auxz00_8118 = BGL_OBJECT_WIDENING(BgL_tmpz00_8119);
					}
					BgL_auxz00_8117 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8118);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8117))->
						BgL_stackablezf3zf3) = ((bool_t) BgL_vz00_491), BUNSPEC);
			}
		}

	}



/* &valloc/Cinfo+optim-stackable?-set! */
	obj_t
		BGl_z62valloczf2Cinfozb2optimzd2stackablezf3zd2setz12zc3zzcfa_info3z00(obj_t
		BgL_envz00_5296, obj_t BgL_oz00_5297, obj_t BgL_vz00_5298)
	{
		{	/* Cfa/cinfo3.sch 603 */
			return
				BGl_valloczf2Cinfozb2optimzd2stackablezf3zd2setz12za1zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5297), CBOOL(BgL_vz00_5298));
		}

	}



/* valloc/Cinfo+optim-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_valloczf2Cinfozb2optimzd2ownerz92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_492)
	{
		{	/* Cfa/cinfo3.sch 604 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8127;

				{
					obj_t BgL_auxz00_8128;

					{	/* Cfa/cinfo3.sch 604 */
						BgL_objectz00_bglt BgL_tmpz00_8129;

						BgL_tmpz00_8129 = ((BgL_objectz00_bglt) BgL_oz00_492);
						BgL_auxz00_8128 = BGL_OBJECT_WIDENING(BgL_tmpz00_8129);
					}
					BgL_auxz00_8127 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8128);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8127))->
					BgL_ownerz00);
			}
		}

	}



/* &valloc/Cinfo+optim-owner */
	BgL_variablez00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2ownerzf0zzcfa_info3z00(obj_t
		BgL_envz00_5299, obj_t BgL_oz00_5300)
	{
		{	/* Cfa/cinfo3.sch 604 */
			return
				BGl_valloczf2Cinfozb2optimzd2ownerz92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5300));
		}

	}



/* valloc/Cinfo+optim-lost-stamp */
	BGL_EXPORTED_DEF long
		BGl_valloczf2Cinfozb2optimzd2lostzd2stampz40zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_495)
	{
		{	/* Cfa/cinfo3.sch 606 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8136;

				{
					obj_t BgL_auxz00_8137;

					{	/* Cfa/cinfo3.sch 606 */
						BgL_objectz00_bglt BgL_tmpz00_8138;

						BgL_tmpz00_8138 = ((BgL_objectz00_bglt) BgL_oz00_495);
						BgL_auxz00_8137 = BGL_OBJECT_WIDENING(BgL_tmpz00_8138);
					}
					BgL_auxz00_8136 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8137);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8136))->
					BgL_lostzd2stampzd2);
			}
		}

	}



/* &valloc/Cinfo+optim-lost-stamp */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2lostzd2stampz22zzcfa_info3z00(obj_t
		BgL_envz00_5301, obj_t BgL_oz00_5302)
	{
		{	/* Cfa/cinfo3.sch 606 */
			return
				BINT(BGl_valloczf2Cinfozb2optimzd2lostzd2stampz40zzcfa_info3z00(
					((BgL_vallocz00_bglt) BgL_oz00_5302)));
		}

	}



/* valloc/Cinfo+optim-lost-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2lostzd2stampzd2setz12z80zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_496, long BgL_vz00_497)
	{
		{	/* Cfa/cinfo3.sch 607 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8146;

				{
					obj_t BgL_auxz00_8147;

					{	/* Cfa/cinfo3.sch 607 */
						BgL_objectz00_bglt BgL_tmpz00_8148;

						BgL_tmpz00_8148 = ((BgL_objectz00_bglt) BgL_oz00_496);
						BgL_auxz00_8147 = BGL_OBJECT_WIDENING(BgL_tmpz00_8148);
					}
					BgL_auxz00_8146 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8147);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8146))->
						BgL_lostzd2stampzd2) = ((long) BgL_vz00_497), BUNSPEC);
		}}

	}



/* &valloc/Cinfo+optim-lost-stamp-set! */
	obj_t
		BGl_z62valloczf2Cinfozb2optimzd2lostzd2stampzd2setz12ze2zzcfa_info3z00(obj_t
		BgL_envz00_5303, obj_t BgL_oz00_5304, obj_t BgL_vz00_5305)
	{
		{	/* Cfa/cinfo3.sch 607 */
			return
				BGl_valloczf2Cinfozb2optimzd2lostzd2stampzd2setz12z80zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5304), (long) CINT(BgL_vz00_5305));
		}

	}



/* valloc/Cinfo+optim-value-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_valloczf2Cinfozb2optimzd2valuezd2approxz40zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_498)
	{
		{	/* Cfa/cinfo3.sch 608 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8156;

				{
					obj_t BgL_auxz00_8157;

					{	/* Cfa/cinfo3.sch 608 */
						BgL_objectz00_bglt BgL_tmpz00_8158;

						BgL_tmpz00_8158 = ((BgL_objectz00_bglt) BgL_oz00_498);
						BgL_auxz00_8157 = BGL_OBJECT_WIDENING(BgL_tmpz00_8158);
					}
					BgL_auxz00_8156 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8157);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8156))->
					BgL_valuezd2approxzd2);
			}
		}

	}



/* &valloc/Cinfo+optim-value-approx */
	BgL_approxz00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2valuezd2approxz22zzcfa_info3z00(obj_t
		BgL_envz00_5306, obj_t BgL_oz00_5307)
	{
		{	/* Cfa/cinfo3.sch 608 */
			return
				BGl_valloczf2Cinfozb2optimzd2valuezd2approxz40zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5307));
		}

	}



/* valloc/Cinfo+optim-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_valloczf2Cinfozb2optimzd2approxz92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_501)
	{
		{	/* Cfa/cinfo3.sch 610 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8165;

				{
					obj_t BgL_auxz00_8166;

					{	/* Cfa/cinfo3.sch 610 */
						BgL_objectz00_bglt BgL_tmpz00_8167;

						BgL_tmpz00_8167 = ((BgL_objectz00_bglt) BgL_oz00_501);
						BgL_auxz00_8166 = BGL_OBJECT_WIDENING(BgL_tmpz00_8167);
					}
					BgL_auxz00_8165 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8166);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8165))->
					BgL_approxz00);
			}
		}

	}



/* &valloc/Cinfo+optim-approx */
	BgL_approxz00_bglt
		BGl_z62valloczf2Cinfozb2optimzd2approxzf0zzcfa_info3z00(obj_t
		BgL_envz00_5308, obj_t BgL_oz00_5309)
	{
		{	/* Cfa/cinfo3.sch 610 */
			return
				BGl_valloczf2Cinfozb2optimzd2approxz92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5309));
		}

	}



/* valloc/Cinfo+optim-approx-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2approxzd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_502, BgL_approxz00_bglt BgL_vz00_503)
	{
		{	/* Cfa/cinfo3.sch 611 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8174;

				{
					obj_t BgL_auxz00_8175;

					{	/* Cfa/cinfo3.sch 611 */
						BgL_objectz00_bglt BgL_tmpz00_8176;

						BgL_tmpz00_8176 = ((BgL_objectz00_bglt) BgL_oz00_502);
						BgL_auxz00_8175 = BGL_OBJECT_WIDENING(BgL_tmpz00_8176);
					}
					BgL_auxz00_8174 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8175);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8174))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_vz00_503), BUNSPEC);
			}
		}

	}



/* &valloc/Cinfo+optim-approx-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2approxzd2setz12z30zzcfa_info3z00(obj_t
		BgL_envz00_5310, obj_t BgL_oz00_5311, obj_t BgL_vz00_5312)
	{
		{	/* Cfa/cinfo3.sch 611 */
			return
				BGl_valloczf2Cinfozb2optimzd2approxzd2setz12z52zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5311),
				((BgL_approxz00_bglt) BgL_vz00_5312));
		}

	}



/* valloc/Cinfo+optim-otype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_valloczf2Cinfozb2optimzd2otypez92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_504)
	{
		{	/* Cfa/cinfo3.sch 612 */
			return
				(((BgL_vallocz00_bglt) COBJECT(
						((BgL_vallocz00_bglt) BgL_oz00_504)))->BgL_otypez00);
		}

	}



/* &valloc/Cinfo+optim-otype */
	BgL_typez00_bglt BGl_z62valloczf2Cinfozb2optimzd2otypezf0zzcfa_info3z00(obj_t
		BgL_envz00_5313, obj_t BgL_oz00_5314)
	{
		{	/* Cfa/cinfo3.sch 612 */
			return
				BGl_valloczf2Cinfozb2optimzd2otypez92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5314));
		}

	}



/* valloc/Cinfo+optim-otype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2otypezd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_505, BgL_typez00_bglt BgL_vz00_506)
	{
		{	/* Cfa/cinfo3.sch 613 */
			return
				((((BgL_vallocz00_bglt) COBJECT(
							((BgL_vallocz00_bglt) BgL_oz00_505)))->BgL_otypez00) =
				((BgL_typez00_bglt) BgL_vz00_506), BUNSPEC);
		}

	}



/* &valloc/Cinfo+optim-otype-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2otypezd2setz12z30zzcfa_info3z00(obj_t
		BgL_envz00_5315, obj_t BgL_oz00_5316, obj_t BgL_vz00_5317)
	{
		{	/* Cfa/cinfo3.sch 613 */
			return
				BGl_valloczf2Cinfozb2optimzd2otypezd2setz12z52zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5316),
				((BgL_typez00_bglt) BgL_vz00_5317));
		}

	}



/* valloc/Cinfo+optim-ftype */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_valloczf2Cinfozb2optimzd2ftypez92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_507)
	{
		{	/* Cfa/cinfo3.sch 614 */
			return
				(((BgL_vallocz00_bglt) COBJECT(
						((BgL_vallocz00_bglt) BgL_oz00_507)))->BgL_ftypez00);
		}

	}



/* &valloc/Cinfo+optim-ftype */
	BgL_typez00_bglt BGl_z62valloczf2Cinfozb2optimzd2ftypezf0zzcfa_info3z00(obj_t
		BgL_envz00_5318, obj_t BgL_oz00_5319)
	{
		{	/* Cfa/cinfo3.sch 614 */
			return
				BGl_valloczf2Cinfozb2optimzd2ftypez92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5319));
		}

	}



/* valloc/Cinfo+optim-ftype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2ftypezd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_508, BgL_typez00_bglt BgL_vz00_509)
	{
		{	/* Cfa/cinfo3.sch 615 */
			return
				((((BgL_vallocz00_bglt) COBJECT(
							((BgL_vallocz00_bglt) BgL_oz00_508)))->BgL_ftypez00) =
				((BgL_typez00_bglt) BgL_vz00_509), BUNSPEC);
		}

	}



/* &valloc/Cinfo+optim-ftype-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2ftypezd2setz12z30zzcfa_info3z00(obj_t
		BgL_envz00_5320, obj_t BgL_oz00_5321, obj_t BgL_vz00_5322)
	{
		{	/* Cfa/cinfo3.sch 615 */
			return
				BGl_valloczf2Cinfozb2optimzd2ftypezd2setz12z52zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5321),
				((BgL_typez00_bglt) BgL_vz00_5322));
		}

	}



/* valloc/Cinfo+optim-c-format */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2czd2formatz40zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_510)
	{
		{	/* Cfa/cinfo3.sch 616 */
			return
				(((BgL_privatez00_bglt) COBJECT(
						((BgL_privatez00_bglt) BgL_oz00_510)))->BgL_czd2formatzd2);
		}

	}



/* &valloc/Cinfo+optim-c-format */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2czd2formatz22zzcfa_info3z00(obj_t
		BgL_envz00_5323, obj_t BgL_oz00_5324)
	{
		{	/* Cfa/cinfo3.sch 616 */
			return
				BGl_valloczf2Cinfozb2optimzd2czd2formatz40zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5324));
		}

	}



/* valloc/Cinfo+optim-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2effectz92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_513)
	{
		{	/* Cfa/cinfo3.sch 618 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_513)))->BgL_effectz00);
		}

	}



/* &valloc/Cinfo+optim-effect */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2effectzf0zzcfa_info3z00(obj_t
		BgL_envz00_5325, obj_t BgL_oz00_5326)
	{
		{	/* Cfa/cinfo3.sch 618 */
			return
				BGl_valloczf2Cinfozb2optimzd2effectz92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5326));
		}

	}



/* valloc/Cinfo+optim-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2effectzd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_514, obj_t BgL_vz00_515)
	{
		{	/* Cfa/cinfo3.sch 619 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_514)))->BgL_effectz00) =
				((obj_t) BgL_vz00_515), BUNSPEC);
		}

	}



/* &valloc/Cinfo+optim-effect-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2effectzd2setz12z30zzcfa_info3z00(obj_t
		BgL_envz00_5327, obj_t BgL_oz00_5328, obj_t BgL_vz00_5329)
	{
		{	/* Cfa/cinfo3.sch 619 */
			return
				BGl_valloczf2Cinfozb2optimzd2effectzd2setz12z52zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5328), BgL_vz00_5329);
		}

	}



/* valloc/Cinfo+optim-expr* */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2exprza2z30zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_516)
	{
		{	/* Cfa/cinfo3.sch 620 */
			return
				(((BgL_externz00_bglt) COBJECT(
						((BgL_externz00_bglt) BgL_oz00_516)))->BgL_exprza2za2);
		}

	}



/* &valloc/Cinfo+optim-expr* */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2exprza2z52zzcfa_info3z00(obj_t
		BgL_envz00_5330, obj_t BgL_oz00_5331)
	{
		{	/* Cfa/cinfo3.sch 620 */
			return
				BGl_valloczf2Cinfozb2optimzd2exprza2z30zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5331));
		}

	}



/* valloc/Cinfo+optim-expr*-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2exprza2zd2setz12zf0zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_517, obj_t BgL_vz00_518)
	{
		{	/* Cfa/cinfo3.sch 621 */
			return
				((((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_oz00_517)))->BgL_exprza2za2) =
				((obj_t) BgL_vz00_518), BUNSPEC);
		}

	}



/* &valloc/Cinfo+optim-expr*-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2exprza2zd2setz12z92zzcfa_info3z00(obj_t
		BgL_envz00_5332, obj_t BgL_oz00_5333, obj_t BgL_vz00_5334)
	{
		{	/* Cfa/cinfo3.sch 621 */
			return
				BGl_valloczf2Cinfozb2optimzd2exprza2zd2setz12zf0zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5333), BgL_vz00_5334);
		}

	}



/* valloc/Cinfo+optim-key */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2keyz92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_519)
	{
		{	/* Cfa/cinfo3.sch 622 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_519)))->BgL_keyz00);
		}

	}



/* &valloc/Cinfo+optim-key */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2keyzf0zzcfa_info3z00(obj_t
		BgL_envz00_5335, obj_t BgL_oz00_5336)
	{
		{	/* Cfa/cinfo3.sch 622 */
			return
				BGl_valloczf2Cinfozb2optimzd2keyz92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5336));
		}

	}



/* valloc/Cinfo+optim-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2keyzd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_520, obj_t BgL_vz00_521)
	{
		{	/* Cfa/cinfo3.sch 623 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_520)))->BgL_keyz00) =
				((obj_t) BgL_vz00_521), BUNSPEC);
		}

	}



/* &valloc/Cinfo+optim-key-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2keyzd2setz12z30zzcfa_info3z00(obj_t
		BgL_envz00_5337, obj_t BgL_oz00_5338, obj_t BgL_vz00_5339)
	{
		{	/* Cfa/cinfo3.sch 623 */
			return
				BGl_valloczf2Cinfozb2optimzd2keyzd2setz12z52zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5338), BgL_vz00_5339);
		}

	}



/* valloc/Cinfo+optim-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2sidezd2effectz40zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_522)
	{
		{	/* Cfa/cinfo3.sch 624 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_522)))->BgL_sidezd2effectzd2);
		}

	}



/* &valloc/Cinfo+optim-side-effect */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2sidezd2effectz22zzcfa_info3z00(obj_t
		BgL_envz00_5340, obj_t BgL_oz00_5341)
	{
		{	/* Cfa/cinfo3.sch 624 */
			return
				BGl_valloczf2Cinfozb2optimzd2sidezd2effectz40zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5341));
		}

	}



/* valloc/Cinfo+optim-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2sidezd2effectzd2setz12z80zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_523, obj_t BgL_vz00_524)
	{
		{	/* Cfa/cinfo3.sch 625 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_523)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_524), BUNSPEC);
		}

	}



/* &valloc/Cinfo+optim-side-effect-set! */
	obj_t
		BGl_z62valloczf2Cinfozb2optimzd2sidezd2effectzd2setz12ze2zzcfa_info3z00
		(obj_t BgL_envz00_5342, obj_t BgL_oz00_5343, obj_t BgL_vz00_5344)
	{
		{	/* Cfa/cinfo3.sch 625 */
			return
				BGl_valloczf2Cinfozb2optimzd2sidezd2effectzd2setz12z80zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5343), BgL_vz00_5344);
		}

	}



/* valloc/Cinfo+optim-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_valloczf2Cinfozb2optimzd2typez92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_525)
	{
		{	/* Cfa/cinfo3.sch 626 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_525)))->BgL_typez00);
		}

	}



/* &valloc/Cinfo+optim-type */
	BgL_typez00_bglt BGl_z62valloczf2Cinfozb2optimzd2typezf0zzcfa_info3z00(obj_t
		BgL_envz00_5345, obj_t BgL_oz00_5346)
	{
		{	/* Cfa/cinfo3.sch 626 */
			return
				BGl_valloczf2Cinfozb2optimzd2typez92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5346));
		}

	}



/* valloc/Cinfo+optim-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2typezd2setz12z52zzcfa_info3z00
		(BgL_vallocz00_bglt BgL_oz00_526, BgL_typez00_bglt BgL_vz00_527)
	{
		{	/* Cfa/cinfo3.sch 627 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_526)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_527), BUNSPEC);
		}

	}



/* &valloc/Cinfo+optim-type-set! */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2typezd2setz12z30zzcfa_info3z00(obj_t
		BgL_envz00_5347, obj_t BgL_oz00_5348, obj_t BgL_vz00_5349)
	{
		{	/* Cfa/cinfo3.sch 627 */
			return
				BGl_valloczf2Cinfozb2optimzd2typezd2setz12z52zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5348),
				((BgL_typez00_bglt) BgL_vz00_5349));
		}

	}



/* valloc/Cinfo+optim-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_valloczf2Cinfozb2optimzd2locz92zzcfa_info3z00(BgL_vallocz00_bglt
		BgL_oz00_528)
	{
		{	/* Cfa/cinfo3.sch 628 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_528)))->BgL_locz00);
		}

	}



/* &valloc/Cinfo+optim-loc */
	obj_t BGl_z62valloczf2Cinfozb2optimzd2loczf0zzcfa_info3z00(obj_t
		BgL_envz00_5350, obj_t BgL_oz00_5351)
	{
		{	/* Cfa/cinfo3.sch 628 */
			return
				BGl_valloczf2Cinfozb2optimzd2locz92zzcfa_info3z00(
				((BgL_vallocz00_bglt) BgL_oz00_5351));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			{	/* Cfa/cinfo3.scm 27 */
				obj_t BgL_arg1757z00_2755;
				obj_t BgL_arg1759z00_2756;

				{	/* Cfa/cinfo3.scm 27 */
					obj_t BgL_v1669z00_2785;

					BgL_v1669z00_2785 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 27 */
						obj_t BgL_arg1782z00_2786;

						BgL_arg1782z00_2786 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2343z00zzcfa_info3z00,
							BGl_proc2342z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1669z00_2785, ((long) 0), BgL_arg1782z00_2786);
					}
					BgL_arg1757z00_2755 = BgL_v1669z00_2785;
				}
				{	/* Cfa/cinfo3.scm 27 */
					obj_t BgL_v1670z00_2796;

					BgL_v1670z00_2796 = create_vector(((long) 0));
					BgL_arg1759z00_2756 = BgL_v1670z00_2796;
				}
				BGl_pragmazf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 1)),
					CNST_TABLE_REF(((long) 2)), BGl_pragmaz00zzast_nodez00,
					((long) 57601), BGl_proc2347z00zzcfa_info3z00,
					BGl_proc2346z00zzcfa_info3z00, BFALSE, BGl_proc2345z00zzcfa_info3z00,
					BGl_proc2344z00zzcfa_info3z00, BgL_arg1757z00_2755,
					BgL_arg1759z00_2756);
			}
			{	/* Cfa/cinfo3.scm 28 */
				obj_t BgL_arg1809z00_2805;
				obj_t BgL_arg1811z00_2806;

				{	/* Cfa/cinfo3.scm 28 */
					obj_t BgL_v1671z00_2838;

					BgL_v1671z00_2838 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_arg1829z00_2839;

						BgL_arg1829z00_2839 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2349z00zzcfa_info3z00,
							BGl_proc2348z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1671z00_2838, ((long) 0), BgL_arg1829z00_2839);
					}
					BgL_arg1809z00_2805 = BgL_v1671z00_2838;
				}
				{	/* Cfa/cinfo3.scm 28 */
					obj_t BgL_v1672z00_2849;

					BgL_v1672z00_2849 = create_vector(((long) 0));
					BgL_arg1811z00_2806 = BgL_v1672z00_2849;
				}
				BGl_getfieldzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 3)),
					CNST_TABLE_REF(((long) 2)), BGl_getfieldz00zzast_nodez00,
					((long) 59685), BGl_proc2353z00zzcfa_info3z00,
					BGl_proc2352z00zzcfa_info3z00, BFALSE, BGl_proc2351z00zzcfa_info3z00,
					BGl_proc2350z00zzcfa_info3z00, BgL_arg1809z00_2805,
					BgL_arg1811z00_2806);
			}
			{	/* Cfa/cinfo3.scm 29 */
				obj_t BgL_arg1841z00_2858;
				obj_t BgL_arg1842z00_2859;

				{	/* Cfa/cinfo3.scm 29 */
					obj_t BgL_v1673z00_2891;

					BgL_v1673z00_2891 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_arg1855z00_2892;

						BgL_arg1855z00_2892 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2355z00zzcfa_info3z00,
							BGl_proc2354z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1673z00_2891, ((long) 0), BgL_arg1855z00_2892);
					}
					BgL_arg1841z00_2858 = BgL_v1673z00_2891;
				}
				{	/* Cfa/cinfo3.scm 29 */
					obj_t BgL_v1674z00_2902;

					BgL_v1674z00_2902 = create_vector(((long) 0));
					BgL_arg1842z00_2859 = BgL_v1674z00_2902;
				}
				BGl_setfieldzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 4)),
					CNST_TABLE_REF(((long) 2)), BGl_setfieldz00zzast_nodez00,
					((long) 23245), BGl_proc2359z00zzcfa_info3z00,
					BGl_proc2358z00zzcfa_info3z00, BFALSE, BGl_proc2357z00zzcfa_info3z00,
					BGl_proc2356z00zzcfa_info3z00, BgL_arg1841z00_2858,
					BgL_arg1842z00_2859);
			}
			{	/* Cfa/cinfo3.scm 30 */
				obj_t BgL_arg1866z00_2911;
				obj_t BgL_arg1868z00_2912;

				{	/* Cfa/cinfo3.scm 30 */
					obj_t BgL_v1675z00_2942;

					BgL_v1675z00_2942 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 30 */
						obj_t BgL_arg1879z00_2943;

						BgL_arg1879z00_2943 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2361z00zzcfa_info3z00,
							BGl_proc2360z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1675z00_2942, ((long) 0), BgL_arg1879z00_2943);
					}
					BgL_arg1866z00_2911 = BgL_v1675z00_2942;
				}
				{	/* Cfa/cinfo3.scm 30 */
					obj_t BgL_v1676z00_2953;

					BgL_v1676z00_2953 = create_vector(((long) 0));
					BgL_arg1868z00_2912 = BgL_v1676z00_2953;
				}
				BGl_newzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 5)),
					CNST_TABLE_REF(((long) 2)), BGl_newz00zzast_nodez00, ((long) 32423),
					BGl_proc2365z00zzcfa_info3z00, BGl_proc2364z00zzcfa_info3z00, BFALSE,
					BGl_proc2363z00zzcfa_info3z00, BGl_proc2362z00zzcfa_info3z00,
					BgL_arg1866z00_2911, BgL_arg1868z00_2912);
			}
			{	/* Cfa/cinfo3.scm 31 */
				obj_t BgL_arg1889z00_2962;
				obj_t BgL_arg1891z00_2963;

				{	/* Cfa/cinfo3.scm 31 */
					obj_t BgL_v1677z00_2993;

					BgL_v1677z00_2993 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 31 */
						obj_t BgL_arg1904z00_2994;

						BgL_arg1904z00_2994 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2367z00zzcfa_info3z00,
							BGl_proc2366z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1677z00_2993, ((long) 0), BgL_arg1904z00_2994);
					}
					BgL_arg1889z00_2962 = BgL_v1677z00_2993;
				}
				{	/* Cfa/cinfo3.scm 31 */
					obj_t BgL_v1678z00_3004;

					BgL_v1678z00_3004 = create_vector(((long) 0));
					BgL_arg1891z00_2963 = BgL_v1678z00_3004;
				}
				BGl_instanceofzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 6)),
					CNST_TABLE_REF(((long) 2)), BGl_instanceofz00zzast_nodez00,
					((long) 4437), BGl_proc2371z00zzcfa_info3z00,
					BGl_proc2370z00zzcfa_info3z00, BFALSE, BGl_proc2369z00zzcfa_info3z00,
					BGl_proc2368z00zzcfa_info3z00, BgL_arg1889z00_2962,
					BgL_arg1891z00_2963);
			}
			{	/* Cfa/cinfo3.scm 32 */
				obj_t BgL_arg1913z00_3013;
				obj_t BgL_arg1914z00_3014;

				{	/* Cfa/cinfo3.scm 32 */
					obj_t BgL_v1679z00_3043;

					BgL_v1679z00_3043 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 32 */
						obj_t BgL_arg1926z00_3044;

						BgL_arg1926z00_3044 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2373z00zzcfa_info3z00,
							BGl_proc2372z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1679z00_3043, ((long) 0), BgL_arg1926z00_3044);
					}
					BgL_arg1913z00_3013 = BgL_v1679z00_3043;
				}
				{	/* Cfa/cinfo3.scm 32 */
					obj_t BgL_v1680z00_3054;

					BgL_v1680z00_3054 = create_vector(((long) 0));
					BgL_arg1914z00_3014 = BgL_v1680z00_3054;
				}
				BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
					CNST_TABLE_REF(((long) 2)), BGl_castzd2nullzd2zzast_nodez00,
					((long) 6501), BGl_proc2377z00zzcfa_info3z00,
					BGl_proc2376z00zzcfa_info3z00, BFALSE, BGl_proc2375z00zzcfa_info3z00,
					BGl_proc2374z00zzcfa_info3z00, BgL_arg1913z00_3013,
					BgL_arg1914z00_3014);
			}
			{	/* Cfa/cinfo3.scm 35 */
				obj_t BgL_arg1935z00_3063;
				obj_t BgL_arg1936z00_3064;

				{	/* Cfa/cinfo3.scm 35 */
					obj_t BgL_v1681z00_3098;

					BgL_v1681z00_3098 = create_vector(((long) 2));
					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_arg1947z00_3099;

						BgL_arg1947z00_3099 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2379z00zzcfa_info3z00,
							BGl_proc2378z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1681z00_3098, ((long) 0), BgL_arg1947z00_3099);
					}
					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_arg1952z00_3109;

						BgL_arg1952z00_3109 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2382z00zzcfa_info3z00,
							BGl_proc2381z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2380z00zzcfa_info3z00, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1681z00_3098, ((long) 1), BgL_arg1952z00_3109);
					}
					BgL_arg1935z00_3063 = BgL_v1681z00_3098;
				}
				{	/* Cfa/cinfo3.scm 35 */
					obj_t BgL_v1682z00_3122;

					BgL_v1682z00_3122 = create_vector(((long) 0));
					BgL_arg1936z00_3064 = BgL_v1682z00_3122;
				}
				BGl_vrefzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 10)),
					CNST_TABLE_REF(((long) 2)), BGl_vrefz00zzast_nodez00, ((long) 64808),
					BGl_proc2386z00zzcfa_info3z00, BGl_proc2385z00zzcfa_info3z00, BFALSE,
					BGl_proc2384z00zzcfa_info3z00, BGl_proc2383z00zzcfa_info3z00,
					BgL_arg1935z00_3063, BgL_arg1936z00_3064);
			}
			{	/* Cfa/cinfo3.scm 38 */
				obj_t BgL_arg1963z00_3131;
				obj_t BgL_arg1964z00_3132;

				{	/* Cfa/cinfo3.scm 38 */
					obj_t BgL_v1683z00_3166;

					BgL_v1683z00_3166 = create_vector(((long) 2));
					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_arg1975z00_3167;

						BgL_arg1975z00_3167 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2388z00zzcfa_info3z00,
							BGl_proc2387z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1683z00_3166, ((long) 0), BgL_arg1975z00_3167);
					}
					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_arg1980z00_3177;

						BgL_arg1980z00_3177 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2391z00zzcfa_info3z00,
							BGl_proc2390z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2389z00zzcfa_info3z00, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1683z00_3166, ((long) 1), BgL_arg1980z00_3177);
					}
					BgL_arg1963z00_3131 = BgL_v1683z00_3166;
				}
				{	/* Cfa/cinfo3.scm 38 */
					obj_t BgL_v1684z00_3190;

					BgL_v1684z00_3190 = create_vector(((long) 0));
					BgL_arg1964z00_3132 = BgL_v1684z00_3190;
				}
				BGl_vsetz12zf2Cinfoze0zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 11)),
					CNST_TABLE_REF(((long) 2)), BGl_vsetz12z12zzast_nodez00,
					((long) 40054), BGl_proc2395z00zzcfa_info3z00,
					BGl_proc2394z00zzcfa_info3z00, BFALSE, BGl_proc2393z00zzcfa_info3z00,
					BGl_proc2392z00zzcfa_info3z00, BgL_arg1963z00_3131,
					BgL_arg1964z00_3132);
			}
			{	/* Cfa/cinfo3.scm 41 */
				obj_t BgL_arg1991z00_3199;
				obj_t BgL_arg1992z00_3200;

				{	/* Cfa/cinfo3.scm 41 */
					obj_t BgL_v1685z00_3232;

					BgL_v1685z00_3232 = create_vector(((long) 2));
					{	/* Cfa/cinfo3.scm 41 */
						obj_t BgL_arg2004z00_3233;

						BgL_arg2004z00_3233 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2397z00zzcfa_info3z00,
							BGl_proc2396z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1685z00_3232, ((long) 0), BgL_arg2004z00_3233);
					}
					{	/* Cfa/cinfo3.scm 41 */
						obj_t BgL_arg2010z00_3243;

						BgL_arg2010z00_3243 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2400z00zzcfa_info3z00,
							BGl_proc2399z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2398z00zzcfa_info3z00, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1685z00_3232, ((long) 1), BgL_arg2010z00_3243);
					}
					BgL_arg1991z00_3199 = BgL_v1685z00_3232;
				}
				{	/* Cfa/cinfo3.scm 41 */
					obj_t BgL_v1686z00_3256;

					BgL_v1686z00_3256 = create_vector(((long) 0));
					BgL_arg1992z00_3200 = BgL_v1686z00_3256;
				}
				BGl_vlengthzf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 12)),
					CNST_TABLE_REF(((long) 2)), BGl_vlengthz00zzast_nodez00,
					((long) 33528), BGl_proc2404z00zzcfa_info3z00,
					BGl_proc2403z00zzcfa_info3z00, BFALSE, BGl_proc2402z00zzcfa_info3z00,
					BGl_proc2401z00zzcfa_info3z00, BgL_arg1991z00_3199,
					BgL_arg1992z00_3200);
			}
			{	/* Cfa/cinfo3.scm 46 */
				obj_t BgL_arg2022z00_3265;
				obj_t BgL_arg2023z00_3266;

				{	/* Cfa/cinfo3.scm 46 */
					obj_t BgL_v1687z00_3297;

					BgL_v1687z00_3297 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_arg2037z00_3298;

						BgL_arg2037z00_3298 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2406z00zzcfa_info3z00,
							BGl_proc2405z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1687z00_3297, ((long) 0), BgL_arg2037z00_3298);
					}
					BgL_arg2022z00_3265 = BgL_v1687z00_3297;
				}
				{	/* Cfa/cinfo3.scm 46 */
					obj_t BgL_v1688z00_3308;

					BgL_v1688z00_3308 = create_vector(((long) 0));
					BgL_arg2023z00_3266 = BgL_v1688z00_3308;
				}
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 14)),
					CNST_TABLE_REF(((long) 2)), BGl_vallocz00zzast_nodez00,
					((long) 33373), BGl_proc2410z00zzcfa_info3z00,
					BGl_proc2409z00zzcfa_info3z00, BFALSE, BGl_proc2408z00zzcfa_info3z00,
					BGl_proc2407z00zzcfa_info3z00, BgL_arg2022z00_3265,
					BgL_arg2023z00_3266);
			}
			{	/* Cfa/cinfo3.scm 48 */
				obj_t BgL_arg2047z00_3317;
				obj_t BgL_arg2048z00_3318;

				{	/* Cfa/cinfo3.scm 48 */
					obj_t BgL_v1689z00_3349;

					BgL_v1689z00_3349 = create_vector(((long) 1));
					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_arg2060z00_3350;

						BgL_arg2060z00_3350 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2412z00zzcfa_info3z00,
							BGl_proc2411z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1689z00_3349, ((long) 0), BgL_arg2060z00_3350);
					}
					BgL_arg2047z00_3317 = BgL_v1689z00_3349;
				}
				{	/* Cfa/cinfo3.scm 48 */
					obj_t BgL_v1690z00_3360;

					BgL_v1690z00_3360 = create_vector(((long) 0));
					BgL_arg2048z00_3318 = BgL_v1690z00_3360;
				}
				BGl_valloczf2Cinfozf2zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 15)),
					CNST_TABLE_REF(((long) 2)), BGl_vallocz00zzast_nodez00,
					((long) 10931), BGl_proc2416z00zzcfa_info3z00,
					BGl_proc2415z00zzcfa_info3z00, BFALSE, BGl_proc2414z00zzcfa_info3z00,
					BGl_proc2413z00zzcfa_info3z00, BgL_arg2047z00_3317,
					BgL_arg2048z00_3318);
			}
			{	/* Cfa/cinfo3.scm 50 */
				obj_t BgL_arg2070z00_3369;
				obj_t BgL_arg2071z00_3370;

				{	/* Cfa/cinfo3.scm 50 */
					obj_t BgL_v1691z00_3407;

					BgL_v1691z00_3407 = create_vector(((long) 7));
					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2084z00_3408;

						BgL_arg2084z00_3408 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2418z00zzcfa_info3z00,
							BGl_proc2417z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1691z00_3407, ((long) 0), BgL_arg2084z00_3408);
					}
					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2089z00_3418;

						BgL_arg2089z00_3418 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc2420z00zzcfa_info3z00,
							BGl_proc2419z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1691z00_3407, ((long) 1), BgL_arg2089z00_3418);
					}
					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2094z00_3428;

						BgL_arg2094z00_3428 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc2423z00zzcfa_info3z00,
							BGl_proc2422z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2421z00zzcfa_info3z00, CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1691z00_3407, ((long) 2), BgL_arg2094z00_3428);
					}
					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2101z00_3441;

						BgL_arg2101z00_3441 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc2425z00zzcfa_info3z00,
							BGl_proc2424z00zzcfa_info3z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1691z00_3407, ((long) 3), BgL_arg2101z00_3441);
					}
					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2106z00_3451;

						BgL_arg2106z00_3451 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc2428z00zzcfa_info3z00,
							BGl_proc2427z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2426z00zzcfa_info3z00, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1691z00_3407, ((long) 4), BgL_arg2106z00_3451);
					}
					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2114z00_3464;

						BgL_arg2114z00_3464 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2431z00zzcfa_info3z00,
							BGl_proc2430z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2429z00zzcfa_info3z00, CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1691z00_3407, ((long) 5), BgL_arg2114z00_3464);
					}
					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2121z00_3477;

						BgL_arg2121z00_3477 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2434z00zzcfa_info3z00,
							BGl_proc2433z00zzcfa_info3z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc2432z00zzcfa_info3z00, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1691z00_3407, ((long) 6), BgL_arg2121z00_3477);
					}
					BgL_arg2070z00_3369 = BgL_v1691z00_3407;
				}
				{	/* Cfa/cinfo3.scm 50 */
					obj_t BgL_v1692z00_3490;

					BgL_v1692z00_3490 = create_vector(((long) 0));
					BgL_arg2071z00_3370 = BgL_v1692z00_3490;
				}
				return (BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 23)),
						CNST_TABLE_REF(((long) 2)), BGl_vallocz00zzast_nodez00,
						((long) 18333), BGl_proc2438z00zzcfa_info3z00,
						BGl_proc2437z00zzcfa_info3z00, BFALSE,
						BGl_proc2436z00zzcfa_info3z00, BGl_proc2435z00zzcfa_info3z00,
						BgL_arg2070z00_3369, BgL_arg2071z00_3370), BUNSPEC);
		}}

	}



/* &lambda2080 */
	BgL_vallocz00_bglt BGl_z62lambda2080z62zzcfa_info3z00(obj_t BgL_envz00_5449,
		obj_t BgL_o1332z00_5450)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				long BgL_arg2081z00_5884;

				{	/* Cfa/cinfo3.scm 50 */
					obj_t BgL_arg2082z00_5885;

					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_arg2083z00_5886;

						{	/* Cfa/cinfo3.scm 50 */
							long BgL_arg1816z00_5887;

							{	/* Cfa/cinfo3.scm 50 */
								long BgL_arg1817z00_5888;

								{	/* Cfa/cinfo3.scm 50 */
									long BgL_res2339z00_5889;

									BgL_res2339z00_5889 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt) BgL_o1332z00_5450)));
									BgL_arg1817z00_5888 = BgL_res2339z00_5889;
								}
								BgL_arg1816z00_5887 = (BgL_arg1817z00_5888 - OBJECT_TYPE);
							}
							BgL_arg2083z00_5886 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5887);
						}
						BgL_arg2082z00_5885 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2083z00_5886);
					}
					{	/* Cfa/cinfo3.scm 50 */
						long BgL_res2341z00_5890;

						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL_tmpz00_8387;

							BgL_tmpz00_8387 = ((obj_t) BgL_arg2082z00_5885);
							BgL_res2341z00_5890 = BGL_CLASS_INDEX(BgL_tmpz00_8387);
						}
						BgL_arg2081z00_5884 = BgL_res2341z00_5890;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_vallocz00_bglt) BgL_o1332z00_5450)), BgL_arg2081z00_5884);
			}
			{	/* Cfa/cinfo3.scm 50 */
				BgL_objectz00_bglt BgL_tmpz00_8393;

				BgL_tmpz00_8393 =
					((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_o1332z00_5450));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8393, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_o1332z00_5450));
			return ((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1332z00_5450));
		}

	}



/* &<@anonymous:2079> */
	obj_t BGl_z62zc3z04anonymousza32079ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5451,
		obj_t BgL_new1331z00_5452)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_vallocz00_bglt BgL_auxz00_8401;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vallocz00_bglt) BgL_new1331z00_5452))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_8405;

					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_classz00_5892;

						BgL_classz00_5892 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL__ortest_1106z00_5893;

							BgL__ortest_1106z00_5893 = BGL_CLASS_NIL(BgL_classz00_5892);
							if (CBOOL(BgL__ortest_1106z00_5893))
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8405 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5893);
								}
							else
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8405 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5892));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vallocz00_bglt) BgL_new1331z00_5452))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_8405), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_vallocz00_bglt) BgL_new1331z00_5452))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_vallocz00_bglt)
										BgL_new1331z00_5452))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1331z00_5452))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1331z00_5452))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1331z00_5452))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_8430;

					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_classz00_5894;

						BgL_classz00_5894 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL__ortest_1106z00_5895;

							BgL__ortest_1106z00_5895 = BGL_CLASS_NIL(BgL_classz00_5894);
							if (CBOOL(BgL__ortest_1106z00_5895))
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8430 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5895);
								}
							else
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8430 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5894));
								}
						}
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_new1331z00_5452))))->
							BgL_ftypez00) = ((BgL_typez00_bglt) BgL_auxz00_8430), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_8440;

					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_classz00_5896;

						BgL_classz00_5896 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL__ortest_1106z00_5897;

							BgL__ortest_1106z00_5897 = BGL_CLASS_NIL(BgL_classz00_5896);
							if (CBOOL(BgL__ortest_1106z00_5897))
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8440 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5897);
								}
							else
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8440 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5896));
								}
						}
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_new1331z00_5452))))->
							BgL_otypez00) = ((BgL_typez00_bglt) BgL_auxz00_8440), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_8457;
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8450;

					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_classz00_5898;

						BgL_classz00_5898 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL__ortest_1106z00_5899;

							BgL__ortest_1106z00_5899 = BGL_CLASS_NIL(BgL_classz00_5898);
							if (CBOOL(BgL__ortest_1106z00_5899))
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8457 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_5899);
								}
							else
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8457 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5898));
								}
						}
					}
					{
						obj_t BgL_auxz00_8451;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8452;

							BgL_tmpz00_8452 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1331z00_5452));
							BgL_auxz00_8451 = BGL_OBJECT_WIDENING(BgL_tmpz00_8452);
						}
						BgL_auxz00_8450 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8451);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8450))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_8457), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_8472;
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8465;

					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_classz00_5900;

						BgL_classz00_5900 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL__ortest_1106z00_5901;

							BgL__ortest_1106z00_5901 = BGL_CLASS_NIL(BgL_classz00_5900);
							if (CBOOL(BgL__ortest_1106z00_5901))
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8472 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_5901);
								}
							else
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8472 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5900));
								}
						}
					}
					{
						obj_t BgL_auxz00_8466;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8467;

							BgL_tmpz00_8467 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1331z00_5452));
							BgL_auxz00_8466 = BGL_OBJECT_WIDENING(BgL_tmpz00_8467);
						}
						BgL_auxz00_8465 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8466);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8465))->
							BgL_valuezd2approxzd2) =
						((BgL_approxz00_bglt) BgL_auxz00_8472), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8480;

					{
						obj_t BgL_auxz00_8481;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8482;

							BgL_tmpz00_8482 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1331z00_5452));
							BgL_auxz00_8481 = BGL_OBJECT_WIDENING(BgL_tmpz00_8482);
						}
						BgL_auxz00_8480 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8481);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8480))->
							BgL_lostzd2stampzd2) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_variablez00_bglt BgL_auxz00_8495;
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8488;

					{	/* Cfa/cinfo3.scm 50 */
						obj_t BgL_classz00_5902;

						BgL_classz00_5902 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL__ortest_1106z00_5903;

							BgL__ortest_1106z00_5903 = BGL_CLASS_NIL(BgL_classz00_5902);
							if (CBOOL(BgL__ortest_1106z00_5903))
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8495 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_5903);
								}
							else
								{	/* Cfa/cinfo3.scm 50 */
									BgL_auxz00_8495 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5902));
								}
						}
					}
					{
						obj_t BgL_auxz00_8489;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8490;

							BgL_tmpz00_8490 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1331z00_5452));
							BgL_auxz00_8489 = BGL_OBJECT_WIDENING(BgL_tmpz00_8490);
						}
						BgL_auxz00_8488 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8489);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8488))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_8495), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8503;

					{
						obj_t BgL_auxz00_8504;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8505;

							BgL_tmpz00_8505 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1331z00_5452));
							BgL_auxz00_8504 = BGL_OBJECT_WIDENING(BgL_tmpz00_8505);
						}
						BgL_auxz00_8503 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8504);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8503))->
							BgL_stackablezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8511;

					{
						obj_t BgL_auxz00_8512;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8513;

							BgL_tmpz00_8513 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1331z00_5452));
							BgL_auxz00_8512 = BGL_OBJECT_WIDENING(BgL_tmpz00_8513);
						}
						BgL_auxz00_8511 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8512);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8511))->
							BgL_stackzd2stampzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8519;

					{
						obj_t BgL_auxz00_8520;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8521;

							BgL_tmpz00_8521 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1331z00_5452));
							BgL_auxz00_8520 = BGL_OBJECT_WIDENING(BgL_tmpz00_8521);
						}
						BgL_auxz00_8519 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8520);
					}
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8519))->
							BgL_seenzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_8401 = ((BgL_vallocz00_bglt) BgL_new1331z00_5452);
				return ((obj_t) BgL_auxz00_8401);
			}
		}

	}



/* &lambda2077 */
	BgL_vallocz00_bglt BGl_z62lambda2077z62zzcfa_info3z00(obj_t BgL_envz00_5453,
		obj_t BgL_o1328z00_5454)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				BgL_valloczf2cinfozb2optimz40_bglt BgL_wide1330z00_5905;

				BgL_wide1330z00_5905 =
					((BgL_valloczf2cinfozb2optimz40_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_valloczf2cinfozb2optimz40_bgl))));
				{	/* Cfa/cinfo3.scm 50 */
					obj_t BgL_auxz00_8534;
					BgL_objectz00_bglt BgL_tmpz00_8530;

					BgL_auxz00_8534 = ((obj_t) BgL_wide1330z00_5905);
					BgL_tmpz00_8530 =
						((BgL_objectz00_bglt)
						((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1328z00_5454)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8530, BgL_auxz00_8534);
				}
				((BgL_objectz00_bglt)
					((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1328z00_5454)));
				{	/* Cfa/cinfo3.scm 50 */
					long BgL_arg2078z00_5906;

					{	/* Cfa/cinfo3.scm 50 */
						long BgL_res2338z00_5907;

						BgL_res2338z00_5907 =
							BGL_CLASS_INDEX(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
						BgL_arg2078z00_5906 = BgL_res2338z00_5907;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt)
								((BgL_vallocz00_bglt) BgL_o1328z00_5454))),
						BgL_arg2078z00_5906);
				}
				return
					((BgL_vallocz00_bglt)
					((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1328z00_5454)));
			}
		}

	}



/* &lambda2072 */
	BgL_vallocz00_bglt BGl_z62lambda2072z62zzcfa_info3z00(obj_t BgL_envz00_5455,
		obj_t BgL_loc1312z00_5456, obj_t BgL_type1313z00_5457,
		obj_t BgL_sidezd2effect1314zd2_5458, obj_t BgL_key1315z00_5459,
		obj_t BgL_exprza21316za2_5460, obj_t BgL_effect1317z00_5461,
		obj_t BgL_czd2format1318zd2_5462, obj_t BgL_ftype1319z00_5463,
		obj_t BgL_otype1320z00_5464, obj_t BgL_approx1321z00_5465,
		obj_t BgL_valuezd2approx1322zd2_5466, obj_t BgL_lostzd2stamp1323zd2_5467,
		obj_t BgL_owner1324z00_5468, obj_t BgL_stackablezf31325zf3_5469,
		obj_t BgL_stackzd2stamp1326zd2_5470, obj_t BgL_seenzf31327zf3_5471)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				long BgL_lostzd2stamp1323zd2_5915;
				bool_t BgL_stackablezf31325zf3_5917;
				bool_t BgL_seenzf31327zf3_5918;

				BgL_lostzd2stamp1323zd2_5915 =
					(long) CINT(BgL_lostzd2stamp1323zd2_5467);
				BgL_stackablezf31325zf3_5917 = CBOOL(BgL_stackablezf31325zf3_5469);
				BgL_seenzf31327zf3_5918 = CBOOL(BgL_seenzf31327zf3_5471);
				{	/* Cfa/cinfo3.scm 50 */
					BgL_vallocz00_bglt BgL_new1439z00_5919;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_vallocz00_bglt BgL_tmp1437z00_5920;
						BgL_valloczf2cinfozb2optimz40_bglt BgL_wide1438z00_5921;

						{
							BgL_vallocz00_bglt BgL_auxz00_8551;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_vallocz00_bglt BgL_new1436z00_5922;

								BgL_new1436z00_5922 =
									((BgL_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_vallocz00_bgl))));
								{	/* Cfa/cinfo3.scm 50 */
									long BgL_arg2076z00_5923;

									{	/* Cfa/cinfo3.scm 50 */
										long BgL_res2336z00_5924;

										BgL_res2336z00_5924 =
											BGL_CLASS_INDEX(BGl_vallocz00zzast_nodez00);
										BgL_arg2076z00_5923 = BgL_res2336z00_5924;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1436z00_5922),
										BgL_arg2076z00_5923);
								}
								{	/* Cfa/cinfo3.scm 50 */
									BgL_objectz00_bglt BgL_tmpz00_8556;

									BgL_tmpz00_8556 = ((BgL_objectz00_bglt) BgL_new1436z00_5922);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8556, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1436z00_5922);
								BgL_auxz00_8551 = BgL_new1436z00_5922;
							}
							BgL_tmp1437z00_5920 = ((BgL_vallocz00_bglt) BgL_auxz00_8551);
						}
						BgL_wide1438z00_5921 =
							((BgL_valloczf2cinfozb2optimz40_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_valloczf2cinfozb2optimz40_bgl))));
						{	/* Cfa/cinfo3.scm 50 */
							obj_t BgL_auxz00_8564;
							BgL_objectz00_bglt BgL_tmpz00_8562;

							BgL_auxz00_8564 = ((obj_t) BgL_wide1438z00_5921);
							BgL_tmpz00_8562 = ((BgL_objectz00_bglt) BgL_tmp1437z00_5920);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8562, BgL_auxz00_8564);
						}
						((BgL_objectz00_bglt) BgL_tmp1437z00_5920);
						{	/* Cfa/cinfo3.scm 50 */
							long BgL_arg2075z00_5925;

							{	/* Cfa/cinfo3.scm 50 */
								long BgL_res2337z00_5926;

								BgL_res2337z00_5926 =
									BGL_CLASS_INDEX(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00);
								BgL_arg2075z00_5925 = BgL_res2337z00_5926;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1437z00_5920),
								BgL_arg2075z00_5925);
						}
						BgL_new1439z00_5919 = ((BgL_vallocz00_bglt) BgL_tmp1437z00_5920);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1439z00_5919)))->BgL_locz00) =
						((obj_t) BgL_loc1312z00_5456), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1439z00_5919)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1313z00_5457)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1439z00_5919)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1314zd2_5458), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1439z00_5919)))->BgL_keyz00) =
						((obj_t) BgL_key1315z00_5459), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1439z00_5919)))->BgL_exprza2za2) =
						((obj_t) ((obj_t) BgL_exprza21316za2_5460)), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1439z00_5919)))->BgL_effectz00) =
						((obj_t) BgL_effect1317z00_5461), BUNSPEC);
					((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
										BgL_new1439z00_5919)))->BgL_czd2formatzd2) =
						((obj_t) ((obj_t) BgL_czd2format1318zd2_5462)), BUNSPEC);
					((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
										BgL_new1439z00_5919)))->BgL_ftypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ftype1319z00_5463)),
						BUNSPEC);
					((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
										BgL_new1439z00_5919)))->BgL_otypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_otype1320z00_5464)),
						BUNSPEC);
					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8595;

						{
							obj_t BgL_auxz00_8596;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_objectz00_bglt BgL_tmpz00_8597;

								BgL_tmpz00_8597 = ((BgL_objectz00_bglt) BgL_new1439z00_5919);
								BgL_auxz00_8596 = BGL_OBJECT_WIDENING(BgL_tmpz00_8597);
							}
							BgL_auxz00_8595 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8596);
						}
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8595))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1321z00_5465)), BUNSPEC);
					}
					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8603;

						{
							obj_t BgL_auxz00_8604;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_objectz00_bglt BgL_tmpz00_8605;

								BgL_tmpz00_8605 = ((BgL_objectz00_bglt) BgL_new1439z00_5919);
								BgL_auxz00_8604 = BGL_OBJECT_WIDENING(BgL_tmpz00_8605);
							}
							BgL_auxz00_8603 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8604);
						}
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8603))->
								BgL_valuezd2approxzd2) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_valuezd2approx1322zd2_5466)), BUNSPEC);
					}
					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8611;

						{
							obj_t BgL_auxz00_8612;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_objectz00_bglt BgL_tmpz00_8613;

								BgL_tmpz00_8613 = ((BgL_objectz00_bglt) BgL_new1439z00_5919);
								BgL_auxz00_8612 = BGL_OBJECT_WIDENING(BgL_tmpz00_8613);
							}
							BgL_auxz00_8611 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8612);
						}
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8611))->
								BgL_lostzd2stampzd2) =
							((long) BgL_lostzd2stamp1323zd2_5915), BUNSPEC);
					}
					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8618;

						{
							obj_t BgL_auxz00_8619;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_objectz00_bglt BgL_tmpz00_8620;

								BgL_tmpz00_8620 = ((BgL_objectz00_bglt) BgL_new1439z00_5919);
								BgL_auxz00_8619 = BGL_OBJECT_WIDENING(BgL_tmpz00_8620);
							}
							BgL_auxz00_8618 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8619);
						}
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8618))->
								BgL_ownerz00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
									BgL_owner1324z00_5468)), BUNSPEC);
					}
					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8626;

						{
							obj_t BgL_auxz00_8627;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_objectz00_bglt BgL_tmpz00_8628;

								BgL_tmpz00_8628 = ((BgL_objectz00_bglt) BgL_new1439z00_5919);
								BgL_auxz00_8627 = BGL_OBJECT_WIDENING(BgL_tmpz00_8628);
							}
							BgL_auxz00_8626 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8627);
						}
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8626))->
								BgL_stackablezf3zf3) =
							((bool_t) BgL_stackablezf31325zf3_5917), BUNSPEC);
					}
					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8633;

						{
							obj_t BgL_auxz00_8634;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_objectz00_bglt BgL_tmpz00_8635;

								BgL_tmpz00_8635 = ((BgL_objectz00_bglt) BgL_new1439z00_5919);
								BgL_auxz00_8634 = BGL_OBJECT_WIDENING(BgL_tmpz00_8635);
							}
							BgL_auxz00_8633 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8634);
						}
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8633))->
								BgL_stackzd2stampzd2) =
							((obj_t) BgL_stackzd2stamp1326zd2_5470), BUNSPEC);
					}
					{
						BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8640;

						{
							obj_t BgL_auxz00_8641;

							{	/* Cfa/cinfo3.scm 50 */
								BgL_objectz00_bglt BgL_tmpz00_8642;

								BgL_tmpz00_8642 = ((BgL_objectz00_bglt) BgL_new1439z00_5919);
								BgL_auxz00_8641 = BGL_OBJECT_WIDENING(BgL_tmpz00_8642);
							}
							BgL_auxz00_8640 =
								((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8641);
						}
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8640))->
								BgL_seenzf3zf3) = ((bool_t) BgL_seenzf31327zf3_5918), BUNSPEC);
					}
					return BgL_new1439z00_5919;
				}
			}
		}

	}



/* &<@anonymous:2128> */
	obj_t BGl_z62zc3z04anonymousza32128ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5472)
	{
		{	/* Cfa/cinfo3.scm 50 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2127 */
	obj_t BGl_z62lambda2127z62zzcfa_info3z00(obj_t BgL_envz00_5473,
		obj_t BgL_oz00_5474, obj_t BgL_vz00_5475)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				bool_t BgL_vz00_5928;

				BgL_vz00_5928 = CBOOL(BgL_vz00_5475);
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8649;

					{
						obj_t BgL_auxz00_8650;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8651;

							BgL_tmpz00_8651 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5474));
							BgL_auxz00_8650 = BGL_OBJECT_WIDENING(BgL_tmpz00_8651);
						}
						BgL_auxz00_8649 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8650);
					}
					return
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8649))->
							BgL_seenzf3zf3) = ((bool_t) BgL_vz00_5928), BUNSPEC);
				}
			}
		}

	}



/* &lambda2126 */
	obj_t BGl_z62lambda2126z62zzcfa_info3z00(obj_t BgL_envz00_5476,
		obj_t BgL_oz00_5477)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				bool_t BgL_tmpz00_8657;

				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8658;

					{
						obj_t BgL_auxz00_8659;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8660;

							BgL_tmpz00_8660 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5477));
							BgL_auxz00_8659 = BGL_OBJECT_WIDENING(BgL_tmpz00_8660);
						}
						BgL_auxz00_8658 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8659);
					}
					BgL_tmpz00_8657 =
						(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8658))->
						BgL_seenzf3zf3);
				}
				return BBOOL(BgL_tmpz00_8657);
			}
		}

	}



/* &<@anonymous:2120> */
	obj_t BGl_z62zc3z04anonymousza32120ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5478)
	{
		{	/* Cfa/cinfo3.scm 50 */
			return BNIL;
		}

	}



/* &lambda2119 */
	obj_t BGl_z62lambda2119z62zzcfa_info3z00(obj_t BgL_envz00_5479,
		obj_t BgL_oz00_5480, obj_t BgL_vz00_5481)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8667;

				{
					obj_t BgL_auxz00_8668;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8669;

						BgL_tmpz00_8669 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5480));
						BgL_auxz00_8668 = BGL_OBJECT_WIDENING(BgL_tmpz00_8669);
					}
					BgL_auxz00_8667 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8668);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8667))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_5481), BUNSPEC);
			}
		}

	}



/* &lambda2118 */
	obj_t BGl_z62lambda2118z62zzcfa_info3z00(obj_t BgL_envz00_5482,
		obj_t BgL_oz00_5483)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8675;

				{
					obj_t BgL_auxz00_8676;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8677;

						BgL_tmpz00_8677 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5483));
						BgL_auxz00_8676 = BGL_OBJECT_WIDENING(BgL_tmpz00_8677);
					}
					BgL_auxz00_8675 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8676);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8675))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &<@anonymous:2112> */
	obj_t BGl_z62zc3z04anonymousza32112ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5484)
	{
		{	/* Cfa/cinfo3.scm 50 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda2111 */
	obj_t BGl_z62lambda2111z62zzcfa_info3z00(obj_t BgL_envz00_5485,
		obj_t BgL_oz00_5486, obj_t BgL_vz00_5487)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				bool_t BgL_vz00_5933;

				BgL_vz00_5933 = CBOOL(BgL_vz00_5487);
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8685;

					{
						obj_t BgL_auxz00_8686;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8687;

							BgL_tmpz00_8687 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5486));
							BgL_auxz00_8686 = BGL_OBJECT_WIDENING(BgL_tmpz00_8687);
						}
						BgL_auxz00_8685 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8686);
					}
					return
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8685))->
							BgL_stackablezf3zf3) = ((bool_t) BgL_vz00_5933), BUNSPEC);
				}
			}
		}

	}



/* &lambda2110 */
	obj_t BGl_z62lambda2110z62zzcfa_info3z00(obj_t BgL_envz00_5488,
		obj_t BgL_oz00_5489)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				bool_t BgL_tmpz00_8693;

				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8694;

					{
						obj_t BgL_auxz00_8695;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8696;

							BgL_tmpz00_8696 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5489));
							BgL_auxz00_8695 = BGL_OBJECT_WIDENING(BgL_tmpz00_8696);
						}
						BgL_auxz00_8694 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8695);
					}
					BgL_tmpz00_8693 =
						(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8694))->
						BgL_stackablezf3zf3);
				}
				return BBOOL(BgL_tmpz00_8693);
			}
		}

	}



/* &lambda2105 */
	obj_t BGl_z62lambda2105z62zzcfa_info3z00(obj_t BgL_envz00_5490,
		obj_t BgL_oz00_5491, obj_t BgL_vz00_5492)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8703;

				{
					obj_t BgL_auxz00_8704;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8705;

						BgL_tmpz00_8705 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5491));
						BgL_auxz00_8704 = BGL_OBJECT_WIDENING(BgL_tmpz00_8705);
					}
					BgL_auxz00_8703 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8704);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8703))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_5492)),
					BUNSPEC);
			}
		}

	}



/* &lambda2104 */
	BgL_variablez00_bglt BGl_z62lambda2104z62zzcfa_info3z00(obj_t BgL_envz00_5493,
		obj_t BgL_oz00_5494)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8712;

				{
					obj_t BgL_auxz00_8713;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8714;

						BgL_tmpz00_8714 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5494));
						BgL_auxz00_8713 = BGL_OBJECT_WIDENING(BgL_tmpz00_8714);
					}
					BgL_auxz00_8712 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8713);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8712))->
					BgL_ownerz00);
			}
		}

	}



/* &<@anonymous:2100> */
	obj_t BGl_z62zc3z04anonymousza32100ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5495)
	{
		{	/* Cfa/cinfo3.scm 50 */
			return BINT(((long) -1));
		}

	}



/* &lambda2099 */
	obj_t BGl_z62lambda2099z62zzcfa_info3z00(obj_t BgL_envz00_5496,
		obj_t BgL_oz00_5497, obj_t BgL_vz00_5498)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				long BgL_vz00_5939;

				BgL_vz00_5939 = (long) CINT(BgL_vz00_5498);
				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8722;

					{
						obj_t BgL_auxz00_8723;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8724;

							BgL_tmpz00_8724 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5497));
							BgL_auxz00_8723 = BGL_OBJECT_WIDENING(BgL_tmpz00_8724);
						}
						BgL_auxz00_8722 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8723);
					}
					return
						((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8722))->
							BgL_lostzd2stampzd2) = ((long) BgL_vz00_5939), BUNSPEC);
		}}}

	}



/* &lambda2098 */
	obj_t BGl_z62lambda2098z62zzcfa_info3z00(obj_t BgL_envz00_5499,
		obj_t BgL_oz00_5500)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{	/* Cfa/cinfo3.scm 50 */
				long BgL_tmpz00_8730;

				{
					BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8731;

					{
						obj_t BgL_auxz00_8732;

						{	/* Cfa/cinfo3.scm 50 */
							BgL_objectz00_bglt BgL_tmpz00_8733;

							BgL_tmpz00_8733 =
								((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5500));
							BgL_auxz00_8732 = BGL_OBJECT_WIDENING(BgL_tmpz00_8733);
						}
						BgL_auxz00_8731 =
							((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8732);
					}
					BgL_tmpz00_8730 =
						(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8731))->
						BgL_lostzd2stampzd2);
				}
				return BINT(BgL_tmpz00_8730);
			}
		}

	}



/* &lambda2093 */
	obj_t BGl_z62lambda2093z62zzcfa_info3z00(obj_t BgL_envz00_5501,
		obj_t BgL_oz00_5502, obj_t BgL_vz00_5503)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8740;

				{
					obj_t BgL_auxz00_8741;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8742;

						BgL_tmpz00_8742 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5502));
						BgL_auxz00_8741 = BGL_OBJECT_WIDENING(BgL_tmpz00_8742);
					}
					BgL_auxz00_8740 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8741);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8740))->
						BgL_valuezd2approxzd2) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5503)), BUNSPEC);
			}
		}

	}



/* &lambda2092 */
	BgL_approxz00_bglt BGl_z62lambda2092z62zzcfa_info3z00(obj_t BgL_envz00_5504,
		obj_t BgL_oz00_5505)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8749;

				{
					obj_t BgL_auxz00_8750;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8751;

						BgL_tmpz00_8751 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5505));
						BgL_auxz00_8750 = BGL_OBJECT_WIDENING(BgL_tmpz00_8751);
					}
					BgL_auxz00_8749 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8750);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8749))->
					BgL_valuezd2approxzd2);
			}
		}

	}



/* &lambda2088 */
	obj_t BGl_z62lambda2088z62zzcfa_info3z00(obj_t BgL_envz00_5506,
		obj_t BgL_oz00_5507, obj_t BgL_vz00_5508)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8757;

				{
					obj_t BgL_auxz00_8758;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8759;

						BgL_tmpz00_8759 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5507));
						BgL_auxz00_8758 = BGL_OBJECT_WIDENING(BgL_tmpz00_8759);
					}
					BgL_auxz00_8757 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8758);
				}
				return
					((((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8757))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5508)), BUNSPEC);
			}
		}

	}



/* &lambda2087 */
	BgL_approxz00_bglt BGl_z62lambda2087z62zzcfa_info3z00(obj_t BgL_envz00_5509,
		obj_t BgL_oz00_5510)
	{
		{	/* Cfa/cinfo3.scm 50 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_auxz00_8766;

				{
					obj_t BgL_auxz00_8767;

					{	/* Cfa/cinfo3.scm 50 */
						BgL_objectz00_bglt BgL_tmpz00_8768;

						BgL_tmpz00_8768 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5510));
						BgL_auxz00_8767 = BGL_OBJECT_WIDENING(BgL_tmpz00_8768);
					}
					BgL_auxz00_8766 =
						((BgL_valloczf2cinfozb2optimz40_bglt) BgL_auxz00_8767);
				}
				return
					(((BgL_valloczf2cinfozb2optimz40_bglt) COBJECT(BgL_auxz00_8766))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2055 */
	BgL_vallocz00_bglt BGl_z62lambda2055z62zzcfa_info3z00(obj_t BgL_envz00_5511,
		obj_t BgL_o1310z00_5512)
	{
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				long BgL_arg2056z00_5948;

				{	/* Cfa/cinfo3.scm 48 */
					obj_t BgL_arg2057z00_5949;

					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_arg2059z00_5950;

						{	/* Cfa/cinfo3.scm 48 */
							long BgL_arg1816z00_5951;

							{	/* Cfa/cinfo3.scm 48 */
								long BgL_arg1817z00_5952;

								{	/* Cfa/cinfo3.scm 48 */
									long BgL_res2333z00_5953;

									BgL_res2333z00_5953 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt) BgL_o1310z00_5512)));
									BgL_arg1817z00_5952 = BgL_res2333z00_5953;
								}
								BgL_arg1816z00_5951 = (BgL_arg1817z00_5952 - OBJECT_TYPE);
							}
							BgL_arg2059z00_5950 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5951);
						}
						BgL_arg2057z00_5949 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2059z00_5950);
					}
					{	/* Cfa/cinfo3.scm 48 */
						long BgL_res2335z00_5954;

						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL_tmpz00_8780;

							BgL_tmpz00_8780 = ((obj_t) BgL_arg2057z00_5949);
							BgL_res2335z00_5954 = BGL_CLASS_INDEX(BgL_tmpz00_8780);
						}
						BgL_arg2056z00_5948 = BgL_res2335z00_5954;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_vallocz00_bglt) BgL_o1310z00_5512)), BgL_arg2056z00_5948);
			}
			{	/* Cfa/cinfo3.scm 48 */
				BgL_objectz00_bglt BgL_tmpz00_8786;

				BgL_tmpz00_8786 =
					((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_o1310z00_5512));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8786, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_o1310z00_5512));
			return ((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1310z00_5512));
		}

	}



/* &<@anonymous:2054> */
	obj_t BGl_z62zc3z04anonymousza32054ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5513,
		obj_t BgL_new1309z00_5514)
	{
		{	/* Cfa/cinfo3.scm 48 */
			{
				BgL_vallocz00_bglt BgL_auxz00_8794;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vallocz00_bglt) BgL_new1309z00_5514))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_8798;

					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_classz00_5956;

						BgL_classz00_5956 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL__ortest_1106z00_5957;

							BgL__ortest_1106z00_5957 = BGL_CLASS_NIL(BgL_classz00_5956);
							if (CBOOL(BgL__ortest_1106z00_5957))
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8798 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5957);
								}
							else
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8798 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5956));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vallocz00_bglt) BgL_new1309z00_5514))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_8798), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_vallocz00_bglt) BgL_new1309z00_5514))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_vallocz00_bglt)
										BgL_new1309z00_5514))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1309z00_5514))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1309z00_5514))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1309z00_5514))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_8823;

					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_classz00_5958;

						BgL_classz00_5958 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL__ortest_1106z00_5959;

							BgL__ortest_1106z00_5959 = BGL_CLASS_NIL(BgL_classz00_5958);
							if (CBOOL(BgL__ortest_1106z00_5959))
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8823 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5959);
								}
							else
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8823 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5958));
								}
						}
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_new1309z00_5514))))->
							BgL_ftypez00) = ((BgL_typez00_bglt) BgL_auxz00_8823), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_8833;

					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_classz00_5960;

						BgL_classz00_5960 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL__ortest_1106z00_5961;

							BgL__ortest_1106z00_5961 = BGL_CLASS_NIL(BgL_classz00_5960);
							if (CBOOL(BgL__ortest_1106z00_5961))
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8833 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5961);
								}
							else
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8833 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5960));
								}
						}
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_new1309z00_5514))))->
							BgL_otypez00) = ((BgL_typez00_bglt) BgL_auxz00_8833), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_8850;
					BgL_valloczf2cinfozf2_bglt BgL_auxz00_8843;

					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_classz00_5962;

						BgL_classz00_5962 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 48 */
							obj_t BgL__ortest_1106z00_5963;

							BgL__ortest_1106z00_5963 = BGL_CLASS_NIL(BgL_classz00_5962);
							if (CBOOL(BgL__ortest_1106z00_5963))
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8850 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_5963);
								}
							else
								{	/* Cfa/cinfo3.scm 48 */
									BgL_auxz00_8850 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5962));
								}
						}
					}
					{
						obj_t BgL_auxz00_8844;

						{	/* Cfa/cinfo3.scm 48 */
							BgL_objectz00_bglt BgL_tmpz00_8845;

							BgL_tmpz00_8845 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1309z00_5514));
							BgL_auxz00_8844 = BGL_OBJECT_WIDENING(BgL_tmpz00_8845);
						}
						BgL_auxz00_8843 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_8844);
					}
					((((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_8843))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_8850), BUNSPEC);
				}
				BgL_auxz00_8794 = ((BgL_vallocz00_bglt) BgL_new1309z00_5514);
				return ((obj_t) BgL_auxz00_8794);
			}
		}

	}



/* &lambda2052 */
	BgL_vallocz00_bglt BGl_z62lambda2052z62zzcfa_info3z00(obj_t BgL_envz00_5515,
		obj_t BgL_o1306z00_5516)
	{
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_valloczf2cinfozf2_bglt BgL_wide1308z00_5965;

				BgL_wide1308z00_5965 =
					((BgL_valloczf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_valloczf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 48 */
					obj_t BgL_auxz00_8865;
					BgL_objectz00_bglt BgL_tmpz00_8861;

					BgL_auxz00_8865 = ((obj_t) BgL_wide1308z00_5965);
					BgL_tmpz00_8861 =
						((BgL_objectz00_bglt)
						((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1306z00_5516)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8861, BgL_auxz00_8865);
				}
				((BgL_objectz00_bglt)
					((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1306z00_5516)));
				{	/* Cfa/cinfo3.scm 48 */
					long BgL_arg2053z00_5966;

					{	/* Cfa/cinfo3.scm 48 */
						long BgL_res2332z00_5967;

						BgL_res2332z00_5967 =
							BGL_CLASS_INDEX(BGl_valloczf2Cinfozf2zzcfa_info3z00);
						BgL_arg2053z00_5966 = BgL_res2332z00_5967;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt)
								((BgL_vallocz00_bglt) BgL_o1306z00_5516))),
						BgL_arg2053z00_5966);
				}
				return
					((BgL_vallocz00_bglt)
					((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1306z00_5516)));
			}
		}

	}



/* &lambda2049 */
	BgL_vallocz00_bglt BGl_z62lambda2049z62zzcfa_info3z00(obj_t BgL_envz00_5517,
		obj_t BgL_loc1296z00_5518, obj_t BgL_type1297z00_5519,
		obj_t BgL_sidezd2effect1298zd2_5520, obj_t BgL_key1299z00_5521,
		obj_t BgL_exprza21300za2_5522, obj_t BgL_effect1301z00_5523,
		obj_t BgL_czd2format1302zd2_5524, obj_t BgL_ftype1303z00_5525,
		obj_t BgL_otype1304z00_5526, obj_t BgL_approx1305z00_5527)
	{
		{	/* Cfa/cinfo3.scm 48 */
			{	/* Cfa/cinfo3.scm 48 */
				BgL_vallocz00_bglt BgL_new1434z00_5974;

				{	/* Cfa/cinfo3.scm 48 */
					BgL_vallocz00_bglt BgL_tmp1432z00_5975;
					BgL_valloczf2cinfozf2_bglt BgL_wide1433z00_5976;

					{
						BgL_vallocz00_bglt BgL_auxz00_8879;

						{	/* Cfa/cinfo3.scm 48 */
							BgL_vallocz00_bglt BgL_new1431z00_5977;

							BgL_new1431z00_5977 =
								((BgL_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							{	/* Cfa/cinfo3.scm 48 */
								long BgL_arg2051z00_5978;

								{	/* Cfa/cinfo3.scm 48 */
									long BgL_res2330z00_5979;

									BgL_res2330z00_5979 =
										BGL_CLASS_INDEX(BGl_vallocz00zzast_nodez00);
									BgL_arg2051z00_5978 = BgL_res2330z00_5979;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1431z00_5977),
									BgL_arg2051z00_5978);
							}
							{	/* Cfa/cinfo3.scm 48 */
								BgL_objectz00_bglt BgL_tmpz00_8884;

								BgL_tmpz00_8884 = ((BgL_objectz00_bglt) BgL_new1431z00_5977);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8884, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1431z00_5977);
							BgL_auxz00_8879 = BgL_new1431z00_5977;
						}
						BgL_tmp1432z00_5975 = ((BgL_vallocz00_bglt) BgL_auxz00_8879);
					}
					BgL_wide1433z00_5976 =
						((BgL_valloczf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_valloczf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.scm 48 */
						obj_t BgL_auxz00_8892;
						BgL_objectz00_bglt BgL_tmpz00_8890;

						BgL_auxz00_8892 = ((obj_t) BgL_wide1433z00_5976);
						BgL_tmpz00_8890 = ((BgL_objectz00_bglt) BgL_tmp1432z00_5975);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8890, BgL_auxz00_8892);
					}
					((BgL_objectz00_bglt) BgL_tmp1432z00_5975);
					{	/* Cfa/cinfo3.scm 48 */
						long BgL_arg2050z00_5980;

						{	/* Cfa/cinfo3.scm 48 */
							long BgL_res2331z00_5981;

							BgL_res2331z00_5981 =
								BGL_CLASS_INDEX(BGl_valloczf2Cinfozf2zzcfa_info3z00);
							BgL_arg2050z00_5980 = BgL_res2331z00_5981;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1432z00_5975), BgL_arg2050z00_5980);
					}
					BgL_new1434z00_5974 = ((BgL_vallocz00_bglt) BgL_tmp1432z00_5975);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1434z00_5974)))->BgL_locz00) =
					((obj_t) BgL_loc1296z00_5518), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1434z00_5974)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1297z00_5519)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1434z00_5974)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1298zd2_5520), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1434z00_5974)))->BgL_keyz00) =
					((obj_t) BgL_key1299z00_5521), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1434z00_5974)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21300za2_5522)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1434z00_5974)))->BgL_effectz00) =
					((obj_t) BgL_effect1301z00_5523), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1434z00_5974)))->BgL_czd2formatzd2) =
					((obj_t) ((obj_t) BgL_czd2format1302zd2_5524)), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1434z00_5974)))->BgL_ftypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ftype1303z00_5525)),
					BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1434z00_5974)))->BgL_otypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_otype1304z00_5526)),
					BUNSPEC);
				{
					BgL_valloczf2cinfozf2_bglt BgL_auxz00_8923;

					{
						obj_t BgL_auxz00_8924;

						{	/* Cfa/cinfo3.scm 48 */
							BgL_objectz00_bglt BgL_tmpz00_8925;

							BgL_tmpz00_8925 = ((BgL_objectz00_bglt) BgL_new1434z00_5974);
							BgL_auxz00_8924 = BGL_OBJECT_WIDENING(BgL_tmpz00_8925);
						}
						BgL_auxz00_8923 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_8924);
					}
					((((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_8923))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1305z00_5527)), BUNSPEC);
				}
				return BgL_new1434z00_5974;
			}
		}

	}



/* &lambda2064 */
	obj_t BGl_z62lambda2064z62zzcfa_info3z00(obj_t BgL_envz00_5528,
		obj_t BgL_oz00_5529, obj_t BgL_vz00_5530)
	{
		{	/* Cfa/cinfo3.scm 48 */
			{
				BgL_valloczf2cinfozf2_bglt BgL_auxz00_8931;

				{
					obj_t BgL_auxz00_8932;

					{	/* Cfa/cinfo3.scm 48 */
						BgL_objectz00_bglt BgL_tmpz00_8933;

						BgL_tmpz00_8933 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5529));
						BgL_auxz00_8932 = BGL_OBJECT_WIDENING(BgL_tmpz00_8933);
					}
					BgL_auxz00_8931 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_8932);
				}
				return
					((((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_8931))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5530)), BUNSPEC);
			}
		}

	}



/* &lambda2063 */
	BgL_approxz00_bglt BGl_z62lambda2063z62zzcfa_info3z00(obj_t BgL_envz00_5531,
		obj_t BgL_oz00_5532)
	{
		{	/* Cfa/cinfo3.scm 48 */
			{
				BgL_valloczf2cinfozf2_bglt BgL_auxz00_8940;

				{
					obj_t BgL_auxz00_8941;

					{	/* Cfa/cinfo3.scm 48 */
						BgL_objectz00_bglt BgL_tmpz00_8942;

						BgL_tmpz00_8942 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5532));
						BgL_auxz00_8941 = BGL_OBJECT_WIDENING(BgL_tmpz00_8942);
					}
					BgL_auxz00_8940 = ((BgL_valloczf2cinfozf2_bglt) BgL_auxz00_8941);
				}
				return
					(((BgL_valloczf2cinfozf2_bglt) COBJECT(BgL_auxz00_8940))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2033 */
	BgL_vallocz00_bglt BGl_z62lambda2033z62zzcfa_info3z00(obj_t BgL_envz00_5533,
		obj_t BgL_o1294z00_5534)
	{
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				long BgL_arg2034z00_5986;

				{	/* Cfa/cinfo3.scm 46 */
					obj_t BgL_arg2035z00_5987;

					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_arg2036z00_5988;

						{	/* Cfa/cinfo3.scm 46 */
							long BgL_arg1816z00_5989;

							{	/* Cfa/cinfo3.scm 46 */
								long BgL_arg1817z00_5990;

								{	/* Cfa/cinfo3.scm 46 */
									long BgL_res2327z00_5991;

									BgL_res2327z00_5991 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_vallocz00_bglt) BgL_o1294z00_5534)));
									BgL_arg1817z00_5990 = BgL_res2327z00_5991;
								}
								BgL_arg1816z00_5989 = (BgL_arg1817z00_5990 - OBJECT_TYPE);
							}
							BgL_arg2036z00_5988 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5989);
						}
						BgL_arg2035z00_5987 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2036z00_5988);
					}
					{	/* Cfa/cinfo3.scm 46 */
						long BgL_res2329z00_5992;

						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL_tmpz00_8954;

							BgL_tmpz00_8954 = ((obj_t) BgL_arg2035z00_5987);
							BgL_res2329z00_5992 = BGL_CLASS_INDEX(BgL_tmpz00_8954);
						}
						BgL_arg2034z00_5986 = BgL_res2329z00_5992;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_vallocz00_bglt) BgL_o1294z00_5534)), BgL_arg2034z00_5986);
			}
			{	/* Cfa/cinfo3.scm 46 */
				BgL_objectz00_bglt BgL_tmpz00_8960;

				BgL_tmpz00_8960 =
					((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_o1294z00_5534));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8960, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_o1294z00_5534));
			return ((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1294z00_5534));
		}

	}



/* &<@anonymous:2032> */
	obj_t BGl_z62zc3z04anonymousza32032ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5535,
		obj_t BgL_new1293z00_5536)
	{
		{	/* Cfa/cinfo3.scm 46 */
			{
				BgL_vallocz00_bglt BgL_auxz00_8968;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vallocz00_bglt) BgL_new1293z00_5536))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_8972;

					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_classz00_5994;

						BgL_classz00_5994 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL__ortest_1106z00_5995;

							BgL__ortest_1106z00_5995 = BGL_CLASS_NIL(BgL_classz00_5994);
							if (CBOOL(BgL__ortest_1106z00_5995))
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_8972 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5995);
								}
							else
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_8972 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5994));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vallocz00_bglt) BgL_new1293z00_5536))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_8972), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_vallocz00_bglt) BgL_new1293z00_5536))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_vallocz00_bglt)
										BgL_new1293z00_5536))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1293z00_5536))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1293z00_5536))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_vallocz00_bglt)
										BgL_new1293z00_5536))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_8997;

					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_classz00_5996;

						BgL_classz00_5996 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL__ortest_1106z00_5997;

							BgL__ortest_1106z00_5997 = BGL_CLASS_NIL(BgL_classz00_5996);
							if (CBOOL(BgL__ortest_1106z00_5997))
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_8997 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5997);
								}
							else
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_8997 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5996));
								}
						}
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_new1293z00_5536))))->
							BgL_ftypez00) = ((BgL_typez00_bglt) BgL_auxz00_8997), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_9007;

					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_classz00_5998;

						BgL_classz00_5998 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL__ortest_1106z00_5999;

							BgL__ortest_1106z00_5999 = BGL_CLASS_NIL(BgL_classz00_5998);
							if (CBOOL(BgL__ortest_1106z00_5999))
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_9007 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_5999);
								}
							else
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_9007 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_5998));
								}
						}
					}
					((((BgL_vallocz00_bglt) COBJECT(
									((BgL_vallocz00_bglt)
										((BgL_vallocz00_bglt) BgL_new1293z00_5536))))->
							BgL_otypez00) = ((BgL_typez00_bglt) BgL_auxz00_9007), BUNSPEC);
				}
				{
					BgL_variablez00_bglt BgL_auxz00_9024;
					BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_9017;

					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_classz00_6000;

						BgL_classz00_6000 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo3.scm 46 */
							obj_t BgL__ortest_1106z00_6001;

							BgL__ortest_1106z00_6001 = BGL_CLASS_NIL(BgL_classz00_6000);
							if (CBOOL(BgL__ortest_1106z00_6001))
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_9024 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_6001);
								}
							else
								{	/* Cfa/cinfo3.scm 46 */
									BgL_auxz00_9024 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6000));
								}
						}
					}
					{
						obj_t BgL_auxz00_9018;

						{	/* Cfa/cinfo3.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_9019;

							BgL_tmpz00_9019 =
								((BgL_objectz00_bglt)
								((BgL_vallocz00_bglt) BgL_new1293z00_5536));
							BgL_auxz00_9018 = BGL_OBJECT_WIDENING(BgL_tmpz00_9019);
						}
						BgL_auxz00_9017 =
							((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_9018);
					}
					((((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_9017))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_9024), BUNSPEC);
				}
				BgL_auxz00_8968 = ((BgL_vallocz00_bglt) BgL_new1293z00_5536);
				return ((obj_t) BgL_auxz00_8968);
			}
		}

	}



/* &lambda2029 */
	BgL_vallocz00_bglt BGl_z62lambda2029z62zzcfa_info3z00(obj_t BgL_envz00_5537,
		obj_t BgL_o1290z00_5538)
	{
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_prezd2valloczf2cinfoz20_bglt BgL_wide1292z00_6003;

				BgL_wide1292z00_6003 =
					((BgL_prezd2valloczf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2valloczf2cinfoz20_bgl))));
				{	/* Cfa/cinfo3.scm 46 */
					obj_t BgL_auxz00_9039;
					BgL_objectz00_bglt BgL_tmpz00_9035;

					BgL_auxz00_9039 = ((obj_t) BgL_wide1292z00_6003);
					BgL_tmpz00_9035 =
						((BgL_objectz00_bglt)
						((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1290z00_5538)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9035, BgL_auxz00_9039);
				}
				((BgL_objectz00_bglt)
					((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1290z00_5538)));
				{	/* Cfa/cinfo3.scm 46 */
					long BgL_arg2031z00_6004;

					{	/* Cfa/cinfo3.scm 46 */
						long BgL_res2326z00_6005;

						BgL_res2326z00_6005 =
							BGL_CLASS_INDEX(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
						BgL_arg2031z00_6004 = BgL_res2326z00_6005;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vallocz00_bglt)
								((BgL_vallocz00_bglt) BgL_o1290z00_5538))),
						BgL_arg2031z00_6004);
				}
				return
					((BgL_vallocz00_bglt)
					((BgL_vallocz00_bglt) ((BgL_vallocz00_bglt) BgL_o1290z00_5538)));
			}
		}

	}



/* &lambda2024 */
	BgL_vallocz00_bglt BGl_z62lambda2024z62zzcfa_info3z00(obj_t BgL_envz00_5539,
		obj_t BgL_loc1280z00_5540, obj_t BgL_type1281z00_5541,
		obj_t BgL_sidezd2effect1282zd2_5542, obj_t BgL_key1283z00_5543,
		obj_t BgL_exprza21284za2_5544, obj_t BgL_effect1285z00_5545,
		obj_t BgL_czd2format1286zd2_5546, obj_t BgL_ftype1287z00_5547,
		obj_t BgL_otype1288z00_5548, obj_t BgL_owner1289z00_5549)
	{
		{	/* Cfa/cinfo3.scm 46 */
			{	/* Cfa/cinfo3.scm 46 */
				BgL_vallocz00_bglt BgL_new1429z00_6012;

				{	/* Cfa/cinfo3.scm 46 */
					BgL_vallocz00_bglt BgL_tmp1427z00_6013;
					BgL_prezd2valloczf2cinfoz20_bglt BgL_wide1428z00_6014;

					{
						BgL_vallocz00_bglt BgL_auxz00_9053;

						{	/* Cfa/cinfo3.scm 46 */
							BgL_vallocz00_bglt BgL_new1426z00_6015;

							BgL_new1426z00_6015 =
								((BgL_vallocz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vallocz00_bgl))));
							{	/* Cfa/cinfo3.scm 46 */
								long BgL_arg2028z00_6016;

								{	/* Cfa/cinfo3.scm 46 */
									long BgL_res2324z00_6017;

									BgL_res2324z00_6017 =
										BGL_CLASS_INDEX(BGl_vallocz00zzast_nodez00);
									BgL_arg2028z00_6016 = BgL_res2324z00_6017;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1426z00_6015),
									BgL_arg2028z00_6016);
							}
							{	/* Cfa/cinfo3.scm 46 */
								BgL_objectz00_bglt BgL_tmpz00_9058;

								BgL_tmpz00_9058 = ((BgL_objectz00_bglt) BgL_new1426z00_6015);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9058, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1426z00_6015);
							BgL_auxz00_9053 = BgL_new1426z00_6015;
						}
						BgL_tmp1427z00_6013 = ((BgL_vallocz00_bglt) BgL_auxz00_9053);
					}
					BgL_wide1428z00_6014 =
						((BgL_prezd2valloczf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2valloczf2cinfoz20_bgl))));
					{	/* Cfa/cinfo3.scm 46 */
						obj_t BgL_auxz00_9066;
						BgL_objectz00_bglt BgL_tmpz00_9064;

						BgL_auxz00_9066 = ((obj_t) BgL_wide1428z00_6014);
						BgL_tmpz00_9064 = ((BgL_objectz00_bglt) BgL_tmp1427z00_6013);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9064, BgL_auxz00_9066);
					}
					((BgL_objectz00_bglt) BgL_tmp1427z00_6013);
					{	/* Cfa/cinfo3.scm 46 */
						long BgL_arg2026z00_6018;

						{	/* Cfa/cinfo3.scm 46 */
							long BgL_res2325z00_6019;

							BgL_res2325z00_6019 =
								BGL_CLASS_INDEX(BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00);
							BgL_arg2026z00_6018 = BgL_res2325z00_6019;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1427z00_6013), BgL_arg2026z00_6018);
					}
					BgL_new1429z00_6012 = ((BgL_vallocz00_bglt) BgL_tmp1427z00_6013);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1429z00_6012)))->BgL_locz00) =
					((obj_t) BgL_loc1280z00_5540), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1429z00_6012)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1281z00_5541)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1429z00_6012)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1282zd2_5542), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1429z00_6012)))->BgL_keyz00) =
					((obj_t) BgL_key1283z00_5543), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1429z00_6012)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21284za2_5544)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1429z00_6012)))->BgL_effectz00) =
					((obj_t) BgL_effect1285z00_5545), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1429z00_6012)))->BgL_czd2formatzd2) =
					((obj_t) ((obj_t) BgL_czd2format1286zd2_5546)), BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1429z00_6012)))->BgL_ftypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ftype1287z00_5547)),
					BUNSPEC);
				((((BgL_vallocz00_bglt) COBJECT(((BgL_vallocz00_bglt)
									BgL_new1429z00_6012)))->BgL_otypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_otype1288z00_5548)),
					BUNSPEC);
				{
					BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_9097;

					{
						obj_t BgL_auxz00_9098;

						{	/* Cfa/cinfo3.scm 46 */
							BgL_objectz00_bglt BgL_tmpz00_9099;

							BgL_tmpz00_9099 = ((BgL_objectz00_bglt) BgL_new1429z00_6012);
							BgL_auxz00_9098 = BGL_OBJECT_WIDENING(BgL_tmpz00_9099);
						}
						BgL_auxz00_9097 =
							((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_9098);
					}
					((((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_9097))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
								BgL_owner1289z00_5549)), BUNSPEC);
				}
				return BgL_new1429z00_6012;
			}
		}

	}



/* &lambda2041 */
	obj_t BGl_z62lambda2041z62zzcfa_info3z00(obj_t BgL_envz00_5550,
		obj_t BgL_oz00_5551, obj_t BgL_vz00_5552)
	{
		{	/* Cfa/cinfo3.scm 46 */
			{
				BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_9105;

				{
					obj_t BgL_auxz00_9106;

					{	/* Cfa/cinfo3.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_9107;

						BgL_tmpz00_9107 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5551));
						BgL_auxz00_9106 = BGL_OBJECT_WIDENING(BgL_tmpz00_9107);
					}
					BgL_auxz00_9105 =
						((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_9106);
				}
				return
					((((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_9105))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_5552)),
					BUNSPEC);
			}
		}

	}



/* &lambda2040 */
	BgL_variablez00_bglt BGl_z62lambda2040z62zzcfa_info3z00(obj_t BgL_envz00_5553,
		obj_t BgL_oz00_5554)
	{
		{	/* Cfa/cinfo3.scm 46 */
			{
				BgL_prezd2valloczf2cinfoz20_bglt BgL_auxz00_9114;

				{
					obj_t BgL_auxz00_9115;

					{	/* Cfa/cinfo3.scm 46 */
						BgL_objectz00_bglt BgL_tmpz00_9116;

						BgL_tmpz00_9116 =
							((BgL_objectz00_bglt) ((BgL_vallocz00_bglt) BgL_oz00_5554));
						BgL_auxz00_9115 = BGL_OBJECT_WIDENING(BgL_tmpz00_9116);
					}
					BgL_auxz00_9114 =
						((BgL_prezd2valloczf2cinfoz20_bglt) BgL_auxz00_9115);
				}
				return
					(((BgL_prezd2valloczf2cinfoz20_bglt) COBJECT(BgL_auxz00_9114))->
					BgL_ownerz00);
			}
		}

	}



/* &lambda2000 */
	BgL_vlengthz00_bglt BGl_z62lambda2000z62zzcfa_info3z00(obj_t BgL_envz00_5555,
		obj_t BgL_o1278z00_5556)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{	/* Cfa/cinfo3.scm 41 */
				long BgL_arg2001z00_6024;

				{	/* Cfa/cinfo3.scm 41 */
					obj_t BgL_arg2002z00_6025;

					{	/* Cfa/cinfo3.scm 41 */
						obj_t BgL_arg2003z00_6026;

						{	/* Cfa/cinfo3.scm 41 */
							long BgL_arg1816z00_6027;

							{	/* Cfa/cinfo3.scm 41 */
								long BgL_arg1817z00_6028;

								{	/* Cfa/cinfo3.scm 41 */
									long BgL_res2321z00_6029;

									BgL_res2321z00_6029 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_vlengthz00_bglt) BgL_o1278z00_5556)));
									BgL_arg1817z00_6028 = BgL_res2321z00_6029;
								}
								BgL_arg1816z00_6027 = (BgL_arg1817z00_6028 - OBJECT_TYPE);
							}
							BgL_arg2003z00_6026 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6027);
						}
						BgL_arg2002z00_6025 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2003z00_6026);
					}
					{	/* Cfa/cinfo3.scm 41 */
						long BgL_res2323z00_6030;

						{	/* Cfa/cinfo3.scm 41 */
							obj_t BgL_tmpz00_9128;

							BgL_tmpz00_9128 = ((obj_t) BgL_arg2002z00_6025);
							BgL_res2323z00_6030 = BGL_CLASS_INDEX(BgL_tmpz00_9128);
						}
						BgL_arg2001z00_6024 = BgL_res2323z00_6030;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_vlengthz00_bglt) BgL_o1278z00_5556)), BgL_arg2001z00_6024);
			}
			{	/* Cfa/cinfo3.scm 41 */
				BgL_objectz00_bglt BgL_tmpz00_9134;

				BgL_tmpz00_9134 =
					((BgL_objectz00_bglt) ((BgL_vlengthz00_bglt) BgL_o1278z00_5556));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9134, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_vlengthz00_bglt) BgL_o1278z00_5556));
			return ((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_o1278z00_5556));
		}

	}



/* &<@anonymous:1999> */
	obj_t BGl_z62zc3z04anonymousza31999ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5557,
		obj_t BgL_new1277z00_5558)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{
				BgL_vlengthz00_bglt BgL_auxz00_9142;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vlengthz00_bglt) BgL_new1277z00_5558))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9146;

					{	/* Cfa/cinfo3.scm 41 */
						obj_t BgL_classz00_6032;

						BgL_classz00_6032 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 41 */
							obj_t BgL__ortest_1106z00_6033;

							BgL__ortest_1106z00_6033 = BGL_CLASS_NIL(BgL_classz00_6032);
							if (CBOOL(BgL__ortest_1106z00_6033))
								{	/* Cfa/cinfo3.scm 41 */
									BgL_auxz00_9146 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6033);
								}
							else
								{	/* Cfa/cinfo3.scm 41 */
									BgL_auxz00_9146 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6032));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vlengthz00_bglt) BgL_new1277z00_5558))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_9146), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_vlengthz00_bglt) BgL_new1277z00_5558))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_vlengthz00_bglt)
										BgL_new1277z00_5558))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vlengthz00_bglt)
										BgL_new1277z00_5558))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vlengthz00_bglt)
										BgL_new1277z00_5558))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_vlengthz00_bglt)
										BgL_new1277z00_5558))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9171;

					{	/* Cfa/cinfo3.scm 41 */
						obj_t BgL_classz00_6034;

						BgL_classz00_6034 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 41 */
							obj_t BgL__ortest_1106z00_6035;

							BgL__ortest_1106z00_6035 = BGL_CLASS_NIL(BgL_classz00_6034);
							if (CBOOL(BgL__ortest_1106z00_6035))
								{	/* Cfa/cinfo3.scm 41 */
									BgL_auxz00_9171 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6035);
								}
							else
								{	/* Cfa/cinfo3.scm 41 */
									BgL_auxz00_9171 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6034));
								}
						}
					}
					((((BgL_vlengthz00_bglt) COBJECT(
									((BgL_vlengthz00_bglt)
										((BgL_vlengthz00_bglt) BgL_new1277z00_5558))))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_9171), BUNSPEC);
				}
				((((BgL_vlengthz00_bglt) COBJECT(
								((BgL_vlengthz00_bglt)
									((BgL_vlengthz00_bglt) BgL_new1277z00_5558))))->
						BgL_ftypez00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_9191;
					BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9184;

					{	/* Cfa/cinfo3.scm 41 */
						obj_t BgL_classz00_6036;

						BgL_classz00_6036 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 41 */
							obj_t BgL__ortest_1106z00_6037;

							BgL__ortest_1106z00_6037 = BGL_CLASS_NIL(BgL_classz00_6036);
							if (CBOOL(BgL__ortest_1106z00_6037))
								{	/* Cfa/cinfo3.scm 41 */
									BgL_auxz00_9191 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6037);
								}
							else
								{	/* Cfa/cinfo3.scm 41 */
									BgL_auxz00_9191 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6036));
								}
						}
					}
					{
						obj_t BgL_auxz00_9185;

						{	/* Cfa/cinfo3.scm 41 */
							BgL_objectz00_bglt BgL_tmpz00_9186;

							BgL_tmpz00_9186 =
								((BgL_objectz00_bglt)
								((BgL_vlengthz00_bglt) BgL_new1277z00_5558));
							BgL_auxz00_9185 = BGL_OBJECT_WIDENING(BgL_tmpz00_9186);
						}
						BgL_auxz00_9184 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9185);
					}
					((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9184))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_9191), BUNSPEC);
				}
				{
					BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9199;

					{
						obj_t BgL_auxz00_9200;

						{	/* Cfa/cinfo3.scm 41 */
							BgL_objectz00_bglt BgL_tmpz00_9201;

							BgL_tmpz00_9201 =
								((BgL_objectz00_bglt)
								((BgL_vlengthz00_bglt) BgL_new1277z00_5558));
							BgL_auxz00_9200 = BGL_OBJECT_WIDENING(BgL_tmpz00_9201);
						}
						BgL_auxz00_9199 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9200);
					}
					((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9199))->
							BgL_tvectorzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_9142 = ((BgL_vlengthz00_bglt) BgL_new1277z00_5558);
				return ((obj_t) BgL_auxz00_9142);
			}
		}

	}



/* &lambda1997 */
	BgL_vlengthz00_bglt BGl_z62lambda1997z62zzcfa_info3z00(obj_t BgL_envz00_5559,
		obj_t BgL_o1274z00_5560)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{	/* Cfa/cinfo3.scm 41 */
				BgL_vlengthzf2cinfozf2_bglt BgL_wide1276z00_6039;

				BgL_wide1276z00_6039 =
					((BgL_vlengthzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_vlengthzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 41 */
					obj_t BgL_auxz00_9214;
					BgL_objectz00_bglt BgL_tmpz00_9210;

					BgL_auxz00_9214 = ((obj_t) BgL_wide1276z00_6039);
					BgL_tmpz00_9210 =
						((BgL_objectz00_bglt)
						((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_o1274z00_5560)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9210, BgL_auxz00_9214);
				}
				((BgL_objectz00_bglt)
					((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_o1274z00_5560)));
				{	/* Cfa/cinfo3.scm 41 */
					long BgL_arg1998z00_6040;

					{	/* Cfa/cinfo3.scm 41 */
						long BgL_res2320z00_6041;

						BgL_res2320z00_6041 =
							BGL_CLASS_INDEX(BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1998z00_6040 = BgL_res2320z00_6041;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vlengthz00_bglt)
								((BgL_vlengthz00_bglt) BgL_o1274z00_5560))),
						BgL_arg1998z00_6040);
				}
				return
					((BgL_vlengthz00_bglt)
					((BgL_vlengthz00_bglt) ((BgL_vlengthz00_bglt) BgL_o1274z00_5560)));
			}
		}

	}



/* &lambda1993 */
	BgL_vlengthz00_bglt BGl_z62lambda1993z62zzcfa_info3z00(obj_t BgL_envz00_5561,
		obj_t BgL_loc1263z00_5562, obj_t BgL_type1264z00_5563,
		obj_t BgL_sidezd2effect1265zd2_5564, obj_t BgL_key1266z00_5565,
		obj_t BgL_exprza21267za2_5566, obj_t BgL_effect1268z00_5567,
		obj_t BgL_czd2format1269zd2_5568, obj_t BgL_vtype1270z00_5569,
		obj_t BgL_ftype1271z00_5570, obj_t BgL_approx1272z00_5571,
		obj_t BgL_tvectorzf31273zf3_5572)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{	/* Cfa/cinfo3.scm 41 */
				bool_t BgL_tvectorzf31273zf3_6047;

				BgL_tvectorzf31273zf3_6047 = CBOOL(BgL_tvectorzf31273zf3_5572);
				{	/* Cfa/cinfo3.scm 41 */
					BgL_vlengthz00_bglt BgL_new1424z00_6048;

					{	/* Cfa/cinfo3.scm 41 */
						BgL_vlengthz00_bglt BgL_tmp1422z00_6049;
						BgL_vlengthzf2cinfozf2_bglt BgL_wide1423z00_6050;

						{
							BgL_vlengthz00_bglt BgL_auxz00_9229;

							{	/* Cfa/cinfo3.scm 41 */
								BgL_vlengthz00_bglt BgL_new1421z00_6051;

								BgL_new1421z00_6051 =
									((BgL_vlengthz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_vlengthz00_bgl))));
								{	/* Cfa/cinfo3.scm 41 */
									long BgL_arg1996z00_6052;

									{	/* Cfa/cinfo3.scm 41 */
										long BgL_res2318z00_6053;

										BgL_res2318z00_6053 =
											BGL_CLASS_INDEX(BGl_vlengthz00zzast_nodez00);
										BgL_arg1996z00_6052 = BgL_res2318z00_6053;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1421z00_6051),
										BgL_arg1996z00_6052);
								}
								{	/* Cfa/cinfo3.scm 41 */
									BgL_objectz00_bglt BgL_tmpz00_9234;

									BgL_tmpz00_9234 = ((BgL_objectz00_bglt) BgL_new1421z00_6051);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9234, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1421z00_6051);
								BgL_auxz00_9229 = BgL_new1421z00_6051;
							}
							BgL_tmp1422z00_6049 = ((BgL_vlengthz00_bglt) BgL_auxz00_9229);
						}
						BgL_wide1423z00_6050 =
							((BgL_vlengthzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_vlengthzf2cinfozf2_bgl))));
						{	/* Cfa/cinfo3.scm 41 */
							obj_t BgL_auxz00_9242;
							BgL_objectz00_bglt BgL_tmpz00_9240;

							BgL_auxz00_9242 = ((obj_t) BgL_wide1423z00_6050);
							BgL_tmpz00_9240 = ((BgL_objectz00_bglt) BgL_tmp1422z00_6049);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9240, BgL_auxz00_9242);
						}
						((BgL_objectz00_bglt) BgL_tmp1422z00_6049);
						{	/* Cfa/cinfo3.scm 41 */
							long BgL_arg1995z00_6054;

							{	/* Cfa/cinfo3.scm 41 */
								long BgL_res2319z00_6055;

								BgL_res2319z00_6055 =
									BGL_CLASS_INDEX(BGl_vlengthzf2Cinfozf2zzcfa_info3z00);
								BgL_arg1995z00_6054 = BgL_res2319z00_6055;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1422z00_6049),
								BgL_arg1995z00_6054);
						}
						BgL_new1424z00_6048 = ((BgL_vlengthz00_bglt) BgL_tmp1422z00_6049);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1424z00_6048)))->BgL_locz00) =
						((obj_t) BgL_loc1263z00_5562), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1424z00_6048)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1264z00_5563)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1424z00_6048)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1265zd2_5564), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1424z00_6048)))->BgL_keyz00) =
						((obj_t) BgL_key1266z00_5565), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1424z00_6048)))->BgL_exprza2za2) =
						((obj_t) ((obj_t) BgL_exprza21267za2_5566)), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1424z00_6048)))->BgL_effectz00) =
						((obj_t) BgL_effect1268z00_5567), BUNSPEC);
					((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
										BgL_new1424z00_6048)))->BgL_czd2formatzd2) =
						((obj_t) ((obj_t) BgL_czd2format1269zd2_5568)), BUNSPEC);
					((((BgL_vlengthz00_bglt) COBJECT(((BgL_vlengthz00_bglt)
										BgL_new1424z00_6048)))->BgL_vtypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vtype1270z00_5569)),
						BUNSPEC);
					((((BgL_vlengthz00_bglt) COBJECT(((BgL_vlengthz00_bglt)
										BgL_new1424z00_6048)))->BgL_ftypez00) =
						((obj_t) BgL_ftype1271z00_5570), BUNSPEC);
					{
						BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9272;

						{
							obj_t BgL_auxz00_9273;

							{	/* Cfa/cinfo3.scm 41 */
								BgL_objectz00_bglt BgL_tmpz00_9274;

								BgL_tmpz00_9274 = ((BgL_objectz00_bglt) BgL_new1424z00_6048);
								BgL_auxz00_9273 = BGL_OBJECT_WIDENING(BgL_tmpz00_9274);
							}
							BgL_auxz00_9272 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9273);
						}
						((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9272))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1272z00_5571)), BUNSPEC);
					}
					{
						BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9280;

						{
							obj_t BgL_auxz00_9281;

							{	/* Cfa/cinfo3.scm 41 */
								BgL_objectz00_bglt BgL_tmpz00_9282;

								BgL_tmpz00_9282 = ((BgL_objectz00_bglt) BgL_new1424z00_6048);
								BgL_auxz00_9281 = BGL_OBJECT_WIDENING(BgL_tmpz00_9282);
							}
							BgL_auxz00_9280 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9281);
						}
						((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9280))->
								BgL_tvectorzf3zf3) =
							((bool_t) BgL_tvectorzf31273zf3_6047), BUNSPEC);
					}
					return BgL_new1424z00_6048;
				}
			}
		}

	}



/* &<@anonymous:2016> */
	obj_t BGl_z62zc3z04anonymousza32016ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5573)
	{
		{	/* Cfa/cinfo3.scm 41 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2015 */
	obj_t BGl_z62lambda2015z62zzcfa_info3z00(obj_t BgL_envz00_5574,
		obj_t BgL_oz00_5575, obj_t BgL_vz00_5576)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{	/* Cfa/cinfo3.scm 41 */
				bool_t BgL_vz00_6057;

				BgL_vz00_6057 = CBOOL(BgL_vz00_5576);
				{
					BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9289;

					{
						obj_t BgL_auxz00_9290;

						{	/* Cfa/cinfo3.scm 41 */
							BgL_objectz00_bglt BgL_tmpz00_9291;

							BgL_tmpz00_9291 =
								((BgL_objectz00_bglt) ((BgL_vlengthz00_bglt) BgL_oz00_5575));
							BgL_auxz00_9290 = BGL_OBJECT_WIDENING(BgL_tmpz00_9291);
						}
						BgL_auxz00_9289 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9290);
					}
					return
						((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9289))->
							BgL_tvectorzf3zf3) = ((bool_t) BgL_vz00_6057), BUNSPEC);
				}
			}
		}

	}



/* &lambda2014 */
	obj_t BGl_z62lambda2014z62zzcfa_info3z00(obj_t BgL_envz00_5577,
		obj_t BgL_oz00_5578)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{	/* Cfa/cinfo3.scm 41 */
				bool_t BgL_tmpz00_9297;

				{
					BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9298;

					{
						obj_t BgL_auxz00_9299;

						{	/* Cfa/cinfo3.scm 41 */
							BgL_objectz00_bglt BgL_tmpz00_9300;

							BgL_tmpz00_9300 =
								((BgL_objectz00_bglt) ((BgL_vlengthz00_bglt) BgL_oz00_5578));
							BgL_auxz00_9299 = BGL_OBJECT_WIDENING(BgL_tmpz00_9300);
						}
						BgL_auxz00_9298 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9299);
					}
					BgL_tmpz00_9297 =
						(((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9298))->
						BgL_tvectorzf3zf3);
				}
				return BBOOL(BgL_tmpz00_9297);
			}
		}

	}



/* &lambda2009 */
	obj_t BGl_z62lambda2009z62zzcfa_info3z00(obj_t BgL_envz00_5579,
		obj_t BgL_oz00_5580, obj_t BgL_vz00_5581)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9307;

				{
					obj_t BgL_auxz00_9308;

					{	/* Cfa/cinfo3.scm 41 */
						BgL_objectz00_bglt BgL_tmpz00_9309;

						BgL_tmpz00_9309 =
							((BgL_objectz00_bglt) ((BgL_vlengthz00_bglt) BgL_oz00_5580));
						BgL_auxz00_9308 = BGL_OBJECT_WIDENING(BgL_tmpz00_9309);
					}
					BgL_auxz00_9307 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9308);
				}
				return
					((((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9307))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5581)), BUNSPEC);
			}
		}

	}



/* &lambda2008 */
	BgL_approxz00_bglt BGl_z62lambda2008z62zzcfa_info3z00(obj_t BgL_envz00_5582,
		obj_t BgL_oz00_5583)
	{
		{	/* Cfa/cinfo3.scm 41 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_auxz00_9316;

				{
					obj_t BgL_auxz00_9317;

					{	/* Cfa/cinfo3.scm 41 */
						BgL_objectz00_bglt BgL_tmpz00_9318;

						BgL_tmpz00_9318 =
							((BgL_objectz00_bglt) ((BgL_vlengthz00_bglt) BgL_oz00_5583));
						BgL_auxz00_9317 = BGL_OBJECT_WIDENING(BgL_tmpz00_9318);
					}
					BgL_auxz00_9316 = ((BgL_vlengthzf2cinfozf2_bglt) BgL_auxz00_9317);
				}
				return
					(((BgL_vlengthzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9316))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1971 */
	BgL_vsetz12z12_bglt BGl_z62lambda1971z62zzcfa_info3z00(obj_t BgL_envz00_5584,
		obj_t BgL_o1261z00_5585)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{	/* Cfa/cinfo3.scm 38 */
				long BgL_arg1972z00_6063;

				{	/* Cfa/cinfo3.scm 38 */
					obj_t BgL_arg1973z00_6064;

					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_arg1974z00_6065;

						{	/* Cfa/cinfo3.scm 38 */
							long BgL_arg1816z00_6066;

							{	/* Cfa/cinfo3.scm 38 */
								long BgL_arg1817z00_6067;

								{	/* Cfa/cinfo3.scm 38 */
									long BgL_res2315z00_6068;

									BgL_res2315z00_6068 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_vsetz12z12_bglt) BgL_o1261z00_5585)));
									BgL_arg1817z00_6067 = BgL_res2315z00_6068;
								}
								BgL_arg1816z00_6066 = (BgL_arg1817z00_6067 - OBJECT_TYPE);
							}
							BgL_arg1974z00_6065 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6066);
						}
						BgL_arg1973z00_6064 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1974z00_6065);
					}
					{	/* Cfa/cinfo3.scm 38 */
						long BgL_res2317z00_6069;

						{	/* Cfa/cinfo3.scm 38 */
							obj_t BgL_tmpz00_9330;

							BgL_tmpz00_9330 = ((obj_t) BgL_arg1973z00_6064);
							BgL_res2317z00_6069 = BGL_CLASS_INDEX(BgL_tmpz00_9330);
						}
						BgL_arg1972z00_6063 = BgL_res2317z00_6069;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_vsetz12z12_bglt) BgL_o1261z00_5585)), BgL_arg1972z00_6063);
			}
			{	/* Cfa/cinfo3.scm 38 */
				BgL_objectz00_bglt BgL_tmpz00_9336;

				BgL_tmpz00_9336 =
					((BgL_objectz00_bglt) ((BgL_vsetz12z12_bglt) BgL_o1261z00_5585));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9336, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_vsetz12z12_bglt) BgL_o1261z00_5585));
			return ((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_o1261z00_5585));
		}

	}



/* &<@anonymous:1970> */
	obj_t BGl_z62zc3z04anonymousza31970ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5586,
		obj_t BgL_new1260z00_5587)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{
				BgL_vsetz12z12_bglt BgL_auxz00_9344;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vsetz12z12_bglt) BgL_new1260z00_5587))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9348;

					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_classz00_6071;

						BgL_classz00_6071 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 38 */
							obj_t BgL__ortest_1106z00_6072;

							BgL__ortest_1106z00_6072 = BGL_CLASS_NIL(BgL_classz00_6071);
							if (CBOOL(BgL__ortest_1106z00_6072))
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9348 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6072);
								}
							else
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9348 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6071));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vsetz12z12_bglt) BgL_new1260z00_5587))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_9348), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_vsetz12z12_bglt) BgL_new1260z00_5587))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_vsetz12z12_bglt)
										BgL_new1260z00_5587))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vsetz12z12_bglt)
										BgL_new1260z00_5587))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vsetz12z12_bglt)
										BgL_new1260z00_5587))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_vsetz12z12_bglt)
										BgL_new1260z00_5587))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9373;

					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_classz00_6073;

						BgL_classz00_6073 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 38 */
							obj_t BgL__ortest_1106z00_6074;

							BgL__ortest_1106z00_6074 = BGL_CLASS_NIL(BgL_classz00_6073);
							if (CBOOL(BgL__ortest_1106z00_6074))
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9373 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6074);
								}
							else
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9373 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6073));
								}
						}
					}
					((((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt)
										((BgL_vsetz12z12_bglt) BgL_new1260z00_5587))))->
							BgL_ftypez00) = ((BgL_typez00_bglt) BgL_auxz00_9373), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_9383;

					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_classz00_6075;

						BgL_classz00_6075 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 38 */
							obj_t BgL__ortest_1106z00_6076;

							BgL__ortest_1106z00_6076 = BGL_CLASS_NIL(BgL_classz00_6075);
							if (CBOOL(BgL__ortest_1106z00_6076))
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9383 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6076);
								}
							else
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9383 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6075));
								}
						}
					}
					((((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt)
										((BgL_vsetz12z12_bglt) BgL_new1260z00_5587))))->
							BgL_otypez00) = ((BgL_typez00_bglt) BgL_auxz00_9383), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_9393;

					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_classz00_6077;

						BgL_classz00_6077 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 38 */
							obj_t BgL__ortest_1106z00_6078;

							BgL__ortest_1106z00_6078 = BGL_CLASS_NIL(BgL_classz00_6077);
							if (CBOOL(BgL__ortest_1106z00_6078))
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9393 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6078);
								}
							else
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9393 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6077));
								}
						}
					}
					((((BgL_vsetz12z12_bglt) COBJECT(
									((BgL_vsetz12z12_bglt)
										((BgL_vsetz12z12_bglt) BgL_new1260z00_5587))))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_9393), BUNSPEC);
				}
				((((BgL_vsetz12z12_bglt) COBJECT(
								((BgL_vsetz12z12_bglt)
									((BgL_vsetz12z12_bglt) BgL_new1260z00_5587))))->
						BgL_unsafez00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_9413;
					BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9406;

					{	/* Cfa/cinfo3.scm 38 */
						obj_t BgL_classz00_6079;

						BgL_classz00_6079 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 38 */
							obj_t BgL__ortest_1106z00_6080;

							BgL__ortest_1106z00_6080 = BGL_CLASS_NIL(BgL_classz00_6079);
							if (CBOOL(BgL__ortest_1106z00_6080))
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9413 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6080);
								}
							else
								{	/* Cfa/cinfo3.scm 38 */
									BgL_auxz00_9413 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6079));
								}
						}
					}
					{
						obj_t BgL_auxz00_9407;

						{	/* Cfa/cinfo3.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_9408;

							BgL_tmpz00_9408 =
								((BgL_objectz00_bglt)
								((BgL_vsetz12z12_bglt) BgL_new1260z00_5587));
							BgL_auxz00_9407 = BGL_OBJECT_WIDENING(BgL_tmpz00_9408);
						}
						BgL_auxz00_9406 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9407);
					}
					((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9406))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_9413), BUNSPEC);
				}
				{
					BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9421;

					{
						obj_t BgL_auxz00_9422;

						{	/* Cfa/cinfo3.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_9423;

							BgL_tmpz00_9423 =
								((BgL_objectz00_bglt)
								((BgL_vsetz12z12_bglt) BgL_new1260z00_5587));
							BgL_auxz00_9422 = BGL_OBJECT_WIDENING(BgL_tmpz00_9423);
						}
						BgL_auxz00_9421 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9422);
					}
					((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9421))->
							BgL_tvectorzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_9344 = ((BgL_vsetz12z12_bglt) BgL_new1260z00_5587);
				return ((obj_t) BgL_auxz00_9344);
			}
		}

	}



/* &lambda1968 */
	BgL_vsetz12z12_bglt BGl_z62lambda1968z62zzcfa_info3z00(obj_t BgL_envz00_5588,
		obj_t BgL_o1257z00_5589)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{	/* Cfa/cinfo3.scm 38 */
				BgL_vsetz12zf2cinfoze0_bglt BgL_wide1259z00_6082;

				BgL_wide1259z00_6082 =
					((BgL_vsetz12zf2cinfoze0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_vsetz12zf2cinfoze0_bgl))));
				{	/* Cfa/cinfo3.scm 38 */
					obj_t BgL_auxz00_9436;
					BgL_objectz00_bglt BgL_tmpz00_9432;

					BgL_auxz00_9436 = ((obj_t) BgL_wide1259z00_6082);
					BgL_tmpz00_9432 =
						((BgL_objectz00_bglt)
						((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_o1257z00_5589)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9432, BgL_auxz00_9436);
				}
				((BgL_objectz00_bglt)
					((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_o1257z00_5589)));
				{	/* Cfa/cinfo3.scm 38 */
					long BgL_arg1969z00_6083;

					{	/* Cfa/cinfo3.scm 38 */
						long BgL_res2314z00_6084;

						BgL_res2314z00_6084 =
							BGL_CLASS_INDEX(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
						BgL_arg1969z00_6083 = BgL_res2314z00_6084;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vsetz12z12_bglt)
								((BgL_vsetz12z12_bglt) BgL_o1257z00_5589))),
						BgL_arg1969z00_6083);
				}
				return
					((BgL_vsetz12z12_bglt)
					((BgL_vsetz12z12_bglt) ((BgL_vsetz12z12_bglt) BgL_o1257z00_5589)));
			}
		}

	}



/* &lambda1965 */
	BgL_vsetz12z12_bglt BGl_z62lambda1965z62zzcfa_info3z00(obj_t BgL_envz00_5590,
		obj_t BgL_loc1244z00_5591, obj_t BgL_type1245z00_5592,
		obj_t BgL_sidezd2effect1246zd2_5593, obj_t BgL_key1247z00_5594,
		obj_t BgL_exprza21248za2_5595, obj_t BgL_effect1249z00_5596,
		obj_t BgL_czd2format1250zd2_5597, obj_t BgL_ftype1251z00_5598,
		obj_t BgL_otype1252z00_5599, obj_t BgL_vtype1253z00_5600,
		obj_t BgL_unsafe1254z00_5601, obj_t BgL_approx1255z00_5602,
		obj_t BgL_tvectorzf31256zf3_5603)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{	/* Cfa/cinfo3.scm 38 */
				bool_t BgL_unsafe1254z00_6091;
				bool_t BgL_tvectorzf31256zf3_6093;

				BgL_unsafe1254z00_6091 = CBOOL(BgL_unsafe1254z00_5601);
				BgL_tvectorzf31256zf3_6093 = CBOOL(BgL_tvectorzf31256zf3_5603);
				{	/* Cfa/cinfo3.scm 38 */
					BgL_vsetz12z12_bglt BgL_new1419z00_6094;

					{	/* Cfa/cinfo3.scm 38 */
						BgL_vsetz12z12_bglt BgL_tmp1417z00_6095;
						BgL_vsetz12zf2cinfoze0_bglt BgL_wide1418z00_6096;

						{
							BgL_vsetz12z12_bglt BgL_auxz00_9452;

							{	/* Cfa/cinfo3.scm 38 */
								BgL_vsetz12z12_bglt BgL_new1416z00_6097;

								BgL_new1416z00_6097 =
									((BgL_vsetz12z12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_vsetz12z12_bgl))));
								{	/* Cfa/cinfo3.scm 38 */
									long BgL_arg1967z00_6098;

									{	/* Cfa/cinfo3.scm 38 */
										long BgL_res2312z00_6099;

										BgL_res2312z00_6099 =
											BGL_CLASS_INDEX(BGl_vsetz12z12zzast_nodez00);
										BgL_arg1967z00_6098 = BgL_res2312z00_6099;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1416z00_6097),
										BgL_arg1967z00_6098);
								}
								{	/* Cfa/cinfo3.scm 38 */
									BgL_objectz00_bglt BgL_tmpz00_9457;

									BgL_tmpz00_9457 = ((BgL_objectz00_bglt) BgL_new1416z00_6097);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9457, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1416z00_6097);
								BgL_auxz00_9452 = BgL_new1416z00_6097;
							}
							BgL_tmp1417z00_6095 = ((BgL_vsetz12z12_bglt) BgL_auxz00_9452);
						}
						BgL_wide1418z00_6096 =
							((BgL_vsetz12zf2cinfoze0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_vsetz12zf2cinfoze0_bgl))));
						{	/* Cfa/cinfo3.scm 38 */
							obj_t BgL_auxz00_9465;
							BgL_objectz00_bglt BgL_tmpz00_9463;

							BgL_auxz00_9465 = ((obj_t) BgL_wide1418z00_6096);
							BgL_tmpz00_9463 = ((BgL_objectz00_bglt) BgL_tmp1417z00_6095);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9463, BgL_auxz00_9465);
						}
						((BgL_objectz00_bglt) BgL_tmp1417z00_6095);
						{	/* Cfa/cinfo3.scm 38 */
							long BgL_arg1966z00_6100;

							{	/* Cfa/cinfo3.scm 38 */
								long BgL_res2313z00_6101;

								BgL_res2313z00_6101 =
									BGL_CLASS_INDEX(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00);
								BgL_arg1966z00_6100 = BgL_res2313z00_6101;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1417z00_6095),
								BgL_arg1966z00_6100);
						}
						BgL_new1419z00_6094 = ((BgL_vsetz12z12_bglt) BgL_tmp1417z00_6095);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1419z00_6094)))->BgL_locz00) =
						((obj_t) BgL_loc1244z00_5591), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1419z00_6094)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1245z00_5592)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1419z00_6094)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1246zd2_5593), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1419z00_6094)))->BgL_keyz00) =
						((obj_t) BgL_key1247z00_5594), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1419z00_6094)))->BgL_exprza2za2) =
						((obj_t) ((obj_t) BgL_exprza21248za2_5595)), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1419z00_6094)))->BgL_effectz00) =
						((obj_t) BgL_effect1249z00_5596), BUNSPEC);
					((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
										BgL_new1419z00_6094)))->BgL_czd2formatzd2) =
						((obj_t) ((obj_t) BgL_czd2format1250zd2_5597)), BUNSPEC);
					((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
										BgL_new1419z00_6094)))->BgL_ftypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ftype1251z00_5598)),
						BUNSPEC);
					((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
										BgL_new1419z00_6094)))->BgL_otypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_otype1252z00_5599)),
						BUNSPEC);
					((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
										BgL_new1419z00_6094)))->BgL_vtypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vtype1253z00_5600)),
						BUNSPEC);
					((((BgL_vsetz12z12_bglt) COBJECT(((BgL_vsetz12z12_bglt)
										BgL_new1419z00_6094)))->BgL_unsafez00) =
						((bool_t) BgL_unsafe1254z00_6091), BUNSPEC);
					{
						BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9501;

						{
							obj_t BgL_auxz00_9502;

							{	/* Cfa/cinfo3.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_9503;

								BgL_tmpz00_9503 = ((BgL_objectz00_bglt) BgL_new1419z00_6094);
								BgL_auxz00_9502 = BGL_OBJECT_WIDENING(BgL_tmpz00_9503);
							}
							BgL_auxz00_9501 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9502);
						}
						((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9501))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1255z00_5602)), BUNSPEC);
					}
					{
						BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9509;

						{
							obj_t BgL_auxz00_9510;

							{	/* Cfa/cinfo3.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_9511;

								BgL_tmpz00_9511 = ((BgL_objectz00_bglt) BgL_new1419z00_6094);
								BgL_auxz00_9510 = BGL_OBJECT_WIDENING(BgL_tmpz00_9511);
							}
							BgL_auxz00_9509 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9510);
						}
						((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9509))->
								BgL_tvectorzf3zf3) =
							((bool_t) BgL_tvectorzf31256zf3_6093), BUNSPEC);
					}
					return BgL_new1419z00_6094;
				}
			}
		}

	}



/* &<@anonymous:1986> */
	obj_t BGl_z62zc3z04anonymousza31986ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5604)
	{
		{	/* Cfa/cinfo3.scm 38 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1985 */
	obj_t BGl_z62lambda1985z62zzcfa_info3z00(obj_t BgL_envz00_5605,
		obj_t BgL_oz00_5606, obj_t BgL_vz00_5607)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{	/* Cfa/cinfo3.scm 38 */
				bool_t BgL_vz00_6103;

				BgL_vz00_6103 = CBOOL(BgL_vz00_5607);
				{
					BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9518;

					{
						obj_t BgL_auxz00_9519;

						{	/* Cfa/cinfo3.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_9520;

							BgL_tmpz00_9520 =
								((BgL_objectz00_bglt) ((BgL_vsetz12z12_bglt) BgL_oz00_5606));
							BgL_auxz00_9519 = BGL_OBJECT_WIDENING(BgL_tmpz00_9520);
						}
						BgL_auxz00_9518 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9519);
					}
					return
						((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9518))->
							BgL_tvectorzf3zf3) = ((bool_t) BgL_vz00_6103), BUNSPEC);
				}
			}
		}

	}



/* &lambda1984 */
	obj_t BGl_z62lambda1984z62zzcfa_info3z00(obj_t BgL_envz00_5608,
		obj_t BgL_oz00_5609)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{	/* Cfa/cinfo3.scm 38 */
				bool_t BgL_tmpz00_9526;

				{
					BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9527;

					{
						obj_t BgL_auxz00_9528;

						{	/* Cfa/cinfo3.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_9529;

							BgL_tmpz00_9529 =
								((BgL_objectz00_bglt) ((BgL_vsetz12z12_bglt) BgL_oz00_5609));
							BgL_auxz00_9528 = BGL_OBJECT_WIDENING(BgL_tmpz00_9529);
						}
						BgL_auxz00_9527 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9528);
					}
					BgL_tmpz00_9526 =
						(((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9527))->
						BgL_tvectorzf3zf3);
				}
				return BBOOL(BgL_tmpz00_9526);
			}
		}

	}



/* &lambda1979 */
	obj_t BGl_z62lambda1979z62zzcfa_info3z00(obj_t BgL_envz00_5610,
		obj_t BgL_oz00_5611, obj_t BgL_vz00_5612)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9536;

				{
					obj_t BgL_auxz00_9537;

					{	/* Cfa/cinfo3.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_9538;

						BgL_tmpz00_9538 =
							((BgL_objectz00_bglt) ((BgL_vsetz12z12_bglt) BgL_oz00_5611));
						BgL_auxz00_9537 = BGL_OBJECT_WIDENING(BgL_tmpz00_9538);
					}
					BgL_auxz00_9536 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9537);
				}
				return
					((((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9536))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5612)), BUNSPEC);
			}
		}

	}



/* &lambda1978 */
	BgL_approxz00_bglt BGl_z62lambda1978z62zzcfa_info3z00(obj_t BgL_envz00_5613,
		obj_t BgL_oz00_5614)
	{
		{	/* Cfa/cinfo3.scm 38 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_auxz00_9545;

				{
					obj_t BgL_auxz00_9546;

					{	/* Cfa/cinfo3.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_9547;

						BgL_tmpz00_9547 =
							((BgL_objectz00_bglt) ((BgL_vsetz12z12_bglt) BgL_oz00_5614));
						BgL_auxz00_9546 = BGL_OBJECT_WIDENING(BgL_tmpz00_9547);
					}
					BgL_auxz00_9545 = ((BgL_vsetz12zf2cinfoze0_bglt) BgL_auxz00_9546);
				}
				return
					(((BgL_vsetz12zf2cinfoze0_bglt) COBJECT(BgL_auxz00_9545))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1943 */
	BgL_vrefz00_bglt BGl_z62lambda1943z62zzcfa_info3z00(obj_t BgL_envz00_5615,
		obj_t BgL_o1242z00_5616)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{	/* Cfa/cinfo3.scm 35 */
				long BgL_arg1944z00_6109;

				{	/* Cfa/cinfo3.scm 35 */
					obj_t BgL_arg1945z00_6110;

					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_arg1946z00_6111;

						{	/* Cfa/cinfo3.scm 35 */
							long BgL_arg1816z00_6112;

							{	/* Cfa/cinfo3.scm 35 */
								long BgL_arg1817z00_6113;

								{	/* Cfa/cinfo3.scm 35 */
									long BgL_res2309z00_6114;

									BgL_res2309z00_6114 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_vrefz00_bglt) BgL_o1242z00_5616)));
									BgL_arg1817z00_6113 = BgL_res2309z00_6114;
								}
								BgL_arg1816z00_6112 = (BgL_arg1817z00_6113 - OBJECT_TYPE);
							}
							BgL_arg1946z00_6111 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6112);
						}
						BgL_arg1945z00_6110 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1946z00_6111);
					}
					{	/* Cfa/cinfo3.scm 35 */
						long BgL_res2311z00_6115;

						{	/* Cfa/cinfo3.scm 35 */
							obj_t BgL_tmpz00_9559;

							BgL_tmpz00_9559 = ((obj_t) BgL_arg1945z00_6110);
							BgL_res2311z00_6115 = BGL_CLASS_INDEX(BgL_tmpz00_9559);
						}
						BgL_arg1944z00_6109 = BgL_res2311z00_6115;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_vrefz00_bglt) BgL_o1242z00_5616)), BgL_arg1944z00_6109);
			}
			{	/* Cfa/cinfo3.scm 35 */
				BgL_objectz00_bglt BgL_tmpz00_9565;

				BgL_tmpz00_9565 =
					((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_o1242z00_5616));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9565, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_o1242z00_5616));
			return ((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_o1242z00_5616));
		}

	}



/* &<@anonymous:1942> */
	obj_t BGl_z62zc3z04anonymousza31942ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5617,
		obj_t BgL_new1241z00_5618)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{
				BgL_vrefz00_bglt BgL_auxz00_9573;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_vrefz00_bglt) BgL_new1241z00_5618))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9577;

					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_classz00_6117;

						BgL_classz00_6117 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 35 */
							obj_t BgL__ortest_1106z00_6118;

							BgL__ortest_1106z00_6118 = BGL_CLASS_NIL(BgL_classz00_6117);
							if (CBOOL(BgL__ortest_1106z00_6118))
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9577 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6118);
								}
							else
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9577 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6117));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_vrefz00_bglt) BgL_new1241z00_5618))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_9577), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_vrefz00_bglt) BgL_new1241z00_5618))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_vrefz00_bglt)
										BgL_new1241z00_5618))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vrefz00_bglt)
										BgL_new1241z00_5618))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_vrefz00_bglt)
										BgL_new1241z00_5618))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_vrefz00_bglt)
										BgL_new1241z00_5618))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9602;

					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_classz00_6119;

						BgL_classz00_6119 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 35 */
							obj_t BgL__ortest_1106z00_6120;

							BgL__ortest_1106z00_6120 = BGL_CLASS_NIL(BgL_classz00_6119);
							if (CBOOL(BgL__ortest_1106z00_6120))
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9602 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6120);
								}
							else
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9602 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6119));
								}
						}
					}
					((((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt)
										((BgL_vrefz00_bglt) BgL_new1241z00_5618))))->BgL_ftypez00) =
						((BgL_typez00_bglt) BgL_auxz00_9602), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_9612;

					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_classz00_6121;

						BgL_classz00_6121 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 35 */
							obj_t BgL__ortest_1106z00_6122;

							BgL__ortest_1106z00_6122 = BGL_CLASS_NIL(BgL_classz00_6121);
							if (CBOOL(BgL__ortest_1106z00_6122))
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9612 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6122);
								}
							else
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9612 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6121));
								}
						}
					}
					((((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt)
										((BgL_vrefz00_bglt) BgL_new1241z00_5618))))->BgL_otypez00) =
						((BgL_typez00_bglt) BgL_auxz00_9612), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_9622;

					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_classz00_6123;

						BgL_classz00_6123 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 35 */
							obj_t BgL__ortest_1106z00_6124;

							BgL__ortest_1106z00_6124 = BGL_CLASS_NIL(BgL_classz00_6123);
							if (CBOOL(BgL__ortest_1106z00_6124))
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9622 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6124);
								}
							else
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9622 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6123));
								}
						}
					}
					((((BgL_vrefz00_bglt) COBJECT(
									((BgL_vrefz00_bglt)
										((BgL_vrefz00_bglt) BgL_new1241z00_5618))))->BgL_vtypez00) =
						((BgL_typez00_bglt) BgL_auxz00_9622), BUNSPEC);
				}
				((((BgL_vrefz00_bglt) COBJECT(
								((BgL_vrefz00_bglt)
									((BgL_vrefz00_bglt) BgL_new1241z00_5618))))->BgL_unsafez00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_9642;
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9635;

					{	/* Cfa/cinfo3.scm 35 */
						obj_t BgL_classz00_6125;

						BgL_classz00_6125 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 35 */
							obj_t BgL__ortest_1106z00_6126;

							BgL__ortest_1106z00_6126 = BGL_CLASS_NIL(BgL_classz00_6125);
							if (CBOOL(BgL__ortest_1106z00_6126))
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9642 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6126);
								}
							else
								{	/* Cfa/cinfo3.scm 35 */
									BgL_auxz00_9642 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6125));
								}
						}
					}
					{
						obj_t BgL_auxz00_9636;

						{	/* Cfa/cinfo3.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_9637;

							BgL_tmpz00_9637 =
								((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_new1241z00_5618));
							BgL_auxz00_9636 = BGL_OBJECT_WIDENING(BgL_tmpz00_9637);
						}
						BgL_auxz00_9635 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9636);
					}
					((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9635))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_9642), BUNSPEC);
				}
				{
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9650;

					{
						obj_t BgL_auxz00_9651;

						{	/* Cfa/cinfo3.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_9652;

							BgL_tmpz00_9652 =
								((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_new1241z00_5618));
							BgL_auxz00_9651 = BGL_OBJECT_WIDENING(BgL_tmpz00_9652);
						}
						BgL_auxz00_9650 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9651);
					}
					((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9650))->
							BgL_tvectorzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_9573 = ((BgL_vrefz00_bglt) BgL_new1241z00_5618);
				return ((obj_t) BgL_auxz00_9573);
			}
		}

	}



/* &lambda1940 */
	BgL_vrefz00_bglt BGl_z62lambda1940z62zzcfa_info3z00(obj_t BgL_envz00_5619,
		obj_t BgL_o1238z00_5620)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{	/* Cfa/cinfo3.scm 35 */
				BgL_vrefzf2cinfozf2_bglt BgL_wide1240z00_6128;

				BgL_wide1240z00_6128 =
					((BgL_vrefzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_vrefzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 35 */
					obj_t BgL_auxz00_9665;
					BgL_objectz00_bglt BgL_tmpz00_9661;

					BgL_auxz00_9665 = ((obj_t) BgL_wide1240z00_6128);
					BgL_tmpz00_9661 =
						((BgL_objectz00_bglt)
						((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_o1238z00_5620)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9661, BgL_auxz00_9665);
				}
				((BgL_objectz00_bglt)
					((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_o1238z00_5620)));
				{	/* Cfa/cinfo3.scm 35 */
					long BgL_arg1941z00_6129;

					{	/* Cfa/cinfo3.scm 35 */
						long BgL_res2308z00_6130;

						BgL_res2308z00_6130 =
							BGL_CLASS_INDEX(BGl_vrefzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1941z00_6129 = BgL_res2308z00_6130;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_vrefz00_bglt)
								((BgL_vrefz00_bglt) BgL_o1238z00_5620))), BgL_arg1941z00_6129);
				}
				return
					((BgL_vrefz00_bglt)
					((BgL_vrefz00_bglt) ((BgL_vrefz00_bglt) BgL_o1238z00_5620)));
			}
		}

	}



/* &lambda1937 */
	BgL_vrefz00_bglt BGl_z62lambda1937z62zzcfa_info3z00(obj_t BgL_envz00_5621,
		obj_t BgL_loc1225z00_5622, obj_t BgL_type1226z00_5623,
		obj_t BgL_sidezd2effect1227zd2_5624, obj_t BgL_key1228z00_5625,
		obj_t BgL_exprza21229za2_5626, obj_t BgL_effect1230z00_5627,
		obj_t BgL_czd2format1231zd2_5628, obj_t BgL_ftype1232z00_5629,
		obj_t BgL_otype1233z00_5630, obj_t BgL_vtype1234z00_5631,
		obj_t BgL_unsafe1235z00_5632, obj_t BgL_approx1236z00_5633,
		obj_t BgL_tvectorzf31237zf3_5634)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{	/* Cfa/cinfo3.scm 35 */
				bool_t BgL_unsafe1235z00_6137;
				bool_t BgL_tvectorzf31237zf3_6139;

				BgL_unsafe1235z00_6137 = CBOOL(BgL_unsafe1235z00_5632);
				BgL_tvectorzf31237zf3_6139 = CBOOL(BgL_tvectorzf31237zf3_5634);
				{	/* Cfa/cinfo3.scm 35 */
					BgL_vrefz00_bglt BgL_new1414z00_6140;

					{	/* Cfa/cinfo3.scm 35 */
						BgL_vrefz00_bglt BgL_tmp1412z00_6141;
						BgL_vrefzf2cinfozf2_bglt BgL_wide1413z00_6142;

						{
							BgL_vrefz00_bglt BgL_auxz00_9681;

							{	/* Cfa/cinfo3.scm 35 */
								BgL_vrefz00_bglt BgL_new1411z00_6143;

								BgL_new1411z00_6143 =
									((BgL_vrefz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_vrefz00_bgl))));
								{	/* Cfa/cinfo3.scm 35 */
									long BgL_arg1939z00_6144;

									{	/* Cfa/cinfo3.scm 35 */
										long BgL_res2306z00_6145;

										BgL_res2306z00_6145 =
											BGL_CLASS_INDEX(BGl_vrefz00zzast_nodez00);
										BgL_arg1939z00_6144 = BgL_res2306z00_6145;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1411z00_6143),
										BgL_arg1939z00_6144);
								}
								{	/* Cfa/cinfo3.scm 35 */
									BgL_objectz00_bglt BgL_tmpz00_9686;

									BgL_tmpz00_9686 = ((BgL_objectz00_bglt) BgL_new1411z00_6143);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9686, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1411z00_6143);
								BgL_auxz00_9681 = BgL_new1411z00_6143;
							}
							BgL_tmp1412z00_6141 = ((BgL_vrefz00_bglt) BgL_auxz00_9681);
						}
						BgL_wide1413z00_6142 =
							((BgL_vrefzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_vrefzf2cinfozf2_bgl))));
						{	/* Cfa/cinfo3.scm 35 */
							obj_t BgL_auxz00_9694;
							BgL_objectz00_bglt BgL_tmpz00_9692;

							BgL_auxz00_9694 = ((obj_t) BgL_wide1413z00_6142);
							BgL_tmpz00_9692 = ((BgL_objectz00_bglt) BgL_tmp1412z00_6141);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9692, BgL_auxz00_9694);
						}
						((BgL_objectz00_bglt) BgL_tmp1412z00_6141);
						{	/* Cfa/cinfo3.scm 35 */
							long BgL_arg1938z00_6146;

							{	/* Cfa/cinfo3.scm 35 */
								long BgL_res2307z00_6147;

								BgL_res2307z00_6147 =
									BGL_CLASS_INDEX(BGl_vrefzf2Cinfozf2zzcfa_info3z00);
								BgL_arg1938z00_6146 = BgL_res2307z00_6147;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1412z00_6141),
								BgL_arg1938z00_6146);
						}
						BgL_new1414z00_6140 = ((BgL_vrefz00_bglt) BgL_tmp1412z00_6141);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1414z00_6140)))->BgL_locz00) =
						((obj_t) BgL_loc1225z00_5622), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1414z00_6140)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1226z00_5623)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1414z00_6140)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1227zd2_5624), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1414z00_6140)))->BgL_keyz00) =
						((obj_t) BgL_key1228z00_5625), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1414z00_6140)))->BgL_exprza2za2) =
						((obj_t) ((obj_t) BgL_exprza21229za2_5626)), BUNSPEC);
					((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
										BgL_new1414z00_6140)))->BgL_effectz00) =
						((obj_t) BgL_effect1230z00_5627), BUNSPEC);
					((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
										BgL_new1414z00_6140)))->BgL_czd2formatzd2) =
						((obj_t) ((obj_t) BgL_czd2format1231zd2_5628)), BUNSPEC);
					((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
										BgL_new1414z00_6140)))->BgL_ftypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ftype1232z00_5629)),
						BUNSPEC);
					((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
										BgL_new1414z00_6140)))->BgL_otypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_otype1233z00_5630)),
						BUNSPEC);
					((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
										BgL_new1414z00_6140)))->BgL_vtypez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vtype1234z00_5631)),
						BUNSPEC);
					((((BgL_vrefz00_bglt) COBJECT(((BgL_vrefz00_bglt)
										BgL_new1414z00_6140)))->BgL_unsafez00) =
						((bool_t) BgL_unsafe1235z00_6137), BUNSPEC);
					{
						BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9730;

						{
							obj_t BgL_auxz00_9731;

							{	/* Cfa/cinfo3.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_9732;

								BgL_tmpz00_9732 = ((BgL_objectz00_bglt) BgL_new1414z00_6140);
								BgL_auxz00_9731 = BGL_OBJECT_WIDENING(BgL_tmpz00_9732);
							}
							BgL_auxz00_9730 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9731);
						}
						((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9730))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1236z00_5633)), BUNSPEC);
					}
					{
						BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9738;

						{
							obj_t BgL_auxz00_9739;

							{	/* Cfa/cinfo3.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_9740;

								BgL_tmpz00_9740 = ((BgL_objectz00_bglt) BgL_new1414z00_6140);
								BgL_auxz00_9739 = BGL_OBJECT_WIDENING(BgL_tmpz00_9740);
							}
							BgL_auxz00_9738 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9739);
						}
						((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9738))->
								BgL_tvectorzf3zf3) =
							((bool_t) BgL_tvectorzf31237zf3_6139), BUNSPEC);
					}
					return BgL_new1414z00_6140;
				}
			}
		}

	}



/* &<@anonymous:1958> */
	obj_t BGl_z62zc3z04anonymousza31958ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5635)
	{
		{	/* Cfa/cinfo3.scm 35 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1957 */
	obj_t BGl_z62lambda1957z62zzcfa_info3z00(obj_t BgL_envz00_5636,
		obj_t BgL_oz00_5637, obj_t BgL_vz00_5638)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{	/* Cfa/cinfo3.scm 35 */
				bool_t BgL_vz00_6149;

				BgL_vz00_6149 = CBOOL(BgL_vz00_5638);
				{
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9747;

					{
						obj_t BgL_auxz00_9748;

						{	/* Cfa/cinfo3.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_9749;

							BgL_tmpz00_9749 =
								((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_oz00_5637));
							BgL_auxz00_9748 = BGL_OBJECT_WIDENING(BgL_tmpz00_9749);
						}
						BgL_auxz00_9747 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9748);
					}
					return
						((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9747))->
							BgL_tvectorzf3zf3) = ((bool_t) BgL_vz00_6149), BUNSPEC);
				}
			}
		}

	}



/* &lambda1956 */
	obj_t BGl_z62lambda1956z62zzcfa_info3z00(obj_t BgL_envz00_5639,
		obj_t BgL_oz00_5640)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{	/* Cfa/cinfo3.scm 35 */
				bool_t BgL_tmpz00_9755;

				{
					BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9756;

					{
						obj_t BgL_auxz00_9757;

						{	/* Cfa/cinfo3.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_9758;

							BgL_tmpz00_9758 =
								((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_oz00_5640));
							BgL_auxz00_9757 = BGL_OBJECT_WIDENING(BgL_tmpz00_9758);
						}
						BgL_auxz00_9756 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9757);
					}
					BgL_tmpz00_9755 =
						(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9756))->
						BgL_tvectorzf3zf3);
				}
				return BBOOL(BgL_tmpz00_9755);
			}
		}

	}



/* &lambda1951 */
	obj_t BGl_z62lambda1951z62zzcfa_info3z00(obj_t BgL_envz00_5641,
		obj_t BgL_oz00_5642, obj_t BgL_vz00_5643)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9765;

				{
					obj_t BgL_auxz00_9766;

					{	/* Cfa/cinfo3.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_9767;

						BgL_tmpz00_9767 =
							((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_oz00_5642));
						BgL_auxz00_9766 = BGL_OBJECT_WIDENING(BgL_tmpz00_9767);
					}
					BgL_auxz00_9765 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9766);
				}
				return
					((((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9765))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5643)), BUNSPEC);
			}
		}

	}



/* &lambda1950 */
	BgL_approxz00_bglt BGl_z62lambda1950z62zzcfa_info3z00(obj_t BgL_envz00_5644,
		obj_t BgL_oz00_5645)
	{
		{	/* Cfa/cinfo3.scm 35 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_auxz00_9774;

				{
					obj_t BgL_auxz00_9775;

					{	/* Cfa/cinfo3.scm 35 */
						BgL_objectz00_bglt BgL_tmpz00_9776;

						BgL_tmpz00_9776 =
							((BgL_objectz00_bglt) ((BgL_vrefz00_bglt) BgL_oz00_5645));
						BgL_auxz00_9775 = BGL_OBJECT_WIDENING(BgL_tmpz00_9776);
					}
					BgL_auxz00_9774 = ((BgL_vrefzf2cinfozf2_bglt) BgL_auxz00_9775);
				}
				return
					(((BgL_vrefzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9774))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1921 */
	BgL_castzd2nullzd2_bglt BGl_z62lambda1921z62zzcfa_info3z00(obj_t
		BgL_envz00_5646, obj_t BgL_o1223z00_5647)
	{
		{	/* Cfa/cinfo3.scm 32 */
			{	/* Cfa/cinfo3.scm 32 */
				long BgL_arg1923z00_6155;

				{	/* Cfa/cinfo3.scm 32 */
					obj_t BgL_arg1924z00_6156;

					{	/* Cfa/cinfo3.scm 32 */
						obj_t BgL_arg1925z00_6157;

						{	/* Cfa/cinfo3.scm 32 */
							long BgL_arg1816z00_6158;

							{	/* Cfa/cinfo3.scm 32 */
								long BgL_arg1817z00_6159;

								{	/* Cfa/cinfo3.scm 32 */
									long BgL_res2303z00_6160;

									BgL_res2303z00_6160 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_castzd2nullzd2_bglt) BgL_o1223z00_5647)));
									BgL_arg1817z00_6159 = BgL_res2303z00_6160;
								}
								BgL_arg1816z00_6158 = (BgL_arg1817z00_6159 - OBJECT_TYPE);
							}
							BgL_arg1925z00_6157 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6158);
						}
						BgL_arg1924z00_6156 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1925z00_6157);
					}
					{	/* Cfa/cinfo3.scm 32 */
						long BgL_res2305z00_6161;

						{	/* Cfa/cinfo3.scm 32 */
							obj_t BgL_tmpz00_9788;

							BgL_tmpz00_9788 = ((obj_t) BgL_arg1924z00_6156);
							BgL_res2305z00_6161 = BGL_CLASS_INDEX(BgL_tmpz00_9788);
						}
						BgL_arg1923z00_6155 = BgL_res2305z00_6161;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_castzd2nullzd2_bglt) BgL_o1223z00_5647)),
					BgL_arg1923z00_6155);
			}
			{	/* Cfa/cinfo3.scm 32 */
				BgL_objectz00_bglt BgL_tmpz00_9794;

				BgL_tmpz00_9794 =
					((BgL_objectz00_bglt) ((BgL_castzd2nullzd2_bglt) BgL_o1223z00_5647));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9794, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_castzd2nullzd2_bglt) BgL_o1223z00_5647));
			return
				((BgL_castzd2nullzd2_bglt)
				((BgL_castzd2nullzd2_bglt) BgL_o1223z00_5647));
		}

	}



/* &<@anonymous:1920> */
	obj_t BGl_z62zc3z04anonymousza31920ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5648,
		obj_t BgL_new1222z00_5649)
	{
		{	/* Cfa/cinfo3.scm 32 */
			{
				BgL_castzd2nullzd2_bglt BgL_auxz00_9802;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_castzd2nullzd2_bglt) BgL_new1222z00_5649))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9806;

					{	/* Cfa/cinfo3.scm 32 */
						obj_t BgL_classz00_6163;

						BgL_classz00_6163 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 32 */
							obj_t BgL__ortest_1106z00_6164;

							BgL__ortest_1106z00_6164 = BGL_CLASS_NIL(BgL_classz00_6163);
							if (CBOOL(BgL__ortest_1106z00_6164))
								{	/* Cfa/cinfo3.scm 32 */
									BgL_auxz00_9806 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6164);
								}
							else
								{	/* Cfa/cinfo3.scm 32 */
									BgL_auxz00_9806 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6163));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_castzd2nullzd2_bglt) BgL_new1222z00_5649))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_9806), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_castzd2nullzd2_bglt) BgL_new1222z00_5649))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_castzd2nullzd2_bglt)
										BgL_new1222z00_5649))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_castzd2nullzd2_bglt)
										BgL_new1222z00_5649))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_castzd2nullzd2_bglt)
										BgL_new1222z00_5649))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_castzd2nullzd2_bglt)
										BgL_new1222z00_5649))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_9838;
					BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_9831;

					{	/* Cfa/cinfo3.scm 32 */
						obj_t BgL_classz00_6165;

						BgL_classz00_6165 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 32 */
							obj_t BgL__ortest_1106z00_6166;

							BgL__ortest_1106z00_6166 = BGL_CLASS_NIL(BgL_classz00_6165);
							if (CBOOL(BgL__ortest_1106z00_6166))
								{	/* Cfa/cinfo3.scm 32 */
									BgL_auxz00_9838 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6166);
								}
							else
								{	/* Cfa/cinfo3.scm 32 */
									BgL_auxz00_9838 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6165));
								}
						}
					}
					{
						obj_t BgL_auxz00_9832;

						{	/* Cfa/cinfo3.scm 32 */
							BgL_objectz00_bglt BgL_tmpz00_9833;

							BgL_tmpz00_9833 =
								((BgL_objectz00_bglt)
								((BgL_castzd2nullzd2_bglt) BgL_new1222z00_5649));
							BgL_auxz00_9832 = BGL_OBJECT_WIDENING(BgL_tmpz00_9833);
						}
						BgL_auxz00_9831 =
							((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_9832);
					}
					((((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_9831))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_9838), BUNSPEC);
				}
				BgL_auxz00_9802 = ((BgL_castzd2nullzd2_bglt) BgL_new1222z00_5649);
				return ((obj_t) BgL_auxz00_9802);
			}
		}

	}



/* &lambda1918 */
	BgL_castzd2nullzd2_bglt BGl_z62lambda1918z62zzcfa_info3z00(obj_t
		BgL_envz00_5650, obj_t BgL_o1219z00_5651)
	{
		{	/* Cfa/cinfo3.scm 32 */
			{	/* Cfa/cinfo3.scm 32 */
				BgL_castzd2nullzf2cinfoz20_bglt BgL_wide1221z00_6168;

				BgL_wide1221z00_6168 =
					((BgL_castzd2nullzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_castzd2nullzf2cinfoz20_bgl))));
				{	/* Cfa/cinfo3.scm 32 */
					obj_t BgL_auxz00_9853;
					BgL_objectz00_bglt BgL_tmpz00_9849;

					BgL_auxz00_9853 = ((obj_t) BgL_wide1221z00_6168);
					BgL_tmpz00_9849 =
						((BgL_objectz00_bglt)
						((BgL_castzd2nullzd2_bglt)
							((BgL_castzd2nullzd2_bglt) BgL_o1219z00_5651)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9849, BgL_auxz00_9853);
				}
				((BgL_objectz00_bglt)
					((BgL_castzd2nullzd2_bglt)
						((BgL_castzd2nullzd2_bglt) BgL_o1219z00_5651)));
				{	/* Cfa/cinfo3.scm 32 */
					long BgL_arg1919z00_6169;

					{	/* Cfa/cinfo3.scm 32 */
						long BgL_res2302z00_6170;

						BgL_res2302z00_6170 =
							BGL_CLASS_INDEX(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
						BgL_arg1919z00_6169 = BgL_res2302z00_6170;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_castzd2nullzd2_bglt)
								((BgL_castzd2nullzd2_bglt) BgL_o1219z00_5651))),
						BgL_arg1919z00_6169);
				}
				return
					((BgL_castzd2nullzd2_bglt)
					((BgL_castzd2nullzd2_bglt)
						((BgL_castzd2nullzd2_bglt) BgL_o1219z00_5651)));
			}
		}

	}



/* &lambda1915 */
	BgL_castzd2nullzd2_bglt BGl_z62lambda1915z62zzcfa_info3z00(obj_t
		BgL_envz00_5652, obj_t BgL_loc1211z00_5653, obj_t BgL_type1212z00_5654,
		obj_t BgL_sidezd2effect1213zd2_5655, obj_t BgL_key1214z00_5656,
		obj_t BgL_exprza21215za2_5657, obj_t BgL_effect1216z00_5658,
		obj_t BgL_czd2format1217zd2_5659, obj_t BgL_approx1218z00_5660)
	{
		{	/* Cfa/cinfo3.scm 32 */
			{	/* Cfa/cinfo3.scm 32 */
				BgL_castzd2nullzd2_bglt BgL_new1409z00_6175;

				{	/* Cfa/cinfo3.scm 32 */
					BgL_castzd2nullzd2_bglt BgL_tmp1407z00_6176;
					BgL_castzd2nullzf2cinfoz20_bglt BgL_wide1408z00_6177;

					{
						BgL_castzd2nullzd2_bglt BgL_auxz00_9867;

						{	/* Cfa/cinfo3.scm 32 */
							BgL_castzd2nullzd2_bglt BgL_new1406z00_6178;

							BgL_new1406z00_6178 =
								((BgL_castzd2nullzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_castzd2nullzd2_bgl))));
							{	/* Cfa/cinfo3.scm 32 */
								long BgL_arg1917z00_6179;

								{	/* Cfa/cinfo3.scm 32 */
									long BgL_res2300z00_6180;

									BgL_res2300z00_6180 =
										BGL_CLASS_INDEX(BGl_castzd2nullzd2zzast_nodez00);
									BgL_arg1917z00_6179 = BgL_res2300z00_6180;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1406z00_6178),
									BgL_arg1917z00_6179);
							}
							{	/* Cfa/cinfo3.scm 32 */
								BgL_objectz00_bglt BgL_tmpz00_9872;

								BgL_tmpz00_9872 = ((BgL_objectz00_bglt) BgL_new1406z00_6178);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9872, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1406z00_6178);
							BgL_auxz00_9867 = BgL_new1406z00_6178;
						}
						BgL_tmp1407z00_6176 = ((BgL_castzd2nullzd2_bglt) BgL_auxz00_9867);
					}
					BgL_wide1408z00_6177 =
						((BgL_castzd2nullzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_castzd2nullzf2cinfoz20_bgl))));
					{	/* Cfa/cinfo3.scm 32 */
						obj_t BgL_auxz00_9880;
						BgL_objectz00_bglt BgL_tmpz00_9878;

						BgL_auxz00_9880 = ((obj_t) BgL_wide1408z00_6177);
						BgL_tmpz00_9878 = ((BgL_objectz00_bglt) BgL_tmp1407z00_6176);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9878, BgL_auxz00_9880);
					}
					((BgL_objectz00_bglt) BgL_tmp1407z00_6176);
					{	/* Cfa/cinfo3.scm 32 */
						long BgL_arg1916z00_6181;

						{	/* Cfa/cinfo3.scm 32 */
							long BgL_res2301z00_6182;

							BgL_res2301z00_6182 =
								BGL_CLASS_INDEX(BGl_castzd2nullzf2Cinfoz20zzcfa_info3z00);
							BgL_arg1916z00_6181 = BgL_res2301z00_6182;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1407z00_6176), BgL_arg1916z00_6181);
					}
					BgL_new1409z00_6175 = ((BgL_castzd2nullzd2_bglt) BgL_tmp1407z00_6176);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1409z00_6175)))->BgL_locz00) =
					((obj_t) BgL_loc1211z00_5653), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1409z00_6175)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1212z00_5654)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1409z00_6175)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1213zd2_5655), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1409z00_6175)))->BgL_keyz00) =
					((obj_t) BgL_key1214z00_5656), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1409z00_6175)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21215za2_5657)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1409z00_6175)))->BgL_effectz00) =
					((obj_t) BgL_effect1216z00_5658), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1409z00_6175)))->BgL_czd2formatzd2) =
					((obj_t) ((obj_t) BgL_czd2format1217zd2_5659)), BUNSPEC);
				{
					BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_9905;

					{
						obj_t BgL_auxz00_9906;

						{	/* Cfa/cinfo3.scm 32 */
							BgL_objectz00_bglt BgL_tmpz00_9907;

							BgL_tmpz00_9907 = ((BgL_objectz00_bglt) BgL_new1409z00_6175);
							BgL_auxz00_9906 = BGL_OBJECT_WIDENING(BgL_tmpz00_9907);
						}
						BgL_auxz00_9905 =
							((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_9906);
					}
					((((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_9905))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1218z00_5660)), BUNSPEC);
				}
				return BgL_new1409z00_6175;
			}
		}

	}



/* &lambda1930 */
	obj_t BGl_z62lambda1930z62zzcfa_info3z00(obj_t BgL_envz00_5661,
		obj_t BgL_oz00_5662, obj_t BgL_vz00_5663)
	{
		{	/* Cfa/cinfo3.scm 32 */
			{
				BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_9913;

				{
					obj_t BgL_auxz00_9914;

					{	/* Cfa/cinfo3.scm 32 */
						BgL_objectz00_bglt BgL_tmpz00_9915;

						BgL_tmpz00_9915 =
							((BgL_objectz00_bglt) ((BgL_castzd2nullzd2_bglt) BgL_oz00_5662));
						BgL_auxz00_9914 = BGL_OBJECT_WIDENING(BgL_tmpz00_9915);
					}
					BgL_auxz00_9913 = ((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_9914);
				}
				return
					((((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_9913))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5663)), BUNSPEC);
			}
		}

	}



/* &lambda1929 */
	BgL_approxz00_bglt BGl_z62lambda1929z62zzcfa_info3z00(obj_t BgL_envz00_5664,
		obj_t BgL_oz00_5665)
	{
		{	/* Cfa/cinfo3.scm 32 */
			{
				BgL_castzd2nullzf2cinfoz20_bglt BgL_auxz00_9922;

				{
					obj_t BgL_auxz00_9923;

					{	/* Cfa/cinfo3.scm 32 */
						BgL_objectz00_bglt BgL_tmpz00_9924;

						BgL_tmpz00_9924 =
							((BgL_objectz00_bglt) ((BgL_castzd2nullzd2_bglt) BgL_oz00_5665));
						BgL_auxz00_9923 = BGL_OBJECT_WIDENING(BgL_tmpz00_9924);
					}
					BgL_auxz00_9922 = ((BgL_castzd2nullzf2cinfoz20_bglt) BgL_auxz00_9923);
				}
				return
					(((BgL_castzd2nullzf2cinfoz20_bglt) COBJECT(BgL_auxz00_9922))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1899 */
	BgL_instanceofz00_bglt BGl_z62lambda1899z62zzcfa_info3z00(obj_t
		BgL_envz00_5666, obj_t BgL_o1209z00_5667)
	{
		{	/* Cfa/cinfo3.scm 31 */
			{	/* Cfa/cinfo3.scm 31 */
				long BgL_arg1901z00_6187;

				{	/* Cfa/cinfo3.scm 31 */
					obj_t BgL_arg1902z00_6188;

					{	/* Cfa/cinfo3.scm 31 */
						obj_t BgL_arg1903z00_6189;

						{	/* Cfa/cinfo3.scm 31 */
							long BgL_arg1816z00_6190;

							{	/* Cfa/cinfo3.scm 31 */
								long BgL_arg1817z00_6191;

								{	/* Cfa/cinfo3.scm 31 */
									long BgL_res2297z00_6192;

									BgL_res2297z00_6192 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_instanceofz00_bglt) BgL_o1209z00_5667)));
									BgL_arg1817z00_6191 = BgL_res2297z00_6192;
								}
								BgL_arg1816z00_6190 = (BgL_arg1817z00_6191 - OBJECT_TYPE);
							}
							BgL_arg1903z00_6189 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6190);
						}
						BgL_arg1902z00_6188 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1903z00_6189);
					}
					{	/* Cfa/cinfo3.scm 31 */
						long BgL_res2299z00_6193;

						{	/* Cfa/cinfo3.scm 31 */
							obj_t BgL_tmpz00_9936;

							BgL_tmpz00_9936 = ((obj_t) BgL_arg1902z00_6188);
							BgL_res2299z00_6193 = BGL_CLASS_INDEX(BgL_tmpz00_9936);
						}
						BgL_arg1901z00_6187 = BgL_res2299z00_6193;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_instanceofz00_bglt) BgL_o1209z00_5667)), BgL_arg1901z00_6187);
			}
			{	/* Cfa/cinfo3.scm 31 */
				BgL_objectz00_bglt BgL_tmpz00_9942;

				BgL_tmpz00_9942 =
					((BgL_objectz00_bglt) ((BgL_instanceofz00_bglt) BgL_o1209z00_5667));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9942, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_instanceofz00_bglt) BgL_o1209z00_5667));
			return
				((BgL_instanceofz00_bglt) ((BgL_instanceofz00_bglt) BgL_o1209z00_5667));
		}

	}



/* &<@anonymous:1898> */
	obj_t BGl_z62zc3z04anonymousza31898ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5668,
		obj_t BgL_new1208z00_5669)
	{
		{	/* Cfa/cinfo3.scm 31 */
			{
				BgL_instanceofz00_bglt BgL_auxz00_9950;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_instanceofz00_bglt) BgL_new1208z00_5669))))->
						BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9954;

					{	/* Cfa/cinfo3.scm 31 */
						obj_t BgL_classz00_6195;

						BgL_classz00_6195 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 31 */
							obj_t BgL__ortest_1106z00_6196;

							BgL__ortest_1106z00_6196 = BGL_CLASS_NIL(BgL_classz00_6195);
							if (CBOOL(BgL__ortest_1106z00_6196))
								{	/* Cfa/cinfo3.scm 31 */
									BgL_auxz00_9954 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6196);
								}
							else
								{	/* Cfa/cinfo3.scm 31 */
									BgL_auxz00_9954 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6195));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_instanceofz00_bglt) BgL_new1208z00_5669))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_9954), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_instanceofz00_bglt) BgL_new1208z00_5669))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_instanceofz00_bglt)
										BgL_new1208z00_5669))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_instanceofz00_bglt)
										BgL_new1208z00_5669))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_instanceofz00_bglt)
										BgL_new1208z00_5669))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_instanceofz00_bglt)
										BgL_new1208z00_5669))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_9979;

					{	/* Cfa/cinfo3.scm 31 */
						obj_t BgL_classz00_6197;

						BgL_classz00_6197 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 31 */
							obj_t BgL__ortest_1106z00_6198;

							BgL__ortest_1106z00_6198 = BGL_CLASS_NIL(BgL_classz00_6197);
							if (CBOOL(BgL__ortest_1106z00_6198))
								{	/* Cfa/cinfo3.scm 31 */
									BgL_auxz00_9979 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6198);
								}
							else
								{	/* Cfa/cinfo3.scm 31 */
									BgL_auxz00_9979 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6197));
								}
						}
					}
					((((BgL_instanceofz00_bglt) COBJECT(
									((BgL_instanceofz00_bglt)
										((BgL_instanceofz00_bglt) BgL_new1208z00_5669))))->
							BgL_classz00) = ((BgL_typez00_bglt) BgL_auxz00_9979), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_9996;
					BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_9989;

					{	/* Cfa/cinfo3.scm 31 */
						obj_t BgL_classz00_6199;

						BgL_classz00_6199 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 31 */
							obj_t BgL__ortest_1106z00_6200;

							BgL__ortest_1106z00_6200 = BGL_CLASS_NIL(BgL_classz00_6199);
							if (CBOOL(BgL__ortest_1106z00_6200))
								{	/* Cfa/cinfo3.scm 31 */
									BgL_auxz00_9996 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6200);
								}
							else
								{	/* Cfa/cinfo3.scm 31 */
									BgL_auxz00_9996 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6199));
								}
						}
					}
					{
						obj_t BgL_auxz00_9990;

						{	/* Cfa/cinfo3.scm 31 */
							BgL_objectz00_bglt BgL_tmpz00_9991;

							BgL_tmpz00_9991 =
								((BgL_objectz00_bglt)
								((BgL_instanceofz00_bglt) BgL_new1208z00_5669));
							BgL_auxz00_9990 = BGL_OBJECT_WIDENING(BgL_tmpz00_9991);
						}
						BgL_auxz00_9989 =
							((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_9990);
					}
					((((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_9989))->
							BgL_approxz00) = ((BgL_approxz00_bglt) BgL_auxz00_9996), BUNSPEC);
				}
				BgL_auxz00_9950 = ((BgL_instanceofz00_bglt) BgL_new1208z00_5669);
				return ((obj_t) BgL_auxz00_9950);
			}
		}

	}



/* &lambda1896 */
	BgL_instanceofz00_bglt BGl_z62lambda1896z62zzcfa_info3z00(obj_t
		BgL_envz00_5670, obj_t BgL_o1205z00_5671)
	{
		{	/* Cfa/cinfo3.scm 31 */
			{	/* Cfa/cinfo3.scm 31 */
				BgL_instanceofzf2cinfozf2_bglt BgL_wide1207z00_6202;

				BgL_wide1207z00_6202 =
					((BgL_instanceofzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_instanceofzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 31 */
					obj_t BgL_auxz00_10011;
					BgL_objectz00_bglt BgL_tmpz00_10007;

					BgL_auxz00_10011 = ((obj_t) BgL_wide1207z00_6202);
					BgL_tmpz00_10007 =
						((BgL_objectz00_bglt)
						((BgL_instanceofz00_bglt)
							((BgL_instanceofz00_bglt) BgL_o1205z00_5671)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10007, BgL_auxz00_10011);
				}
				((BgL_objectz00_bglt)
					((BgL_instanceofz00_bglt)
						((BgL_instanceofz00_bglt) BgL_o1205z00_5671)));
				{	/* Cfa/cinfo3.scm 31 */
					long BgL_arg1897z00_6203;

					{	/* Cfa/cinfo3.scm 31 */
						long BgL_res2296z00_6204;

						BgL_res2296z00_6204 =
							BGL_CLASS_INDEX(BGl_instanceofzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1897z00_6203 = BgL_res2296z00_6204;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_instanceofz00_bglt)
								((BgL_instanceofz00_bglt) BgL_o1205z00_5671))),
						BgL_arg1897z00_6203);
				}
				return
					((BgL_instanceofz00_bglt)
					((BgL_instanceofz00_bglt)
						((BgL_instanceofz00_bglt) BgL_o1205z00_5671)));
			}
		}

	}



/* &lambda1892 */
	BgL_instanceofz00_bglt BGl_z62lambda1892z62zzcfa_info3z00(obj_t
		BgL_envz00_5672, obj_t BgL_loc1195z00_5673, obj_t BgL_type1196z00_5674,
		obj_t BgL_sidezd2effect1197zd2_5675, obj_t BgL_key1198z00_5676,
		obj_t BgL_exprza21199za2_5677, obj_t BgL_effect1201z00_5678,
		obj_t BgL_czd2format1202zd2_5679, obj_t BgL_class1203z00_5680,
		obj_t BgL_approx1204z00_5681)
	{
		{	/* Cfa/cinfo3.scm 31 */
			{	/* Cfa/cinfo3.scm 31 */
				BgL_instanceofz00_bglt BgL_new1404z00_6210;

				{	/* Cfa/cinfo3.scm 31 */
					BgL_instanceofz00_bglt BgL_tmp1402z00_6211;
					BgL_instanceofzf2cinfozf2_bglt BgL_wide1403z00_6212;

					{
						BgL_instanceofz00_bglt BgL_auxz00_10025;

						{	/* Cfa/cinfo3.scm 31 */
							BgL_instanceofz00_bglt BgL_new1401z00_6213;

							BgL_new1401z00_6213 =
								((BgL_instanceofz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_instanceofz00_bgl))));
							{	/* Cfa/cinfo3.scm 31 */
								long BgL_arg1895z00_6214;

								{	/* Cfa/cinfo3.scm 31 */
									long BgL_res2294z00_6215;

									BgL_res2294z00_6215 =
										BGL_CLASS_INDEX(BGl_instanceofz00zzast_nodez00);
									BgL_arg1895z00_6214 = BgL_res2294z00_6215;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1401z00_6213),
									BgL_arg1895z00_6214);
							}
							{	/* Cfa/cinfo3.scm 31 */
								BgL_objectz00_bglt BgL_tmpz00_10030;

								BgL_tmpz00_10030 = ((BgL_objectz00_bglt) BgL_new1401z00_6213);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10030, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1401z00_6213);
							BgL_auxz00_10025 = BgL_new1401z00_6213;
						}
						BgL_tmp1402z00_6211 = ((BgL_instanceofz00_bglt) BgL_auxz00_10025);
					}
					BgL_wide1403z00_6212 =
						((BgL_instanceofzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_instanceofzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.scm 31 */
						obj_t BgL_auxz00_10038;
						BgL_objectz00_bglt BgL_tmpz00_10036;

						BgL_auxz00_10038 = ((obj_t) BgL_wide1403z00_6212);
						BgL_tmpz00_10036 = ((BgL_objectz00_bglt) BgL_tmp1402z00_6211);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10036, BgL_auxz00_10038);
					}
					((BgL_objectz00_bglt) BgL_tmp1402z00_6211);
					{	/* Cfa/cinfo3.scm 31 */
						long BgL_arg1893z00_6216;

						{	/* Cfa/cinfo3.scm 31 */
							long BgL_res2295z00_6217;

							BgL_res2295z00_6217 =
								BGL_CLASS_INDEX(BGl_instanceofzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1893z00_6216 = BgL_res2295z00_6217;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1402z00_6211), BgL_arg1893z00_6216);
					}
					BgL_new1404z00_6210 = ((BgL_instanceofz00_bglt) BgL_tmp1402z00_6211);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1404z00_6210)))->BgL_locz00) =
					((obj_t) BgL_loc1195z00_5673), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1404z00_6210)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1196z00_5674)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1404z00_6210)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1197zd2_5675), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1404z00_6210)))->BgL_keyz00) =
					((obj_t) BgL_key1198z00_5676), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1404z00_6210)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21199za2_5677)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1404z00_6210)))->BgL_effectz00) =
					((obj_t) BgL_effect1201z00_5678), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1404z00_6210)))->BgL_czd2formatzd2) =
					((obj_t) ((obj_t) BgL_czd2format1202zd2_5679)), BUNSPEC);
				((((BgL_instanceofz00_bglt) COBJECT(((BgL_instanceofz00_bglt)
									BgL_new1404z00_6210)))->BgL_classz00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_class1203z00_5680)),
					BUNSPEC);
				{
					BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_10066;

					{
						obj_t BgL_auxz00_10067;

						{	/* Cfa/cinfo3.scm 31 */
							BgL_objectz00_bglt BgL_tmpz00_10068;

							BgL_tmpz00_10068 = ((BgL_objectz00_bglt) BgL_new1404z00_6210);
							BgL_auxz00_10067 = BGL_OBJECT_WIDENING(BgL_tmpz00_10068);
						}
						BgL_auxz00_10066 =
							((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_10067);
					}
					((((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10066))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1204z00_5681)), BUNSPEC);
				}
				return BgL_new1404z00_6210;
			}
		}

	}



/* &lambda1908 */
	obj_t BGl_z62lambda1908z62zzcfa_info3z00(obj_t BgL_envz00_5682,
		obj_t BgL_oz00_5683, obj_t BgL_vz00_5684)
	{
		{	/* Cfa/cinfo3.scm 31 */
			{
				BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_10074;

				{
					obj_t BgL_auxz00_10075;

					{	/* Cfa/cinfo3.scm 31 */
						BgL_objectz00_bglt BgL_tmpz00_10076;

						BgL_tmpz00_10076 =
							((BgL_objectz00_bglt) ((BgL_instanceofz00_bglt) BgL_oz00_5683));
						BgL_auxz00_10075 = BGL_OBJECT_WIDENING(BgL_tmpz00_10076);
					}
					BgL_auxz00_10074 =
						((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_10075);
				}
				return
					((((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10074))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5684)), BUNSPEC);
			}
		}

	}



/* &lambda1907 */
	BgL_approxz00_bglt BGl_z62lambda1907z62zzcfa_info3z00(obj_t BgL_envz00_5685,
		obj_t BgL_oz00_5686)
	{
		{	/* Cfa/cinfo3.scm 31 */
			{
				BgL_instanceofzf2cinfozf2_bglt BgL_auxz00_10083;

				{
					obj_t BgL_auxz00_10084;

					{	/* Cfa/cinfo3.scm 31 */
						BgL_objectz00_bglt BgL_tmpz00_10085;

						BgL_tmpz00_10085 =
							((BgL_objectz00_bglt) ((BgL_instanceofz00_bglt) BgL_oz00_5686));
						BgL_auxz00_10084 = BGL_OBJECT_WIDENING(BgL_tmpz00_10085);
					}
					BgL_auxz00_10083 =
						((BgL_instanceofzf2cinfozf2_bglt) BgL_auxz00_10084);
				}
				return
					(((BgL_instanceofzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10083))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1875 */
	BgL_newz00_bglt BGl_z62lambda1875z62zzcfa_info3z00(obj_t BgL_envz00_5687,
		obj_t BgL_o1193z00_5688)
	{
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				long BgL_arg1876z00_6222;

				{	/* Cfa/cinfo3.scm 30 */
					obj_t BgL_arg1877z00_6223;

					{	/* Cfa/cinfo3.scm 30 */
						obj_t BgL_arg1878z00_6224;

						{	/* Cfa/cinfo3.scm 30 */
							long BgL_arg1816z00_6225;

							{	/* Cfa/cinfo3.scm 30 */
								long BgL_arg1817z00_6226;

								{	/* Cfa/cinfo3.scm 30 */
									long BgL_res2291z00_6227;

									BgL_res2291z00_6227 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_newz00_bglt) BgL_o1193z00_5688)));
									BgL_arg1817z00_6226 = BgL_res2291z00_6227;
								}
								BgL_arg1816z00_6225 = (BgL_arg1817z00_6226 - OBJECT_TYPE);
							}
							BgL_arg1878z00_6224 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6225);
						}
						BgL_arg1877z00_6223 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1878z00_6224);
					}
					{	/* Cfa/cinfo3.scm 30 */
						long BgL_res2293z00_6228;

						{	/* Cfa/cinfo3.scm 30 */
							obj_t BgL_tmpz00_10097;

							BgL_tmpz00_10097 = ((obj_t) BgL_arg1877z00_6223);
							BgL_res2293z00_6228 = BGL_CLASS_INDEX(BgL_tmpz00_10097);
						}
						BgL_arg1876z00_6222 = BgL_res2293z00_6228;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_newz00_bglt) BgL_o1193z00_5688)), BgL_arg1876z00_6222);
			}
			{	/* Cfa/cinfo3.scm 30 */
				BgL_objectz00_bglt BgL_tmpz00_10103;

				BgL_tmpz00_10103 =
					((BgL_objectz00_bglt) ((BgL_newz00_bglt) BgL_o1193z00_5688));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10103, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_newz00_bglt) BgL_o1193z00_5688));
			return ((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_o1193z00_5688));
		}

	}



/* &<@anonymous:1874> */
	obj_t BGl_z62zc3z04anonymousza31874ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5689,
		obj_t BgL_new1192z00_5690)
	{
		{	/* Cfa/cinfo3.scm 30 */
			{
				BgL_newz00_bglt BgL_auxz00_10111;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_newz00_bglt) BgL_new1192z00_5690))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10115;

					{	/* Cfa/cinfo3.scm 30 */
						obj_t BgL_classz00_6230;

						BgL_classz00_6230 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 30 */
							obj_t BgL__ortest_1106z00_6231;

							BgL__ortest_1106z00_6231 = BGL_CLASS_NIL(BgL_classz00_6230);
							if (CBOOL(BgL__ortest_1106z00_6231))
								{	/* Cfa/cinfo3.scm 30 */
									BgL_auxz00_10115 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6231);
								}
							else
								{	/* Cfa/cinfo3.scm 30 */
									BgL_auxz00_10115 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6230));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_newz00_bglt) BgL_new1192z00_5690))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_10115), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_newz00_bglt) BgL_new1192z00_5690))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_newz00_bglt)
										BgL_new1192z00_5690))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) ((BgL_newz00_bglt)
										BgL_new1192z00_5690))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) ((BgL_newz00_bglt)
										BgL_new1192z00_5690))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_newz00_bglt)
										BgL_new1192z00_5690))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				((((BgL_newz00_bglt) COBJECT(((BgL_newz00_bglt) ((BgL_newz00_bglt)
										BgL_new1192z00_5690))))->BgL_argszd2typezd2) =
					((obj_t) BNIL), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_10150;
					BgL_newzf2cinfozf2_bglt BgL_auxz00_10143;

					{	/* Cfa/cinfo3.scm 30 */
						obj_t BgL_classz00_6232;

						BgL_classz00_6232 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 30 */
							obj_t BgL__ortest_1106z00_6233;

							BgL__ortest_1106z00_6233 = BGL_CLASS_NIL(BgL_classz00_6232);
							if (CBOOL(BgL__ortest_1106z00_6233))
								{	/* Cfa/cinfo3.scm 30 */
									BgL_auxz00_10150 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6233);
								}
							else
								{	/* Cfa/cinfo3.scm 30 */
									BgL_auxz00_10150 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6232));
								}
						}
					}
					{
						obj_t BgL_auxz00_10144;

						{	/* Cfa/cinfo3.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_10145;

							BgL_tmpz00_10145 =
								((BgL_objectz00_bglt) ((BgL_newz00_bglt) BgL_new1192z00_5690));
							BgL_auxz00_10144 = BGL_OBJECT_WIDENING(BgL_tmpz00_10145);
						}
						BgL_auxz00_10143 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_10144);
					}
					((((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10143))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_10150), BUNSPEC);
				}
				BgL_auxz00_10111 = ((BgL_newz00_bglt) BgL_new1192z00_5690);
				return ((obj_t) BgL_auxz00_10111);
			}
		}

	}



/* &lambda1872 */
	BgL_newz00_bglt BGl_z62lambda1872z62zzcfa_info3z00(obj_t BgL_envz00_5691,
		obj_t BgL_o1189z00_5692)
	{
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_newzf2cinfozf2_bglt BgL_wide1191z00_6235;

				BgL_wide1191z00_6235 =
					((BgL_newzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_newzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 30 */
					obj_t BgL_auxz00_10165;
					BgL_objectz00_bglt BgL_tmpz00_10161;

					BgL_auxz00_10165 = ((obj_t) BgL_wide1191z00_6235);
					BgL_tmpz00_10161 =
						((BgL_objectz00_bglt)
						((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_o1189z00_5692)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10161, BgL_auxz00_10165);
				}
				((BgL_objectz00_bglt)
					((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_o1189z00_5692)));
				{	/* Cfa/cinfo3.scm 30 */
					long BgL_arg1873z00_6236;

					{	/* Cfa/cinfo3.scm 30 */
						long BgL_res2290z00_6237;

						BgL_res2290z00_6237 =
							BGL_CLASS_INDEX(BGl_newzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1873z00_6236 = BgL_res2290z00_6237;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_newz00_bglt)
								((BgL_newz00_bglt) BgL_o1189z00_5692))), BgL_arg1873z00_6236);
				}
				return
					((BgL_newz00_bglt)
					((BgL_newz00_bglt) ((BgL_newz00_bglt) BgL_o1189z00_5692)));
			}
		}

	}



/* &lambda1869 */
	BgL_newz00_bglt BGl_z62lambda1869z62zzcfa_info3z00(obj_t BgL_envz00_5693,
		obj_t BgL_loc1180z00_5694, obj_t BgL_type1181z00_5695,
		obj_t BgL_sidezd2effect1182zd2_5696, obj_t BgL_key1183z00_5697,
		obj_t BgL_exprza21184za2_5698, obj_t BgL_effect1185z00_5699,
		obj_t BgL_czd2format1186zd2_5700, obj_t BgL_argszd2type1187zd2_5701,
		obj_t BgL_approx1188z00_5702)
	{
		{	/* Cfa/cinfo3.scm 30 */
			{	/* Cfa/cinfo3.scm 30 */
				BgL_newz00_bglt BgL_new1399z00_6243;

				{	/* Cfa/cinfo3.scm 30 */
					BgL_newz00_bglt BgL_tmp1397z00_6244;
					BgL_newzf2cinfozf2_bglt BgL_wide1398z00_6245;

					{
						BgL_newz00_bglt BgL_auxz00_10179;

						{	/* Cfa/cinfo3.scm 30 */
							BgL_newz00_bglt BgL_new1396z00_6246;

							BgL_new1396z00_6246 =
								((BgL_newz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_newz00_bgl))));
							{	/* Cfa/cinfo3.scm 30 */
								long BgL_arg1871z00_6247;

								{	/* Cfa/cinfo3.scm 30 */
									long BgL_res2288z00_6248;

									BgL_res2288z00_6248 =
										BGL_CLASS_INDEX(BGl_newz00zzast_nodez00);
									BgL_arg1871z00_6247 = BgL_res2288z00_6248;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1396z00_6246),
									BgL_arg1871z00_6247);
							}
							{	/* Cfa/cinfo3.scm 30 */
								BgL_objectz00_bglt BgL_tmpz00_10184;

								BgL_tmpz00_10184 = ((BgL_objectz00_bglt) BgL_new1396z00_6246);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10184, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1396z00_6246);
							BgL_auxz00_10179 = BgL_new1396z00_6246;
						}
						BgL_tmp1397z00_6244 = ((BgL_newz00_bglt) BgL_auxz00_10179);
					}
					BgL_wide1398z00_6245 =
						((BgL_newzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_newzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.scm 30 */
						obj_t BgL_auxz00_10192;
						BgL_objectz00_bglt BgL_tmpz00_10190;

						BgL_auxz00_10192 = ((obj_t) BgL_wide1398z00_6245);
						BgL_tmpz00_10190 = ((BgL_objectz00_bglt) BgL_tmp1397z00_6244);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10190, BgL_auxz00_10192);
					}
					((BgL_objectz00_bglt) BgL_tmp1397z00_6244);
					{	/* Cfa/cinfo3.scm 30 */
						long BgL_arg1870z00_6249;

						{	/* Cfa/cinfo3.scm 30 */
							long BgL_res2289z00_6250;

							BgL_res2289z00_6250 =
								BGL_CLASS_INDEX(BGl_newzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1870z00_6249 = BgL_res2289z00_6250;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1397z00_6244), BgL_arg1870z00_6249);
					}
					BgL_new1399z00_6243 = ((BgL_newz00_bglt) BgL_tmp1397z00_6244);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1399z00_6243)))->BgL_locz00) =
					((obj_t) BgL_loc1180z00_5694), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1399z00_6243)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1181z00_5695)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1399z00_6243)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1182zd2_5696), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1399z00_6243)))->BgL_keyz00) =
					((obj_t) BgL_key1183z00_5697), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1399z00_6243)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21184za2_5698)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1399z00_6243)))->BgL_effectz00) =
					((obj_t) BgL_effect1185z00_5699), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1399z00_6243)))->BgL_czd2formatzd2) =
					((obj_t) ((obj_t) BgL_czd2format1186zd2_5700)), BUNSPEC);
				((((BgL_newz00_bglt) COBJECT(((BgL_newz00_bglt) BgL_new1399z00_6243)))->
						BgL_argszd2typezd2) =
					((obj_t) ((obj_t) BgL_argszd2type1187zd2_5701)), BUNSPEC);
				{
					BgL_newzf2cinfozf2_bglt BgL_auxz00_10220;

					{
						obj_t BgL_auxz00_10221;

						{	/* Cfa/cinfo3.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_10222;

							BgL_tmpz00_10222 = ((BgL_objectz00_bglt) BgL_new1399z00_6243);
							BgL_auxz00_10221 = BGL_OBJECT_WIDENING(BgL_tmpz00_10222);
						}
						BgL_auxz00_10220 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_10221);
					}
					((((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10220))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1188z00_5702)), BUNSPEC);
				}
				return BgL_new1399z00_6243;
			}
		}

	}



/* &lambda1884 */
	obj_t BGl_z62lambda1884z62zzcfa_info3z00(obj_t BgL_envz00_5703,
		obj_t BgL_oz00_5704, obj_t BgL_vz00_5705)
	{
		{	/* Cfa/cinfo3.scm 30 */
			{
				BgL_newzf2cinfozf2_bglt BgL_auxz00_10228;

				{
					obj_t BgL_auxz00_10229;

					{	/* Cfa/cinfo3.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_10230;

						BgL_tmpz00_10230 =
							((BgL_objectz00_bglt) ((BgL_newz00_bglt) BgL_oz00_5704));
						BgL_auxz00_10229 = BGL_OBJECT_WIDENING(BgL_tmpz00_10230);
					}
					BgL_auxz00_10228 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_10229);
				}
				return
					((((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10228))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5705)), BUNSPEC);
			}
		}

	}



/* &lambda1883 */
	BgL_approxz00_bglt BGl_z62lambda1883z62zzcfa_info3z00(obj_t BgL_envz00_5706,
		obj_t BgL_oz00_5707)
	{
		{	/* Cfa/cinfo3.scm 30 */
			{
				BgL_newzf2cinfozf2_bglt BgL_auxz00_10237;

				{
					obj_t BgL_auxz00_10238;

					{	/* Cfa/cinfo3.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_10239;

						BgL_tmpz00_10239 =
							((BgL_objectz00_bglt) ((BgL_newz00_bglt) BgL_oz00_5707));
						BgL_auxz00_10238 = BGL_OBJECT_WIDENING(BgL_tmpz00_10239);
					}
					BgL_auxz00_10237 = ((BgL_newzf2cinfozf2_bglt) BgL_auxz00_10238);
				}
				return
					(((BgL_newzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10237))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1850 */
	BgL_setfieldz00_bglt BGl_z62lambda1850z62zzcfa_info3z00(obj_t BgL_envz00_5708,
		obj_t BgL_o1178z00_5709)
	{
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				long BgL_arg1851z00_6255;

				{	/* Cfa/cinfo3.scm 29 */
					obj_t BgL_arg1852z00_6256;

					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_arg1853z00_6257;

						{	/* Cfa/cinfo3.scm 29 */
							long BgL_arg1816z00_6258;

							{	/* Cfa/cinfo3.scm 29 */
								long BgL_arg1817z00_6259;

								{	/* Cfa/cinfo3.scm 29 */
									long BgL_res2285z00_6260;

									BgL_res2285z00_6260 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_setfieldz00_bglt) BgL_o1178z00_5709)));
									BgL_arg1817z00_6259 = BgL_res2285z00_6260;
								}
								BgL_arg1816z00_6258 = (BgL_arg1817z00_6259 - OBJECT_TYPE);
							}
							BgL_arg1853z00_6257 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6258);
						}
						BgL_arg1852z00_6256 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1853z00_6257);
					}
					{	/* Cfa/cinfo3.scm 29 */
						long BgL_res2287z00_6261;

						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL_tmpz00_10251;

							BgL_tmpz00_10251 = ((obj_t) BgL_arg1852z00_6256);
							BgL_res2287z00_6261 = BGL_CLASS_INDEX(BgL_tmpz00_10251);
						}
						BgL_arg1851z00_6255 = BgL_res2287z00_6261;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_setfieldz00_bglt) BgL_o1178z00_5709)), BgL_arg1851z00_6255);
			}
			{	/* Cfa/cinfo3.scm 29 */
				BgL_objectz00_bglt BgL_tmpz00_10257;

				BgL_tmpz00_10257 =
					((BgL_objectz00_bglt) ((BgL_setfieldz00_bglt) BgL_o1178z00_5709));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10257, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_setfieldz00_bglt) BgL_o1178z00_5709));
			return
				((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt) BgL_o1178z00_5709));
		}

	}



/* &<@anonymous:1849> */
	obj_t BGl_z62zc3z04anonymousza31849ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5710,
		obj_t BgL_new1177z00_5711)
	{
		{	/* Cfa/cinfo3.scm 29 */
			{
				BgL_setfieldz00_bglt BgL_auxz00_10265;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_setfieldz00_bglt) BgL_new1177z00_5711))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10269;

					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_classz00_6263;

						BgL_classz00_6263 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL__ortest_1106z00_6264;

							BgL__ortest_1106z00_6264 = BGL_CLASS_NIL(BgL_classz00_6263);
							if (CBOOL(BgL__ortest_1106z00_6264))
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10269 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6264);
								}
							else
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10269 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6263));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_setfieldz00_bglt) BgL_new1177z00_5711))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10269), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_setfieldz00_bglt) BgL_new1177z00_5711))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_setfieldz00_bglt)
										BgL_new1177z00_5711))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_setfieldz00_bglt)
										BgL_new1177z00_5711))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_setfieldz00_bglt)
										BgL_new1177z00_5711))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_setfieldz00_bglt)
										BgL_new1177z00_5711))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				((((BgL_setfieldz00_bglt)
							COBJECT(((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt)
										BgL_new1177z00_5711))))->BgL_fnamez00) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10297;

					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_classz00_6265;

						BgL_classz00_6265 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL__ortest_1106z00_6266;

							BgL__ortest_1106z00_6266 = BGL_CLASS_NIL(BgL_classz00_6265);
							if (CBOOL(BgL__ortest_1106z00_6266))
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10297 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6266);
								}
							else
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10297 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6265));
								}
						}
					}
					((((BgL_setfieldz00_bglt) COBJECT(
									((BgL_setfieldz00_bglt)
										((BgL_setfieldz00_bglt) BgL_new1177z00_5711))))->
							BgL_ftypez00) = ((BgL_typez00_bglt) BgL_auxz00_10297), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10307;

					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_classz00_6267;

						BgL_classz00_6267 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL__ortest_1106z00_6268;

							BgL__ortest_1106z00_6268 = BGL_CLASS_NIL(BgL_classz00_6267);
							if (CBOOL(BgL__ortest_1106z00_6268))
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10307 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6268);
								}
							else
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10307 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6267));
								}
						}
					}
					((((BgL_setfieldz00_bglt) COBJECT(
									((BgL_setfieldz00_bglt)
										((BgL_setfieldz00_bglt) BgL_new1177z00_5711))))->
							BgL_otypez00) = ((BgL_typez00_bglt) BgL_auxz00_10307), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_10324;
					BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_10317;

					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_classz00_6269;

						BgL_classz00_6269 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 29 */
							obj_t BgL__ortest_1106z00_6270;

							BgL__ortest_1106z00_6270 = BGL_CLASS_NIL(BgL_classz00_6269);
							if (CBOOL(BgL__ortest_1106z00_6270))
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10324 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6270);
								}
							else
								{	/* Cfa/cinfo3.scm 29 */
									BgL_auxz00_10324 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6269));
								}
						}
					}
					{
						obj_t BgL_auxz00_10318;

						{	/* Cfa/cinfo3.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_10319;

							BgL_tmpz00_10319 =
								((BgL_objectz00_bglt)
								((BgL_setfieldz00_bglt) BgL_new1177z00_5711));
							BgL_auxz00_10318 = BGL_OBJECT_WIDENING(BgL_tmpz00_10319);
						}
						BgL_auxz00_10317 =
							((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_10318);
					}
					((((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10317))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_10324), BUNSPEC);
				}
				BgL_auxz00_10265 = ((BgL_setfieldz00_bglt) BgL_new1177z00_5711);
				return ((obj_t) BgL_auxz00_10265);
			}
		}

	}



/* &lambda1847 */
	BgL_setfieldz00_bglt BGl_z62lambda1847z62zzcfa_info3z00(obj_t BgL_envz00_5712,
		obj_t BgL_o1174z00_5713)
	{
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_setfieldzf2cinfozf2_bglt BgL_wide1176z00_6272;

				BgL_wide1176z00_6272 =
					((BgL_setfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_setfieldzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 29 */
					obj_t BgL_auxz00_10339;
					BgL_objectz00_bglt BgL_tmpz00_10335;

					BgL_auxz00_10339 = ((obj_t) BgL_wide1176z00_6272);
					BgL_tmpz00_10335 =
						((BgL_objectz00_bglt)
						((BgL_setfieldz00_bglt)
							((BgL_setfieldz00_bglt) BgL_o1174z00_5713)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10335, BgL_auxz00_10339);
				}
				((BgL_objectz00_bglt)
					((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt) BgL_o1174z00_5713)));
				{	/* Cfa/cinfo3.scm 29 */
					long BgL_arg1848z00_6273;

					{	/* Cfa/cinfo3.scm 29 */
						long BgL_res2284z00_6274;

						BgL_res2284z00_6274 =
							BGL_CLASS_INDEX(BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1848z00_6273 = BgL_res2284z00_6274;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_setfieldz00_bglt)
								((BgL_setfieldz00_bglt) BgL_o1174z00_5713))),
						BgL_arg1848z00_6273);
				}
				return
					((BgL_setfieldz00_bglt)
					((BgL_setfieldz00_bglt) ((BgL_setfieldz00_bglt) BgL_o1174z00_5713)));
			}
		}

	}



/* &lambda1843 */
	BgL_setfieldz00_bglt BGl_z62lambda1843z62zzcfa_info3z00(obj_t BgL_envz00_5714,
		obj_t BgL_loc1163z00_5715, obj_t BgL_type1164z00_5716,
		obj_t BgL_sidezd2effect1165zd2_5717, obj_t BgL_key1166z00_5718,
		obj_t BgL_exprza21167za2_5719, obj_t BgL_effect1168z00_5720,
		obj_t BgL_czd2format1169zd2_5721, obj_t BgL_fname1170z00_5722,
		obj_t BgL_ftype1171z00_5723, obj_t BgL_otype1172z00_5724,
		obj_t BgL_approx1173z00_5725)
	{
		{	/* Cfa/cinfo3.scm 29 */
			{	/* Cfa/cinfo3.scm 29 */
				BgL_setfieldz00_bglt BgL_new1394z00_6282;

				{	/* Cfa/cinfo3.scm 29 */
					BgL_setfieldz00_bglt BgL_tmp1392z00_6283;
					BgL_setfieldzf2cinfozf2_bglt BgL_wide1393z00_6284;

					{
						BgL_setfieldz00_bglt BgL_auxz00_10353;

						{	/* Cfa/cinfo3.scm 29 */
							BgL_setfieldz00_bglt BgL_new1391z00_6285;

							BgL_new1391z00_6285 =
								((BgL_setfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_setfieldz00_bgl))));
							{	/* Cfa/cinfo3.scm 29 */
								long BgL_arg1846z00_6286;

								{	/* Cfa/cinfo3.scm 29 */
									long BgL_res2282z00_6287;

									BgL_res2282z00_6287 =
										BGL_CLASS_INDEX(BGl_setfieldz00zzast_nodez00);
									BgL_arg1846z00_6286 = BgL_res2282z00_6287;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1391z00_6285),
									BgL_arg1846z00_6286);
							}
							{	/* Cfa/cinfo3.scm 29 */
								BgL_objectz00_bglt BgL_tmpz00_10358;

								BgL_tmpz00_10358 = ((BgL_objectz00_bglt) BgL_new1391z00_6285);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10358, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1391z00_6285);
							BgL_auxz00_10353 = BgL_new1391z00_6285;
						}
						BgL_tmp1392z00_6283 = ((BgL_setfieldz00_bglt) BgL_auxz00_10353);
					}
					BgL_wide1393z00_6284 =
						((BgL_setfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_setfieldzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.scm 29 */
						obj_t BgL_auxz00_10366;
						BgL_objectz00_bglt BgL_tmpz00_10364;

						BgL_auxz00_10366 = ((obj_t) BgL_wide1393z00_6284);
						BgL_tmpz00_10364 = ((BgL_objectz00_bglt) BgL_tmp1392z00_6283);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10364, BgL_auxz00_10366);
					}
					((BgL_objectz00_bglt) BgL_tmp1392z00_6283);
					{	/* Cfa/cinfo3.scm 29 */
						long BgL_arg1845z00_6288;

						{	/* Cfa/cinfo3.scm 29 */
							long BgL_res2283z00_6289;

							BgL_res2283z00_6289 =
								BGL_CLASS_INDEX(BGl_setfieldzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1845z00_6288 = BgL_res2283z00_6289;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1392z00_6283), BgL_arg1845z00_6288);
					}
					BgL_new1394z00_6282 = ((BgL_setfieldz00_bglt) BgL_tmp1392z00_6283);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1394z00_6282)))->BgL_locz00) =
					((obj_t) BgL_loc1163z00_5715), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1394z00_6282)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1164z00_5716)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1394z00_6282)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1165zd2_5717), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1394z00_6282)))->BgL_keyz00) =
					((obj_t) BgL_key1166z00_5718), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1394z00_6282)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21167za2_5719)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1394z00_6282)))->BgL_effectz00) =
					((obj_t) BgL_effect1168z00_5720), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1394z00_6282)))->BgL_czd2formatzd2) =
					((obj_t) ((obj_t) BgL_czd2format1169zd2_5721)), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(((BgL_setfieldz00_bglt)
									BgL_new1394z00_6282)))->BgL_fnamez00) =
					((obj_t) ((obj_t) BgL_fname1170z00_5722)), BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(((BgL_setfieldz00_bglt)
									BgL_new1394z00_6282)))->BgL_ftypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ftype1171z00_5723)),
					BUNSPEC);
				((((BgL_setfieldz00_bglt) COBJECT(((BgL_setfieldz00_bglt)
									BgL_new1394z00_6282)))->BgL_otypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_otype1172z00_5724)),
					BUNSPEC);
				{
					BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_10400;

					{
						obj_t BgL_auxz00_10401;

						{	/* Cfa/cinfo3.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_10402;

							BgL_tmpz00_10402 = ((BgL_objectz00_bglt) BgL_new1394z00_6282);
							BgL_auxz00_10401 = BGL_OBJECT_WIDENING(BgL_tmpz00_10402);
						}
						BgL_auxz00_10400 =
							((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_10401);
					}
					((((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10400))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1173z00_5725)), BUNSPEC);
				}
				return BgL_new1394z00_6282;
			}
		}

	}



/* &lambda1859 */
	obj_t BGl_z62lambda1859z62zzcfa_info3z00(obj_t BgL_envz00_5726,
		obj_t BgL_oz00_5727, obj_t BgL_vz00_5728)
	{
		{	/* Cfa/cinfo3.scm 29 */
			{
				BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_10408;

				{
					obj_t BgL_auxz00_10409;

					{	/* Cfa/cinfo3.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_10410;

						BgL_tmpz00_10410 =
							((BgL_objectz00_bglt) ((BgL_setfieldz00_bglt) BgL_oz00_5727));
						BgL_auxz00_10409 = BGL_OBJECT_WIDENING(BgL_tmpz00_10410);
					}
					BgL_auxz00_10408 = ((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_10409);
				}
				return
					((((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10408))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5728)), BUNSPEC);
			}
		}

	}



/* &lambda1858 */
	BgL_approxz00_bglt BGl_z62lambda1858z62zzcfa_info3z00(obj_t BgL_envz00_5729,
		obj_t BgL_oz00_5730)
	{
		{	/* Cfa/cinfo3.scm 29 */
			{
				BgL_setfieldzf2cinfozf2_bglt BgL_auxz00_10417;

				{
					obj_t BgL_auxz00_10418;

					{	/* Cfa/cinfo3.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_10419;

						BgL_tmpz00_10419 =
							((BgL_objectz00_bglt) ((BgL_setfieldz00_bglt) BgL_oz00_5730));
						BgL_auxz00_10418 = BGL_OBJECT_WIDENING(BgL_tmpz00_10419);
					}
					BgL_auxz00_10417 = ((BgL_setfieldzf2cinfozf2_bglt) BgL_auxz00_10418);
				}
				return
					(((BgL_setfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10417))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1825 */
	BgL_getfieldz00_bglt BGl_z62lambda1825z62zzcfa_info3z00(obj_t BgL_envz00_5731,
		obj_t BgL_o1161z00_5732)
	{
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				long BgL_arg1826z00_6294;

				{	/* Cfa/cinfo3.scm 28 */
					obj_t BgL_arg1827z00_6295;

					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_arg1828z00_6296;

						{	/* Cfa/cinfo3.scm 28 */
							long BgL_arg1816z00_6297;

							{	/* Cfa/cinfo3.scm 28 */
								long BgL_arg1817z00_6298;

								{	/* Cfa/cinfo3.scm 28 */
									long BgL_res2279z00_6299;

									BgL_res2279z00_6299 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_getfieldz00_bglt) BgL_o1161z00_5732)));
									BgL_arg1817z00_6298 = BgL_res2279z00_6299;
								}
								BgL_arg1816z00_6297 = (BgL_arg1817z00_6298 - OBJECT_TYPE);
							}
							BgL_arg1828z00_6296 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6297);
						}
						BgL_arg1827z00_6295 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1828z00_6296);
					}
					{	/* Cfa/cinfo3.scm 28 */
						long BgL_res2281z00_6300;

						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL_tmpz00_10431;

							BgL_tmpz00_10431 = ((obj_t) BgL_arg1827z00_6295);
							BgL_res2281z00_6300 = BGL_CLASS_INDEX(BgL_tmpz00_10431);
						}
						BgL_arg1826z00_6294 = BgL_res2281z00_6300;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_getfieldz00_bglt) BgL_o1161z00_5732)), BgL_arg1826z00_6294);
			}
			{	/* Cfa/cinfo3.scm 28 */
				BgL_objectz00_bglt BgL_tmpz00_10437;

				BgL_tmpz00_10437 =
					((BgL_objectz00_bglt) ((BgL_getfieldz00_bglt) BgL_o1161z00_5732));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10437, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_getfieldz00_bglt) BgL_o1161z00_5732));
			return
				((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt) BgL_o1161z00_5732));
		}

	}



/* &<@anonymous:1824> */
	obj_t BGl_z62zc3z04anonymousza31824ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5733,
		obj_t BgL_new1160z00_5734)
	{
		{	/* Cfa/cinfo3.scm 28 */
			{
				BgL_getfieldz00_bglt BgL_auxz00_10445;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_getfieldz00_bglt) BgL_new1160z00_5734))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10449;

					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_classz00_6302;

						BgL_classz00_6302 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL__ortest_1106z00_6303;

							BgL__ortest_1106z00_6303 = BGL_CLASS_NIL(BgL_classz00_6302);
							if (CBOOL(BgL__ortest_1106z00_6303))
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10449 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6303);
								}
							else
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10449 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6302));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_getfieldz00_bglt) BgL_new1160z00_5734))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10449), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_getfieldz00_bglt) BgL_new1160z00_5734))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_getfieldz00_bglt)
										BgL_new1160z00_5734))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_getfieldz00_bglt)
										BgL_new1160z00_5734))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_getfieldz00_bglt)
										BgL_new1160z00_5734))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_privatez00_bglt)
							COBJECT(((BgL_privatez00_bglt) ((BgL_getfieldz00_bglt)
										BgL_new1160z00_5734))))->BgL_czd2formatzd2) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				((((BgL_getfieldz00_bglt)
							COBJECT(((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt)
										BgL_new1160z00_5734))))->BgL_fnamez00) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10477;

					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_classz00_6304;

						BgL_classz00_6304 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL__ortest_1106z00_6305;

							BgL__ortest_1106z00_6305 = BGL_CLASS_NIL(BgL_classz00_6304);
							if (CBOOL(BgL__ortest_1106z00_6305))
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10477 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6305);
								}
							else
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10477 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6304));
								}
						}
					}
					((((BgL_getfieldz00_bglt) COBJECT(
									((BgL_getfieldz00_bglt)
										((BgL_getfieldz00_bglt) BgL_new1160z00_5734))))->
							BgL_ftypez00) = ((BgL_typez00_bglt) BgL_auxz00_10477), BUNSPEC);
				}
				{
					BgL_typez00_bglt BgL_auxz00_10487;

					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_classz00_6306;

						BgL_classz00_6306 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL__ortest_1106z00_6307;

							BgL__ortest_1106z00_6307 = BGL_CLASS_NIL(BgL_classz00_6306);
							if (CBOOL(BgL__ortest_1106z00_6307))
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10487 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6307);
								}
							else
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10487 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6306));
								}
						}
					}
					((((BgL_getfieldz00_bglt) COBJECT(
									((BgL_getfieldz00_bglt)
										((BgL_getfieldz00_bglt) BgL_new1160z00_5734))))->
							BgL_otypez00) = ((BgL_typez00_bglt) BgL_auxz00_10487), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_10504;
					BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_10497;

					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_classz00_6308;

						BgL_classz00_6308 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 28 */
							obj_t BgL__ortest_1106z00_6309;

							BgL__ortest_1106z00_6309 = BGL_CLASS_NIL(BgL_classz00_6308);
							if (CBOOL(BgL__ortest_1106z00_6309))
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10504 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6309);
								}
							else
								{	/* Cfa/cinfo3.scm 28 */
									BgL_auxz00_10504 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6308));
								}
						}
					}
					{
						obj_t BgL_auxz00_10498;

						{	/* Cfa/cinfo3.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_10499;

							BgL_tmpz00_10499 =
								((BgL_objectz00_bglt)
								((BgL_getfieldz00_bglt) BgL_new1160z00_5734));
							BgL_auxz00_10498 = BGL_OBJECT_WIDENING(BgL_tmpz00_10499);
						}
						BgL_auxz00_10497 =
							((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_10498);
					}
					((((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10497))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_10504), BUNSPEC);
				}
				BgL_auxz00_10445 = ((BgL_getfieldz00_bglt) BgL_new1160z00_5734);
				return ((obj_t) BgL_auxz00_10445);
			}
		}

	}



/* &lambda1822 */
	BgL_getfieldz00_bglt BGl_z62lambda1822z62zzcfa_info3z00(obj_t BgL_envz00_5735,
		obj_t BgL_o1157z00_5736)
	{
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_getfieldzf2cinfozf2_bglt BgL_wide1159z00_6311;

				BgL_wide1159z00_6311 =
					((BgL_getfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_getfieldzf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 28 */
					obj_t BgL_auxz00_10519;
					BgL_objectz00_bglt BgL_tmpz00_10515;

					BgL_auxz00_10519 = ((obj_t) BgL_wide1159z00_6311);
					BgL_tmpz00_10515 =
						((BgL_objectz00_bglt)
						((BgL_getfieldz00_bglt)
							((BgL_getfieldz00_bglt) BgL_o1157z00_5736)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10515, BgL_auxz00_10519);
				}
				((BgL_objectz00_bglt)
					((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt) BgL_o1157z00_5736)));
				{	/* Cfa/cinfo3.scm 28 */
					long BgL_arg1823z00_6312;

					{	/* Cfa/cinfo3.scm 28 */
						long BgL_res2278z00_6313;

						BgL_res2278z00_6313 =
							BGL_CLASS_INDEX(BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
						BgL_arg1823z00_6312 = BgL_res2278z00_6313;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_getfieldz00_bglt)
								((BgL_getfieldz00_bglt) BgL_o1157z00_5736))),
						BgL_arg1823z00_6312);
				}
				return
					((BgL_getfieldz00_bglt)
					((BgL_getfieldz00_bglt) ((BgL_getfieldz00_bglt) BgL_o1157z00_5736)));
			}
		}

	}



/* &lambda1812 */
	BgL_getfieldz00_bglt BGl_z62lambda1812z62zzcfa_info3z00(obj_t BgL_envz00_5737,
		obj_t BgL_loc1146z00_5738, obj_t BgL_type1147z00_5739,
		obj_t BgL_sidezd2effect1148zd2_5740, obj_t BgL_key1149z00_5741,
		obj_t BgL_exprza21150za2_5742, obj_t BgL_effect1151z00_5743,
		obj_t BgL_czd2format1152zd2_5744, obj_t BgL_fname1153z00_5745,
		obj_t BgL_ftype1154z00_5746, obj_t BgL_otype1155z00_5747,
		obj_t BgL_approx1156z00_5748)
	{
		{	/* Cfa/cinfo3.scm 28 */
			{	/* Cfa/cinfo3.scm 28 */
				BgL_getfieldz00_bglt BgL_new1389z00_6321;

				{	/* Cfa/cinfo3.scm 28 */
					BgL_getfieldz00_bglt BgL_tmp1387z00_6322;
					BgL_getfieldzf2cinfozf2_bglt BgL_wide1388z00_6323;

					{
						BgL_getfieldz00_bglt BgL_auxz00_10533;

						{	/* Cfa/cinfo3.scm 28 */
							BgL_getfieldz00_bglt BgL_new1386z00_6324;

							BgL_new1386z00_6324 =
								((BgL_getfieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_getfieldz00_bgl))));
							{	/* Cfa/cinfo3.scm 28 */
								long BgL_arg1821z00_6325;

								{	/* Cfa/cinfo3.scm 28 */
									long BgL_res2276z00_6326;

									BgL_res2276z00_6326 =
										BGL_CLASS_INDEX(BGl_getfieldz00zzast_nodez00);
									BgL_arg1821z00_6325 = BgL_res2276z00_6326;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1386z00_6324),
									BgL_arg1821z00_6325);
							}
							{	/* Cfa/cinfo3.scm 28 */
								BgL_objectz00_bglt BgL_tmpz00_10538;

								BgL_tmpz00_10538 = ((BgL_objectz00_bglt) BgL_new1386z00_6324);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10538, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1386z00_6324);
							BgL_auxz00_10533 = BgL_new1386z00_6324;
						}
						BgL_tmp1387z00_6322 = ((BgL_getfieldz00_bglt) BgL_auxz00_10533);
					}
					BgL_wide1388z00_6323 =
						((BgL_getfieldzf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_getfieldzf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.scm 28 */
						obj_t BgL_auxz00_10546;
						BgL_objectz00_bglt BgL_tmpz00_10544;

						BgL_auxz00_10546 = ((obj_t) BgL_wide1388z00_6323);
						BgL_tmpz00_10544 = ((BgL_objectz00_bglt) BgL_tmp1387z00_6322);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10544, BgL_auxz00_10546);
					}
					((BgL_objectz00_bglt) BgL_tmp1387z00_6322);
					{	/* Cfa/cinfo3.scm 28 */
						long BgL_arg1820z00_6327;

						{	/* Cfa/cinfo3.scm 28 */
							long BgL_res2277z00_6328;

							BgL_res2277z00_6328 =
								BGL_CLASS_INDEX(BGl_getfieldzf2Cinfozf2zzcfa_info3z00);
							BgL_arg1820z00_6327 = BgL_res2277z00_6328;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1387z00_6322), BgL_arg1820z00_6327);
					}
					BgL_new1389z00_6321 = ((BgL_getfieldz00_bglt) BgL_tmp1387z00_6322);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1389z00_6321)))->BgL_locz00) =
					((obj_t) BgL_loc1146z00_5738), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1389z00_6321)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1147z00_5739)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1389z00_6321)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1148zd2_5740), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1389z00_6321)))->BgL_keyz00) =
					((obj_t) BgL_key1149z00_5741), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1389z00_6321)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21150za2_5742)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1389z00_6321)))->BgL_effectz00) =
					((obj_t) BgL_effect1151z00_5743), BUNSPEC);
				((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt)
									BgL_new1389z00_6321)))->BgL_czd2formatzd2) =
					((obj_t) ((obj_t) BgL_czd2format1152zd2_5744)), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(((BgL_getfieldz00_bglt)
									BgL_new1389z00_6321)))->BgL_fnamez00) =
					((obj_t) ((obj_t) BgL_fname1153z00_5745)), BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(((BgL_getfieldz00_bglt)
									BgL_new1389z00_6321)))->BgL_ftypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ftype1154z00_5746)),
					BUNSPEC);
				((((BgL_getfieldz00_bglt) COBJECT(((BgL_getfieldz00_bglt)
									BgL_new1389z00_6321)))->BgL_otypez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_otype1155z00_5747)),
					BUNSPEC);
				{
					BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_10580;

					{
						obj_t BgL_auxz00_10581;

						{	/* Cfa/cinfo3.scm 28 */
							BgL_objectz00_bglt BgL_tmpz00_10582;

							BgL_tmpz00_10582 = ((BgL_objectz00_bglt) BgL_new1389z00_6321);
							BgL_auxz00_10581 = BGL_OBJECT_WIDENING(BgL_tmpz00_10582);
						}
						BgL_auxz00_10580 =
							((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_10581);
					}
					((((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10580))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1156z00_5748)), BUNSPEC);
				}
				return BgL_new1389z00_6321;
			}
		}

	}



/* &lambda1833 */
	obj_t BGl_z62lambda1833z62zzcfa_info3z00(obj_t BgL_envz00_5749,
		obj_t BgL_oz00_5750, obj_t BgL_vz00_5751)
	{
		{	/* Cfa/cinfo3.scm 28 */
			{
				BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_10588;

				{
					obj_t BgL_auxz00_10589;

					{	/* Cfa/cinfo3.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_10590;

						BgL_tmpz00_10590 =
							((BgL_objectz00_bglt) ((BgL_getfieldz00_bglt) BgL_oz00_5750));
						BgL_auxz00_10589 = BGL_OBJECT_WIDENING(BgL_tmpz00_10590);
					}
					BgL_auxz00_10588 = ((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_10589);
				}
				return
					((((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10588))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5751)), BUNSPEC);
			}
		}

	}



/* &lambda1832 */
	BgL_approxz00_bglt BGl_z62lambda1832z62zzcfa_info3z00(obj_t BgL_envz00_5752,
		obj_t BgL_oz00_5753)
	{
		{	/* Cfa/cinfo3.scm 28 */
			{
				BgL_getfieldzf2cinfozf2_bglt BgL_auxz00_10597;

				{
					obj_t BgL_auxz00_10598;

					{	/* Cfa/cinfo3.scm 28 */
						BgL_objectz00_bglt BgL_tmpz00_10599;

						BgL_tmpz00_10599 =
							((BgL_objectz00_bglt) ((BgL_getfieldz00_bglt) BgL_oz00_5753));
						BgL_auxz00_10598 = BGL_OBJECT_WIDENING(BgL_tmpz00_10599);
					}
					BgL_auxz00_10597 = ((BgL_getfieldzf2cinfozf2_bglt) BgL_auxz00_10598);
				}
				return
					(((BgL_getfieldzf2cinfozf2_bglt) COBJECT(BgL_auxz00_10597))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1773 */
	BgL_pragmaz00_bglt BGl_z62lambda1773z62zzcfa_info3z00(obj_t BgL_envz00_5754,
		obj_t BgL_o1144z00_5755)
	{
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				long BgL_arg1775z00_6333;

				{	/* Cfa/cinfo3.scm 27 */
					obj_t BgL_arg1778z00_6334;

					{	/* Cfa/cinfo3.scm 27 */
						obj_t BgL_arg1779z00_6335;

						{	/* Cfa/cinfo3.scm 27 */
							long BgL_arg1816z00_6336;

							{	/* Cfa/cinfo3.scm 27 */
								long BgL_arg1817z00_6337;

								{	/* Cfa/cinfo3.scm 27 */
									long BgL_res2273z00_6338;

									BgL_res2273z00_6338 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_pragmaz00_bglt) BgL_o1144z00_5755)));
									BgL_arg1817z00_6337 = BgL_res2273z00_6338;
								}
								BgL_arg1816z00_6336 = (BgL_arg1817z00_6337 - OBJECT_TYPE);
							}
							BgL_arg1779z00_6335 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_6336);
						}
						BgL_arg1778z00_6334 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1779z00_6335);
					}
					{	/* Cfa/cinfo3.scm 27 */
						long BgL_res2275z00_6339;

						{	/* Cfa/cinfo3.scm 27 */
							obj_t BgL_tmpz00_10611;

							BgL_tmpz00_10611 = ((obj_t) BgL_arg1778z00_6334);
							BgL_res2275z00_6339 = BGL_CLASS_INDEX(BgL_tmpz00_10611);
						}
						BgL_arg1775z00_6333 = BgL_res2275z00_6339;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_pragmaz00_bglt) BgL_o1144z00_5755)), BgL_arg1775z00_6333);
			}
			{	/* Cfa/cinfo3.scm 27 */
				BgL_objectz00_bglt BgL_tmpz00_10617;

				BgL_tmpz00_10617 =
					((BgL_objectz00_bglt) ((BgL_pragmaz00_bglt) BgL_o1144z00_5755));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10617, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_pragmaz00_bglt) BgL_o1144z00_5755));
			return ((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_o1144z00_5755));
		}

	}



/* &<@anonymous:1772> */
	obj_t BGl_z62zc3z04anonymousza31772ze3ze5zzcfa_info3z00(obj_t BgL_envz00_5756,
		obj_t BgL_new1143z00_5757)
	{
		{	/* Cfa/cinfo3.scm 27 */
			{
				BgL_pragmaz00_bglt BgL_auxz00_10625;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_pragmaz00_bglt) BgL_new1143z00_5757))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_10629;

					{	/* Cfa/cinfo3.scm 27 */
						obj_t BgL_classz00_6341;

						BgL_classz00_6341 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo3.scm 27 */
							obj_t BgL__ortest_1106z00_6342;

							BgL__ortest_1106z00_6342 = BGL_CLASS_NIL(BgL_classz00_6341);
							if (CBOOL(BgL__ortest_1106z00_6342))
								{	/* Cfa/cinfo3.scm 27 */
									BgL_auxz00_10629 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_6342);
								}
							else
								{	/* Cfa/cinfo3.scm 27 */
									BgL_auxz00_10629 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6341));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_pragmaz00_bglt) BgL_new1143z00_5757))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_10629), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_pragmaz00_bglt) BgL_new1143z00_5757))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_pragmaz00_bglt)
										BgL_new1143z00_5757))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_pragmaz00_bglt)
										BgL_new1143z00_5757))))->BgL_exprza2za2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_externz00_bglt)
							COBJECT(((BgL_externz00_bglt) ((BgL_pragmaz00_bglt)
										BgL_new1143z00_5757))))->BgL_effectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_pragmaz00_bglt)
							COBJECT(((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt)
										BgL_new1143z00_5757))))->BgL_formatz00) =
					((obj_t) BGl_string2439z00zzcfa_info3z00), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_10661;
					BgL_pragmazf2cinfozf2_bglt BgL_auxz00_10654;

					{	/* Cfa/cinfo3.scm 27 */
						obj_t BgL_classz00_6343;

						BgL_classz00_6343 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo3.scm 27 */
							obj_t BgL__ortest_1106z00_6344;

							BgL__ortest_1106z00_6344 = BGL_CLASS_NIL(BgL_classz00_6343);
							if (CBOOL(BgL__ortest_1106z00_6344))
								{	/* Cfa/cinfo3.scm 27 */
									BgL_auxz00_10661 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_6344);
								}
							else
								{	/* Cfa/cinfo3.scm 27 */
									BgL_auxz00_10661 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_6343));
								}
						}
					}
					{
						obj_t BgL_auxz00_10655;

						{	/* Cfa/cinfo3.scm 27 */
							BgL_objectz00_bglt BgL_tmpz00_10656;

							BgL_tmpz00_10656 =
								((BgL_objectz00_bglt)
								((BgL_pragmaz00_bglt) BgL_new1143z00_5757));
							BgL_auxz00_10655 = BGL_OBJECT_WIDENING(BgL_tmpz00_10656);
						}
						BgL_auxz00_10654 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_10655);
					}
					((((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_10654))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_10661), BUNSPEC);
				}
				BgL_auxz00_10625 = ((BgL_pragmaz00_bglt) BgL_new1143z00_5757);
				return ((obj_t) BgL_auxz00_10625);
			}
		}

	}



/* &lambda1769 */
	BgL_pragmaz00_bglt BGl_z62lambda1769z62zzcfa_info3z00(obj_t BgL_envz00_5758,
		obj_t BgL_o1140z00_5759)
	{
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_pragmazf2cinfozf2_bglt BgL_wide1142z00_6346;

				BgL_wide1142z00_6346 =
					((BgL_pragmazf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_pragmazf2cinfozf2_bgl))));
				{	/* Cfa/cinfo3.scm 27 */
					obj_t BgL_auxz00_10676;
					BgL_objectz00_bglt BgL_tmpz00_10672;

					BgL_auxz00_10676 = ((obj_t) BgL_wide1142z00_6346);
					BgL_tmpz00_10672 =
						((BgL_objectz00_bglt)
						((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_o1140z00_5759)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10672, BgL_auxz00_10676);
				}
				((BgL_objectz00_bglt)
					((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_o1140z00_5759)));
				{	/* Cfa/cinfo3.scm 27 */
					long BgL_arg1771z00_6347;

					{	/* Cfa/cinfo3.scm 27 */
						long BgL_res2272z00_6348;

						BgL_res2272z00_6348 =
							BGL_CLASS_INDEX(BGl_pragmazf2Cinfozf2zzcfa_info3z00);
						BgL_arg1771z00_6347 = BgL_res2272z00_6348;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_pragmaz00_bglt)
								((BgL_pragmaz00_bglt) BgL_o1140z00_5759))),
						BgL_arg1771z00_6347);
				}
				return
					((BgL_pragmaz00_bglt)
					((BgL_pragmaz00_bglt) ((BgL_pragmaz00_bglt) BgL_o1140z00_5759)));
			}
		}

	}



/* &lambda1760 */
	BgL_pragmaz00_bglt BGl_z62lambda1760z62zzcfa_info3z00(obj_t BgL_envz00_5760,
		obj_t BgL_loc1132z00_5761, obj_t BgL_type1133z00_5762,
		obj_t BgL_sidezd2effect1134zd2_5763, obj_t BgL_key1135z00_5764,
		obj_t BgL_exprza21136za2_5765, obj_t BgL_effect1137z00_5766,
		obj_t BgL_format1138z00_5767, obj_t BgL_approx1139z00_5768)
	{
		{	/* Cfa/cinfo3.scm 27 */
			{	/* Cfa/cinfo3.scm 27 */
				BgL_pragmaz00_bglt BgL_new1384z00_6353;

				{	/* Cfa/cinfo3.scm 27 */
					BgL_pragmaz00_bglt BgL_tmp1382z00_6354;
					BgL_pragmazf2cinfozf2_bglt BgL_wide1383z00_6355;

					{
						BgL_pragmaz00_bglt BgL_auxz00_10690;

						{	/* Cfa/cinfo3.scm 27 */
							BgL_pragmaz00_bglt BgL_new1381z00_6356;

							BgL_new1381z00_6356 =
								((BgL_pragmaz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_pragmaz00_bgl))));
							{	/* Cfa/cinfo3.scm 27 */
								long BgL_arg1768z00_6357;

								{	/* Cfa/cinfo3.scm 27 */
									long BgL_res2270z00_6358;

									BgL_res2270z00_6358 =
										BGL_CLASS_INDEX(BGl_pragmaz00zzast_nodez00);
									BgL_arg1768z00_6357 = BgL_res2270z00_6358;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1381z00_6356),
									BgL_arg1768z00_6357);
							}
							{	/* Cfa/cinfo3.scm 27 */
								BgL_objectz00_bglt BgL_tmpz00_10695;

								BgL_tmpz00_10695 = ((BgL_objectz00_bglt) BgL_new1381z00_6356);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10695, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1381z00_6356);
							BgL_auxz00_10690 = BgL_new1381z00_6356;
						}
						BgL_tmp1382z00_6354 = ((BgL_pragmaz00_bglt) BgL_auxz00_10690);
					}
					BgL_wide1383z00_6355 =
						((BgL_pragmazf2cinfozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_pragmazf2cinfozf2_bgl))));
					{	/* Cfa/cinfo3.scm 27 */
						obj_t BgL_auxz00_10703;
						BgL_objectz00_bglt BgL_tmpz00_10701;

						BgL_auxz00_10703 = ((obj_t) BgL_wide1383z00_6355);
						BgL_tmpz00_10701 = ((BgL_objectz00_bglt) BgL_tmp1382z00_6354);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10701, BgL_auxz00_10703);
					}
					((BgL_objectz00_bglt) BgL_tmp1382z00_6354);
					{	/* Cfa/cinfo3.scm 27 */
						long BgL_arg1761z00_6359;

						{	/* Cfa/cinfo3.scm 27 */
							long BgL_res2271z00_6360;

							BgL_res2271z00_6360 =
								BGL_CLASS_INDEX(BGl_pragmazf2Cinfozf2zzcfa_info3z00);
							BgL_arg1761z00_6359 = BgL_res2271z00_6360;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1382z00_6354), BgL_arg1761z00_6359);
					}
					BgL_new1384z00_6353 = ((BgL_pragmaz00_bglt) BgL_tmp1382z00_6354);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1384z00_6353)))->BgL_locz00) =
					((obj_t) BgL_loc1132z00_5761), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1384z00_6353)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1133z00_5762)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1384z00_6353)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1134zd2_5763), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1384z00_6353)))->BgL_keyz00) =
					((obj_t) BgL_key1135z00_5764), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1384z00_6353)))->BgL_exprza2za2) =
					((obj_t) ((obj_t) BgL_exprza21136za2_5765)), BUNSPEC);
				((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt)
									BgL_new1384z00_6353)))->BgL_effectz00) =
					((obj_t) BgL_effect1137z00_5766), BUNSPEC);
				((((BgL_pragmaz00_bglt) COBJECT(((BgL_pragmaz00_bglt)
									BgL_new1384z00_6353)))->BgL_formatz00) =
					((obj_t) ((obj_t) BgL_format1138z00_5767)), BUNSPEC);
				{
					BgL_pragmazf2cinfozf2_bglt BgL_auxz00_10728;

					{
						obj_t BgL_auxz00_10729;

						{	/* Cfa/cinfo3.scm 27 */
							BgL_objectz00_bglt BgL_tmpz00_10730;

							BgL_tmpz00_10730 = ((BgL_objectz00_bglt) BgL_new1384z00_6353);
							BgL_auxz00_10729 = BGL_OBJECT_WIDENING(BgL_tmpz00_10730);
						}
						BgL_auxz00_10728 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_10729);
					}
					((((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_10728))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1139z00_5768)), BUNSPEC);
				}
				return BgL_new1384z00_6353;
			}
		}

	}



/* &lambda1792 */
	obj_t BGl_z62lambda1792z62zzcfa_info3z00(obj_t BgL_envz00_5769,
		obj_t BgL_oz00_5770, obj_t BgL_vz00_5771)
	{
		{	/* Cfa/cinfo3.scm 27 */
			{
				BgL_pragmazf2cinfozf2_bglt BgL_auxz00_10736;

				{
					obj_t BgL_auxz00_10737;

					{	/* Cfa/cinfo3.scm 27 */
						BgL_objectz00_bglt BgL_tmpz00_10738;

						BgL_tmpz00_10738 =
							((BgL_objectz00_bglt) ((BgL_pragmaz00_bglt) BgL_oz00_5770));
						BgL_auxz00_10737 = BGL_OBJECT_WIDENING(BgL_tmpz00_10738);
					}
					BgL_auxz00_10736 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_10737);
				}
				return
					((((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_10736))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_5771)), BUNSPEC);
			}
		}

	}



/* &lambda1791 */
	BgL_approxz00_bglt BGl_z62lambda1791z62zzcfa_info3z00(obj_t BgL_envz00_5772,
		obj_t BgL_oz00_5773)
	{
		{	/* Cfa/cinfo3.scm 27 */
			{
				BgL_pragmazf2cinfozf2_bglt BgL_auxz00_10745;

				{
					obj_t BgL_auxz00_10746;

					{	/* Cfa/cinfo3.scm 27 */
						BgL_objectz00_bglt BgL_tmpz00_10747;

						BgL_tmpz00_10747 =
							((BgL_objectz00_bglt) ((BgL_pragmaz00_bglt) BgL_oz00_5773));
						BgL_auxz00_10746 = BGL_OBJECT_WIDENING(BgL_tmpz00_10747);
					}
					BgL_auxz00_10745 = ((BgL_pragmazf2cinfozf2_bglt) BgL_auxz00_10746);
				}
				return
					(((BgL_pragmazf2cinfozf2_bglt) COBJECT(BgL_auxz00_10745))->
					BgL_approxz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_info3z00()
	{
		{	/* Cfa/cinfo3.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2440z00zzcfa_info3z00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2440z00zzcfa_info3z00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2440z00zzcfa_info3z00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2440z00zzcfa_info3z00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2440z00zzcfa_info3z00));
		}

	}

#ifdef __cplusplus
}
#endif
