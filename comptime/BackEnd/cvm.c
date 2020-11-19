/*===========================================================================*/
/*   (BackEnd/cvm.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/cvm.scm) */
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

	typedef struct BgL_cvmz00_bgl
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
	}             *BgL_cvmz00_bglt;

	typedef struct BgL_sawcz00_bgl
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
	}              *BgL_sawcz00_bglt;

	typedef struct BgL_cgenz00_bgl
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
	}              *BgL_cgenz00_bglt;


	static obj_t BGl_z62cgenzd2tracezd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cvmzd2heapzd2suffixzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cvmzd2boundzd2checkzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00
		(BgL_sawcz00_bglt, bool_t);
	static obj_t BGl_z62sawczd2removezd2emptyzd2letzb0zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2debugzd2supportz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2functionszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_sawcz00_bglt BGl_makezd2sawczd2zzbackend_cvmz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, bool_t);
	static obj_t BGl_z62cvmzd2callcczb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2typedzd2funcallzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2externzd2variableszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2typedzd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cgenz00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t
		BGl_z62cgenzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sawczd2typeszd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62cvmzd2debugzd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cgenzd2tracezd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	static obj_t BGl_z62sawczd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00(obj_t,
		obj_t);
	static obj_t BGl_z62sawczd2qualifiedzd2typesz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2srfi0zd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2typedzd2eqz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2pragmazd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sawczd2pragmazd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2typezd2checkzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sawczd2typeszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2boundzd2checkz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2typedzb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2effectzb2z60zzbackend_cvmz00(BgL_cvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2variableszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	static obj_t BGl_z62sawczd2typeszb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2foreignzd2closurez62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2requirezd2tailcz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2qualifiedzd2typesz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2variableszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2variableszd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2typezd2checkzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2typedzd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cvmzd2typedzd2funcallzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2variableszd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62cgenzd2boundzd2checkz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2registerszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cgenzd2typeszd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2typedzd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2externzd2variablesz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2tracezd2supportz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	static obj_t BGl_z62cvmzd2srfi0zd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62sawczd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sawczd2tracezd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2typeszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62cgenzd2foreignzd2closurezd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static BgL_cgenz00_bglt BGl_z62makezd2cgenzb0zzbackend_cvmz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cgenzd2typedzb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzbackend_cvmz00();
	static obj_t BGl_z62cgenzd2typeszb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2boundzd2checkz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2callcczd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cgenzd2requirezd2tailczd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2externzd2typesz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62sawczd2externzd2typeszd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cvmzf3z91zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cgenzf3zf3zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzd2externzd2variablesz62zzbackend_cvmz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62cgenzd2foreignzd2clausezd2supportzb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2pregisterszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2pragmazd2supportz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL BgL_cgenz00_bglt BGl_makezd2cgenzd2zzbackend_cvmz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, bool_t);
	static obj_t
		BGl_z62sawczd2externzd2functionszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2typedzd2eqz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_methodzd2initzd2zzbackend_cvmz00();
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2functionszd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cvmzd2foreignzd2clausezd2supportzb0zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2effectzb2zd2setz12za0zzbackend_cvmz00(BgL_cvmz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2typezd2checkz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2foreignzd2closurez00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cvmzd2effectzb2z02zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2functionszd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t
		BGl_z62cgenzd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2externzd2functionsz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2registerszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	static obj_t BGl_z62cgenzd2typedzd2eqzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2heapzd2suffixz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2externzd2typesz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t
		BGl_z62cvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2languagezd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2registerszd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cgenzd2typedzd2funcallz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t
		BGl_z62cvmzd2externzd2variableszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2tracezd2supportz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2externzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		obj_t);
	static obj_t BGl_z62cgenzd2callcczb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2heapzd2suffixz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_sawczf3zf3zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2srfi0zd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	static obj_t BGl_z62sawczd2pregisterszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	static obj_t BGl_z62cgenzd2externzd2functionsz62zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	static BgL_cvmz00_bglt BGl_z62cvmzd2nilzb0zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2typeszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	static obj_t BGl_z62sawczd2typedzd2eqzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2effectzb2zd2setz12za0zzbackend_cvmz00(BgL_sawcz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2heapzd2suffixz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62sawczd2variableszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2pregisterszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2namezd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2typedzd2funcallz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cgenzd2languagezb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2namezd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	static obj_t BGl_z62sawczd2typedzd2funcallz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cgenzd2requirezd2tailcz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2externzd2typeszd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2tracezd2supportz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62cvmzd2removezd2emptyzd2letzb0zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		obj_t);
	static obj_t BGl_z62cvmzd2pregisterszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2callcczd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, bool_t);
	static obj_t BGl_z62cgenzd2heapzd2suffixzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static BgL_sawcz00_bglt BGl_z62lambda1419z62zzbackend_cvmz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62cgenzd2boundzd2checkzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2callcczd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static BgL_sawcz00_bglt BGl_z62sawczd2nilzb0zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2typezd2checkz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static BgL_sawcz00_bglt BGl_z62lambda1422z62zzbackend_cvmz00(obj_t);
	static obj_t BGl_z62cvmzd2foreignzd2closurezd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62cgenzd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2removezd2emptyzd2letzd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cgenzd2registerszb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2heapzd2compatiblez62zzbackend_cvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2variableszd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_cvmz00();
	static obj_t
		BGl_z62cgenzd2externzd2variableszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2callcczd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, bool_t);
	static obj_t BGl_z62sawczd2registerszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2typedzd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2requirezd2tailcz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cvmzd2languagezd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sawczd2requirezd2tailcz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2callcczd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, bool_t);
	static obj_t BGl_z62sawczd2tracezd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2variableszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	static BgL_cgenz00_bglt BGl_z62lambda1465z62zzbackend_cvmz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2externzd2functionszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		obj_t);
	static obj_t BGl_z62cgenzd2typezd2checkz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2typedzd2eqz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	static BgL_cgenz00_bglt BGl_z62cgenzd2nilzb0zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cgenz00_bglt, obj_t);
	static BgL_cgenz00_bglt BGl_z62lambda1475z62zzbackend_cvmz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31387ze3ze5zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sawcz00zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl_z62cvmzd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2externzd2functionszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31477ze3ze5zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2typedzd2funcallz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cvmzd2functionszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2tracezd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2externzd2variablesz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62sawczd2callcczb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2functionszd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cvmzd2qualifiedzd2typesz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2heapzd2compatiblez00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cvmzd2typezd2checkzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cgenzd2variableszb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2debugzd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2boundzd2checkz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2pregisterszd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL BgL_sawcz00_bglt BGl_sawczd2nilzd2zzbackend_cvmz00();
	static obj_t BGl_z62cgenzd2typedzd2eqz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2variableszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL BgL_cvmz00_bglt BGl_cvmzd2nilzd2zzbackend_cvmz00();
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2typedzd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2typedzd2funcallz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t
		BGl_z62cgenzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sawczd2requirezd2tailczd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2boundzd2checkz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62sawczd2externzd2variablesz62zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2requirezd2tailcz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cgenzd2foreignzd2closurez62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2effectzb2z60zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_cvmz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2srfi0zd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	static obj_t
		BGl_z62sawczd2foreignzd2closurezd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62sawczd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sawczd2languagezb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2typeszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	static obj_t BGl_z62cvmzd2registerszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_sawcz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2boundzd2checkz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t
		BGl_z62sawczd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2effectzb2z60zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t
		BGl_z62sawczd2externzd2variableszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2foreignzd2closurez00zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cgenzd2functionszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	static obj_t BGl_z62cvmzd2srfi0zb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2externzd2functionsz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62cgenzd2debugzd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cgenz00_bglt BGl_cgenzd2nilzd2zzbackend_cvmz00();
	static obj_t BGl_toplevelzd2initzd2zzbackend_cvmz00();
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2removezd2emptyzd2letzd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2namezd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	static obj_t BGl_z62cvmzd2requirezd2tailczd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cgenz00zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl_z62cgenzd2functionszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2qualifiedzd2typesz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cgenzd2typedzd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2namezb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2requirezd2tailcz00zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62sawczd2functionszb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_cvmz00();
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2typezd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt, bool_t);
	static obj_t BGl_z62cvmzd2pragmazd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzd2externzd2typesz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzd2namezb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t
		BGl_z62cvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cgenzd2typedzd2funcallzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62sawczd2foreignzd2clausezd2supportzb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t
		BGl_z62sawczd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cvmzd2srfi0zd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cgenzd2languagezd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2languagezd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cgenzd2pregisterszd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sawczd2foreignzd2closurez62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2externzd2functionszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	static obj_t BGl_z62sawczd2externzd2functionsz62zzbackend_cvmz00(obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2registerszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cgenzd2removezd2emptyzd2letzb0zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2pregisterszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2foreignzd2closurez00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t BGl_cvmzf3zf3zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	static obj_t BGl_z62cgenzd2effectzb2zd2setz12zc2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cgenzd2namezd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2functionszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	static obj_t
		BGl_z62cgenzd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2variableszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2functionszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	static obj_t BGl_z62sawczd2typezd2checkz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2srfi0zd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2languagezd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2typeszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	static obj_t BGl_z62sawczd2heapzd2suffixzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sawczd2languagezd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sawczd2boundzd2checkzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cgenzd2namezd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cvmz00_bglt, bool_t);
	static obj_t BGl_z62cgenzd2pragmazd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzf3z91zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2namezd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_sawcz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		obj_t);
	static obj_t BGl_z62cvmzd2externzd2typesz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	static obj_t BGl_z62cgenzd2debugzd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2typedzd2eqz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2pregisterszd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cvmzd2typedzb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cvmz00_bglt, obj_t);
	static obj_t
		BGl_z62cvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	static obj_t BGl_z62cvmzd2typezd2checkz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzd2registerszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2typeszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cvmzd2namezd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62sawczd2effectzb2z02zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2pregisterszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2pregisterszd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62cgenzd2srfi0zd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31442ze3ze5zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		bool_t);
	static obj_t BGl_z62cgenzd2typeszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cgenzd2effectzb2z02zzbackend_cvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	static obj_t BGl_z62cvmzd2effectzb2zd2setz12zc2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2functionszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	static obj_t BGl_z62cvmzd2tracezd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2heapzd2suffixz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczd2namezb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2debugzd2supportz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2externzd2variableszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cvmzd2typedzd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62sawczd2debugzd2supportz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_cvmzd2typeszd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t
		BGl_z62sawczd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00
		(BgL_cgenz00_bglt, bool_t);
	static obj_t BGl_z62cgenzd2heapzd2suffixz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2pragmazd2supportz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_cvmzd2typedzd2eqz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cgenzd2heapzd2compatiblez62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62sawczf3z91zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2externzd2variableszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2pragmazd2supportz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cvmzd2externzd2variablesz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2externzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		obj_t);
	static obj_t BGl_z62cgenzd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2languagezd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	static obj_t BGl_z62cvmzd2variableszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_cvmz00();
	BGL_EXPORTED_DECL obj_t BGl_sawczd2namezd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t
		BGl_z62cvmzd2externzd2functionszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2heapzd2compatiblez00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_sawczd2srfi0zd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62cvmzd2languagezb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cvmz00();
	static obj_t BGl_z62sawczd2heapzd2suffixz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2registerszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_cvmz00();
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2externzd2variablesz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	extern obj_t BGl_backendz00zzbackend_backendz00;
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2registerszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t);
	static obj_t BGl_z62sawczd2typedzd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		obj_t);
	static obj_t BGl_z62cgenzd2pragmazd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sawczd2srfi0zb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2namezd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2callcczd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sawczd2functionszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cgenzd2srfi0zd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cvmzd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static BgL_cvmz00_bglt BGl_z62lambda1385z62zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2typezd2checkz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2pregisterszd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62sawczd2externzd2typesz62zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2languagezd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2externzd2typesz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	static obj_t BGl_z62cgenzd2callcczd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62sawczd2heapzd2compatiblez62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2typedzd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cgenzd2qualifiedzd2typesz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzd2srfi0zb0zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cvmzd2externzd2functionsz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzd2typezd2checkzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sawczd2removezd2emptyzd2letzd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2debugzd2supportz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2registerszd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t BGl_z62cgenzd2variableszd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2heapzd2compatiblez00zzbackend_cvmz00(BgL_sawcz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2registerszd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static BgL_sawcz00_bglt BGl_z62makezd2sawczb0zzbackend_cvmz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cvmz00zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl_z62sawczd2callcczd2setz12z70zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cvmzd2typedzd2eqzd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_cgenzd2qualifiedzd2typesz00zzbackend_cvmz00(BgL_cgenz00_bglt);
	static obj_t
		BGl_z62cgenzd2externzd2functionszd2setz12za2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2externzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2externzd2functionsz00zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62sawczd2debugzd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62sawczd2effectzb2zd2setz12zc2zzbackend_cvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2typezd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt,
		bool_t);
	static obj_t BGl_z62cvmzd2pragmazd2supportzd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2effectzb2zd2setz12za0zzbackend_cvmz00(BgL_cgenz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cgenzd2languagezd2zzbackend_cvmz00(BgL_cgenz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_cvmzd2callcczd2zzbackend_cvmz00(BgL_cvmz00_bglt);
	static obj_t BGl_z62cvmzd2typedzd2funcallz62zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_z62cgenzd2pregisterszb0zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sawczd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(BgL_sawcz00_bglt);
	static obj_t BGl_z62cgenzd2externzd2typeszd2setz12za2zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_cvmzd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt,
		bool_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2foreignzd2clausezd2supportzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2foreig1520z00,
		BGl_z62cgenzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2requirezd2tailczd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2requir1521z00,
		BGl_z62cgenzd2requirezd2tailczd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2tracezd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2traceza71522za7,
		BGl_z62cgenzd2tracezd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2foreignzd2clausezd2supportzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2foreig1523z00,
		BGl_z62sawczd2foreignzd2clausezd2supportzb0zzbackend_cvmz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2externzd2typeszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2externza71524za7,
		BGl_z62cvmzd2externzd2typeszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2tracezd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2traceza71525za7,
		BGl_z62sawczd2tracezd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2typedzd2eqzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typedza7d1526za7,
		BGl_z62cvmzd2typedzd2eqz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2pregisterszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2pregis1527z00,
		BGl_z62sawczd2pregisterszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2typedzd2funcallzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typedza71528za7,
		BGl_z62cgenzd2typedzd2funcallz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2externzd2functionszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2extern1529z00,
		BGl_z62cgenzd2externzd2functionsz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2pragmazd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2pragma1530z00,
		BGl_z62cgenzd2pragmazd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sawczd2envz00zzbackend_cvmz00,
		BgL_bgl_za762makeza7d2sawcza7b1531za7,
		BGl_z62makezd2sawczb0zzbackend_cvmz00, 0L, BUNSPEC, 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2typedzd2funcallzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typedza71532za7,
		BGl_z62sawczd2typedzd2funcallzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1500z00zzbackend_cvmz00,
		BgL_bgl_za762za7c3za704anonymo1533za7,
		BGl_z62zc3z04anonymousza31442ze3ze5zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1501z00zzbackend_cvmz00,
		BgL_bgl_za762lambda1422za7621534z00, BGl_z62lambda1422z62zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1502z00zzbackend_cvmz00,
		BgL_bgl_za762lambda1419za7621535z00, BGl_z62lambda1419z62zzbackend_cvmz00,
		0L, BUNSPEC, 29);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1503z00zzbackend_cvmz00,
		BgL_bgl_za762za7c3za704anonymo1536za7,
		BGl_z62zc3z04anonymousza31477ze3ze5zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1504z00zzbackend_cvmz00,
		BgL_bgl_za762lambda1475za7621537z00, BGl_z62lambda1475z62zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1505z00zzbackend_cvmz00,
		BgL_bgl_za762lambda1465za7621538z00, BGl_z62lambda1465z62zzbackend_cvmz00,
		0L, BUNSPEC, 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2heapzd2compatiblezd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2heapza7d21539za7,
		BGl_z62cvmzd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2externzd2typeszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2extern1540z00,
		BGl_z62cgenzd2externzd2typeszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2requirezd2tailczd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2requir1541z00,
		BGl_z62cgenzd2requirezd2tailcz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2foreignzd2closurezd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2foreig1542z00,
		BGl_z62sawczd2foreignzd2closurez62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2namezd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2nameza7b1543za7,
		BGl_z62sawczd2namezb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2pregisterszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2pregist1544z00,
		BGl_z62cvmzd2pregisterszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2pregisterszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2pregist1545z00,
		BGl_z62cvmzd2pregisterszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2namezd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2nameza7d1546za7,
		BGl_z62cgenzd2namezd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2pregisterszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2pregis1547z00,
		BGl_z62cgenzd2pregisterszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2registerszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2regist1548z00,
		BGl_z62cgenzd2registerszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2foreignzd2closurezd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2foreign1549z00,
		BGl_z62cvmzd2foreignzd2closurez62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2debugzd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2debugza71550za7,
		BGl_z62cgenzd2debugzd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2debugzd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2debugza71551za7,
		BGl_z62cgenzd2debugzd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2typedzd2eqzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typedza7d1552za7,
		BGl_z62cvmzd2typedzd2eqzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2foreignzd2closurezd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2foreig1553z00,
		BGl_z62sawczd2foreignzd2closurezd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2pragmazd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2pragmaza71554za7,
		BGl_z62cvmzd2pragmazd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cgenzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762makeza7d2cgenza7b1555za7,
		BGl_z62makezd2cgenzb0zzbackend_cvmz00, 0L, BUNSPEC, 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2typedzd2eqzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typedza71556za7,
		BGl_z62sawczd2typedzd2eqz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2requirezd2tailczd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2require1557z00,
		BGl_z62cvmzd2requirezd2tailczd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2tracezd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2traceza7d1558za7,
		BGl_z62cvmzd2tracezd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2namezd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2nameza7d1559za7,
		BGl_z62sawczd2namezd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2effectzb2zd2envzb2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2effect1560z00,
		BGl_z62cgenzd2effectzb2z02zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2typezd2checkzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typeza7d1561za7,
		BGl_z62sawczd2typezd2checkz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2heapzd2compatiblezd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2heapza7d1562za7,
		BGl_z62cgenzd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2externzd2functionszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2extern1563z00,
		BGl_z62sawczd2externzd2functionszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2callcczd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2callcc1564z00,
		BGl_z62cgenzd2callcczd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2boundzd2checkzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2boundza71565za7,
		BGl_z62cgenzd2boundzd2checkzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2typedzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typedza7d1566za7,
		BGl_z62cvmzd2typedzd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2typedzd2funcallzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typedza71567za7,
		BGl_z62sawczd2typedzd2funcallz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2foreignzd2clausezd2supportzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2foreign1568z00,
		BGl_z62cvmzd2foreignzd2clausezd2supportzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2typedzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typedza71569za7,
		BGl_z62cgenzd2typedzd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2effectzb2zd2envzb2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2effect1570z00,
		BGl_z62sawczd2effectzb2z02zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2requirezd2tailczd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2requir1571z00,
		BGl_z62sawczd2requirezd2tailcz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2effectzb2zd2setz12zd2envz72zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2effect1572z00,
		BGl_z62cgenzd2effectzb2zd2setz12zc2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2debugzd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2debugza7d1573za7,
		BGl_z62cvmzd2debugzd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2effectzb2zd2envzb2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2effectza71574za7,
		BGl_z62cvmzd2effectzb2z02zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2qualifiedzd2typeszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2qualifi1575z00,
		BGl_z62cvmzd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2srfi0zd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2srfi0za7d1576za7,
		BGl_z62cvmzd2srfi0zd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2languagezd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2languag1577z00,
		BGl_z62cvmzd2languagezd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2srfi0zd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2srfi0za71578za7,
		BGl_z62cgenzd2srfi0zd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2debugzd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2debugza71579za7,
		BGl_z62sawczd2debugzd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2srfi0zd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2srfi0za71580za7,
		BGl_z62cgenzd2srfi0zb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2externzd2typeszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2extern1581z00,
		BGl_z62sawczd2externzd2typeszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2srfi0zd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2srfi0za71582za7,
		BGl_z62sawczd2srfi0zb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2tvectorzd2descrzd2supportzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2tvecto1583z00,
		BGl_z62sawczd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2externzd2variableszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2externza71584za7,
		BGl_z62cvmzd2externzd2variablesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2callcczd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2callcc1585z00,
		BGl_z62sawczd2callcczd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2removezd2emptyzd2letzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2remove1586z00,
		BGl_z62cgenzd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2externzd2typeszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2externza71587za7,
		BGl_z62cvmzd2externzd2typesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2typeszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typesza7d1588za7,
		BGl_z62cvmzd2typeszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2externzd2variableszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2extern1589z00,
		BGl_z62cgenzd2externzd2variableszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2typeszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typesza71590za7,
		BGl_z62cgenzd2typeszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2heapzd2suffixzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2heapza7d1591za7,
		BGl_z62cgenzd2heapzd2suffixz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2tracezd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2traceza7d1592za7,
		BGl_z62cvmzd2tracezd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2heapzd2suffixzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2heapza7d21593za7,
		BGl_z62cvmzd2heapzd2suffixzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2qualifiedzd2typeszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2qualif1594z00,
		BGl_z62cgenzd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2languagezd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2langua1595z00,
		BGl_z62cgenzd2languagezb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2tvectorzd2descrzd2supportzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2tvecto1596z00,
		BGl_z62cgenzd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2callcczd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2callcc1597z00,
		BGl_z62cgenzd2callcczb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2variableszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2variab1598z00,
		BGl_z62cgenzd2variableszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2nilzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2nilza7b0za71599z00,
		BGl_z62cvmzd2nilzb0zzbackend_cvmz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzf3zd2envz21zzbackend_cvmz00,
		BgL_bgl_za762cgenza7f3za791za7za7b1600za7,
		BGl_z62cgenzf3z91zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2functionszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2functi1601z00,
		BGl_z62sawczd2functionszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2externzd2variableszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2extern1602z00,
		BGl_z62sawczd2externzd2variablesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2foreignzd2clausezd2supportzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2foreig1603z00,
		BGl_z62sawczd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2pragmazd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2pragma1604z00,
		BGl_z62cgenzd2pragmazd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2externzd2functionszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2externza71605za7,
		BGl_z62cvmzd2externzd2functionsz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2registerszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2registe1606z00,
		BGl_z62cvmzd2registerszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2boundzd2checkzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2boundza7d1607za7,
		BGl_z62cvmzd2boundzd2checkz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2heapzd2suffixzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2heapza7d1608za7,
		BGl_z62sawczd2heapzd2suffixzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2heapzd2suffixzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2heapza7d1609za7,
		BGl_z62sawczd2heapzd2suffixz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2pregisterszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2pregis1610z00,
		BGl_z62sawczd2pregisterszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2removezd2emptyzd2letzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2remove1611z00,
		BGl_z62cgenzd2removezd2emptyzd2letzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2qualifiedzd2typeszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2qualif1612z00,
		BGl_z62cgenzd2qualifiedzd2typesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2externzd2functionszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2externza71613za7,
		BGl_z62cvmzd2externzd2functionszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzf3zd2envz21zzbackend_cvmz00,
		BgL_bgl_za762cvmza7f3za791za7za7ba1614za7, BGl_z62cvmzf3z91zzbackend_cvmz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2pragmazd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2pragma1615z00,
		BGl_z62sawczd2pragmazd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2typedzd2funcallzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typedza7d1616za7,
		BGl_z62cvmzd2typedzd2funcallz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2requirezd2tailczd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2require1617z00,
		BGl_z62cvmzd2requirezd2tailcz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2namezd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2nameza7b01618za7, BGl_z62cvmzd2namezb0zzbackend_cvmz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2externzd2functionszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2extern1619z00,
		BGl_z62sawczd2externzd2functionsz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2registerszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2regist1620z00,
		BGl_z62sawczd2registerszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2requirezd2tailczd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2requir1621z00,
		BGl_z62sawczd2requirezd2tailczd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2tracezd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2traceza71622za7,
		BGl_z62sawczd2tracezd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2typeszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typesza71623za7,
		BGl_z62cgenzd2typeszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2typeszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typesza71624za7,
		BGl_z62sawczd2typeszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2foreignzd2clausezd2supportzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2foreig1625z00,
		BGl_z62cgenzd2foreignzd2clausezd2supportzb0zzbackend_cvmz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2boundzd2checkzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2boundza7d1626za7,
		BGl_z62cvmzd2boundzd2checkzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2typezd2checkzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typeza7d1627za7,
		BGl_z62cgenzd2typezd2checkzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2externzd2typeszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2extern1628z00,
		BGl_z62cgenzd2externzd2typesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2debugzd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2debugza7d1629za7,
		BGl_z62cvmzd2debugzd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2functionszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2functio1630z00,
		BGl_z62cvmzd2functionszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2typedzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typedza71631za7,
		BGl_z62sawczd2typedzd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2foreignzd2closurezd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2foreign1632z00,
		BGl_z62cvmzd2foreignzd2closurezd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2srfi0zd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2srfi0za7b1633za7,
		BGl_z62cvmzd2srfi0zb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2languagezd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2languag1634z00,
		BGl_z62cvmzd2languagezb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2removezd2emptyzd2letzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2remove1635z00,
		BGl_z62sawczd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2registerszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2regist1636z00,
		BGl_z62cgenzd2registerszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczf3zd2envz21zzbackend_cvmz00,
		BgL_bgl_za762sawcza7f3za791za7za7b1637za7,
		BGl_z62sawczf3z91zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1506z00zzbackend_cvmz00,
		BgL_bgl_string1506za700za7za7b1638za7, "", 0);
	      DEFINE_STRING(BGl_string1507z00zzbackend_cvmz00,
		BgL_bgl_string1507za700za7za7b1639za7, "backend_cvm", 11);
	      DEFINE_STRING(BGl_string1508z00zzbackend_cvmz00,
		BgL_bgl_string1508za700za7za7b1640za7, "_ cgen sawc backend_cvm cvm ", 28);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2typedzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typedza71641za7,
		BGl_z62cgenzd2typedzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2externzd2variableszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2extern1642z00,
		BGl_z62sawczd2externzd2variableszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2typedzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typedza71643za7,
		BGl_z62sawczd2typedzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2debugzd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2debugza71644za7,
		BGl_z62sawczd2debugzd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2effectzb2zd2setz12zd2envz72zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2effect1645z00,
		BGl_z62sawczd2effectzb2zd2setz12zc2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2srfi0zd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2srfi0za71646za7,
		BGl_z62sawczd2srfi0zd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2variableszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2variabl1647z00,
		BGl_z62cvmzd2variableszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2typedzd2funcallzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typedza71648za7,
		BGl_z62cgenzd2typedzd2funcallzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2tvectorzd2descrzd2supportzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2tvecto1649z00,
		BGl_z62sawczd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2qualifiedzd2typeszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2qualif1650z00,
		BGl_z62sawczd2qualifiedzd2typesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2pragmazd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2pragmaza71651za7,
		BGl_z62cvmzd2pragmazd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2boundzd2checkzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2boundza71652za7,
		BGl_z62sawczd2boundzd2checkzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2pragmazd2supportzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2pragma1653z00,
		BGl_z62sawczd2pragmazd2supportzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2registerszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2regist1654z00,
		BGl_z62sawczd2registerszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2callcczd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2callcc1655z00,
		BGl_z62sawczd2callcczb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2qualifiedzd2typeszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2qualifi1656z00,
		BGl_z62cvmzd2qualifiedzd2typesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2heapzd2compatiblezd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2heapza7d1657za7,
		BGl_z62cgenzd2heapzd2compatiblez62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2languagezd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2langua1658z00,
		BGl_z62sawczd2languagezb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2foreignzd2closurezd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2foreig1659z00,
		BGl_z62cgenzd2foreignzd2closurezd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2registerszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2registe1660z00,
		BGl_z62cvmzd2registerszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2typeszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typesza71661za7,
		BGl_z62sawczd2typeszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2heapzd2compatiblezd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2heapza7d1662za7,
		BGl_z62sawczd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2typezd2checkzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typeza7d1663za7,
		BGl_z62sawczd2typezd2checkzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1498z00zzbackend_cvmz00,
		BgL_bgl_za762za7c3za704anonymo1664za7,
		BGl_z62zc3z04anonymousza31387ze3ze5zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1499z00zzbackend_cvmz00,
		BgL_bgl_za762lambda1385za7621665z00, BGl_z62lambda1385z62zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2tvectorzd2descrzd2supportzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2tvecto1666z00,
		BGl_z62cgenzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2functionszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2functio1667z00,
		BGl_z62cvmzd2functionszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2typezd2checkzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typeza7d21668za7,
		BGl_z62cvmzd2typezd2checkzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2typedzd2funcallzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typedza7d1669za7,
		BGl_z62cvmzd2typedzd2funcallzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2typedzd2eqzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typedza71670za7,
		BGl_z62cgenzd2typedzd2eqzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2variableszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2variab1671z00,
		BGl_z62cgenzd2variableszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2variableszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2variab1672z00,
		BGl_z62sawczd2variableszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2removezd2emptyzd2letzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2removeza71673za7,
		BGl_z62cvmzd2removezd2emptyzd2letzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2boundzd2checkzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2boundza71674za7,
		BGl_z62cgenzd2boundzd2checkz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2callcczd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2callccza71675za7,
		BGl_z62cvmzd2callcczb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2typeszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typesza7b1676za7,
		BGl_z62cvmzd2typeszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2heapzd2compatiblezd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2heapza7d1677za7,
		BGl_z62sawczd2heapzd2compatiblez62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2callcczd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2callccza71678za7,
		BGl_z62cvmzd2callcczd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2variableszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2variab1679z00,
		BGl_z62sawczd2variableszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2typezd2checkzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typeza7d21680za7,
		BGl_z62cvmzd2typezd2checkz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2languagezd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2langua1681z00,
		BGl_z62cgenzd2languagezd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2removezd2emptyzd2letzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2removeza71682za7,
		BGl_z62cvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2qualifiedzd2typeszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2qualif1683z00,
		BGl_z62sawczd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2typezd2checkzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typeza7d1684za7,
		BGl_z62cgenzd2typezd2checkz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2heapzd2compatiblezd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2heapza7d21685za7,
		BGl_z62cvmzd2heapzd2compatiblez62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2namezd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2nameza7b1686za7,
		BGl_z62cgenzd2namezb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2typedzd2eqzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2typedza71687za7,
		BGl_z62cgenzd2typedzd2eqz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2externzd2variableszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2externza71688za7,
		BGl_z62cvmzd2externzd2variableszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2typedzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2typedza7b1689za7,
		BGl_z62cvmzd2typedzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2nilzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2nilza7b01690za7, BGl_z62sawczd2nilzb0zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2typedzd2eqzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2typedza71691za7,
		BGl_z62sawczd2typedzd2eqzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2functionszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2functi1692z00,
		BGl_z62cgenzd2functionszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2removezd2emptyzd2letzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2remove1693z00,
		BGl_z62sawczd2removezd2emptyzd2letzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2nilzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2nilza7b01694za7, BGl_z62cgenzd2nilzb0zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2boundzd2checkzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2boundza71695za7,
		BGl_z62sawczd2boundzd2checkz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2tvectorzd2descrzd2supportzd2envz00zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2tvector1696z00,
		BGl_z62cvmzd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2pregisterszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2pregis1697z00,
		BGl_z62cgenzd2pregisterszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2externzd2typeszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2extern1698z00,
		BGl_z62sawczd2externzd2typesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2foreignzd2clausezd2supportzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2foreign1699z00,
		BGl_z62cvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2foreignzd2closurezd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2foreig1700z00,
		BGl_z62cgenzd2foreignzd2closurez62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2tracezd2supportzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2traceza71701za7,
		BGl_z62cgenzd2tracezd2supportz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2variableszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2variabl1702z00,
		BGl_z62cvmzd2variableszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2externzd2functionszd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2extern1703z00,
		BGl_z62cgenzd2externzd2functionszd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2functionszd2envz00zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2functi1704z00,
		BGl_z62sawczd2functionszb0zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2tvectorzd2descrzd2supportzd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2tvector1705z00,
		BGl_z62cvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2namezd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2nameza7d21706za7,
		BGl_z62cvmzd2namezd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2externzd2variableszd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2extern1707z00,
		BGl_z62cgenzd2externzd2variablesz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2heapzd2suffixzd2envzd2zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2heapza7d21708za7,
		BGl_z62cvmzd2heapzd2suffixz62zzbackend_cvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sawczd2languagezd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762sawcza7d2langua1709z00,
		BGl_z62sawczd2languagezd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2functionszd2setz12zd2envzc0zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2functi1710z00,
		BGl_z62cgenzd2functionszd2setz12z70zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cvmzd2effectzb2zd2setz12zd2envz72zzbackend_cvmz00,
		BgL_bgl_za762cvmza7d2effectza71711za7,
		BGl_z62cvmzd2effectzb2zd2setz12zc2zzbackend_cvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cgenzd2heapzd2suffixzd2setz12zd2envz12zzbackend_cvmz00,
		BgL_bgl_za762cgenza7d2heapza7d1712za7,
		BGl_z62cgenzd2heapzd2suffixzd2setz12za2zzbackend_cvmz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_sawcz00zzbackend_cvmz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbackend_cvmz00));
		     ADD_ROOT((void *) (&BGl_cgenz00zzbackend_cvmz00));
		     ADD_ROOT((void *) (&BGl_cvmz00zzbackend_cvmz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long
		BgL_checksumz00_1732, char *BgL_fromz00_1733)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_cvmz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_cvmz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_cvmz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_cvmz00();
					BGl_cnstzd2initzd2zzbackend_cvmz00();
					BGl_importedzd2moduleszd2initz00zzbackend_cvmz00();
					BGl_objectzd2initzd2zzbackend_cvmz00();
					return BGl_toplevelzd2initzd2zzbackend_cvmz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_cvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_cvm");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_cvm");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_cvm");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			{	/* BackEnd/cvm.scm 15 */
				obj_t BgL_cportz00_1641;

				{	/* BackEnd/cvm.scm 15 */
					obj_t BgL_stringz00_1649;

					BgL_stringz00_1649 = BGl_string1508z00zzbackend_cvmz00;
					{	/* BackEnd/cvm.scm 15 */
						obj_t BgL_startz00_1650;

						BgL_startz00_1650 = BINT(((long) 0));
						{	/* BackEnd/cvm.scm 15 */
							obj_t BgL_endz00_1651;

							BgL_endz00_1651 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1649)));
							{	/* BackEnd/cvm.scm 15 */

								BgL_cportz00_1641 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1649, BgL_startz00_1650, BgL_endz00_1651);
				}}}}
				{
					long BgL_iz00_1642;

					BgL_iz00_1642 = ((long) 4);
				BgL_loopz00_1643:
					if ((BgL_iz00_1642 == ((long) -1)))
						{	/* BackEnd/cvm.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/cvm.scm 15 */
							{	/* BackEnd/cvm.scm 15 */
								obj_t BgL_arg1518z00_1645;

								{	/* BackEnd/cvm.scm 15 */

									{	/* BackEnd/cvm.scm 15 */
										obj_t BgL_locationz00_1647;

										BgL_locationz00_1647 = BBOOL(((bool_t) 0));
										{	/* BackEnd/cvm.scm 15 */

											BgL_arg1518z00_1645 =
												BGl_readz00zz__readerz00(BgL_cportz00_1641,
												BgL_locationz00_1647);
										}
									}
								}
								{	/* BackEnd/cvm.scm 15 */
									int BgL_tmpz00_1756;

									BgL_tmpz00_1756 = (int) (BgL_iz00_1642);
									CNST_TABLE_SET(BgL_tmpz00_1756, BgL_arg1518z00_1645);
							}}
							{	/* BackEnd/cvm.scm 15 */
								int BgL_auxz00_1648;

								BgL_auxz00_1648 = (int) ((BgL_iz00_1642 - ((long) 1)));
								{
									long BgL_iz00_1761;

									BgL_iz00_1761 = (long) (BgL_auxz00_1648);
									BgL_iz00_1642 = BgL_iz00_1761;
									goto BgL_loopz00_1643;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			return BUNSPEC;
		}

	}



/* cvm? */
	BGL_EXPORTED_DEF bool_t BGl_cvmzf3zf3zzbackend_cvmz00(obj_t BgL_objz00_3)
	{
		{	/* BackEnd/cvm.sch 208 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_3, BGl_cvmz00zzbackend_cvmz00);
		}

	}



/* &cvm? */
	obj_t BGl_z62cvmzf3z91zzbackend_cvmz00(obj_t BgL_envz00_1058,
		obj_t BgL_objz00_1059)
	{
		{	/* BackEnd/cvm.sch 208 */
			return BBOOL(BGl_cvmzf3zf3zzbackend_cvmz00(BgL_objz00_1059));
		}

	}



/* cvm-nil */
	BGL_EXPORTED_DEF BgL_cvmz00_bglt BGl_cvmzd2nilzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.sch 209 */
			{	/* BackEnd/cvm.sch 209 */
				obj_t BgL_classz00_834;

				BgL_classz00_834 = BGl_cvmz00zzbackend_cvmz00;
				{	/* BackEnd/cvm.sch 209 */
					obj_t BgL__ortest_1106z00_835;

					BgL__ortest_1106z00_835 = BGL_CLASS_NIL(BgL_classz00_834);
					if (CBOOL(BgL__ortest_1106z00_835))
						{	/* BackEnd/cvm.sch 209 */
							return ((BgL_cvmz00_bglt) BgL__ortest_1106z00_835);
						}
					else
						{	/* BackEnd/cvm.sch 209 */
							return
								((BgL_cvmz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_834));
						}
				}
			}
		}

	}



/* &cvm-nil */
	BgL_cvmz00_bglt BGl_z62cvmzd2nilzb0zzbackend_cvmz00(obj_t BgL_envz00_1060)
	{
		{	/* BackEnd/cvm.sch 209 */
			return BGl_cvmzd2nilzd2zzbackend_cvmz00();
		}

	}



/* cvm-typed-funcall */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2typedzd2funcallz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_4)
	{
		{	/* BackEnd/cvm.sch 210 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_4)))->BgL_typedzd2funcallzd2);
		}

	}



/* &cvm-typed-funcall */
	obj_t BGl_z62cvmzd2typedzd2funcallz62zzbackend_cvmz00(obj_t BgL_envz00_1061,
		obj_t BgL_oz00_1062)
	{
		{	/* BackEnd/cvm.sch 210 */
			return
				BBOOL(BGl_cvmzd2typedzd2funcallz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1062)));
		}

	}



/* cvm-typed-funcall-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_5, bool_t BgL_vz00_6)
	{
		{	/* BackEnd/cvm.sch 211 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_5)))->BgL_typedzd2funcallzd2) =
				((bool_t) BgL_vz00_6), BUNSPEC);
		}

	}



/* &cvm-typed-funcall-set! */
	obj_t BGl_z62cvmzd2typedzd2funcallzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1063, obj_t BgL_oz00_1064, obj_t BgL_vz00_1065)
	{
		{	/* BackEnd/cvm.sch 211 */
			return
				BGl_cvmzd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1064), CBOOL(BgL_vz00_1065));
		}

	}



/* cvm-type-check */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2typezd2checkz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_7)
	{
		{	/* BackEnd/cvm.sch 212 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_7)))->BgL_typezd2checkzd2);
		}

	}



/* &cvm-type-check */
	obj_t BGl_z62cvmzd2typezd2checkz62zzbackend_cvmz00(obj_t BgL_envz00_1066,
		obj_t BgL_oz00_1067)
	{
		{	/* BackEnd/cvm.sch 212 */
			return
				BBOOL(BGl_cvmzd2typezd2checkz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1067)));
		}

	}



/* cvm-type-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2typezd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_8, bool_t BgL_vz00_9)
	{
		{	/* BackEnd/cvm.sch 213 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_8)))->BgL_typezd2checkzd2) =
				((bool_t) BgL_vz00_9), BUNSPEC);
		}

	}



/* &cvm-type-check-set! */
	obj_t BGl_z62cvmzd2typezd2checkzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1068, obj_t BgL_oz00_1069, obj_t BgL_vz00_1070)
	{
		{	/* BackEnd/cvm.sch 213 */
			return
				BGl_cvmzd2typezd2checkzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1069), CBOOL(BgL_vz00_1070));
		}

	}



/* cvm-bound-check */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2boundzd2checkz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_10)
	{
		{	/* BackEnd/cvm.sch 214 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_10)))->BgL_boundzd2checkzd2);
		}

	}



/* &cvm-bound-check */
	obj_t BGl_z62cvmzd2boundzd2checkz62zzbackend_cvmz00(obj_t BgL_envz00_1071,
		obj_t BgL_oz00_1072)
	{
		{	/* BackEnd/cvm.sch 214 */
			return
				BBOOL(BGl_cvmzd2boundzd2checkz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1072)));
		}

	}



/* cvm-bound-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_11, bool_t BgL_vz00_12)
	{
		{	/* BackEnd/cvm.sch 215 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_11)))->BgL_boundzd2checkzd2) =
				((bool_t) BgL_vz00_12), BUNSPEC);
		}

	}



/* &cvm-bound-check-set! */
	obj_t BGl_z62cvmzd2boundzd2checkzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1073, obj_t BgL_oz00_1074, obj_t BgL_vz00_1075)
	{
		{	/* BackEnd/cvm.sch 215 */
			return
				BGl_cvmzd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1074), CBOOL(BgL_vz00_1075));
		}

	}



/* cvm-pregisters */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2pregisterszd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_13)
	{
		{	/* BackEnd/cvm.sch 216 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_13)))->BgL_pregistersz00);
		}

	}



/* &cvm-pregisters */
	obj_t BGl_z62cvmzd2pregisterszb0zzbackend_cvmz00(obj_t BgL_envz00_1076,
		obj_t BgL_oz00_1077)
	{
		{	/* BackEnd/cvm.sch 216 */
			return
				BGl_cvmzd2pregisterszd2zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1077));
		}

	}



/* cvm-pregisters-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2pregisterszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_14, obj_t BgL_vz00_15)
	{
		{	/* BackEnd/cvm.sch 217 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_14)))->BgL_pregistersz00) =
				((obj_t) BgL_vz00_15), BUNSPEC);
		}

	}



/* &cvm-pregisters-set! */
	obj_t BGl_z62cvmzd2pregisterszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1078, obj_t BgL_oz00_1079, obj_t BgL_vz00_1080)
	{
		{	/* BackEnd/cvm.sch 217 */
			return
				BGl_cvmzd2pregisterszd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1079), BgL_vz00_1080);
		}

	}



/* cvm-registers */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2registerszd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_16)
	{
		{	/* BackEnd/cvm.sch 218 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_16)))->BgL_registersz00);
		}

	}



/* &cvm-registers */
	obj_t BGl_z62cvmzd2registerszb0zzbackend_cvmz00(obj_t BgL_envz00_1081,
		obj_t BgL_oz00_1082)
	{
		{	/* BackEnd/cvm.sch 218 */
			return
				BGl_cvmzd2registerszd2zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1082));
		}

	}



/* cvm-registers-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2registerszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_17,
		obj_t BgL_vz00_18)
	{
		{	/* BackEnd/cvm.sch 219 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_17)))->BgL_registersz00) =
				((obj_t) BgL_vz00_18), BUNSPEC);
		}

	}



/* &cvm-registers-set! */
	obj_t BGl_z62cvmzd2registerszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1083, obj_t BgL_oz00_1084, obj_t BgL_vz00_1085)
	{
		{	/* BackEnd/cvm.sch 219 */
			return
				BGl_cvmzd2registerszd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1084), BgL_vz00_1085);
		}

	}



/* cvm-require-tailc */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2requirezd2tailcz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_19)
	{
		{	/* BackEnd/cvm.sch 220 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_19)))->BgL_requirezd2tailczd2);
		}

	}



/* &cvm-require-tailc */
	obj_t BGl_z62cvmzd2requirezd2tailcz62zzbackend_cvmz00(obj_t BgL_envz00_1086,
		obj_t BgL_oz00_1087)
	{
		{	/* BackEnd/cvm.sch 220 */
			return
				BBOOL(BGl_cvmzd2requirezd2tailcz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1087)));
		}

	}



/* cvm-require-tailc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_20, bool_t BgL_vz00_21)
	{
		{	/* BackEnd/cvm.sch 221 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_20)))->BgL_requirezd2tailczd2) =
				((bool_t) BgL_vz00_21), BUNSPEC);
		}

	}



/* &cvm-require-tailc-set! */
	obj_t BGl_z62cvmzd2requirezd2tailczd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1088, obj_t BgL_oz00_1089, obj_t BgL_vz00_1090)
	{
		{	/* BackEnd/cvm.sch 221 */
			return
				BGl_cvmzd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1089), CBOOL(BgL_vz00_1090));
		}

	}



/* cvm-tvector-descr-support */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_22)
	{
		{	/* BackEnd/cvm.sch 222 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_22)))->
				BgL_tvectorzd2descrzd2supportz00);
		}

	}



/* &cvm-tvector-descr-support */
	obj_t BGl_z62cvmzd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1091, obj_t BgL_oz00_1092)
	{
		{	/* BackEnd/cvm.sch 222 */
			return
				BBOOL(BGl_cvmzd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1092)));
		}

	}



/* cvm-tvector-descr-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cvmz00_bglt BgL_oz00_23, bool_t BgL_vz00_24)
	{
		{	/* BackEnd/cvm.sch 223 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_23)))->
					BgL_tvectorzd2descrzd2supportz00) = ((bool_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &cvm-tvector-descr-support-set! */
	obj_t BGl_z62cvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1093, obj_t BgL_oz00_1094, obj_t BgL_vz00_1095)
	{
		{	/* BackEnd/cvm.sch 223 */
			return
				BGl_cvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1094), CBOOL(BgL_vz00_1095));
		}

	}



/* cvm-pragma-support */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2pragmazd2supportz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_25)
	{
		{	/* BackEnd/cvm.sch 224 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_25)))->BgL_pragmazd2supportzd2);
		}

	}



/* &cvm-pragma-support */
	obj_t BGl_z62cvmzd2pragmazd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1096,
		obj_t BgL_oz00_1097)
	{
		{	/* BackEnd/cvm.sch 224 */
			return
				BBOOL(BGl_cvmzd2pragmazd2supportz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1097)));
		}

	}



/* cvm-pragma-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_26, bool_t BgL_vz00_27)
	{
		{	/* BackEnd/cvm.sch 225 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_26)))->BgL_pragmazd2supportzd2) =
				((bool_t) BgL_vz00_27), BUNSPEC);
		}

	}



/* &cvm-pragma-support-set! */
	obj_t BGl_z62cvmzd2pragmazd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1098, obj_t BgL_oz00_1099, obj_t BgL_vz00_1100)
	{
		{	/* BackEnd/cvm.sch 225 */
			return
				BGl_cvmzd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1099), CBOOL(BgL_vz00_1100));
		}

	}



/* cvm-debug-support */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2debugzd2supportz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_28)
	{
		{	/* BackEnd/cvm.sch 226 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_28)))->BgL_debugzd2supportzd2);
		}

	}



/* &cvm-debug-support */
	obj_t BGl_z62cvmzd2debugzd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1101,
		obj_t BgL_oz00_1102)
	{
		{	/* BackEnd/cvm.sch 226 */
			return
				BGl_cvmzd2debugzd2supportz00zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1102));
		}

	}



/* cvm-debug-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* BackEnd/cvm.sch 227 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_29)))->BgL_debugzd2supportzd2) =
				((obj_t) BgL_vz00_30), BUNSPEC);
		}

	}



/* &cvm-debug-support-set! */
	obj_t BGl_z62cvmzd2debugzd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1103, obj_t BgL_oz00_1104, obj_t BgL_vz00_1105)
	{
		{	/* BackEnd/cvm.sch 227 */
			return
				BGl_cvmzd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1104), BgL_vz00_1105);
		}

	}



/* cvm-foreign-clause-support */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_31)
	{
		{	/* BackEnd/cvm.sch 228 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_31)))->
				BgL_foreignzd2clausezd2supportz00);
		}

	}



/* &cvm-foreign-clause-support */
	obj_t BGl_z62cvmzd2foreignzd2clausezd2supportzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1106, obj_t BgL_oz00_1107)
	{
		{	/* BackEnd/cvm.sch 228 */
			return
				BGl_cvmzd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1107));
		}

	}



/* cvm-foreign-clause-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cvmz00_bglt BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* BackEnd/cvm.sch 229 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_32)))->
					BgL_foreignzd2clausezd2supportz00) = ((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &cvm-foreign-clause-support-set! */
	obj_t
		BGl_z62cvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1108, obj_t BgL_oz00_1109, obj_t BgL_vz00_1110)
	{
		{	/* BackEnd/cvm.sch 229 */
			return
				BGl_cvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1109), BgL_vz00_1110);
		}

	}



/* cvm-trace-support */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2tracezd2supportz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_34)
	{
		{	/* BackEnd/cvm.sch 230 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_34)))->BgL_tracezd2supportzd2);
		}

	}



/* &cvm-trace-support */
	obj_t BGl_z62cvmzd2tracezd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1111,
		obj_t BgL_oz00_1112)
	{
		{	/* BackEnd/cvm.sch 230 */
			return
				BBOOL(BGl_cvmzd2tracezd2supportz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1112)));
		}

	}



/* cvm-trace-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_35, bool_t BgL_vz00_36)
	{
		{	/* BackEnd/cvm.sch 231 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_35)))->BgL_tracezd2supportzd2) =
				((bool_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &cvm-trace-support-set! */
	obj_t BGl_z62cvmzd2tracezd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1113, obj_t BgL_oz00_1114, obj_t BgL_vz00_1115)
	{
		{	/* BackEnd/cvm.sch 231 */
			return
				BGl_cvmzd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1114), CBOOL(BgL_vz00_1115));
		}

	}



/* cvm-typed-eq */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2typedzd2eqz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_37)
	{
		{	/* BackEnd/cvm.sch 232 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_37)))->BgL_typedzd2eqzd2);
		}

	}



/* &cvm-typed-eq */
	obj_t BGl_z62cvmzd2typedzd2eqz62zzbackend_cvmz00(obj_t BgL_envz00_1116,
		obj_t BgL_oz00_1117)
	{
		{	/* BackEnd/cvm.sch 232 */
			return
				BBOOL(BGl_cvmzd2typedzd2eqz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1117)));
		}

	}



/* cvm-typed-eq-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_38, bool_t BgL_vz00_39)
	{
		{	/* BackEnd/cvm.sch 233 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_38)))->BgL_typedzd2eqzd2) =
				((bool_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &cvm-typed-eq-set! */
	obj_t BGl_z62cvmzd2typedzd2eqzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1118, obj_t BgL_oz00_1119, obj_t BgL_vz00_1120)
	{
		{	/* BackEnd/cvm.sch 233 */
			return
				BGl_cvmzd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1119), CBOOL(BgL_vz00_1120));
		}

	}



/* cvm-foreign-closure */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2foreignzd2closurez00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_40)
	{
		{	/* BackEnd/cvm.sch 234 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_40)))->BgL_foreignzd2closurezd2);
		}

	}



/* &cvm-foreign-closure */
	obj_t BGl_z62cvmzd2foreignzd2closurez62zzbackend_cvmz00(obj_t BgL_envz00_1121,
		obj_t BgL_oz00_1122)
	{
		{	/* BackEnd/cvm.sch 234 */
			return
				BBOOL(BGl_cvmzd2foreignzd2closurez00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1122)));
		}

	}



/* cvm-foreign-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_41, bool_t BgL_vz00_42)
	{
		{	/* BackEnd/cvm.sch 235 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_41)))->BgL_foreignzd2closurezd2) =
				((bool_t) BgL_vz00_42), BUNSPEC);
		}

	}



/* &cvm-foreign-closure-set! */
	obj_t BGl_z62cvmzd2foreignzd2closurezd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1123, obj_t BgL_oz00_1124, obj_t BgL_vz00_1125)
	{
		{	/* BackEnd/cvm.sch 235 */
			return
				BGl_cvmzd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1124), CBOOL(BgL_vz00_1125));
		}

	}



/* cvm-remove-empty-let */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2removezd2emptyzd2letzd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_43)
	{
		{	/* BackEnd/cvm.sch 236 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_43)))->BgL_removezd2emptyzd2letz00);
		}

	}



/* &cvm-remove-empty-let */
	obj_t BGl_z62cvmzd2removezd2emptyzd2letzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1126, obj_t BgL_oz00_1127)
	{
		{	/* BackEnd/cvm.sch 236 */
			return
				BBOOL(BGl_cvmzd2removezd2emptyzd2letzd2zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1127)));
		}

	}



/* cvm-remove-empty-let-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_44, bool_t BgL_vz00_45)
	{
		{	/* BackEnd/cvm.sch 237 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_44)))->
					BgL_removezd2emptyzd2letz00) = ((bool_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &cvm-remove-empty-let-set! */
	obj_t BGl_z62cvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1128, obj_t BgL_oz00_1129, obj_t BgL_vz00_1130)
	{
		{	/* BackEnd/cvm.sch 237 */
			return
				BGl_cvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1129), CBOOL(BgL_vz00_1130));
		}

	}



/* cvm-effect+ */
	BGL_EXPORTED_DEF bool_t BGl_cvmzd2effectzb2z60zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_46)
	{
		{	/* BackEnd/cvm.sch 238 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_46)))->BgL_effectzb2zb2);
		}

	}



/* &cvm-effect+ */
	obj_t BGl_z62cvmzd2effectzb2z02zzbackend_cvmz00(obj_t BgL_envz00_1131,
		obj_t BgL_oz00_1132)
	{
		{	/* BackEnd/cvm.sch 238 */
			return
				BBOOL(BGl_cvmzd2effectzb2z60zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1132)));
		}

	}



/* cvm-effect+-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2effectzb2zd2setz12za0zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_47,
		bool_t BgL_vz00_48)
	{
		{	/* BackEnd/cvm.sch 239 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_47)))->BgL_effectzb2zb2) =
				((bool_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &cvm-effect+-set! */
	obj_t BGl_z62cvmzd2effectzb2zd2setz12zc2zzbackend_cvmz00(obj_t
		BgL_envz00_1133, obj_t BgL_oz00_1134, obj_t BgL_vz00_1135)
	{
		{	/* BackEnd/cvm.sch 239 */
			return
				BGl_cvmzd2effectzb2zd2setz12za0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1134), CBOOL(BgL_vz00_1135));
		}

	}



/* cvm-qualified-types */
	BGL_EXPORTED_DEF bool_t
		BGl_cvmzd2qualifiedzd2typesz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_49)
	{
		{	/* BackEnd/cvm.sch 240 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_49)))->BgL_qualifiedzd2typeszd2);
		}

	}



/* &cvm-qualified-types */
	obj_t BGl_z62cvmzd2qualifiedzd2typesz62zzbackend_cvmz00(obj_t BgL_envz00_1136,
		obj_t BgL_oz00_1137)
	{
		{	/* BackEnd/cvm.sch 240 */
			return
				BBOOL(BGl_cvmzd2qualifiedzd2typesz00zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1137)));
		}

	}



/* cvm-qualified-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_50, bool_t BgL_vz00_51)
	{
		{	/* BackEnd/cvm.sch 241 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_50)))->BgL_qualifiedzd2typeszd2) =
				((bool_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &cvm-qualified-types-set! */
	obj_t BGl_z62cvmzd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1138, obj_t BgL_oz00_1139, obj_t BgL_vz00_1140)
	{
		{	/* BackEnd/cvm.sch 241 */
			return
				BGl_cvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1139), CBOOL(BgL_vz00_1140));
		}

	}



/* cvm-callcc */
	BGL_EXPORTED_DEF bool_t BGl_cvmzd2callcczd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_52)
	{
		{	/* BackEnd/cvm.sch 242 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_52)))->BgL_callccz00);
		}

	}



/* &cvm-callcc */
	obj_t BGl_z62cvmzd2callcczb0zzbackend_cvmz00(obj_t BgL_envz00_1141,
		obj_t BgL_oz00_1142)
	{
		{	/* BackEnd/cvm.sch 242 */
			return
				BBOOL(BGl_cvmzd2callcczd2zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1142)));
		}

	}



/* cvm-callcc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2callcczd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_53,
		bool_t BgL_vz00_54)
	{
		{	/* BackEnd/cvm.sch 243 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_53)))->BgL_callccz00) =
				((bool_t) BgL_vz00_54), BUNSPEC);
		}

	}



/* &cvm-callcc-set! */
	obj_t BGl_z62cvmzd2callcczd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1143,
		obj_t BgL_oz00_1144, obj_t BgL_vz00_1145)
	{
		{	/* BackEnd/cvm.sch 243 */
			return
				BGl_cvmzd2callcczd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1144), CBOOL(BgL_vz00_1145));
		}

	}



/* cvm-heap-compatible */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2heapzd2compatiblez00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_55)
	{
		{	/* BackEnd/cvm.sch 244 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_55)))->BgL_heapzd2compatiblezd2);
		}

	}



/* &cvm-heap-compatible */
	obj_t BGl_z62cvmzd2heapzd2compatiblez62zzbackend_cvmz00(obj_t BgL_envz00_1146,
		obj_t BgL_oz00_1147)
	{
		{	/* BackEnd/cvm.sch 244 */
			return
				BGl_cvmzd2heapzd2compatiblez00zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1147));
		}

	}



/* cvm-heap-compatible-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_56, obj_t BgL_vz00_57)
	{
		{	/* BackEnd/cvm.sch 245 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_56)))->BgL_heapzd2compatiblezd2) =
				((obj_t) BgL_vz00_57), BUNSPEC);
		}

	}



/* &cvm-heap-compatible-set! */
	obj_t BGl_z62cvmzd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1148, obj_t BgL_oz00_1149, obj_t BgL_vz00_1150)
	{
		{	/* BackEnd/cvm.sch 245 */
			return
				BGl_cvmzd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1149), BgL_vz00_1150);
		}

	}



/* cvm-heap-suffix */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2heapzd2suffixz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_58)
	{
		{	/* BackEnd/cvm.sch 246 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_58)))->BgL_heapzd2suffixzd2);
		}

	}



/* &cvm-heap-suffix */
	obj_t BGl_z62cvmzd2heapzd2suffixz62zzbackend_cvmz00(obj_t BgL_envz00_1151,
		obj_t BgL_oz00_1152)
	{
		{	/* BackEnd/cvm.sch 246 */
			return
				BGl_cvmzd2heapzd2suffixz00zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1152));
		}

	}



/* cvm-heap-suffix-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* BackEnd/cvm.sch 247 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_59)))->BgL_heapzd2suffixzd2) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &cvm-heap-suffix-set! */
	obj_t BGl_z62cvmzd2heapzd2suffixzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1153, obj_t BgL_oz00_1154, obj_t BgL_vz00_1155)
	{
		{	/* BackEnd/cvm.sch 247 */
			return
				BGl_cvmzd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1154), BgL_vz00_1155);
		}

	}



/* cvm-typed */
	BGL_EXPORTED_DEF bool_t BGl_cvmzd2typedzd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_61)
	{
		{	/* BackEnd/cvm.sch 248 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_61)))->BgL_typedz00);
		}

	}



/* &cvm-typed */
	obj_t BGl_z62cvmzd2typedzb0zzbackend_cvmz00(obj_t BgL_envz00_1156,
		obj_t BgL_oz00_1157)
	{
		{	/* BackEnd/cvm.sch 248 */
			return
				BBOOL(BGl_cvmzd2typedzd2zzbackend_cvmz00(
					((BgL_cvmz00_bglt) BgL_oz00_1157)));
		}

	}



/* cvm-typed-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2typedzd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_62,
		bool_t BgL_vz00_63)
	{
		{	/* BackEnd/cvm.sch 249 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_62)))->BgL_typedz00) =
				((bool_t) BgL_vz00_63), BUNSPEC);
		}

	}



/* &cvm-typed-set! */
	obj_t BGl_z62cvmzd2typedzd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1158,
		obj_t BgL_oz00_1159, obj_t BgL_vz00_1160)
	{
		{	/* BackEnd/cvm.sch 249 */
			return
				BGl_cvmzd2typedzd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1159), CBOOL(BgL_vz00_1160));
		}

	}



/* cvm-types */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2typeszd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_64)
	{
		{	/* BackEnd/cvm.sch 250 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_64)))->BgL_typesz00);
		}

	}



/* &cvm-types */
	obj_t BGl_z62cvmzd2typeszb0zzbackend_cvmz00(obj_t BgL_envz00_1161,
		obj_t BgL_oz00_1162)
	{
		{	/* BackEnd/cvm.sch 250 */
			return
				BGl_cvmzd2typeszd2zzbackend_cvmz00(((BgL_cvmz00_bglt) BgL_oz00_1162));
		}

	}



/* cvm-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2typeszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_65,
		obj_t BgL_vz00_66)
	{
		{	/* BackEnd/cvm.sch 251 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_65)))->BgL_typesz00) =
				((obj_t) BgL_vz00_66), BUNSPEC);
		}

	}



/* &cvm-types-set! */
	obj_t BGl_z62cvmzd2typeszd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1163,
		obj_t BgL_oz00_1164, obj_t BgL_vz00_1165)
	{
		{	/* BackEnd/cvm.sch 251 */
			return
				BGl_cvmzd2typeszd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1164), BgL_vz00_1165);
		}

	}



/* cvm-functions */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2functionszd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_67)
	{
		{	/* BackEnd/cvm.sch 252 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_67)))->BgL_functionsz00);
		}

	}



/* &cvm-functions */
	obj_t BGl_z62cvmzd2functionszb0zzbackend_cvmz00(obj_t BgL_envz00_1166,
		obj_t BgL_oz00_1167)
	{
		{	/* BackEnd/cvm.sch 252 */
			return
				BGl_cvmzd2functionszd2zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1167));
		}

	}



/* cvm-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2functionszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_68,
		obj_t BgL_vz00_69)
	{
		{	/* BackEnd/cvm.sch 253 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_68)))->BgL_functionsz00) =
				((obj_t) BgL_vz00_69), BUNSPEC);
		}

	}



/* &cvm-functions-set! */
	obj_t BGl_z62cvmzd2functionszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1168, obj_t BgL_oz00_1169, obj_t BgL_vz00_1170)
	{
		{	/* BackEnd/cvm.sch 253 */
			return
				BGl_cvmzd2functionszd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1169), BgL_vz00_1170);
		}

	}



/* cvm-variables */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2variableszd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_70)
	{
		{	/* BackEnd/cvm.sch 254 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_70)))->BgL_variablesz00);
		}

	}



/* &cvm-variables */
	obj_t BGl_z62cvmzd2variableszb0zzbackend_cvmz00(obj_t BgL_envz00_1171,
		obj_t BgL_oz00_1172)
	{
		{	/* BackEnd/cvm.sch 254 */
			return
				BGl_cvmzd2variableszd2zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1172));
		}

	}



/* cvm-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2variableszd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_71,
		obj_t BgL_vz00_72)
	{
		{	/* BackEnd/cvm.sch 255 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_71)))->BgL_variablesz00) =
				((obj_t) BgL_vz00_72), BUNSPEC);
		}

	}



/* &cvm-variables-set! */
	obj_t BGl_z62cvmzd2variableszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1173, obj_t BgL_oz00_1174, obj_t BgL_vz00_1175)
	{
		{	/* BackEnd/cvm.sch 255 */
			return
				BGl_cvmzd2variableszd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1174), BgL_vz00_1175);
		}

	}



/* cvm-extern-types */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2externzd2typesz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_73)
	{
		{	/* BackEnd/cvm.sch 256 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_73)))->BgL_externzd2typeszd2);
		}

	}



/* &cvm-extern-types */
	obj_t BGl_z62cvmzd2externzd2typesz62zzbackend_cvmz00(obj_t BgL_envz00_1176,
		obj_t BgL_oz00_1177)
	{
		{	/* BackEnd/cvm.sch 256 */
			return
				BGl_cvmzd2externzd2typesz00zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1177));
		}

	}



/* cvm-extern-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2externzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_74, obj_t BgL_vz00_75)
	{
		{	/* BackEnd/cvm.sch 257 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_74)))->BgL_externzd2typeszd2) =
				((obj_t) BgL_vz00_75), BUNSPEC);
		}

	}



/* &cvm-extern-types-set! */
	obj_t BGl_z62cvmzd2externzd2typeszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1178, obj_t BgL_oz00_1179, obj_t BgL_vz00_1180)
	{
		{	/* BackEnd/cvm.sch 257 */
			return
				BGl_cvmzd2externzd2typeszd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1179), BgL_vz00_1180);
		}

	}



/* cvm-extern-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2externzd2functionsz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_76)
	{
		{	/* BackEnd/cvm.sch 258 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_76)))->BgL_externzd2functionszd2);
		}

	}



/* &cvm-extern-functions */
	obj_t BGl_z62cvmzd2externzd2functionsz62zzbackend_cvmz00(obj_t
		BgL_envz00_1181, obj_t BgL_oz00_1182)
	{
		{	/* BackEnd/cvm.sch 258 */
			return
				BGl_cvmzd2externzd2functionsz00zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1182));
		}

	}



/* cvm-extern-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2externzd2functionszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_77, obj_t BgL_vz00_78)
	{
		{	/* BackEnd/cvm.sch 259 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_77)))->
					BgL_externzd2functionszd2) = ((obj_t) BgL_vz00_78), BUNSPEC);
		}

	}



/* &cvm-extern-functions-set! */
	obj_t BGl_z62cvmzd2externzd2functionszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1183, obj_t BgL_oz00_1184, obj_t BgL_vz00_1185)
	{
		{	/* BackEnd/cvm.sch 259 */
			return
				BGl_cvmzd2externzd2functionszd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1184), BgL_vz00_1185);
		}

	}



/* cvm-extern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2externzd2variablesz00zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_79)
	{
		{	/* BackEnd/cvm.sch 260 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_79)))->BgL_externzd2variableszd2);
		}

	}



/* &cvm-extern-variables */
	obj_t BGl_z62cvmzd2externzd2variablesz62zzbackend_cvmz00(obj_t
		BgL_envz00_1186, obj_t BgL_oz00_1187)
	{
		{	/* BackEnd/cvm.sch 260 */
			return
				BGl_cvmzd2externzd2variablesz00zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1187));
		}

	}



/* cvm-extern-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2externzd2variableszd2setz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_80, obj_t BgL_vz00_81)
	{
		{	/* BackEnd/cvm.sch 261 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_80)))->
					BgL_externzd2variableszd2) = ((obj_t) BgL_vz00_81), BUNSPEC);
		}

	}



/* &cvm-extern-variables-set! */
	obj_t BGl_z62cvmzd2externzd2variableszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1188, obj_t BgL_oz00_1189, obj_t BgL_vz00_1190)
	{
		{	/* BackEnd/cvm.sch 261 */
			return
				BGl_cvmzd2externzd2variableszd2setz12zc0zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1189), BgL_vz00_1190);
		}

	}



/* cvm-name */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2namezd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_82)
	{
		{	/* BackEnd/cvm.sch 262 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_82)))->BgL_namez00);
		}

	}



/* &cvm-name */
	obj_t BGl_z62cvmzd2namezb0zzbackend_cvmz00(obj_t BgL_envz00_1191,
		obj_t BgL_oz00_1192)
	{
		{	/* BackEnd/cvm.sch 262 */
			return
				BGl_cvmzd2namezd2zzbackend_cvmz00(((BgL_cvmz00_bglt) BgL_oz00_1192));
		}

	}



/* cvm-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2namezd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_83,
		obj_t BgL_vz00_84)
	{
		{	/* BackEnd/cvm.sch 263 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_83)))->BgL_namez00) =
				((obj_t) BgL_vz00_84), BUNSPEC);
		}

	}



/* &cvm-name-set! */
	obj_t BGl_z62cvmzd2namezd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1193,
		obj_t BgL_oz00_1194, obj_t BgL_vz00_1195)
	{
		{	/* BackEnd/cvm.sch 263 */
			return
				BGl_cvmzd2namezd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1194), BgL_vz00_1195);
		}

	}



/* cvm-srfi0 */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2srfi0zd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_85)
	{
		{	/* BackEnd/cvm.sch 264 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_85)))->BgL_srfi0z00);
		}

	}



/* &cvm-srfi0 */
	obj_t BGl_z62cvmzd2srfi0zb0zzbackend_cvmz00(obj_t BgL_envz00_1196,
		obj_t BgL_oz00_1197)
	{
		{	/* BackEnd/cvm.sch 264 */
			return
				BGl_cvmzd2srfi0zd2zzbackend_cvmz00(((BgL_cvmz00_bglt) BgL_oz00_1197));
		}

	}



/* cvm-srfi0-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2srfi0zd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_86,
		obj_t BgL_vz00_87)
	{
		{	/* BackEnd/cvm.sch 265 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_86)))->BgL_srfi0z00) =
				((obj_t) BgL_vz00_87), BUNSPEC);
		}

	}



/* &cvm-srfi0-set! */
	obj_t BGl_z62cvmzd2srfi0zd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1198,
		obj_t BgL_oz00_1199, obj_t BgL_vz00_1200)
	{
		{	/* BackEnd/cvm.sch 265 */
			return
				BGl_cvmzd2srfi0zd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1199), BgL_vz00_1200);
		}

	}



/* cvm-language */
	BGL_EXPORTED_DEF obj_t BGl_cvmzd2languagezd2zzbackend_cvmz00(BgL_cvmz00_bglt
		BgL_oz00_88)
	{
		{	/* BackEnd/cvm.sch 266 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_88)))->BgL_languagez00);
		}

	}



/* &cvm-language */
	obj_t BGl_z62cvmzd2languagezb0zzbackend_cvmz00(obj_t BgL_envz00_1201,
		obj_t BgL_oz00_1202)
	{
		{	/* BackEnd/cvm.sch 266 */
			return
				BGl_cvmzd2languagezd2zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1202));
		}

	}



/* cvm-language-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cvmzd2languagezd2setz12z12zzbackend_cvmz00(BgL_cvmz00_bglt BgL_oz00_89,
		obj_t BgL_vz00_90)
	{
		{	/* BackEnd/cvm.sch 267 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_89)))->BgL_languagez00) =
				((obj_t) BgL_vz00_90), BUNSPEC);
		}

	}



/* &cvm-language-set! */
	obj_t BGl_z62cvmzd2languagezd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1203,
		obj_t BgL_oz00_1204, obj_t BgL_vz00_1205)
	{
		{	/* BackEnd/cvm.sch 267 */
			return
				BGl_cvmzd2languagezd2setz12z12zzbackend_cvmz00(
				((BgL_cvmz00_bglt) BgL_oz00_1204), BgL_vz00_1205);
		}

	}



/* make-sawc */
	BGL_EXPORTED_DEF BgL_sawcz00_bglt BGl_makezd2sawczd2zzbackend_cvmz00(obj_t
		BgL_language1194z00_91, obj_t BgL_srfi01195z00_92, obj_t BgL_name1196z00_93,
		obj_t BgL_externzd2variables1197zd2_94,
		obj_t BgL_externzd2functions1198zd2_95, obj_t BgL_externzd2types1199zd2_96,
		obj_t BgL_variables1200z00_97, obj_t BgL_functions1201z00_98,
		obj_t BgL_types1202z00_99, bool_t BgL_typed1203z00_100,
		obj_t BgL_heapzd2suffix1204zd2_101, obj_t BgL_heapzd2compatible1205zd2_102,
		bool_t BgL_callcc1206z00_103, bool_t BgL_qualifiedzd2types1207zd2_104,
		bool_t BgL_effectzb21208zb2_105, bool_t BgL_removezd2emptyzd2let1209z00_106,
		bool_t BgL_foreignzd2closure1210zd2_107, bool_t BgL_typedzd2eq1211zd2_108,
		bool_t BgL_tracezd2support1212zd2_109,
		obj_t BgL_foreignzd2clausezd2suppo1213z00_110,
		obj_t BgL_debugzd2support1214zd2_111,
		bool_t BgL_pragmazd2support1215zd2_112,
		bool_t BgL_tvectorzd2descrzd2suppor1216z00_113,
		bool_t BgL_requirezd2tailc1217zd2_114, obj_t BgL_registers1218z00_115,
		obj_t BgL_pregisters1219z00_116, bool_t BgL_boundzd2check1220zd2_117,
		bool_t BgL_typezd2check1221zd2_118, bool_t BgL_typedzd2funcall1222zd2_119)
	{
		{	/* BackEnd/cvm.sch 270 */
			{	/* BackEnd/cvm.sch 270 */
				BgL_sawcz00_bglt BgL_new1174z00_1654;

				{	/* BackEnd/cvm.sch 270 */
					BgL_sawcz00_bglt BgL_new1173z00_1655;

					BgL_new1173z00_1655 =
						((BgL_sawcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_sawcz00_bgl))));
					{	/* BackEnd/cvm.sch 270 */
						long BgL_arg1370z00_1656;

						{	/* BackEnd/cvm.sch 270 */
							long BgL_res1490z00_1657;

							BgL_res1490z00_1657 =
								BGL_CLASS_INDEX(BGl_sawcz00zzbackend_cvmz00);
							BgL_arg1370z00_1656 = BgL_res1490z00_1657;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1173z00_1655), BgL_arg1370z00_1656);
					}
					BgL_new1174z00_1654 = BgL_new1173z00_1655;
				}
				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_new1174z00_1654)))->
						BgL_languagez00) = ((obj_t) BgL_language1194z00_91), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01195z00_92), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_namez00) =
					((obj_t) BgL_name1196z00_93), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1197zd2_94), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1198zd2_95), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1199zd2_96), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_variablesz00) =
					((obj_t) BgL_variables1200z00_97), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_functionsz00) =
					((obj_t) BgL_functions1201z00_98), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_typesz00) =
					((obj_t) BgL_types1202z00_99), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_typedz00) =
					((bool_t) BgL_typed1203z00_100), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1204zd2_101), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1205zd2_102), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_callccz00) =
					((bool_t) BgL_callcc1206z00_103), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1207zd2_104), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21208zb2_105), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1209z00_106), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1210zd2_107), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1211zd2_108), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1212zd2_109), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1213z00_110), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1214zd2_111), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1215zd2_112), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1216z00_113), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1217zd2_114), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_registersz00) =
					((obj_t) BgL_registers1218z00_115), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1219z00_116), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1220zd2_117), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1221zd2_118), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1174z00_1654)))->BgL_typedzd2funcallzd2) =
					((bool_t) BgL_typedzd2funcall1222zd2_119), BUNSPEC);
				{	/* BackEnd/cvm.sch 270 */
					obj_t BgL_fun1369z00_1658;

					BgL_fun1369z00_1658 =
						BGl_classzd2constructorzd2zz__objectz00
						(BGl_sawcz00zzbackend_cvmz00);
					PROCEDURE_ENTRY(BgL_fun1369z00_1658) (BgL_fun1369z00_1658,
						((obj_t) BgL_new1174z00_1654), BEOA);
				}
				return BgL_new1174z00_1654;
			}
		}

	}



/* &make-sawc */
	BgL_sawcz00_bglt BGl_z62makezd2sawczb0zzbackend_cvmz00(obj_t BgL_envz00_1206,
		obj_t BgL_language1194z00_1207, obj_t BgL_srfi01195z00_1208,
		obj_t BgL_name1196z00_1209, obj_t BgL_externzd2variables1197zd2_1210,
		obj_t BgL_externzd2functions1198zd2_1211,
		obj_t BgL_externzd2types1199zd2_1212, obj_t BgL_variables1200z00_1213,
		obj_t BgL_functions1201z00_1214, obj_t BgL_types1202z00_1215,
		obj_t BgL_typed1203z00_1216, obj_t BgL_heapzd2suffix1204zd2_1217,
		obj_t BgL_heapzd2compatible1205zd2_1218, obj_t BgL_callcc1206z00_1219,
		obj_t BgL_qualifiedzd2types1207zd2_1220, obj_t BgL_effectzb21208zb2_1221,
		obj_t BgL_removezd2emptyzd2let1209z00_1222,
		obj_t BgL_foreignzd2closure1210zd2_1223, obj_t BgL_typedzd2eq1211zd2_1224,
		obj_t BgL_tracezd2support1212zd2_1225,
		obj_t BgL_foreignzd2clausezd2suppo1213z00_1226,
		obj_t BgL_debugzd2support1214zd2_1227,
		obj_t BgL_pragmazd2support1215zd2_1228,
		obj_t BgL_tvectorzd2descrzd2suppor1216z00_1229,
		obj_t BgL_requirezd2tailc1217zd2_1230, obj_t BgL_registers1218z00_1231,
		obj_t BgL_pregisters1219z00_1232, obj_t BgL_boundzd2check1220zd2_1233,
		obj_t BgL_typezd2check1221zd2_1234, obj_t BgL_typedzd2funcall1222zd2_1235)
	{
		{	/* BackEnd/cvm.sch 270 */
			return
				BGl_makezd2sawczd2zzbackend_cvmz00(BgL_language1194z00_1207,
				BgL_srfi01195z00_1208, BgL_name1196z00_1209,
				BgL_externzd2variables1197zd2_1210, BgL_externzd2functions1198zd2_1211,
				BgL_externzd2types1199zd2_1212, BgL_variables1200z00_1213,
				BgL_functions1201z00_1214, BgL_types1202z00_1215,
				CBOOL(BgL_typed1203z00_1216), BgL_heapzd2suffix1204zd2_1217,
				BgL_heapzd2compatible1205zd2_1218, CBOOL(BgL_callcc1206z00_1219),
				CBOOL(BgL_qualifiedzd2types1207zd2_1220),
				CBOOL(BgL_effectzb21208zb2_1221),
				CBOOL(BgL_removezd2emptyzd2let1209z00_1222),
				CBOOL(BgL_foreignzd2closure1210zd2_1223),
				CBOOL(BgL_typedzd2eq1211zd2_1224),
				CBOOL(BgL_tracezd2support1212zd2_1225),
				BgL_foreignzd2clausezd2suppo1213z00_1226,
				BgL_debugzd2support1214zd2_1227,
				CBOOL(BgL_pragmazd2support1215zd2_1228),
				CBOOL(BgL_tvectorzd2descrzd2suppor1216z00_1229),
				CBOOL(BgL_requirezd2tailc1217zd2_1230), BgL_registers1218z00_1231,
				BgL_pregisters1219z00_1232, CBOOL(BgL_boundzd2check1220zd2_1233),
				CBOOL(BgL_typezd2check1221zd2_1234),
				CBOOL(BgL_typedzd2funcall1222zd2_1235));
		}

	}



/* sawc? */
	BGL_EXPORTED_DEF bool_t BGl_sawczf3zf3zzbackend_cvmz00(obj_t BgL_objz00_120)
	{
		{	/* BackEnd/cvm.sch 271 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_120, BGl_sawcz00zzbackend_cvmz00);
		}

	}



/* &sawc? */
	obj_t BGl_z62sawczf3z91zzbackend_cvmz00(obj_t BgL_envz00_1236,
		obj_t BgL_objz00_1237)
	{
		{	/* BackEnd/cvm.sch 271 */
			return BBOOL(BGl_sawczf3zf3zzbackend_cvmz00(BgL_objz00_1237));
		}

	}



/* sawc-nil */
	BGL_EXPORTED_DEF BgL_sawcz00_bglt BGl_sawczd2nilzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.sch 272 */
			{	/* BackEnd/cvm.sch 272 */
				obj_t BgL_classz00_902;

				BgL_classz00_902 = BGl_sawcz00zzbackend_cvmz00;
				{	/* BackEnd/cvm.sch 272 */
					obj_t BgL__ortest_1106z00_903;

					BgL__ortest_1106z00_903 = BGL_CLASS_NIL(BgL_classz00_902);
					if (CBOOL(BgL__ortest_1106z00_903))
						{	/* BackEnd/cvm.sch 272 */
							return ((BgL_sawcz00_bglt) BgL__ortest_1106z00_903);
						}
					else
						{	/* BackEnd/cvm.sch 272 */
							return
								((BgL_sawcz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_902));
						}
				}
			}
		}

	}



/* &sawc-nil */
	BgL_sawcz00_bglt BGl_z62sawczd2nilzb0zzbackend_cvmz00(obj_t BgL_envz00_1238)
	{
		{	/* BackEnd/cvm.sch 272 */
			return BGl_sawczd2nilzd2zzbackend_cvmz00();
		}

	}



/* sawc-typed-funcall */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2typedzd2funcallz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_121)
	{
		{	/* BackEnd/cvm.sch 273 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_121)))->BgL_typedzd2funcallzd2);
		}

	}



/* &sawc-typed-funcall */
	obj_t BGl_z62sawczd2typedzd2funcallz62zzbackend_cvmz00(obj_t BgL_envz00_1239,
		obj_t BgL_oz00_1240)
	{
		{	/* BackEnd/cvm.sch 273 */
			return
				BBOOL(BGl_sawczd2typedzd2funcallz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1240)));
		}

	}



/* sawc-typed-funcall-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_122, bool_t BgL_vz00_123)
	{
		{	/* BackEnd/cvm.sch 274 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_122)))->BgL_typedzd2funcallzd2) =
				((bool_t) BgL_vz00_123), BUNSPEC);
		}

	}



/* &sawc-typed-funcall-set! */
	obj_t BGl_z62sawczd2typedzd2funcallzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1241, obj_t BgL_oz00_1242, obj_t BgL_vz00_1243)
	{
		{	/* BackEnd/cvm.sch 274 */
			return
				BGl_sawczd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1242), CBOOL(BgL_vz00_1243));
		}

	}



/* sawc-type-check */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2typezd2checkz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_124)
	{
		{	/* BackEnd/cvm.sch 275 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_124)))->BgL_typezd2checkzd2);
		}

	}



/* &sawc-type-check */
	obj_t BGl_z62sawczd2typezd2checkz62zzbackend_cvmz00(obj_t BgL_envz00_1244,
		obj_t BgL_oz00_1245)
	{
		{	/* BackEnd/cvm.sch 275 */
			return
				BBOOL(BGl_sawczd2typezd2checkz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1245)));
		}

	}



/* sawc-type-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2typezd2checkzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_125, bool_t BgL_vz00_126)
	{
		{	/* BackEnd/cvm.sch 276 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_125)))->BgL_typezd2checkzd2) =
				((bool_t) BgL_vz00_126), BUNSPEC);
		}

	}



/* &sawc-type-check-set! */
	obj_t BGl_z62sawczd2typezd2checkzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1246, obj_t BgL_oz00_1247, obj_t BgL_vz00_1248)
	{
		{	/* BackEnd/cvm.sch 276 */
			return
				BGl_sawczd2typezd2checkzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1247), CBOOL(BgL_vz00_1248));
		}

	}



/* sawc-bound-check */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2boundzd2checkz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_127)
	{
		{	/* BackEnd/cvm.sch 277 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_127)))->BgL_boundzd2checkzd2);
		}

	}



/* &sawc-bound-check */
	obj_t BGl_z62sawczd2boundzd2checkz62zzbackend_cvmz00(obj_t BgL_envz00_1249,
		obj_t BgL_oz00_1250)
	{
		{	/* BackEnd/cvm.sch 277 */
			return
				BBOOL(BGl_sawczd2boundzd2checkz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1250)));
		}

	}



/* sawc-bound-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_128, bool_t BgL_vz00_129)
	{
		{	/* BackEnd/cvm.sch 278 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_128)))->BgL_boundzd2checkzd2) =
				((bool_t) BgL_vz00_129), BUNSPEC);
		}

	}



/* &sawc-bound-check-set! */
	obj_t BGl_z62sawczd2boundzd2checkzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1251, obj_t BgL_oz00_1252, obj_t BgL_vz00_1253)
	{
		{	/* BackEnd/cvm.sch 278 */
			return
				BGl_sawczd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1252), CBOOL(BgL_vz00_1253));
		}

	}



/* sawc-pregisters */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2pregisterszd2zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_130)
	{
		{	/* BackEnd/cvm.sch 279 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_130)))->BgL_pregistersz00);
		}

	}



/* &sawc-pregisters */
	obj_t BGl_z62sawczd2pregisterszb0zzbackend_cvmz00(obj_t BgL_envz00_1254,
		obj_t BgL_oz00_1255)
	{
		{	/* BackEnd/cvm.sch 279 */
			return
				BGl_sawczd2pregisterszd2zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1255));
		}

	}



/* sawc-pregisters-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2pregisterszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_131, obj_t BgL_vz00_132)
	{
		{	/* BackEnd/cvm.sch 280 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_131)))->BgL_pregistersz00) =
				((obj_t) BgL_vz00_132), BUNSPEC);
		}

	}



/* &sawc-pregisters-set! */
	obj_t BGl_z62sawczd2pregisterszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1256, obj_t BgL_oz00_1257, obj_t BgL_vz00_1258)
	{
		{	/* BackEnd/cvm.sch 280 */
			return
				BGl_sawczd2pregisterszd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1257), BgL_vz00_1258);
		}

	}



/* sawc-registers */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2registerszd2zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_133)
	{
		{	/* BackEnd/cvm.sch 281 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_133)))->BgL_registersz00);
		}

	}



/* &sawc-registers */
	obj_t BGl_z62sawczd2registerszb0zzbackend_cvmz00(obj_t BgL_envz00_1259,
		obj_t BgL_oz00_1260)
	{
		{	/* BackEnd/cvm.sch 281 */
			return
				BGl_sawczd2registerszd2zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1260));
		}

	}



/* sawc-registers-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2registerszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_134, obj_t BgL_vz00_135)
	{
		{	/* BackEnd/cvm.sch 282 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_134)))->BgL_registersz00) =
				((obj_t) BgL_vz00_135), BUNSPEC);
		}

	}



/* &sawc-registers-set! */
	obj_t BGl_z62sawczd2registerszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1261, obj_t BgL_oz00_1262, obj_t BgL_vz00_1263)
	{
		{	/* BackEnd/cvm.sch 282 */
			return
				BGl_sawczd2registerszd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1262), BgL_vz00_1263);
		}

	}



/* sawc-require-tailc */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2requirezd2tailcz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_136)
	{
		{	/* BackEnd/cvm.sch 283 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_136)))->BgL_requirezd2tailczd2);
		}

	}



/* &sawc-require-tailc */
	obj_t BGl_z62sawczd2requirezd2tailcz62zzbackend_cvmz00(obj_t BgL_envz00_1264,
		obj_t BgL_oz00_1265)
	{
		{	/* BackEnd/cvm.sch 283 */
			return
				BBOOL(BGl_sawczd2requirezd2tailcz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1265)));
		}

	}



/* sawc-require-tailc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_137, bool_t BgL_vz00_138)
	{
		{	/* BackEnd/cvm.sch 284 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_137)))->BgL_requirezd2tailczd2) =
				((bool_t) BgL_vz00_138), BUNSPEC);
		}

	}



/* &sawc-require-tailc-set! */
	obj_t BGl_z62sawczd2requirezd2tailczd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1266, obj_t BgL_oz00_1267, obj_t BgL_vz00_1268)
	{
		{	/* BackEnd/cvm.sch 284 */
			return
				BGl_sawczd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1267), CBOOL(BgL_vz00_1268));
		}

	}



/* sawc-tvector-descr-support */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_139)
	{
		{	/* BackEnd/cvm.sch 285 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_139)))->
				BgL_tvectorzd2descrzd2supportz00);
		}

	}



/* &sawc-tvector-descr-support */
	obj_t BGl_z62sawczd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1269, obj_t BgL_oz00_1270)
	{
		{	/* BackEnd/cvm.sch 285 */
			return
				BBOOL(BGl_sawczd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1270)));
		}

	}



/* sawc-tvector-descr-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_sawcz00_bglt BgL_oz00_140, bool_t BgL_vz00_141)
	{
		{	/* BackEnd/cvm.sch 286 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_140)))->
					BgL_tvectorzd2descrzd2supportz00) = ((bool_t) BgL_vz00_141), BUNSPEC);
		}

	}



/* &sawc-tvector-descr-support-set! */
	obj_t
		BGl_z62sawczd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1271, obj_t BgL_oz00_1272, obj_t BgL_vz00_1273)
	{
		{	/* BackEnd/cvm.sch 286 */
			return
				BGl_sawczd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1272), CBOOL(BgL_vz00_1273));
		}

	}



/* sawc-pragma-support */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2pragmazd2supportz00zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_142)
	{
		{	/* BackEnd/cvm.sch 287 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_142)))->BgL_pragmazd2supportzd2);
		}

	}



/* &sawc-pragma-support */
	obj_t BGl_z62sawczd2pragmazd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1274,
		obj_t BgL_oz00_1275)
	{
		{	/* BackEnd/cvm.sch 287 */
			return
				BBOOL(BGl_sawczd2pragmazd2supportz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1275)));
		}

	}



/* sawc-pragma-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_143, bool_t BgL_vz00_144)
	{
		{	/* BackEnd/cvm.sch 288 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_143)))->BgL_pragmazd2supportzd2) =
				((bool_t) BgL_vz00_144), BUNSPEC);
		}

	}



/* &sawc-pragma-support-set! */
	obj_t BGl_z62sawczd2pragmazd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1276, obj_t BgL_oz00_1277, obj_t BgL_vz00_1278)
	{
		{	/* BackEnd/cvm.sch 288 */
			return
				BGl_sawczd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1277), CBOOL(BgL_vz00_1278));
		}

	}



/* sawc-debug-support */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2debugzd2supportz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_145)
	{
		{	/* BackEnd/cvm.sch 289 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_145)))->BgL_debugzd2supportzd2);
		}

	}



/* &sawc-debug-support */
	obj_t BGl_z62sawczd2debugzd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1279,
		obj_t BgL_oz00_1280)
	{
		{	/* BackEnd/cvm.sch 289 */
			return
				BGl_sawczd2debugzd2supportz00zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1280));
		}

	}



/* sawc-debug-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_146, obj_t BgL_vz00_147)
	{
		{	/* BackEnd/cvm.sch 290 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_146)))->BgL_debugzd2supportzd2) =
				((obj_t) BgL_vz00_147), BUNSPEC);
		}

	}



/* &sawc-debug-support-set! */
	obj_t BGl_z62sawczd2debugzd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1281, obj_t BgL_oz00_1282, obj_t BgL_vz00_1283)
	{
		{	/* BackEnd/cvm.sch 290 */
			return
				BGl_sawczd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1282), BgL_vz00_1283);
		}

	}



/* sawc-foreign-clause-support */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_148)
	{
		{	/* BackEnd/cvm.sch 291 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_148)))->
				BgL_foreignzd2clausezd2supportz00);
		}

	}



/* &sawc-foreign-clause-support */
	obj_t BGl_z62sawczd2foreignzd2clausezd2supportzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1284, obj_t BgL_oz00_1285)
	{
		{	/* BackEnd/cvm.sch 291 */
			return
				BGl_sawczd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1285));
		}

	}



/* sawc-foreign-clause-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_sawcz00_bglt BgL_oz00_149, obj_t BgL_vz00_150)
	{
		{	/* BackEnd/cvm.sch 292 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_149)))->
					BgL_foreignzd2clausezd2supportz00) = ((obj_t) BgL_vz00_150), BUNSPEC);
		}

	}



/* &sawc-foreign-clause-support-set! */
	obj_t
		BGl_z62sawczd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1286, obj_t BgL_oz00_1287, obj_t BgL_vz00_1288)
	{
		{	/* BackEnd/cvm.sch 292 */
			return
				BGl_sawczd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1287), BgL_vz00_1288);
		}

	}



/* sawc-trace-support */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2tracezd2supportz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_151)
	{
		{	/* BackEnd/cvm.sch 293 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_151)))->BgL_tracezd2supportzd2);
		}

	}



/* &sawc-trace-support */
	obj_t BGl_z62sawczd2tracezd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1289,
		obj_t BgL_oz00_1290)
	{
		{	/* BackEnd/cvm.sch 293 */
			return
				BBOOL(BGl_sawczd2tracezd2supportz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1290)));
		}

	}



/* sawc-trace-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_152, bool_t BgL_vz00_153)
	{
		{	/* BackEnd/cvm.sch 294 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_152)))->BgL_tracezd2supportzd2) =
				((bool_t) BgL_vz00_153), BUNSPEC);
		}

	}



/* &sawc-trace-support-set! */
	obj_t BGl_z62sawczd2tracezd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1291, obj_t BgL_oz00_1292, obj_t BgL_vz00_1293)
	{
		{	/* BackEnd/cvm.sch 294 */
			return
				BGl_sawczd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1292), CBOOL(BgL_vz00_1293));
		}

	}



/* sawc-typed-eq */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2typedzd2eqz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_154)
	{
		{	/* BackEnd/cvm.sch 295 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_154)))->BgL_typedzd2eqzd2);
		}

	}



/* &sawc-typed-eq */
	obj_t BGl_z62sawczd2typedzd2eqz62zzbackend_cvmz00(obj_t BgL_envz00_1294,
		obj_t BgL_oz00_1295)
	{
		{	/* BackEnd/cvm.sch 295 */
			return
				BBOOL(BGl_sawczd2typedzd2eqz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1295)));
		}

	}



/* sawc-typed-eq-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_155, bool_t BgL_vz00_156)
	{
		{	/* BackEnd/cvm.sch 296 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_155)))->BgL_typedzd2eqzd2) =
				((bool_t) BgL_vz00_156), BUNSPEC);
		}

	}



/* &sawc-typed-eq-set! */
	obj_t BGl_z62sawczd2typedzd2eqzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1296, obj_t BgL_oz00_1297, obj_t BgL_vz00_1298)
	{
		{	/* BackEnd/cvm.sch 296 */
			return
				BGl_sawczd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1297), CBOOL(BgL_vz00_1298));
		}

	}



/* sawc-foreign-closure */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2foreignzd2closurez00zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_157)
	{
		{	/* BackEnd/cvm.sch 297 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_157)))->BgL_foreignzd2closurezd2);
		}

	}



/* &sawc-foreign-closure */
	obj_t BGl_z62sawczd2foreignzd2closurez62zzbackend_cvmz00(obj_t
		BgL_envz00_1299, obj_t BgL_oz00_1300)
	{
		{	/* BackEnd/cvm.sch 297 */
			return
				BBOOL(BGl_sawczd2foreignzd2closurez00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1300)));
		}

	}



/* sawc-foreign-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_158, bool_t BgL_vz00_159)
	{
		{	/* BackEnd/cvm.sch 298 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_158)))->
					BgL_foreignzd2closurezd2) = ((bool_t) BgL_vz00_159), BUNSPEC);
		}

	}



/* &sawc-foreign-closure-set! */
	obj_t BGl_z62sawczd2foreignzd2closurezd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1301, obj_t BgL_oz00_1302, obj_t BgL_vz00_1303)
	{
		{	/* BackEnd/cvm.sch 298 */
			return
				BGl_sawczd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1302), CBOOL(BgL_vz00_1303));
		}

	}



/* sawc-remove-empty-let */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2removezd2emptyzd2letzd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_160)
	{
		{	/* BackEnd/cvm.sch 299 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_160)))->
				BgL_removezd2emptyzd2letz00);
		}

	}



/* &sawc-remove-empty-let */
	obj_t BGl_z62sawczd2removezd2emptyzd2letzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1304, obj_t BgL_oz00_1305)
	{
		{	/* BackEnd/cvm.sch 299 */
			return
				BBOOL(BGl_sawczd2removezd2emptyzd2letzd2zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1305)));
		}

	}



/* sawc-remove-empty-let-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_161, bool_t BgL_vz00_162)
	{
		{	/* BackEnd/cvm.sch 300 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_161)))->
					BgL_removezd2emptyzd2letz00) = ((bool_t) BgL_vz00_162), BUNSPEC);
		}

	}



/* &sawc-remove-empty-let-set! */
	obj_t BGl_z62sawczd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1306, obj_t BgL_oz00_1307, obj_t BgL_vz00_1308)
	{
		{	/* BackEnd/cvm.sch 300 */
			return
				BGl_sawczd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1307), CBOOL(BgL_vz00_1308));
		}

	}



/* sawc-effect+ */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2effectzb2z60zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_163)
	{
		{	/* BackEnd/cvm.sch 301 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_163)))->BgL_effectzb2zb2);
		}

	}



/* &sawc-effect+ */
	obj_t BGl_z62sawczd2effectzb2z02zzbackend_cvmz00(obj_t BgL_envz00_1309,
		obj_t BgL_oz00_1310)
	{
		{	/* BackEnd/cvm.sch 301 */
			return
				BBOOL(BGl_sawczd2effectzb2z60zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1310)));
		}

	}



/* sawc-effect+-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2effectzb2zd2setz12za0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_164, bool_t BgL_vz00_165)
	{
		{	/* BackEnd/cvm.sch 302 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_164)))->BgL_effectzb2zb2) =
				((bool_t) BgL_vz00_165), BUNSPEC);
		}

	}



/* &sawc-effect+-set! */
	obj_t BGl_z62sawczd2effectzb2zd2setz12zc2zzbackend_cvmz00(obj_t
		BgL_envz00_1311, obj_t BgL_oz00_1312, obj_t BgL_vz00_1313)
	{
		{	/* BackEnd/cvm.sch 302 */
			return
				BGl_sawczd2effectzb2zd2setz12za0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1312), CBOOL(BgL_vz00_1313));
		}

	}



/* sawc-qualified-types */
	BGL_EXPORTED_DEF bool_t
		BGl_sawczd2qualifiedzd2typesz00zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_166)
	{
		{	/* BackEnd/cvm.sch 303 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_166)))->BgL_qualifiedzd2typeszd2);
		}

	}



/* &sawc-qualified-types */
	obj_t BGl_z62sawczd2qualifiedzd2typesz62zzbackend_cvmz00(obj_t
		BgL_envz00_1314, obj_t BgL_oz00_1315)
	{
		{	/* BackEnd/cvm.sch 303 */
			return
				BBOOL(BGl_sawczd2qualifiedzd2typesz00zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1315)));
		}

	}



/* sawc-qualified-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_167, bool_t BgL_vz00_168)
	{
		{	/* BackEnd/cvm.sch 304 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_167)))->
					BgL_qualifiedzd2typeszd2) = ((bool_t) BgL_vz00_168), BUNSPEC);
		}

	}



/* &sawc-qualified-types-set! */
	obj_t BGl_z62sawczd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1316, obj_t BgL_oz00_1317, obj_t BgL_vz00_1318)
	{
		{	/* BackEnd/cvm.sch 304 */
			return
				BGl_sawczd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1317), CBOOL(BgL_vz00_1318));
		}

	}



/* sawc-callcc */
	BGL_EXPORTED_DEF bool_t BGl_sawczd2callcczd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_169)
	{
		{	/* BackEnd/cvm.sch 305 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_169)))->BgL_callccz00);
		}

	}



/* &sawc-callcc */
	obj_t BGl_z62sawczd2callcczb0zzbackend_cvmz00(obj_t BgL_envz00_1319,
		obj_t BgL_oz00_1320)
	{
		{	/* BackEnd/cvm.sch 305 */
			return
				BBOOL(BGl_sawczd2callcczd2zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1320)));
		}

	}



/* sawc-callcc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2callcczd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_170,
		bool_t BgL_vz00_171)
	{
		{	/* BackEnd/cvm.sch 306 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_170)))->BgL_callccz00) =
				((bool_t) BgL_vz00_171), BUNSPEC);
		}

	}



/* &sawc-callcc-set! */
	obj_t BGl_z62sawczd2callcczd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1321,
		obj_t BgL_oz00_1322, obj_t BgL_vz00_1323)
	{
		{	/* BackEnd/cvm.sch 306 */
			return
				BGl_sawczd2callcczd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1322), CBOOL(BgL_vz00_1323));
		}

	}



/* sawc-heap-compatible */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2heapzd2compatiblez00zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_172)
	{
		{	/* BackEnd/cvm.sch 307 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_172)))->BgL_heapzd2compatiblezd2);
		}

	}



/* &sawc-heap-compatible */
	obj_t BGl_z62sawczd2heapzd2compatiblez62zzbackend_cvmz00(obj_t
		BgL_envz00_1324, obj_t BgL_oz00_1325)
	{
		{	/* BackEnd/cvm.sch 307 */
			return
				BGl_sawczd2heapzd2compatiblez00zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1325));
		}

	}



/* sawc-heap-compatible-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_173, obj_t BgL_vz00_174)
	{
		{	/* BackEnd/cvm.sch 308 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_173)))->
					BgL_heapzd2compatiblezd2) = ((obj_t) BgL_vz00_174), BUNSPEC);
		}

	}



/* &sawc-heap-compatible-set! */
	obj_t BGl_z62sawczd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1326, obj_t BgL_oz00_1327, obj_t BgL_vz00_1328)
	{
		{	/* BackEnd/cvm.sch 308 */
			return
				BGl_sawczd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1327), BgL_vz00_1328);
		}

	}



/* sawc-heap-suffix */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2heapzd2suffixz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_175)
	{
		{	/* BackEnd/cvm.sch 309 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_175)))->BgL_heapzd2suffixzd2);
		}

	}



/* &sawc-heap-suffix */
	obj_t BGl_z62sawczd2heapzd2suffixz62zzbackend_cvmz00(obj_t BgL_envz00_1329,
		obj_t BgL_oz00_1330)
	{
		{	/* BackEnd/cvm.sch 309 */
			return
				BGl_sawczd2heapzd2suffixz00zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1330));
		}

	}



/* sawc-heap-suffix-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_176, obj_t BgL_vz00_177)
	{
		{	/* BackEnd/cvm.sch 310 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_176)))->BgL_heapzd2suffixzd2) =
				((obj_t) BgL_vz00_177), BUNSPEC);
		}

	}



/* &sawc-heap-suffix-set! */
	obj_t BGl_z62sawczd2heapzd2suffixzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1331, obj_t BgL_oz00_1332, obj_t BgL_vz00_1333)
	{
		{	/* BackEnd/cvm.sch 310 */
			return
				BGl_sawczd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1332), BgL_vz00_1333);
		}

	}



/* sawc-typed */
	BGL_EXPORTED_DEF bool_t BGl_sawczd2typedzd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_178)
	{
		{	/* BackEnd/cvm.sch 311 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_178)))->BgL_typedz00);
		}

	}



/* &sawc-typed */
	obj_t BGl_z62sawczd2typedzb0zzbackend_cvmz00(obj_t BgL_envz00_1334,
		obj_t BgL_oz00_1335)
	{
		{	/* BackEnd/cvm.sch 311 */
			return
				BBOOL(BGl_sawczd2typedzd2zzbackend_cvmz00(
					((BgL_sawcz00_bglt) BgL_oz00_1335)));
		}

	}



/* sawc-typed-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2typedzd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_179,
		bool_t BgL_vz00_180)
	{
		{	/* BackEnd/cvm.sch 312 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_179)))->BgL_typedz00) =
				((bool_t) BgL_vz00_180), BUNSPEC);
		}

	}



/* &sawc-typed-set! */
	obj_t BGl_z62sawczd2typedzd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1336,
		obj_t BgL_oz00_1337, obj_t BgL_vz00_1338)
	{
		{	/* BackEnd/cvm.sch 312 */
			return
				BGl_sawczd2typedzd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1337), CBOOL(BgL_vz00_1338));
		}

	}



/* sawc-types */
	BGL_EXPORTED_DEF obj_t BGl_sawczd2typeszd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_181)
	{
		{	/* BackEnd/cvm.sch 313 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_181)))->BgL_typesz00);
		}

	}



/* &sawc-types */
	obj_t BGl_z62sawczd2typeszb0zzbackend_cvmz00(obj_t BgL_envz00_1339,
		obj_t BgL_oz00_1340)
	{
		{	/* BackEnd/cvm.sch 313 */
			return
				BGl_sawczd2typeszd2zzbackend_cvmz00(((BgL_sawcz00_bglt) BgL_oz00_1340));
		}

	}



/* sawc-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2typeszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_182,
		obj_t BgL_vz00_183)
	{
		{	/* BackEnd/cvm.sch 314 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_182)))->BgL_typesz00) =
				((obj_t) BgL_vz00_183), BUNSPEC);
		}

	}



/* &sawc-types-set! */
	obj_t BGl_z62sawczd2typeszd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1341,
		obj_t BgL_oz00_1342, obj_t BgL_vz00_1343)
	{
		{	/* BackEnd/cvm.sch 314 */
			return
				BGl_sawczd2typeszd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1342), BgL_vz00_1343);
		}

	}



/* sawc-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2functionszd2zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_184)
	{
		{	/* BackEnd/cvm.sch 315 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_184)))->BgL_functionsz00);
		}

	}



/* &sawc-functions */
	obj_t BGl_z62sawczd2functionszb0zzbackend_cvmz00(obj_t BgL_envz00_1344,
		obj_t BgL_oz00_1345)
	{
		{	/* BackEnd/cvm.sch 315 */
			return
				BGl_sawczd2functionszd2zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1345));
		}

	}



/* sawc-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2functionszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_185, obj_t BgL_vz00_186)
	{
		{	/* BackEnd/cvm.sch 316 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_185)))->BgL_functionsz00) =
				((obj_t) BgL_vz00_186), BUNSPEC);
		}

	}



/* &sawc-functions-set! */
	obj_t BGl_z62sawczd2functionszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1346, obj_t BgL_oz00_1347, obj_t BgL_vz00_1348)
	{
		{	/* BackEnd/cvm.sch 316 */
			return
				BGl_sawczd2functionszd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1347), BgL_vz00_1348);
		}

	}



/* sawc-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2variableszd2zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_187)
	{
		{	/* BackEnd/cvm.sch 317 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_187)))->BgL_variablesz00);
		}

	}



/* &sawc-variables */
	obj_t BGl_z62sawczd2variableszb0zzbackend_cvmz00(obj_t BgL_envz00_1349,
		obj_t BgL_oz00_1350)
	{
		{	/* BackEnd/cvm.sch 317 */
			return
				BGl_sawczd2variableszd2zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1350));
		}

	}



/* sawc-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2variableszd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_188, obj_t BgL_vz00_189)
	{
		{	/* BackEnd/cvm.sch 318 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_188)))->BgL_variablesz00) =
				((obj_t) BgL_vz00_189), BUNSPEC);
		}

	}



/* &sawc-variables-set! */
	obj_t BGl_z62sawczd2variableszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1351, obj_t BgL_oz00_1352, obj_t BgL_vz00_1353)
	{
		{	/* BackEnd/cvm.sch 318 */
			return
				BGl_sawczd2variableszd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1352), BgL_vz00_1353);
		}

	}



/* sawc-extern-types */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2externzd2typesz00zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_190)
	{
		{	/* BackEnd/cvm.sch 319 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_190)))->BgL_externzd2typeszd2);
		}

	}



/* &sawc-extern-types */
	obj_t BGl_z62sawczd2externzd2typesz62zzbackend_cvmz00(obj_t BgL_envz00_1354,
		obj_t BgL_oz00_1355)
	{
		{	/* BackEnd/cvm.sch 319 */
			return
				BGl_sawczd2externzd2typesz00zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1355));
		}

	}



/* sawc-extern-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2externzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_191, obj_t BgL_vz00_192)
	{
		{	/* BackEnd/cvm.sch 320 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_191)))->BgL_externzd2typeszd2) =
				((obj_t) BgL_vz00_192), BUNSPEC);
		}

	}



/* &sawc-extern-types-set! */
	obj_t BGl_z62sawczd2externzd2typeszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1356, obj_t BgL_oz00_1357, obj_t BgL_vz00_1358)
	{
		{	/* BackEnd/cvm.sch 320 */
			return
				BGl_sawczd2externzd2typeszd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1357), BgL_vz00_1358);
		}

	}



/* sawc-extern-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2externzd2functionsz00zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_193)
	{
		{	/* BackEnd/cvm.sch 321 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_193)))->BgL_externzd2functionszd2);
		}

	}



/* &sawc-extern-functions */
	obj_t BGl_z62sawczd2externzd2functionsz62zzbackend_cvmz00(obj_t
		BgL_envz00_1359, obj_t BgL_oz00_1360)
	{
		{	/* BackEnd/cvm.sch 321 */
			return
				BGl_sawczd2externzd2functionsz00zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1360));
		}

	}



/* sawc-extern-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2externzd2functionszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_194, obj_t BgL_vz00_195)
	{
		{	/* BackEnd/cvm.sch 322 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_194)))->
					BgL_externzd2functionszd2) = ((obj_t) BgL_vz00_195), BUNSPEC);
		}

	}



/* &sawc-extern-functions-set! */
	obj_t BGl_z62sawczd2externzd2functionszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1361, obj_t BgL_oz00_1362, obj_t BgL_vz00_1363)
	{
		{	/* BackEnd/cvm.sch 322 */
			return
				BGl_sawczd2externzd2functionszd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1362), BgL_vz00_1363);
		}

	}



/* sawc-extern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2externzd2variablesz00zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_196)
	{
		{	/* BackEnd/cvm.sch 323 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_196)))->BgL_externzd2variableszd2);
		}

	}



/* &sawc-extern-variables */
	obj_t BGl_z62sawczd2externzd2variablesz62zzbackend_cvmz00(obj_t
		BgL_envz00_1364, obj_t BgL_oz00_1365)
	{
		{	/* BackEnd/cvm.sch 323 */
			return
				BGl_sawczd2externzd2variablesz00zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1365));
		}

	}



/* sawc-extern-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2externzd2variableszd2setz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_197, obj_t BgL_vz00_198)
	{
		{	/* BackEnd/cvm.sch 324 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_197)))->
					BgL_externzd2variableszd2) = ((obj_t) BgL_vz00_198), BUNSPEC);
		}

	}



/* &sawc-extern-variables-set! */
	obj_t BGl_z62sawczd2externzd2variableszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1366, obj_t BgL_oz00_1367, obj_t BgL_vz00_1368)
	{
		{	/* BackEnd/cvm.sch 324 */
			return
				BGl_sawczd2externzd2variableszd2setz12zc0zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1367), BgL_vz00_1368);
		}

	}



/* sawc-name */
	BGL_EXPORTED_DEF obj_t BGl_sawczd2namezd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_199)
	{
		{	/* BackEnd/cvm.sch 325 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_199)))->BgL_namez00);
		}

	}



/* &sawc-name */
	obj_t BGl_z62sawczd2namezb0zzbackend_cvmz00(obj_t BgL_envz00_1369,
		obj_t BgL_oz00_1370)
	{
		{	/* BackEnd/cvm.sch 325 */
			return
				BGl_sawczd2namezd2zzbackend_cvmz00(((BgL_sawcz00_bglt) BgL_oz00_1370));
		}

	}



/* sawc-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2namezd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_200,
		obj_t BgL_vz00_201)
	{
		{	/* BackEnd/cvm.sch 326 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_200)))->BgL_namez00) =
				((obj_t) BgL_vz00_201), BUNSPEC);
		}

	}



/* &sawc-name-set! */
	obj_t BGl_z62sawczd2namezd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1371,
		obj_t BgL_oz00_1372, obj_t BgL_vz00_1373)
	{
		{	/* BackEnd/cvm.sch 326 */
			return
				BGl_sawczd2namezd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1372), BgL_vz00_1373);
		}

	}



/* sawc-srfi0 */
	BGL_EXPORTED_DEF obj_t BGl_sawczd2srfi0zd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_202)
	{
		{	/* BackEnd/cvm.sch 327 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_202)))->BgL_srfi0z00);
		}

	}



/* &sawc-srfi0 */
	obj_t BGl_z62sawczd2srfi0zb0zzbackend_cvmz00(obj_t BgL_envz00_1374,
		obj_t BgL_oz00_1375)
	{
		{	/* BackEnd/cvm.sch 327 */
			return
				BGl_sawczd2srfi0zd2zzbackend_cvmz00(((BgL_sawcz00_bglt) BgL_oz00_1375));
		}

	}



/* sawc-srfi0-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2srfi0zd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt BgL_oz00_203,
		obj_t BgL_vz00_204)
	{
		{	/* BackEnd/cvm.sch 328 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_203)))->BgL_srfi0z00) =
				((obj_t) BgL_vz00_204), BUNSPEC);
		}

	}



/* &sawc-srfi0-set! */
	obj_t BGl_z62sawczd2srfi0zd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1376,
		obj_t BgL_oz00_1377, obj_t BgL_vz00_1378)
	{
		{	/* BackEnd/cvm.sch 328 */
			return
				BGl_sawczd2srfi0zd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1377), BgL_vz00_1378);
		}

	}



/* sawc-language */
	BGL_EXPORTED_DEF obj_t BGl_sawczd2languagezd2zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_205)
	{
		{	/* BackEnd/cvm.sch 329 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_205)))->BgL_languagez00);
		}

	}



/* &sawc-language */
	obj_t BGl_z62sawczd2languagezb0zzbackend_cvmz00(obj_t BgL_envz00_1379,
		obj_t BgL_oz00_1380)
	{
		{	/* BackEnd/cvm.sch 329 */
			return
				BGl_sawczd2languagezd2zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1380));
		}

	}



/* sawc-language-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_sawczd2languagezd2setz12z12zzbackend_cvmz00(BgL_sawcz00_bglt
		BgL_oz00_206, obj_t BgL_vz00_207)
	{
		{	/* BackEnd/cvm.sch 330 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_206)))->BgL_languagez00) =
				((obj_t) BgL_vz00_207), BUNSPEC);
		}

	}



/* &sawc-language-set! */
	obj_t BGl_z62sawczd2languagezd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1381, obj_t BgL_oz00_1382, obj_t BgL_vz00_1383)
	{
		{	/* BackEnd/cvm.sch 330 */
			return
				BGl_sawczd2languagezd2setz12z12zzbackend_cvmz00(
				((BgL_sawcz00_bglt) BgL_oz00_1382), BgL_vz00_1383);
		}

	}



/* make-cgen */
	BGL_EXPORTED_DEF BgL_cgenz00_bglt BGl_makezd2cgenzd2zzbackend_cvmz00(obj_t
		BgL_language1164z00_208, obj_t BgL_srfi01165z00_209,
		obj_t BgL_name1166z00_210, obj_t BgL_externzd2variables1167zd2_211,
		obj_t BgL_externzd2functions1168zd2_212,
		obj_t BgL_externzd2types1169zd2_213, obj_t BgL_variables1170z00_214,
		obj_t BgL_functions1171z00_215, obj_t BgL_types1172z00_216,
		bool_t BgL_typed1173z00_217, obj_t BgL_heapzd2suffix1174zd2_218,
		obj_t BgL_heapzd2compatible1175zd2_219, bool_t BgL_callcc1176z00_220,
		bool_t BgL_qualifiedzd2types1177zd2_221, bool_t BgL_effectzb21178zb2_222,
		bool_t BgL_removezd2emptyzd2let1179z00_223,
		bool_t BgL_foreignzd2closure1180zd2_224, bool_t BgL_typedzd2eq1181zd2_225,
		bool_t BgL_tracezd2support1182zd2_226,
		obj_t BgL_foreignzd2clausezd2suppo1183z00_227,
		obj_t BgL_debugzd2support1184zd2_228,
		bool_t BgL_pragmazd2support1185zd2_229,
		bool_t BgL_tvectorzd2descrzd2suppor1186z00_230,
		bool_t BgL_requirezd2tailc1187zd2_231, obj_t BgL_registers1188z00_232,
		obj_t BgL_pregisters1189z00_233, bool_t BgL_boundzd2check1190zd2_234,
		bool_t BgL_typezd2check1191zd2_235, bool_t BgL_typedzd2funcall1192zd2_236)
	{
		{	/* BackEnd/cvm.sch 333 */
			{	/* BackEnd/cvm.sch 333 */
				BgL_cgenz00_bglt BgL_new1234z00_1659;

				{	/* BackEnd/cvm.sch 333 */
					BgL_cgenz00_bglt BgL_new1233z00_1660;

					BgL_new1233z00_1660 =
						((BgL_cgenz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cgenz00_bgl))));
					{	/* BackEnd/cvm.sch 333 */
						long BgL_arg1372z00_1661;

						{	/* BackEnd/cvm.sch 333 */
							long BgL_res1491z00_1662;

							BgL_res1491z00_1662 =
								BGL_CLASS_INDEX(BGl_cgenz00zzbackend_cvmz00);
							BgL_arg1372z00_1661 = BgL_res1491z00_1662;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1233z00_1660), BgL_arg1372z00_1661);
					}
					BgL_new1234z00_1659 = BgL_new1233z00_1660;
				}
				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_new1234z00_1659)))->
						BgL_languagez00) = ((obj_t) BgL_language1164z00_208), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01165z00_209), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_namez00) =
					((obj_t) BgL_name1166z00_210), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1167zd2_211), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1168zd2_212), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1169zd2_213), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_variablesz00) =
					((obj_t) BgL_variables1170z00_214), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_functionsz00) =
					((obj_t) BgL_functions1171z00_215), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_typesz00) =
					((obj_t) BgL_types1172z00_216), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_typedz00) =
					((bool_t) BgL_typed1173z00_217), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1174zd2_218), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1175zd2_219), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_callccz00) =
					((bool_t) BgL_callcc1176z00_220), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1177zd2_221), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21178zb2_222), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1179z00_223), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1180zd2_224), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1181zd2_225), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1182zd2_226), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1183z00_227), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1184zd2_228), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1185zd2_229), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1186z00_230), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1187zd2_231), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_registersz00) =
					((obj_t) BgL_registers1188z00_232), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1189z00_233), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1190zd2_234), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1191zd2_235), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1234z00_1659)))->BgL_typedzd2funcallzd2) =
					((bool_t) BgL_typedzd2funcall1192zd2_236), BUNSPEC);
				{	/* BackEnd/cvm.sch 333 */
					obj_t BgL_fun1371z00_1663;

					BgL_fun1371z00_1663 =
						BGl_classzd2constructorzd2zz__objectz00
						(BGl_cgenz00zzbackend_cvmz00);
					PROCEDURE_ENTRY(BgL_fun1371z00_1663) (BgL_fun1371z00_1663,
						((obj_t) BgL_new1234z00_1659), BEOA);
				}
				return BgL_new1234z00_1659;
			}
		}

	}



/* &make-cgen */
	BgL_cgenz00_bglt BGl_z62makezd2cgenzb0zzbackend_cvmz00(obj_t BgL_envz00_1384,
		obj_t BgL_language1164z00_1385, obj_t BgL_srfi01165z00_1386,
		obj_t BgL_name1166z00_1387, obj_t BgL_externzd2variables1167zd2_1388,
		obj_t BgL_externzd2functions1168zd2_1389,
		obj_t BgL_externzd2types1169zd2_1390, obj_t BgL_variables1170z00_1391,
		obj_t BgL_functions1171z00_1392, obj_t BgL_types1172z00_1393,
		obj_t BgL_typed1173z00_1394, obj_t BgL_heapzd2suffix1174zd2_1395,
		obj_t BgL_heapzd2compatible1175zd2_1396, obj_t BgL_callcc1176z00_1397,
		obj_t BgL_qualifiedzd2types1177zd2_1398, obj_t BgL_effectzb21178zb2_1399,
		obj_t BgL_removezd2emptyzd2let1179z00_1400,
		obj_t BgL_foreignzd2closure1180zd2_1401, obj_t BgL_typedzd2eq1181zd2_1402,
		obj_t BgL_tracezd2support1182zd2_1403,
		obj_t BgL_foreignzd2clausezd2suppo1183z00_1404,
		obj_t BgL_debugzd2support1184zd2_1405,
		obj_t BgL_pragmazd2support1185zd2_1406,
		obj_t BgL_tvectorzd2descrzd2suppor1186z00_1407,
		obj_t BgL_requirezd2tailc1187zd2_1408, obj_t BgL_registers1188z00_1409,
		obj_t BgL_pregisters1189z00_1410, obj_t BgL_boundzd2check1190zd2_1411,
		obj_t BgL_typezd2check1191zd2_1412, obj_t BgL_typedzd2funcall1192zd2_1413)
	{
		{	/* BackEnd/cvm.sch 333 */
			return
				BGl_makezd2cgenzd2zzbackend_cvmz00(BgL_language1164z00_1385,
				BgL_srfi01165z00_1386, BgL_name1166z00_1387,
				BgL_externzd2variables1167zd2_1388, BgL_externzd2functions1168zd2_1389,
				BgL_externzd2types1169zd2_1390, BgL_variables1170z00_1391,
				BgL_functions1171z00_1392, BgL_types1172z00_1393,
				CBOOL(BgL_typed1173z00_1394), BgL_heapzd2suffix1174zd2_1395,
				BgL_heapzd2compatible1175zd2_1396, CBOOL(BgL_callcc1176z00_1397),
				CBOOL(BgL_qualifiedzd2types1177zd2_1398),
				CBOOL(BgL_effectzb21178zb2_1399),
				CBOOL(BgL_removezd2emptyzd2let1179z00_1400),
				CBOOL(BgL_foreignzd2closure1180zd2_1401),
				CBOOL(BgL_typedzd2eq1181zd2_1402),
				CBOOL(BgL_tracezd2support1182zd2_1403),
				BgL_foreignzd2clausezd2suppo1183z00_1404,
				BgL_debugzd2support1184zd2_1405,
				CBOOL(BgL_pragmazd2support1185zd2_1406),
				CBOOL(BgL_tvectorzd2descrzd2suppor1186z00_1407),
				CBOOL(BgL_requirezd2tailc1187zd2_1408), BgL_registers1188z00_1409,
				BgL_pregisters1189z00_1410, CBOOL(BgL_boundzd2check1190zd2_1411),
				CBOOL(BgL_typezd2check1191zd2_1412),
				CBOOL(BgL_typedzd2funcall1192zd2_1413));
		}

	}



/* cgen? */
	BGL_EXPORTED_DEF bool_t BGl_cgenzf3zf3zzbackend_cvmz00(obj_t BgL_objz00_237)
	{
		{	/* BackEnd/cvm.sch 334 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_237, BGl_cgenz00zzbackend_cvmz00);
		}

	}



/* &cgen? */
	obj_t BGl_z62cgenzf3z91zzbackend_cvmz00(obj_t BgL_envz00_1414,
		obj_t BgL_objz00_1415)
	{
		{	/* BackEnd/cvm.sch 334 */
			return BBOOL(BGl_cgenzf3zf3zzbackend_cvmz00(BgL_objz00_1415));
		}

	}



/* cgen-nil */
	BGL_EXPORTED_DEF BgL_cgenz00_bglt BGl_cgenzd2nilzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.sch 335 */
			{	/* BackEnd/cvm.sch 335 */
				obj_t BgL_classz00_970;

				BgL_classz00_970 = BGl_cgenz00zzbackend_cvmz00;
				{	/* BackEnd/cvm.sch 335 */
					obj_t BgL__ortest_1106z00_971;

					BgL__ortest_1106z00_971 = BGL_CLASS_NIL(BgL_classz00_970);
					if (CBOOL(BgL__ortest_1106z00_971))
						{	/* BackEnd/cvm.sch 335 */
							return ((BgL_cgenz00_bglt) BgL__ortest_1106z00_971);
						}
					else
						{	/* BackEnd/cvm.sch 335 */
							return
								((BgL_cgenz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_970));
						}
				}
			}
		}

	}



/* &cgen-nil */
	BgL_cgenz00_bglt BGl_z62cgenzd2nilzb0zzbackend_cvmz00(obj_t BgL_envz00_1416)
	{
		{	/* BackEnd/cvm.sch 335 */
			return BGl_cgenzd2nilzd2zzbackend_cvmz00();
		}

	}



/* cgen-typed-funcall */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2typedzd2funcallz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_238)
	{
		{	/* BackEnd/cvm.sch 336 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_238)))->BgL_typedzd2funcallzd2);
		}

	}



/* &cgen-typed-funcall */
	obj_t BGl_z62cgenzd2typedzd2funcallz62zzbackend_cvmz00(obj_t BgL_envz00_1417,
		obj_t BgL_oz00_1418)
	{
		{	/* BackEnd/cvm.sch 336 */
			return
				BBOOL(BGl_cgenzd2typedzd2funcallz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1418)));
		}

	}



/* cgen-typed-funcall-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_239, bool_t BgL_vz00_240)
	{
		{	/* BackEnd/cvm.sch 337 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_239)))->BgL_typedzd2funcallzd2) =
				((bool_t) BgL_vz00_240), BUNSPEC);
		}

	}



/* &cgen-typed-funcall-set! */
	obj_t BGl_z62cgenzd2typedzd2funcallzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1419, obj_t BgL_oz00_1420, obj_t BgL_vz00_1421)
	{
		{	/* BackEnd/cvm.sch 337 */
			return
				BGl_cgenzd2typedzd2funcallzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1420), CBOOL(BgL_vz00_1421));
		}

	}



/* cgen-type-check */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2typezd2checkz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_241)
	{
		{	/* BackEnd/cvm.sch 338 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_241)))->BgL_typezd2checkzd2);
		}

	}



/* &cgen-type-check */
	obj_t BGl_z62cgenzd2typezd2checkz62zzbackend_cvmz00(obj_t BgL_envz00_1422,
		obj_t BgL_oz00_1423)
	{
		{	/* BackEnd/cvm.sch 338 */
			return
				BBOOL(BGl_cgenzd2typezd2checkz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1423)));
		}

	}



/* cgen-type-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2typezd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_242, bool_t BgL_vz00_243)
	{
		{	/* BackEnd/cvm.sch 339 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_242)))->BgL_typezd2checkzd2) =
				((bool_t) BgL_vz00_243), BUNSPEC);
		}

	}



/* &cgen-type-check-set! */
	obj_t BGl_z62cgenzd2typezd2checkzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1424, obj_t BgL_oz00_1425, obj_t BgL_vz00_1426)
	{
		{	/* BackEnd/cvm.sch 339 */
			return
				BGl_cgenzd2typezd2checkzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1425), CBOOL(BgL_vz00_1426));
		}

	}



/* cgen-bound-check */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2boundzd2checkz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_244)
	{
		{	/* BackEnd/cvm.sch 340 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_244)))->BgL_boundzd2checkzd2);
		}

	}



/* &cgen-bound-check */
	obj_t BGl_z62cgenzd2boundzd2checkz62zzbackend_cvmz00(obj_t BgL_envz00_1427,
		obj_t BgL_oz00_1428)
	{
		{	/* BackEnd/cvm.sch 340 */
			return
				BBOOL(BGl_cgenzd2boundzd2checkz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1428)));
		}

	}



/* cgen-bound-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_245, bool_t BgL_vz00_246)
	{
		{	/* BackEnd/cvm.sch 341 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_245)))->BgL_boundzd2checkzd2) =
				((bool_t) BgL_vz00_246), BUNSPEC);
		}

	}



/* &cgen-bound-check-set! */
	obj_t BGl_z62cgenzd2boundzd2checkzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1429, obj_t BgL_oz00_1430, obj_t BgL_vz00_1431)
	{
		{	/* BackEnd/cvm.sch 341 */
			return
				BGl_cgenzd2boundzd2checkzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1430), CBOOL(BgL_vz00_1431));
		}

	}



/* cgen-pregisters */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2pregisterszd2zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_247)
	{
		{	/* BackEnd/cvm.sch 342 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_247)))->BgL_pregistersz00);
		}

	}



/* &cgen-pregisters */
	obj_t BGl_z62cgenzd2pregisterszb0zzbackend_cvmz00(obj_t BgL_envz00_1432,
		obj_t BgL_oz00_1433)
	{
		{	/* BackEnd/cvm.sch 342 */
			return
				BGl_cgenzd2pregisterszd2zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1433));
		}

	}



/* cgen-pregisters-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2pregisterszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_248, obj_t BgL_vz00_249)
	{
		{	/* BackEnd/cvm.sch 343 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_248)))->BgL_pregistersz00) =
				((obj_t) BgL_vz00_249), BUNSPEC);
		}

	}



/* &cgen-pregisters-set! */
	obj_t BGl_z62cgenzd2pregisterszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1434, obj_t BgL_oz00_1435, obj_t BgL_vz00_1436)
	{
		{	/* BackEnd/cvm.sch 343 */
			return
				BGl_cgenzd2pregisterszd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1435), BgL_vz00_1436);
		}

	}



/* cgen-registers */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2registerszd2zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_250)
	{
		{	/* BackEnd/cvm.sch 344 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_250)))->BgL_registersz00);
		}

	}



/* &cgen-registers */
	obj_t BGl_z62cgenzd2registerszb0zzbackend_cvmz00(obj_t BgL_envz00_1437,
		obj_t BgL_oz00_1438)
	{
		{	/* BackEnd/cvm.sch 344 */
			return
				BGl_cgenzd2registerszd2zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1438));
		}

	}



/* cgen-registers-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2registerszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_251, obj_t BgL_vz00_252)
	{
		{	/* BackEnd/cvm.sch 345 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_251)))->BgL_registersz00) =
				((obj_t) BgL_vz00_252), BUNSPEC);
		}

	}



/* &cgen-registers-set! */
	obj_t BGl_z62cgenzd2registerszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1439, obj_t BgL_oz00_1440, obj_t BgL_vz00_1441)
	{
		{	/* BackEnd/cvm.sch 345 */
			return
				BGl_cgenzd2registerszd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1440), BgL_vz00_1441);
		}

	}



/* cgen-require-tailc */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2requirezd2tailcz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_253)
	{
		{	/* BackEnd/cvm.sch 346 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_253)))->BgL_requirezd2tailczd2);
		}

	}



/* &cgen-require-tailc */
	obj_t BGl_z62cgenzd2requirezd2tailcz62zzbackend_cvmz00(obj_t BgL_envz00_1442,
		obj_t BgL_oz00_1443)
	{
		{	/* BackEnd/cvm.sch 346 */
			return
				BBOOL(BGl_cgenzd2requirezd2tailcz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1443)));
		}

	}



/* cgen-require-tailc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_254, bool_t BgL_vz00_255)
	{
		{	/* BackEnd/cvm.sch 347 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_254)))->BgL_requirezd2tailczd2) =
				((bool_t) BgL_vz00_255), BUNSPEC);
		}

	}



/* &cgen-require-tailc-set! */
	obj_t BGl_z62cgenzd2requirezd2tailczd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1444, obj_t BgL_oz00_1445, obj_t BgL_vz00_1446)
	{
		{	/* BackEnd/cvm.sch 347 */
			return
				BGl_cgenzd2requirezd2tailczd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1445), CBOOL(BgL_vz00_1446));
		}

	}



/* cgen-tvector-descr-support */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_256)
	{
		{	/* BackEnd/cvm.sch 348 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_256)))->
				BgL_tvectorzd2descrzd2supportz00);
		}

	}



/* &cgen-tvector-descr-support */
	obj_t BGl_z62cgenzd2tvectorzd2descrzd2supportzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1447, obj_t BgL_oz00_1448)
	{
		{	/* BackEnd/cvm.sch 348 */
			return
				BBOOL(BGl_cgenzd2tvectorzd2descrzd2supportzd2zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1448)));
		}

	}



/* cgen-tvector-descr-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cgenz00_bglt BgL_oz00_257, bool_t BgL_vz00_258)
	{
		{	/* BackEnd/cvm.sch 349 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_257)))->
					BgL_tvectorzd2descrzd2supportz00) = ((bool_t) BgL_vz00_258), BUNSPEC);
		}

	}



/* &cgen-tvector-descr-support-set! */
	obj_t
		BGl_z62cgenzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1449, obj_t BgL_oz00_1450, obj_t BgL_vz00_1451)
	{
		{	/* BackEnd/cvm.sch 349 */
			return
				BGl_cgenzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1450), CBOOL(BgL_vz00_1451));
		}

	}



/* cgen-pragma-support */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2pragmazd2supportz00zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_259)
	{
		{	/* BackEnd/cvm.sch 350 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_259)))->BgL_pragmazd2supportzd2);
		}

	}



/* &cgen-pragma-support */
	obj_t BGl_z62cgenzd2pragmazd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1452,
		obj_t BgL_oz00_1453)
	{
		{	/* BackEnd/cvm.sch 350 */
			return
				BBOOL(BGl_cgenzd2pragmazd2supportz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1453)));
		}

	}



/* cgen-pragma-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_260, bool_t BgL_vz00_261)
	{
		{	/* BackEnd/cvm.sch 351 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_260)))->BgL_pragmazd2supportzd2) =
				((bool_t) BgL_vz00_261), BUNSPEC);
		}

	}



/* &cgen-pragma-support-set! */
	obj_t BGl_z62cgenzd2pragmazd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1454, obj_t BgL_oz00_1455, obj_t BgL_vz00_1456)
	{
		{	/* BackEnd/cvm.sch 351 */
			return
				BGl_cgenzd2pragmazd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1455), CBOOL(BgL_vz00_1456));
		}

	}



/* cgen-debug-support */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2debugzd2supportz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_262)
	{
		{	/* BackEnd/cvm.sch 352 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_262)))->BgL_debugzd2supportzd2);
		}

	}



/* &cgen-debug-support */
	obj_t BGl_z62cgenzd2debugzd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1457,
		obj_t BgL_oz00_1458)
	{
		{	/* BackEnd/cvm.sch 352 */
			return
				BGl_cgenzd2debugzd2supportz00zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1458));
		}

	}



/* cgen-debug-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_263, obj_t BgL_vz00_264)
	{
		{	/* BackEnd/cvm.sch 353 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_263)))->BgL_debugzd2supportzd2) =
				((obj_t) BgL_vz00_264), BUNSPEC);
		}

	}



/* &cgen-debug-support-set! */
	obj_t BGl_z62cgenzd2debugzd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1459, obj_t BgL_oz00_1460, obj_t BgL_vz00_1461)
	{
		{	/* BackEnd/cvm.sch 353 */
			return
				BGl_cgenzd2debugzd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1460), BgL_vz00_1461);
		}

	}



/* cgen-foreign-clause-support */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_265)
	{
		{	/* BackEnd/cvm.sch 354 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_265)))->
				BgL_foreignzd2clausezd2supportz00);
		}

	}



/* &cgen-foreign-clause-support */
	obj_t BGl_z62cgenzd2foreignzd2clausezd2supportzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1462, obj_t BgL_oz00_1463)
	{
		{	/* BackEnd/cvm.sch 354 */
			return
				BGl_cgenzd2foreignzd2clausezd2supportzd2zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1463));
		}

	}



/* cgen-foreign-clause-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00
		(BgL_cgenz00_bglt BgL_oz00_266, obj_t BgL_vz00_267)
	{
		{	/* BackEnd/cvm.sch 355 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_266)))->
					BgL_foreignzd2clausezd2supportz00) = ((obj_t) BgL_vz00_267), BUNSPEC);
		}

	}



/* &cgen-foreign-clause-support-set! */
	obj_t
		BGl_z62cgenzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1464, obj_t BgL_oz00_1465, obj_t BgL_vz00_1466)
	{
		{	/* BackEnd/cvm.sch 355 */
			return
				BGl_cgenzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1465), BgL_vz00_1466);
		}

	}



/* cgen-trace-support */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2tracezd2supportz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_268)
	{
		{	/* BackEnd/cvm.sch 356 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_268)))->BgL_tracezd2supportzd2);
		}

	}



/* &cgen-trace-support */
	obj_t BGl_z62cgenzd2tracezd2supportz62zzbackend_cvmz00(obj_t BgL_envz00_1467,
		obj_t BgL_oz00_1468)
	{
		{	/* BackEnd/cvm.sch 356 */
			return
				BBOOL(BGl_cgenzd2tracezd2supportz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1468)));
		}

	}



/* cgen-trace-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_269, bool_t BgL_vz00_270)
	{
		{	/* BackEnd/cvm.sch 357 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_269)))->BgL_tracezd2supportzd2) =
				((bool_t) BgL_vz00_270), BUNSPEC);
		}

	}



/* &cgen-trace-support-set! */
	obj_t BGl_z62cgenzd2tracezd2supportzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1469, obj_t BgL_oz00_1470, obj_t BgL_vz00_1471)
	{
		{	/* BackEnd/cvm.sch 357 */
			return
				BGl_cgenzd2tracezd2supportzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1470), CBOOL(BgL_vz00_1471));
		}

	}



/* cgen-typed-eq */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2typedzd2eqz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_271)
	{
		{	/* BackEnd/cvm.sch 358 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_271)))->BgL_typedzd2eqzd2);
		}

	}



/* &cgen-typed-eq */
	obj_t BGl_z62cgenzd2typedzd2eqz62zzbackend_cvmz00(obj_t BgL_envz00_1472,
		obj_t BgL_oz00_1473)
	{
		{	/* BackEnd/cvm.sch 358 */
			return
				BBOOL(BGl_cgenzd2typedzd2eqz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1473)));
		}

	}



/* cgen-typed-eq-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_272, bool_t BgL_vz00_273)
	{
		{	/* BackEnd/cvm.sch 359 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_272)))->BgL_typedzd2eqzd2) =
				((bool_t) BgL_vz00_273), BUNSPEC);
		}

	}



/* &cgen-typed-eq-set! */
	obj_t BGl_z62cgenzd2typedzd2eqzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1474, obj_t BgL_oz00_1475, obj_t BgL_vz00_1476)
	{
		{	/* BackEnd/cvm.sch 359 */
			return
				BGl_cgenzd2typedzd2eqzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1475), CBOOL(BgL_vz00_1476));
		}

	}



/* cgen-foreign-closure */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2foreignzd2closurez00zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_274)
	{
		{	/* BackEnd/cvm.sch 360 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_274)))->BgL_foreignzd2closurezd2);
		}

	}



/* &cgen-foreign-closure */
	obj_t BGl_z62cgenzd2foreignzd2closurez62zzbackend_cvmz00(obj_t
		BgL_envz00_1477, obj_t BgL_oz00_1478)
	{
		{	/* BackEnd/cvm.sch 360 */
			return
				BBOOL(BGl_cgenzd2foreignzd2closurez00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1478)));
		}

	}



/* cgen-foreign-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_275, bool_t BgL_vz00_276)
	{
		{	/* BackEnd/cvm.sch 361 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_275)))->
					BgL_foreignzd2closurezd2) = ((bool_t) BgL_vz00_276), BUNSPEC);
		}

	}



/* &cgen-foreign-closure-set! */
	obj_t BGl_z62cgenzd2foreignzd2closurezd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1479, obj_t BgL_oz00_1480, obj_t BgL_vz00_1481)
	{
		{	/* BackEnd/cvm.sch 361 */
			return
				BGl_cgenzd2foreignzd2closurezd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1480), CBOOL(BgL_vz00_1481));
		}

	}



/* cgen-remove-empty-let */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2removezd2emptyzd2letzd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_277)
	{
		{	/* BackEnd/cvm.sch 362 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_277)))->
				BgL_removezd2emptyzd2letz00);
		}

	}



/* &cgen-remove-empty-let */
	obj_t BGl_z62cgenzd2removezd2emptyzd2letzb0zzbackend_cvmz00(obj_t
		BgL_envz00_1482, obj_t BgL_oz00_1483)
	{
		{	/* BackEnd/cvm.sch 362 */
			return
				BBOOL(BGl_cgenzd2removezd2emptyzd2letzd2zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1483)));
		}

	}



/* cgen-remove-empty-let-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_278, bool_t BgL_vz00_279)
	{
		{	/* BackEnd/cvm.sch 363 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_278)))->
					BgL_removezd2emptyzd2letz00) = ((bool_t) BgL_vz00_279), BUNSPEC);
		}

	}



/* &cgen-remove-empty-let-set! */
	obj_t BGl_z62cgenzd2removezd2emptyzd2letzd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1484, obj_t BgL_oz00_1485, obj_t BgL_vz00_1486)
	{
		{	/* BackEnd/cvm.sch 363 */
			return
				BGl_cgenzd2removezd2emptyzd2letzd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1485), CBOOL(BgL_vz00_1486));
		}

	}



/* cgen-effect+ */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2effectzb2z60zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_280)
	{
		{	/* BackEnd/cvm.sch 364 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_280)))->BgL_effectzb2zb2);
		}

	}



/* &cgen-effect+ */
	obj_t BGl_z62cgenzd2effectzb2z02zzbackend_cvmz00(obj_t BgL_envz00_1487,
		obj_t BgL_oz00_1488)
	{
		{	/* BackEnd/cvm.sch 364 */
			return
				BBOOL(BGl_cgenzd2effectzb2z60zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1488)));
		}

	}



/* cgen-effect+-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2effectzb2zd2setz12za0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_281, bool_t BgL_vz00_282)
	{
		{	/* BackEnd/cvm.sch 365 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_281)))->BgL_effectzb2zb2) =
				((bool_t) BgL_vz00_282), BUNSPEC);
		}

	}



/* &cgen-effect+-set! */
	obj_t BGl_z62cgenzd2effectzb2zd2setz12zc2zzbackend_cvmz00(obj_t
		BgL_envz00_1489, obj_t BgL_oz00_1490, obj_t BgL_vz00_1491)
	{
		{	/* BackEnd/cvm.sch 365 */
			return
				BGl_cgenzd2effectzb2zd2setz12za0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1490), CBOOL(BgL_vz00_1491));
		}

	}



/* cgen-qualified-types */
	BGL_EXPORTED_DEF bool_t
		BGl_cgenzd2qualifiedzd2typesz00zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_283)
	{
		{	/* BackEnd/cvm.sch 366 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_283)))->BgL_qualifiedzd2typeszd2);
		}

	}



/* &cgen-qualified-types */
	obj_t BGl_z62cgenzd2qualifiedzd2typesz62zzbackend_cvmz00(obj_t
		BgL_envz00_1492, obj_t BgL_oz00_1493)
	{
		{	/* BackEnd/cvm.sch 366 */
			return
				BBOOL(BGl_cgenzd2qualifiedzd2typesz00zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1493)));
		}

	}



/* cgen-qualified-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_284, bool_t BgL_vz00_285)
	{
		{	/* BackEnd/cvm.sch 367 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_284)))->
					BgL_qualifiedzd2typeszd2) = ((bool_t) BgL_vz00_285), BUNSPEC);
		}

	}



/* &cgen-qualified-types-set! */
	obj_t BGl_z62cgenzd2qualifiedzd2typeszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1494, obj_t BgL_oz00_1495, obj_t BgL_vz00_1496)
	{
		{	/* BackEnd/cvm.sch 367 */
			return
				BGl_cgenzd2qualifiedzd2typeszd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1495), CBOOL(BgL_vz00_1496));
		}

	}



/* cgen-callcc */
	BGL_EXPORTED_DEF bool_t BGl_cgenzd2callcczd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_286)
	{
		{	/* BackEnd/cvm.sch 368 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_286)))->BgL_callccz00);
		}

	}



/* &cgen-callcc */
	obj_t BGl_z62cgenzd2callcczb0zzbackend_cvmz00(obj_t BgL_envz00_1497,
		obj_t BgL_oz00_1498)
	{
		{	/* BackEnd/cvm.sch 368 */
			return
				BBOOL(BGl_cgenzd2callcczd2zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1498)));
		}

	}



/* cgen-callcc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2callcczd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_287,
		bool_t BgL_vz00_288)
	{
		{	/* BackEnd/cvm.sch 369 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_287)))->BgL_callccz00) =
				((bool_t) BgL_vz00_288), BUNSPEC);
		}

	}



/* &cgen-callcc-set! */
	obj_t BGl_z62cgenzd2callcczd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1499,
		obj_t BgL_oz00_1500, obj_t BgL_vz00_1501)
	{
		{	/* BackEnd/cvm.sch 369 */
			return
				BGl_cgenzd2callcczd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1500), CBOOL(BgL_vz00_1501));
		}

	}



/* cgen-heap-compatible */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2heapzd2compatiblez00zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_289)
	{
		{	/* BackEnd/cvm.sch 370 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_289)))->BgL_heapzd2compatiblezd2);
		}

	}



/* &cgen-heap-compatible */
	obj_t BGl_z62cgenzd2heapzd2compatiblez62zzbackend_cvmz00(obj_t
		BgL_envz00_1502, obj_t BgL_oz00_1503)
	{
		{	/* BackEnd/cvm.sch 370 */
			return
				BGl_cgenzd2heapzd2compatiblez00zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1503));
		}

	}



/* cgen-heap-compatible-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_290, obj_t BgL_vz00_291)
	{
		{	/* BackEnd/cvm.sch 371 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_290)))->
					BgL_heapzd2compatiblezd2) = ((obj_t) BgL_vz00_291), BUNSPEC);
		}

	}



/* &cgen-heap-compatible-set! */
	obj_t BGl_z62cgenzd2heapzd2compatiblezd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1504, obj_t BgL_oz00_1505, obj_t BgL_vz00_1506)
	{
		{	/* BackEnd/cvm.sch 371 */
			return
				BGl_cgenzd2heapzd2compatiblezd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1505), BgL_vz00_1506);
		}

	}



/* cgen-heap-suffix */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2heapzd2suffixz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_292)
	{
		{	/* BackEnd/cvm.sch 372 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_292)))->BgL_heapzd2suffixzd2);
		}

	}



/* &cgen-heap-suffix */
	obj_t BGl_z62cgenzd2heapzd2suffixz62zzbackend_cvmz00(obj_t BgL_envz00_1507,
		obj_t BgL_oz00_1508)
	{
		{	/* BackEnd/cvm.sch 372 */
			return
				BGl_cgenzd2heapzd2suffixz00zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1508));
		}

	}



/* cgen-heap-suffix-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_293, obj_t BgL_vz00_294)
	{
		{	/* BackEnd/cvm.sch 373 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_293)))->BgL_heapzd2suffixzd2) =
				((obj_t) BgL_vz00_294), BUNSPEC);
		}

	}



/* &cgen-heap-suffix-set! */
	obj_t BGl_z62cgenzd2heapzd2suffixzd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1509, obj_t BgL_oz00_1510, obj_t BgL_vz00_1511)
	{
		{	/* BackEnd/cvm.sch 373 */
			return
				BGl_cgenzd2heapzd2suffixzd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1510), BgL_vz00_1511);
		}

	}



/* cgen-typed */
	BGL_EXPORTED_DEF bool_t BGl_cgenzd2typedzd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_295)
	{
		{	/* BackEnd/cvm.sch 374 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_295)))->BgL_typedz00);
		}

	}



/* &cgen-typed */
	obj_t BGl_z62cgenzd2typedzb0zzbackend_cvmz00(obj_t BgL_envz00_1512,
		obj_t BgL_oz00_1513)
	{
		{	/* BackEnd/cvm.sch 374 */
			return
				BBOOL(BGl_cgenzd2typedzd2zzbackend_cvmz00(
					((BgL_cgenz00_bglt) BgL_oz00_1513)));
		}

	}



/* cgen-typed-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2typedzd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_296,
		bool_t BgL_vz00_297)
	{
		{	/* BackEnd/cvm.sch 375 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_296)))->BgL_typedz00) =
				((bool_t) BgL_vz00_297), BUNSPEC);
		}

	}



/* &cgen-typed-set! */
	obj_t BGl_z62cgenzd2typedzd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1514,
		obj_t BgL_oz00_1515, obj_t BgL_vz00_1516)
	{
		{	/* BackEnd/cvm.sch 375 */
			return
				BGl_cgenzd2typedzd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1515), CBOOL(BgL_vz00_1516));
		}

	}



/* cgen-types */
	BGL_EXPORTED_DEF obj_t BGl_cgenzd2typeszd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_298)
	{
		{	/* BackEnd/cvm.sch 376 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_298)))->BgL_typesz00);
		}

	}



/* &cgen-types */
	obj_t BGl_z62cgenzd2typeszb0zzbackend_cvmz00(obj_t BgL_envz00_1517,
		obj_t BgL_oz00_1518)
	{
		{	/* BackEnd/cvm.sch 376 */
			return
				BGl_cgenzd2typeszd2zzbackend_cvmz00(((BgL_cgenz00_bglt) BgL_oz00_1518));
		}

	}



/* cgen-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2typeszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_299,
		obj_t BgL_vz00_300)
	{
		{	/* BackEnd/cvm.sch 377 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_299)))->BgL_typesz00) =
				((obj_t) BgL_vz00_300), BUNSPEC);
		}

	}



/* &cgen-types-set! */
	obj_t BGl_z62cgenzd2typeszd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1519,
		obj_t BgL_oz00_1520, obj_t BgL_vz00_1521)
	{
		{	/* BackEnd/cvm.sch 377 */
			return
				BGl_cgenzd2typeszd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1520), BgL_vz00_1521);
		}

	}



/* cgen-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2functionszd2zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_301)
	{
		{	/* BackEnd/cvm.sch 378 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_301)))->BgL_functionsz00);
		}

	}



/* &cgen-functions */
	obj_t BGl_z62cgenzd2functionszb0zzbackend_cvmz00(obj_t BgL_envz00_1522,
		obj_t BgL_oz00_1523)
	{
		{	/* BackEnd/cvm.sch 378 */
			return
				BGl_cgenzd2functionszd2zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1523));
		}

	}



/* cgen-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2functionszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_302, obj_t BgL_vz00_303)
	{
		{	/* BackEnd/cvm.sch 379 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_302)))->BgL_functionsz00) =
				((obj_t) BgL_vz00_303), BUNSPEC);
		}

	}



/* &cgen-functions-set! */
	obj_t BGl_z62cgenzd2functionszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1524, obj_t BgL_oz00_1525, obj_t BgL_vz00_1526)
	{
		{	/* BackEnd/cvm.sch 379 */
			return
				BGl_cgenzd2functionszd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1525), BgL_vz00_1526);
		}

	}



/* cgen-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2variableszd2zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_304)
	{
		{	/* BackEnd/cvm.sch 380 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_304)))->BgL_variablesz00);
		}

	}



/* &cgen-variables */
	obj_t BGl_z62cgenzd2variableszb0zzbackend_cvmz00(obj_t BgL_envz00_1527,
		obj_t BgL_oz00_1528)
	{
		{	/* BackEnd/cvm.sch 380 */
			return
				BGl_cgenzd2variableszd2zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1528));
		}

	}



/* cgen-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2variableszd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_305, obj_t BgL_vz00_306)
	{
		{	/* BackEnd/cvm.sch 381 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_305)))->BgL_variablesz00) =
				((obj_t) BgL_vz00_306), BUNSPEC);
		}

	}



/* &cgen-variables-set! */
	obj_t BGl_z62cgenzd2variableszd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1529, obj_t BgL_oz00_1530, obj_t BgL_vz00_1531)
	{
		{	/* BackEnd/cvm.sch 381 */
			return
				BGl_cgenzd2variableszd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1530), BgL_vz00_1531);
		}

	}



/* cgen-extern-types */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2externzd2typesz00zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_307)
	{
		{	/* BackEnd/cvm.sch 382 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_307)))->BgL_externzd2typeszd2);
		}

	}



/* &cgen-extern-types */
	obj_t BGl_z62cgenzd2externzd2typesz62zzbackend_cvmz00(obj_t BgL_envz00_1532,
		obj_t BgL_oz00_1533)
	{
		{	/* BackEnd/cvm.sch 382 */
			return
				BGl_cgenzd2externzd2typesz00zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1533));
		}

	}



/* cgen-extern-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2externzd2typeszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_308, obj_t BgL_vz00_309)
	{
		{	/* BackEnd/cvm.sch 383 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_308)))->BgL_externzd2typeszd2) =
				((obj_t) BgL_vz00_309), BUNSPEC);
		}

	}



/* &cgen-extern-types-set! */
	obj_t BGl_z62cgenzd2externzd2typeszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1534, obj_t BgL_oz00_1535, obj_t BgL_vz00_1536)
	{
		{	/* BackEnd/cvm.sch 383 */
			return
				BGl_cgenzd2externzd2typeszd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1535), BgL_vz00_1536);
		}

	}



/* cgen-extern-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2externzd2functionsz00zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_310)
	{
		{	/* BackEnd/cvm.sch 384 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_310)))->BgL_externzd2functionszd2);
		}

	}



/* &cgen-extern-functions */
	obj_t BGl_z62cgenzd2externzd2functionsz62zzbackend_cvmz00(obj_t
		BgL_envz00_1537, obj_t BgL_oz00_1538)
	{
		{	/* BackEnd/cvm.sch 384 */
			return
				BGl_cgenzd2externzd2functionsz00zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1538));
		}

	}



/* cgen-extern-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2externzd2functionszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_311, obj_t BgL_vz00_312)
	{
		{	/* BackEnd/cvm.sch 385 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_311)))->
					BgL_externzd2functionszd2) = ((obj_t) BgL_vz00_312), BUNSPEC);
		}

	}



/* &cgen-extern-functions-set! */
	obj_t BGl_z62cgenzd2externzd2functionszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1539, obj_t BgL_oz00_1540, obj_t BgL_vz00_1541)
	{
		{	/* BackEnd/cvm.sch 385 */
			return
				BGl_cgenzd2externzd2functionszd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1540), BgL_vz00_1541);
		}

	}



/* cgen-extern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2externzd2variablesz00zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_313)
	{
		{	/* BackEnd/cvm.sch 386 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_313)))->BgL_externzd2variableszd2);
		}

	}



/* &cgen-extern-variables */
	obj_t BGl_z62cgenzd2externzd2variablesz62zzbackend_cvmz00(obj_t
		BgL_envz00_1542, obj_t BgL_oz00_1543)
	{
		{	/* BackEnd/cvm.sch 386 */
			return
				BGl_cgenzd2externzd2variablesz00zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1543));
		}

	}



/* cgen-extern-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2externzd2variableszd2setz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_314, obj_t BgL_vz00_315)
	{
		{	/* BackEnd/cvm.sch 387 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_314)))->
					BgL_externzd2variableszd2) = ((obj_t) BgL_vz00_315), BUNSPEC);
		}

	}



/* &cgen-extern-variables-set! */
	obj_t BGl_z62cgenzd2externzd2variableszd2setz12za2zzbackend_cvmz00(obj_t
		BgL_envz00_1544, obj_t BgL_oz00_1545, obj_t BgL_vz00_1546)
	{
		{	/* BackEnd/cvm.sch 387 */
			return
				BGl_cgenzd2externzd2variableszd2setz12zc0zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1545), BgL_vz00_1546);
		}

	}



/* cgen-name */
	BGL_EXPORTED_DEF obj_t BGl_cgenzd2namezd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_316)
	{
		{	/* BackEnd/cvm.sch 388 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_316)))->BgL_namez00);
		}

	}



/* &cgen-name */
	obj_t BGl_z62cgenzd2namezb0zzbackend_cvmz00(obj_t BgL_envz00_1547,
		obj_t BgL_oz00_1548)
	{
		{	/* BackEnd/cvm.sch 388 */
			return
				BGl_cgenzd2namezd2zzbackend_cvmz00(((BgL_cgenz00_bglt) BgL_oz00_1548));
		}

	}



/* cgen-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2namezd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_317,
		obj_t BgL_vz00_318)
	{
		{	/* BackEnd/cvm.sch 389 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_317)))->BgL_namez00) =
				((obj_t) BgL_vz00_318), BUNSPEC);
		}

	}



/* &cgen-name-set! */
	obj_t BGl_z62cgenzd2namezd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1549,
		obj_t BgL_oz00_1550, obj_t BgL_vz00_1551)
	{
		{	/* BackEnd/cvm.sch 389 */
			return
				BGl_cgenzd2namezd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1550), BgL_vz00_1551);
		}

	}



/* cgen-srfi0 */
	BGL_EXPORTED_DEF obj_t BGl_cgenzd2srfi0zd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_319)
	{
		{	/* BackEnd/cvm.sch 390 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_319)))->BgL_srfi0z00);
		}

	}



/* &cgen-srfi0 */
	obj_t BGl_z62cgenzd2srfi0zb0zzbackend_cvmz00(obj_t BgL_envz00_1552,
		obj_t BgL_oz00_1553)
	{
		{	/* BackEnd/cvm.sch 390 */
			return
				BGl_cgenzd2srfi0zd2zzbackend_cvmz00(((BgL_cgenz00_bglt) BgL_oz00_1553));
		}

	}



/* cgen-srfi0-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2srfi0zd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt BgL_oz00_320,
		obj_t BgL_vz00_321)
	{
		{	/* BackEnd/cvm.sch 391 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_320)))->BgL_srfi0z00) =
				((obj_t) BgL_vz00_321), BUNSPEC);
		}

	}



/* &cgen-srfi0-set! */
	obj_t BGl_z62cgenzd2srfi0zd2setz12z70zzbackend_cvmz00(obj_t BgL_envz00_1554,
		obj_t BgL_oz00_1555, obj_t BgL_vz00_1556)
	{
		{	/* BackEnd/cvm.sch 391 */
			return
				BGl_cgenzd2srfi0zd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1555), BgL_vz00_1556);
		}

	}



/* cgen-language */
	BGL_EXPORTED_DEF obj_t BGl_cgenzd2languagezd2zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_322)
	{
		{	/* BackEnd/cvm.sch 392 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_322)))->BgL_languagez00);
		}

	}



/* &cgen-language */
	obj_t BGl_z62cgenzd2languagezb0zzbackend_cvmz00(obj_t BgL_envz00_1557,
		obj_t BgL_oz00_1558)
	{
		{	/* BackEnd/cvm.sch 392 */
			return
				BGl_cgenzd2languagezd2zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1558));
		}

	}



/* cgen-language-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_cgenzd2languagezd2setz12z12zzbackend_cvmz00(BgL_cgenz00_bglt
		BgL_oz00_323, obj_t BgL_vz00_324)
	{
		{	/* BackEnd/cvm.sch 393 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_323)))->BgL_languagez00) =
				((obj_t) BgL_vz00_324), BUNSPEC);
		}

	}



/* &cgen-language-set! */
	obj_t BGl_z62cgenzd2languagezd2setz12z70zzbackend_cvmz00(obj_t
		BgL_envz00_1559, obj_t BgL_oz00_1560, obj_t BgL_vz00_1561)
	{
		{	/* BackEnd/cvm.sch 393 */
			return
				BGl_cgenzd2languagezd2setz12z12zzbackend_cvmz00(
				((BgL_cgenz00_bglt) BgL_oz00_1560), BgL_vz00_1561);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			{	/* BackEnd/cvm.scm 19 */
				obj_t BgL_arg1383z00_664;
				obj_t BgL_arg1384z00_665;

				{	/* BackEnd/cvm.scm 19 */
					obj_t BgL_v1357z00_671;

					BgL_v1357z00_671 = create_vector(((long) 0));
					BgL_arg1383z00_664 = BgL_v1357z00_671;
				}
				{	/* BackEnd/cvm.scm 19 */
					obj_t BgL_v1358z00_672;

					BgL_v1358z00_672 = create_vector(((long) 0));
					BgL_arg1384z00_665 = BgL_v1358z00_672;
				}
				BGl_cvmz00zzbackend_cvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 0)),
					CNST_TABLE_REF(((long) 1)), BGl_backendz00zzbackend_backendz00,
					((long) 50870), BFALSE, BGl_proc1499z00zzbackend_cvmz00,
					BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
					BGl_proc1498z00zzbackend_cvmz00, BFALSE, BgL_arg1383z00_664,
					BgL_arg1384z00_665);
			}
			{	/* BackEnd/cvm.scm 20 */
				obj_t BgL_arg1417z00_678;
				obj_t BgL_arg1418z00_679;

				{	/* BackEnd/cvm.scm 20 */
					obj_t BgL_v1359z00_719;

					BgL_v1359z00_719 = create_vector(((long) 0));
					BgL_arg1417z00_678 = BgL_v1359z00_719;
				}
				{	/* BackEnd/cvm.scm 20 */
					obj_t BgL_v1360z00_720;

					BgL_v1360z00_720 = create_vector(((long) 0));
					BgL_arg1418z00_679 = BgL_v1360z00_720;
				}
				BGl_sawcz00zzbackend_cvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 1)), BGl_cvmz00zzbackend_cvmz00,
					((long) 41759), BGl_proc1502z00zzbackend_cvmz00,
					BGl_proc1501z00zzbackend_cvmz00,
					BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
					BGl_proc1500z00zzbackend_cvmz00, BFALSE, BgL_arg1417z00_678,
					BgL_arg1418z00_679);
			}
			{	/* BackEnd/cvm.scm 21 */
				obj_t BgL_arg1462z00_727;
				obj_t BgL_arg1464z00_728;

				{	/* BackEnd/cvm.scm 21 */
					obj_t BgL_v1361z00_768;

					BgL_v1361z00_768 = create_vector(((long) 0));
					BgL_arg1462z00_727 = BgL_v1361z00_768;
				}
				{	/* BackEnd/cvm.scm 21 */
					obj_t BgL_v1362z00_769;

					BgL_v1362z00_769 = create_vector(((long) 0));
					BgL_arg1464z00_728 = BgL_v1362z00_769;
				}
				return (BGl_cgenz00zzbackend_cvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 3)),
						CNST_TABLE_REF(((long) 1)), BGl_cvmz00zzbackend_cvmz00,
						((long) 14766), BGl_proc1505z00zzbackend_cvmz00,
						BGl_proc1504z00zzbackend_cvmz00,
						BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
						BGl_proc1503z00zzbackend_cvmz00, BFALSE, BgL_arg1462z00_727,
						BgL_arg1464z00_728), BUNSPEC);
		}}

	}



/* &<@anonymous:1477> */
	obj_t BGl_z62zc3z04anonymousza31477ze3ze5zzbackend_cvmz00(obj_t
		BgL_envz00_1570, obj_t BgL_new1114z00_1571)
	{
		{	/* BackEnd/cvm.scm 21 */
			{
				BgL_cgenz00_bglt BgL_auxz00_2755;

				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt)
									((BgL_cgenz00_bglt) BgL_new1114z00_1571))))->
						BgL_languagez00) = ((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_namez00) =
					((obj_t) BGl_string1506z00zzbackend_cvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_externzd2variableszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_externzd2functionszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_externzd2typeszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_variablesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_functionsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_typesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string1506z00zzbackend_cvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_callccz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->
						BgL_foreignzd2clausezd2supportz00) = ((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_debugzd2supportzd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cgenz00_bglt)
										BgL_new1114z00_1571))))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_2755 = ((BgL_cgenz00_bglt) BgL_new1114z00_1571);
				return ((obj_t) BgL_auxz00_2755);
			}
		}

	}



/* &lambda1475 */
	BgL_cgenz00_bglt BGl_z62lambda1475z62zzbackend_cvmz00(obj_t BgL_envz00_1572)
	{
		{	/* BackEnd/cvm.scm 21 */
			{	/* BackEnd/cvm.scm 21 */
				BgL_cgenz00_bglt BgL_new1113z00_1665;

				BgL_new1113z00_1665 =
					((BgL_cgenz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cgenz00_bgl))));
				{	/* BackEnd/cvm.scm 21 */
					long BgL_arg1476z00_1666;

					{	/* BackEnd/cvm.scm 21 */
						long BgL_res1496z00_1667;

						BgL_res1496z00_1667 = BGL_CLASS_INDEX(BGl_cgenz00zzbackend_cvmz00);
						BgL_arg1476z00_1666 = BgL_res1496z00_1667;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1113z00_1665), BgL_arg1476z00_1666);
				}
				return BgL_new1113z00_1665;
			}
		}

	}



/* &lambda1465 */
	BgL_cgenz00_bglt BGl_z62lambda1465z62zzbackend_cvmz00(obj_t BgL_envz00_1573,
		obj_t BgL_language1084z00_1574, obj_t BgL_srfi01085z00_1575,
		obj_t BgL_name1086z00_1576, obj_t BgL_externzd2variables1087zd2_1577,
		obj_t BgL_externzd2functions1088zd2_1578,
		obj_t BgL_externzd2types1089zd2_1579, obj_t BgL_variables1090z00_1580,
		obj_t BgL_functions1091z00_1581, obj_t BgL_types1092z00_1582,
		obj_t BgL_typed1093z00_1583, obj_t BgL_heapzd2suffix1094zd2_1584,
		obj_t BgL_heapzd2compatible1095zd2_1585, obj_t BgL_callcc1096z00_1586,
		obj_t BgL_qualifiedzd2types1097zd2_1587, obj_t BgL_effectzb21098zb2_1588,
		obj_t BgL_removezd2emptyzd2let1099z00_1589,
		obj_t BgL_foreignzd2closure1100zd2_1590, obj_t BgL_typedzd2eq1101zd2_1591,
		obj_t BgL_tracezd2support1102zd2_1592,
		obj_t BgL_foreignzd2clausezd2suppo1103z00_1593,
		obj_t BgL_debugzd2support1104zd2_1594,
		obj_t BgL_pragmazd2support1105zd2_1595,
		obj_t BgL_tvectorzd2descrzd2suppor1106z00_1596,
		obj_t BgL_requirezd2tailc1107zd2_1597, obj_t BgL_registers1108z00_1598,
		obj_t BgL_pregisters1109z00_1599, obj_t BgL_boundzd2check1110zd2_1600,
		obj_t BgL_typezd2check1111zd2_1601, obj_t BgL_typedzd2funcall1112zd2_1602)
	{
		{	/* BackEnd/cvm.scm 21 */
			{	/* BackEnd/cvm.scm 21 */
				bool_t BgL_typed1093z00_1671;
				bool_t BgL_callcc1096z00_1674;
				bool_t BgL_qualifiedzd2types1097zd2_1675;
				bool_t BgL_effectzb21098zb2_1676;
				bool_t BgL_removezd2emptyzd2let1099z00_1677;
				bool_t BgL_foreignzd2closure1100zd2_1678;
				bool_t BgL_typedzd2eq1101zd2_1679;
				bool_t BgL_tracezd2support1102zd2_1680;
				bool_t BgL_pragmazd2support1105zd2_1683;
				bool_t BgL_tvectorzd2descrzd2suppor1106z00_1684;
				bool_t BgL_requirezd2tailc1107zd2_1685;
				bool_t BgL_boundzd2check1110zd2_1688;
				bool_t BgL_typezd2check1111zd2_1689;
				bool_t BgL_typedzd2funcall1112zd2_1690;

				BgL_typed1093z00_1671 = CBOOL(BgL_typed1093z00_1583);
				BgL_callcc1096z00_1674 = CBOOL(BgL_callcc1096z00_1586);
				BgL_qualifiedzd2types1097zd2_1675 =
					CBOOL(BgL_qualifiedzd2types1097zd2_1587);
				BgL_effectzb21098zb2_1676 = CBOOL(BgL_effectzb21098zb2_1588);
				BgL_removezd2emptyzd2let1099z00_1677 =
					CBOOL(BgL_removezd2emptyzd2let1099z00_1589);
				BgL_foreignzd2closure1100zd2_1678 =
					CBOOL(BgL_foreignzd2closure1100zd2_1590);
				BgL_typedzd2eq1101zd2_1679 = CBOOL(BgL_typedzd2eq1101zd2_1591);
				BgL_tracezd2support1102zd2_1680 =
					CBOOL(BgL_tracezd2support1102zd2_1592);
				BgL_pragmazd2support1105zd2_1683 =
					CBOOL(BgL_pragmazd2support1105zd2_1595);
				BgL_tvectorzd2descrzd2suppor1106z00_1684 =
					CBOOL(BgL_tvectorzd2descrzd2suppor1106z00_1596);
				BgL_requirezd2tailc1107zd2_1685 =
					CBOOL(BgL_requirezd2tailc1107zd2_1597);
				BgL_boundzd2check1110zd2_1688 = CBOOL(BgL_boundzd2check1110zd2_1600);
				BgL_typezd2check1111zd2_1689 = CBOOL(BgL_typezd2check1111zd2_1601);
				BgL_typedzd2funcall1112zd2_1690 =
					CBOOL(BgL_typedzd2funcall1112zd2_1602);
				{	/* BackEnd/cvm.scm 21 */
					BgL_cgenz00_bglt BgL_new1296z00_1691;

					{	/* BackEnd/cvm.scm 21 */
						BgL_cgenz00_bglt BgL_new1295z00_1692;

						BgL_new1295z00_1692 =
							((BgL_cgenz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cgenz00_bgl))));
						{	/* BackEnd/cvm.scm 21 */
							long BgL_arg1474z00_1693;

							{	/* BackEnd/cvm.scm 21 */
								long BgL_res1495z00_1694;

								BgL_res1495z00_1694 =
									BGL_CLASS_INDEX(BGl_cgenz00zzbackend_cvmz00);
								BgL_arg1474z00_1693 = BgL_res1495z00_1694;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1295z00_1692),
								BgL_arg1474z00_1693);
						}
						BgL_new1296z00_1691 = BgL_new1295z00_1692;
					}
					((((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_new1296z00_1691)))->
							BgL_languagez00) =
						((obj_t) ((obj_t) BgL_language1084z00_1574)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_srfi0z00) =
						((obj_t) ((obj_t) BgL_srfi01085z00_1575)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_namez00) =
						((obj_t) ((obj_t) BgL_name1086z00_1576)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_externzd2variableszd2) =
						((obj_t) BgL_externzd2variables1087zd2_1577), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_externzd2functionszd2) =
						((obj_t) BgL_externzd2functions1088zd2_1578), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_externzd2typeszd2) =
						((obj_t) BgL_externzd2types1089zd2_1579), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_variablesz00) =
						((obj_t) BgL_variables1090z00_1580), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_functionsz00) =
						((obj_t) BgL_functions1091z00_1581), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_typesz00) =
						((obj_t) BgL_types1092z00_1582), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_typedz00) =
						((bool_t) BgL_typed1093z00_1671), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_heapzd2suffixzd2) =
						((obj_t) ((obj_t) BgL_heapzd2suffix1094zd2_1584)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_heapzd2compatiblezd2) =
						((obj_t) ((obj_t) BgL_heapzd2compatible1095zd2_1585)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_callccz00) =
						((bool_t) BgL_callcc1096z00_1674), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_qualifiedzd2typeszd2) =
						((bool_t) BgL_qualifiedzd2types1097zd2_1675), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_effectzb2zb2) =
						((bool_t) BgL_effectzb21098zb2_1676), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_removezd2emptyzd2letz00) =
						((bool_t) BgL_removezd2emptyzd2let1099z00_1677), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_foreignzd2closurezd2) =
						((bool_t) BgL_foreignzd2closure1100zd2_1678), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_typedzd2eqzd2) =
						((bool_t) BgL_typedzd2eq1101zd2_1679), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_tracezd2supportzd2) =
						((bool_t) BgL_tracezd2support1102zd2_1680), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_foreignzd2clausezd2supportz00) =
						((obj_t) ((obj_t) BgL_foreignzd2clausezd2suppo1103z00_1593)),
						BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_debugzd2supportzd2) =
						((obj_t) ((obj_t) BgL_debugzd2support1104zd2_1594)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_pragmazd2supportzd2) =
						((bool_t) BgL_pragmazd2support1105zd2_1683), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_tvectorzd2descrzd2supportz00) =
						((bool_t) BgL_tvectorzd2descrzd2suppor1106z00_1684), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_requirezd2tailczd2) =
						((bool_t) BgL_requirezd2tailc1107zd2_1685), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_registersz00) =
						((obj_t) ((obj_t) BgL_registers1108z00_1598)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_pregistersz00) =
						((obj_t) ((obj_t) BgL_pregisters1109z00_1599)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_boundzd2checkzd2) =
						((bool_t) BgL_boundzd2check1110zd2_1688), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_typezd2checkzd2) =
						((bool_t) BgL_typezd2check1111zd2_1689), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1296z00_1691)))->BgL_typedzd2funcallzd2) =
						((bool_t) BgL_typedzd2funcall1112zd2_1690), BUNSPEC);
					{	/* BackEnd/cvm.scm 21 */
						obj_t BgL_fun1467z00_1695;

						BgL_fun1467z00_1695 =
							BGl_classzd2constructorzd2zz__objectz00
							(BGl_cgenz00zzbackend_cvmz00);
						PROCEDURE_ENTRY(BgL_fun1467z00_1695) (BgL_fun1467z00_1695,
							((obj_t) BgL_new1296z00_1691), BEOA);
					}
					return BgL_new1296z00_1691;
				}
			}
		}

	}



/* &<@anonymous:1442> */
	obj_t BGl_z62zc3z04anonymousza31442ze3ze5zzbackend_cvmz00(obj_t
		BgL_envz00_1603, obj_t BgL_new1082z00_1604)
	{
		{	/* BackEnd/cvm.scm 20 */
			{
				BgL_sawcz00_bglt BgL_auxz00_2943;

				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt)
									((BgL_sawcz00_bglt) BgL_new1082z00_1604))))->
						BgL_languagez00) = ((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_namez00) =
					((obj_t) BGl_string1506z00zzbackend_cvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_externzd2variableszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_externzd2functionszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_externzd2typeszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_variablesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_functionsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_typesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string1506z00zzbackend_cvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_callccz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->
						BgL_foreignzd2clausezd2supportz00) = ((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_debugzd2supportzd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_sawcz00_bglt)
										BgL_new1082z00_1604))))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_2943 = ((BgL_sawcz00_bglt) BgL_new1082z00_1604);
				return ((obj_t) BgL_auxz00_2943);
			}
		}

	}



/* &lambda1422 */
	BgL_sawcz00_bglt BGl_z62lambda1422z62zzbackend_cvmz00(obj_t BgL_envz00_1605)
	{
		{	/* BackEnd/cvm.scm 20 */
			{	/* BackEnd/cvm.scm 20 */
				BgL_sawcz00_bglt BgL_new1081z00_1697;

				BgL_new1081z00_1697 =
					((BgL_sawcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawcz00_bgl))));
				{	/* BackEnd/cvm.scm 20 */
					long BgL_arg1441z00_1698;

					{	/* BackEnd/cvm.scm 20 */
						long BgL_res1494z00_1699;

						BgL_res1494z00_1699 = BGL_CLASS_INDEX(BGl_sawcz00zzbackend_cvmz00);
						BgL_arg1441z00_1698 = BgL_res1494z00_1699;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1081z00_1697), BgL_arg1441z00_1698);
				}
				return BgL_new1081z00_1697;
			}
		}

	}



/* &lambda1419 */
	BgL_sawcz00_bglt BGl_z62lambda1419z62zzbackend_cvmz00(obj_t BgL_envz00_1606,
		obj_t BgL_language1052z00_1607, obj_t BgL_srfi01053z00_1608,
		obj_t BgL_name1054z00_1609, obj_t BgL_externzd2variables1055zd2_1610,
		obj_t BgL_externzd2functions1056zd2_1611,
		obj_t BgL_externzd2types1057zd2_1612, obj_t BgL_variables1058z00_1613,
		obj_t BgL_functions1059z00_1614, obj_t BgL_types1060z00_1615,
		obj_t BgL_typed1061z00_1616, obj_t BgL_heapzd2suffix1062zd2_1617,
		obj_t BgL_heapzd2compatible1063zd2_1618, obj_t BgL_callcc1064z00_1619,
		obj_t BgL_qualifiedzd2types1065zd2_1620, obj_t BgL_effectzb21066zb2_1621,
		obj_t BgL_removezd2emptyzd2let1067z00_1622,
		obj_t BgL_foreignzd2closure1068zd2_1623, obj_t BgL_typedzd2eq1069zd2_1624,
		obj_t BgL_tracezd2support1070zd2_1625,
		obj_t BgL_foreignzd2clausezd2suppo1071z00_1626,
		obj_t BgL_debugzd2support1072zd2_1627,
		obj_t BgL_pragmazd2support1073zd2_1628,
		obj_t BgL_tvectorzd2descrzd2suppor1074z00_1629,
		obj_t BgL_requirezd2tailc1075zd2_1630, obj_t BgL_registers1076z00_1631,
		obj_t BgL_pregisters1077z00_1632, obj_t BgL_boundzd2check1078zd2_1633,
		obj_t BgL_typezd2check1079zd2_1634, obj_t BgL_typedzd2funcall1080zd2_1635)
	{
		{	/* BackEnd/cvm.scm 20 */
			{	/* BackEnd/cvm.scm 20 */
				bool_t BgL_typed1061z00_1703;
				bool_t BgL_callcc1064z00_1706;
				bool_t BgL_qualifiedzd2types1065zd2_1707;
				bool_t BgL_effectzb21066zb2_1708;
				bool_t BgL_removezd2emptyzd2let1067z00_1709;
				bool_t BgL_foreignzd2closure1068zd2_1710;
				bool_t BgL_typedzd2eq1069zd2_1711;
				bool_t BgL_tracezd2support1070zd2_1712;
				bool_t BgL_pragmazd2support1073zd2_1715;
				bool_t BgL_tvectorzd2descrzd2suppor1074z00_1716;
				bool_t BgL_requirezd2tailc1075zd2_1717;
				bool_t BgL_boundzd2check1078zd2_1720;
				bool_t BgL_typezd2check1079zd2_1721;
				bool_t BgL_typedzd2funcall1080zd2_1722;

				BgL_typed1061z00_1703 = CBOOL(BgL_typed1061z00_1616);
				BgL_callcc1064z00_1706 = CBOOL(BgL_callcc1064z00_1619);
				BgL_qualifiedzd2types1065zd2_1707 =
					CBOOL(BgL_qualifiedzd2types1065zd2_1620);
				BgL_effectzb21066zb2_1708 = CBOOL(BgL_effectzb21066zb2_1621);
				BgL_removezd2emptyzd2let1067z00_1709 =
					CBOOL(BgL_removezd2emptyzd2let1067z00_1622);
				BgL_foreignzd2closure1068zd2_1710 =
					CBOOL(BgL_foreignzd2closure1068zd2_1623);
				BgL_typedzd2eq1069zd2_1711 = CBOOL(BgL_typedzd2eq1069zd2_1624);
				BgL_tracezd2support1070zd2_1712 =
					CBOOL(BgL_tracezd2support1070zd2_1625);
				BgL_pragmazd2support1073zd2_1715 =
					CBOOL(BgL_pragmazd2support1073zd2_1628);
				BgL_tvectorzd2descrzd2suppor1074z00_1716 =
					CBOOL(BgL_tvectorzd2descrzd2suppor1074z00_1629);
				BgL_requirezd2tailc1075zd2_1717 =
					CBOOL(BgL_requirezd2tailc1075zd2_1630);
				BgL_boundzd2check1078zd2_1720 = CBOOL(BgL_boundzd2check1078zd2_1633);
				BgL_typezd2check1079zd2_1721 = CBOOL(BgL_typezd2check1079zd2_1634);
				BgL_typedzd2funcall1080zd2_1722 =
					CBOOL(BgL_typedzd2funcall1080zd2_1635);
				{	/* BackEnd/cvm.scm 20 */
					BgL_sawcz00_bglt BgL_new1294z00_1723;

					{	/* BackEnd/cvm.scm 20 */
						BgL_sawcz00_bglt BgL_new1293z00_1724;

						BgL_new1293z00_1724 =
							((BgL_sawcz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sawcz00_bgl))));
						{	/* BackEnd/cvm.scm 20 */
							long BgL_arg1421z00_1725;

							{	/* BackEnd/cvm.scm 20 */
								long BgL_res1493z00_1726;

								BgL_res1493z00_1726 =
									BGL_CLASS_INDEX(BGl_sawcz00zzbackend_cvmz00);
								BgL_arg1421z00_1725 = BgL_res1493z00_1726;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1293z00_1724),
								BgL_arg1421z00_1725);
						}
						BgL_new1294z00_1723 = BgL_new1293z00_1724;
					}
					((((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_new1294z00_1723)))->
							BgL_languagez00) =
						((obj_t) ((obj_t) BgL_language1052z00_1607)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_srfi0z00) =
						((obj_t) ((obj_t) BgL_srfi01053z00_1608)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_namez00) =
						((obj_t) ((obj_t) BgL_name1054z00_1609)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_externzd2variableszd2) =
						((obj_t) BgL_externzd2variables1055zd2_1610), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_externzd2functionszd2) =
						((obj_t) BgL_externzd2functions1056zd2_1611), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_externzd2typeszd2) =
						((obj_t) BgL_externzd2types1057zd2_1612), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_variablesz00) =
						((obj_t) BgL_variables1058z00_1613), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_functionsz00) =
						((obj_t) BgL_functions1059z00_1614), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_typesz00) =
						((obj_t) BgL_types1060z00_1615), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_typedz00) =
						((bool_t) BgL_typed1061z00_1703), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_heapzd2suffixzd2) =
						((obj_t) ((obj_t) BgL_heapzd2suffix1062zd2_1617)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_heapzd2compatiblezd2) =
						((obj_t) ((obj_t) BgL_heapzd2compatible1063zd2_1618)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_callccz00) =
						((bool_t) BgL_callcc1064z00_1706), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_qualifiedzd2typeszd2) =
						((bool_t) BgL_qualifiedzd2types1065zd2_1707), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_effectzb2zb2) =
						((bool_t) BgL_effectzb21066zb2_1708), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_removezd2emptyzd2letz00) =
						((bool_t) BgL_removezd2emptyzd2let1067z00_1709), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_foreignzd2closurezd2) =
						((bool_t) BgL_foreignzd2closure1068zd2_1710), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_typedzd2eqzd2) =
						((bool_t) BgL_typedzd2eq1069zd2_1711), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_tracezd2supportzd2) =
						((bool_t) BgL_tracezd2support1070zd2_1712), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_foreignzd2clausezd2supportz00) =
						((obj_t) ((obj_t) BgL_foreignzd2clausezd2suppo1071z00_1626)),
						BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_debugzd2supportzd2) =
						((obj_t) ((obj_t) BgL_debugzd2support1072zd2_1627)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_pragmazd2supportzd2) =
						((bool_t) BgL_pragmazd2support1073zd2_1715), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_tvectorzd2descrzd2supportz00) =
						((bool_t) BgL_tvectorzd2descrzd2suppor1074z00_1716), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_requirezd2tailczd2) =
						((bool_t) BgL_requirezd2tailc1075zd2_1717), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_registersz00) =
						((obj_t) ((obj_t) BgL_registers1076z00_1631)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_pregistersz00) =
						((obj_t) ((obj_t) BgL_pregisters1077z00_1632)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_boundzd2checkzd2) =
						((bool_t) BgL_boundzd2check1078zd2_1720), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_typezd2checkzd2) =
						((bool_t) BgL_typezd2check1079zd2_1721), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1294z00_1723)))->BgL_typedzd2funcallzd2) =
						((bool_t) BgL_typedzd2funcall1080zd2_1722), BUNSPEC);
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_fun1420z00_1727;

						BgL_fun1420z00_1727 =
							BGl_classzd2constructorzd2zz__objectz00
							(BGl_sawcz00zzbackend_cvmz00);
						PROCEDURE_ENTRY(BgL_fun1420z00_1727) (BgL_fun1420z00_1727,
							((obj_t) BgL_new1294z00_1723), BEOA);
					}
					return BgL_new1294z00_1723;
				}
			}
		}

	}



/* &<@anonymous:1387> */
	obj_t BGl_z62zc3z04anonymousza31387ze3ze5zzbackend_cvmz00(obj_t
		BgL_envz00_1636, obj_t BgL_new1050z00_1637)
	{
		{	/* BackEnd/cvm.scm 19 */
			{
				BgL_cvmz00_bglt BgL_auxz00_3131;

				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt)
									((BgL_cvmz00_bglt) BgL_new1050z00_1637))))->BgL_languagez00) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_namez00) =
					((obj_t) BGl_string1506z00zzbackend_cvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_externzd2variableszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_externzd2functionszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_externzd2typeszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_variablesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_functionsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_typesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string1506z00zzbackend_cvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_callccz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->
						BgL_foreignzd2clausezd2supportz00) = ((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_debugzd2supportzd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_cvmz00_bglt)
										BgL_new1050z00_1637))))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_3131 = ((BgL_cvmz00_bglt) BgL_new1050z00_1637);
				return ((obj_t) BgL_auxz00_3131);
			}
		}

	}



/* &lambda1385 */
	BgL_cvmz00_bglt BGl_z62lambda1385z62zzbackend_cvmz00(obj_t BgL_envz00_1638)
	{
		{	/* BackEnd/cvm.scm 19 */
			{	/* BackEnd/cvm.scm 19 */
				BgL_cvmz00_bglt BgL_new1049z00_1729;

				BgL_new1049z00_1729 =
					((BgL_cvmz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_cvmz00_bgl))));
				{	/* BackEnd/cvm.scm 19 */
					long BgL_arg1386z00_1730;

					{	/* BackEnd/cvm.scm 19 */
						long BgL_res1492z00_1731;

						BgL_res1492z00_1731 = BGL_CLASS_INDEX(BGl_cvmz00zzbackend_cvmz00);
						BgL_arg1386z00_1730 = BgL_res1492z00_1731;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1049z00_1729), BgL_arg1386z00_1730);
				}
				return BgL_new1049z00_1729;
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_cvmz00()
	{
		{	/* BackEnd/cvm.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1507z00zzbackend_cvmz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1507z00zzbackend_cvmz00));
		}

	}

#ifdef __cplusplus
}
#endif
