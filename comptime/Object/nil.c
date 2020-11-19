/*===========================================================================*/
/*   (Object/nil.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/nil.scm) */
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

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

	typedef struct BgL_jarrayz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_jarrayz00_bglt;


	extern obj_t BGl_za2symbolza2z00zztype_cachez00;
	static obj_t BGl_fillzd2nilzd2zzobject_nilz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_typezd2nilzd2valuez00zzobject_nilz00(obj_t,
		obj_t);
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_za2bignumza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_nilz00();
	extern obj_t BGl_za2brealza2z00zztype_cachez00;
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzobject_nilz00();
	static obj_t BGl_z62genzd2widezd2classzd2nilzb0zzobject_nilz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2elongza2z00zztype_cachez00;
	static obj_t BGl_bigloozd2primitivezd2typezd2nilzd2zzobject_nilz00(obj_t,
		obj_t);
	extern obj_t BGl_za2bllongza2z00zztype_cachez00;
	static obj_t BGl_gczd2rootszd2initz00zzobject_nilz00();
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2classzd2nilz00zzobject_nilz00(BgL_typez00_bglt, obj_t, obj_t);
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(BgL_typez00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62typezd2nilzd2valuez62zzobject_nilz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_nilz00 = BUNSPEC;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_z62genzd2plainzd2classzd2nilzb0zzobject_nilz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_nilz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_za2bstringza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jarrayz00zzforeign_jtypez00;
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(BgL_typez00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_jclassz00zzobject_classz00;
	extern obj_t BGl_za2belongza2z00zztype_cachez00;
	static obj_t BGl_slotzd2getzd2nilz00zzobject_nilz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzobject_nilz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_externzd2typezd2nilz00zzobject_nilz00(obj_t, obj_t);
	extern obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_nilz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_nilz00();
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	extern obj_t BGl_za2llongza2z00zztype_cachez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_nilz00();
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_za2keywordza2z00zztype_cachez00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	extern obj_t BGl_za2bcharza2z00zztype_cachez00;
	static obj_t BGl_z62importzd2classzd2nilz62zzobject_nilz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t __cnst[110];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2plainzd2classzd2nilzd2envz00zzobject_nilz00,
		BgL_bgl_za762genza7d2plainza7d1986za7,
		BGl_z62genzd2plainzd2classzd2nilzb0zzobject_nilz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2widezd2classzd2nilzd2envz00zzobject_nilz00,
		BgL_bgl_za762genza7d2wideza7d21987za7,
		BGl_z62genzd2widezd2classzd2nilzb0zzobject_nilz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2nilzd2valuezd2envzd2zzobject_nilz00,
		BgL_bgl_za762typeza7d2nilza7d21988za7,
		BGl_z62typezd2nilzd2valuez62zzobject_nilz00, 0L, BUNSPEC, 2);
	      DEFINE_REAL(BGl_real1977z00zzobject_nilz00,
		BgL_bgl_real1977za700za7za7obj1989za7, 0.0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2classzd2nilzd2envzd2zzobject_nilz00,
		BgL_bgl_za762importza7d2clas1990z00,
		BGl_z62importzd2classzd2nilz62zzobject_nilz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1978z00zzobject_nilz00,
		BgL_bgl_string1978za700za7za7o1991za7, "", 0);
	      DEFINE_STRING(BGl_string1979z00zzobject_nilz00,
		BgL_bgl_string1979za700za7za7o1992za7, "Illegal slot type `~a'", 22);
	      DEFINE_STRING(BGl_string1980z00zzobject_nilz00,
		BgL_bgl_string1980za700za7za7o1993za7, "0L", 2);
	      DEFINE_STRING(BGl_string1981z00zzobject_nilz00,
		BgL_bgl_string1981za700za7za7o1994za7, "object_nil", 10);
	      DEFINE_STRING(BGl_string1982z00zzobject_nilz00,
		BgL_bgl_string1982za700za7za7o1995za7,
		"free-pragma string char double float byte long int cast-null (make-f64vector 0) f64vector (make-f32vector 0) f32vector (make-u64vector 0) u64vector (make-s64vector 0) s64vector (make-u32vector 0) u32vector (make-s32vector 0) s32vector (make-u16vector 0) u16vector (make-s16vector 0) s16vector (make-u8vector 0) u8vector (make-s8vector 0) s8vector (condition-variable-nil) condvar (mutex-nil) mutex (utf8-string->ucs2-string \"\") ucs2string (char->ucs2 #\\_) bucs2 (make-datagram-server-socket) datagram-socket (make-server-socket) socket (opaque-nil) opaque (custom-nil) custom (process-nil) process procedure make-struct struct vector keyword symbol bstring epair pair pair-nil nil bchar breal bbool bool elong llong bint cell unspec (current-date) date (string->mmap \"\") mmap binary-port error-port (current-output-port) output-port (current-input-port) input-port cons (quote #()) :_ (quote _) (econs #f #f #f) (cons #f #f) (quote ()) #z0 (string->elong \"0\") (string->llong \"0\") (make-cell #unspecified) class-nil "
		"make- list->tvector quote object-widening-set! object-class-num-set! class-num @ ? - unsafe if let set! isa? define fill- ! %allocate- obj %the- -nil ",
		1165);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzobject_nilz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_nilz00(long
		BgL_checksumz00_1653, char *BgL_fromz00_1654)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_nilz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_nilz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_nilz00();
					BGl_libraryzd2moduleszd2initz00zzobject_nilz00();
					BGl_cnstzd2initzd2zzobject_nilz00();
					BGl_importedzd2moduleszd2initz00zzobject_nilz00();
					return BGl_methodzd2initzd2zzobject_nilz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_nilz00()
	{
		{	/* Object/nil.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "object_nil");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_nil");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"object_nil");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_nilz00()
	{
		{	/* Object/nil.scm 15 */
			{	/* Object/nil.scm 15 */
				obj_t BgL_cportz00_1640;

				{	/* Object/nil.scm 15 */
					obj_t BgL_stringz00_1648;

					BgL_stringz00_1648 = BGl_string1982z00zzobject_nilz00;
					{	/* Object/nil.scm 15 */
						obj_t BgL_startz00_1649;

						BgL_startz00_1649 = BINT(((long) 0));
						{	/* Object/nil.scm 15 */
							obj_t BgL_endz00_1650;

							BgL_endz00_1650 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1648)));
							{	/* Object/nil.scm 15 */

								BgL_cportz00_1640 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1648, BgL_startz00_1649, BgL_endz00_1650);
				}}}}
				{
					long BgL_iz00_1641;

					BgL_iz00_1641 = ((long) 109);
				BgL_loopz00_1642:
					if ((BgL_iz00_1641 == ((long) -1)))
						{	/* Object/nil.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/nil.scm 15 */
							{	/* Object/nil.scm 15 */
								obj_t BgL_arg1984z00_1644;

								{	/* Object/nil.scm 15 */

									{	/* Object/nil.scm 15 */
										obj_t BgL_locationz00_1646;

										BgL_locationz00_1646 = BBOOL(((bool_t) 0));
										{	/* Object/nil.scm 15 */

											BgL_arg1984z00_1644 =
												BGl_readz00zz__readerz00(BgL_cportz00_1640,
												BgL_locationz00_1646);
										}
									}
								}
								{	/* Object/nil.scm 15 */
									int BgL_tmpz00_1681;

									BgL_tmpz00_1681 = (int) (BgL_iz00_1641);
									CNST_TABLE_SET(BgL_tmpz00_1681, BgL_arg1984z00_1644);
							}}
							{	/* Object/nil.scm 15 */
								int BgL_auxz00_1647;

								BgL_auxz00_1647 = (int) ((BgL_iz00_1641 - ((long) 1)));
								{
									long BgL_iz00_1686;

									BgL_iz00_1686 = (long) (BgL_auxz00_1647);
									BgL_iz00_1641 = BgL_iz00_1686;
									goto BgL_loopz00_1642;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_nilz00()
	{
		{	/* Object/nil.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* import-class-nil */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2classzd2nilz00zzobject_nilz00(BgL_typez00_bglt BgL_classz00_3,
		obj_t BgL_srczd2defzd2_4, obj_t BgL_modulez00_5)
	{
		{	/* Object/nil.scm 44 */
			{	/* Object/nil.scm 45 */
				obj_t BgL_idz00_920;

				BgL_idz00_920 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_3)))->BgL_idz00);
				{	/* Object/nil.scm 45 */
					obj_t BgL_idzd2nilzd2_921;

					{	/* Object/nil.scm 46 */
						obj_t BgL_arg1211z00_925;

						{	/* Object/nil.scm 46 */
							obj_t BgL_arg1216z00_926;
							obj_t BgL_arg1221z00_927;

							{	/* Object/nil.scm 46 */
								obj_t BgL_res1886z00_1405;

								{	/* Object/nil.scm 46 */
									obj_t BgL_arg1466z00_1404;

									BgL_arg1466z00_1404 = SYMBOL_TO_STRING(BgL_idz00_920);
									BgL_res1886z00_1405 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_1404);
								}
								BgL_arg1216z00_926 = BgL_res1886z00_1405;
							}
							{	/* Object/nil.scm 46 */
								obj_t BgL_res1887z00_1408;

								{	/* Object/nil.scm 46 */
									obj_t BgL_symbolz00_1406;

									BgL_symbolz00_1406 = CNST_TABLE_REF(((long) 0));
									{	/* Object/nil.scm 46 */
										obj_t BgL_arg1466z00_1407;

										BgL_arg1466z00_1407 = SYMBOL_TO_STRING(BgL_symbolz00_1406);
										BgL_res1887z00_1408 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1407);
								}}
								BgL_arg1221z00_927 = BgL_res1887z00_1408;
							}
							BgL_arg1211z00_925 =
								string_append(BgL_arg1216z00_926, BgL_arg1221z00_927);
						}
						BgL_idzd2nilzd2_921 = bstring_to_symbol(BgL_arg1211z00_925);
					}
					{	/* Object/nil.scm 46 */
						obj_t BgL_tidzd2nilzd2_922;

						BgL_tidzd2nilzd2_922 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_idzd2nilzd2_921,
							BgL_idz00_920);
						{	/* Object/nil.scm 47 */

							{	/* Object/nil.scm 48 */
								obj_t BgL_arg1208z00_923;

								BgL_arg1208z00_923 =
									MAKE_YOUNG_PAIR(BgL_tidzd2nilzd2_922, BNIL);
								return
									BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_5,
									BgL_arg1208z00_923, BFALSE, BNIL);
							}
						}
					}
				}
			}
		}

	}



/* &import-class-nil */
	obj_t BGl_z62importzd2classzd2nilz62zzobject_nilz00(obj_t BgL_envz00_1625,
		obj_t BgL_classz00_1626, obj_t BgL_srczd2defzd2_1627,
		obj_t BgL_modulez00_1628)
	{
		{	/* Object/nil.scm 44 */
			return
				BGl_importzd2classzd2nilz00zzobject_nilz00(
				((BgL_typez00_bglt) BgL_classz00_1626), BgL_srczd2defzd2_1627,
				BgL_modulez00_1628);
		}

	}



/* gen-plain-class-nil */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(BgL_typez00_bglt
		BgL_classz00_6, obj_t BgL_srczd2defzd2_7, obj_t BgL_importz00_8)
	{
		{	/* Object/nil.scm 55 */
			{	/* Object/nil.scm 57 */
				obj_t BgL_idz00_929;

				BgL_idz00_929 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_6)))->BgL_idz00);
				{	/* Object/nil.scm 57 */
					obj_t BgL_idzd2nilzd2_930;

					{	/* Object/nil.scm 58 */
						obj_t BgL_arg1304z00_987;

						{	/* Object/nil.scm 58 */
							obj_t BgL_arg1306z00_988;
							obj_t BgL_arg1307z00_989;

							{	/* Object/nil.scm 58 */
								obj_t BgL_res1889z00_1414;

								{	/* Object/nil.scm 58 */
									obj_t BgL_arg1466z00_1413;

									BgL_arg1466z00_1413 = SYMBOL_TO_STRING(BgL_idz00_929);
									BgL_res1889z00_1414 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_1413);
								}
								BgL_arg1306z00_988 = BgL_res1889z00_1414;
							}
							{	/* Object/nil.scm 58 */
								obj_t BgL_res1890z00_1417;

								{	/* Object/nil.scm 58 */
									obj_t BgL_symbolz00_1415;

									BgL_symbolz00_1415 = CNST_TABLE_REF(((long) 0));
									{	/* Object/nil.scm 58 */
										obj_t BgL_arg1466z00_1416;

										BgL_arg1466z00_1416 = SYMBOL_TO_STRING(BgL_symbolz00_1415);
										BgL_res1890z00_1417 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1416);
								}}
								BgL_arg1307z00_989 = BgL_res1890z00_1417;
							}
							BgL_arg1304z00_987 =
								string_append(BgL_arg1306z00_988, BgL_arg1307z00_989);
						}
						BgL_idzd2nilzd2_930 = bstring_to_symbol(BgL_arg1304z00_987);
					}
					{	/* Object/nil.scm 58 */
						obj_t BgL_tidzd2nilzd2_931;

						BgL_tidzd2nilzd2_931 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_idzd2nilzd2_930,
							BgL_idz00_929);
						{	/* Object/nil.scm 59 */
							obj_t BgL_thezd2idzd2nilz00_932;

							{	/* Object/nil.scm 60 */
								obj_t BgL_arg1300z00_984;

								{	/* Object/nil.scm 60 */
									obj_t BgL_arg1301z00_985;
									obj_t BgL_arg1303z00_986;

									{	/* Object/nil.scm 60 */
										obj_t BgL_res1892z00_1422;

										{	/* Object/nil.scm 60 */
											obj_t BgL_symbolz00_1420;

											BgL_symbolz00_1420 = CNST_TABLE_REF(((long) 1));
											{	/* Object/nil.scm 60 */
												obj_t BgL_arg1466z00_1421;

												BgL_arg1466z00_1421 =
													SYMBOL_TO_STRING(BgL_symbolz00_1420);
												BgL_res1892z00_1422 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1421);
										}}
										BgL_arg1301z00_985 = BgL_res1892z00_1422;
									}
									{	/* Object/nil.scm 60 */
										obj_t BgL_res1893z00_1425;

										{	/* Object/nil.scm 60 */
											obj_t BgL_arg1466z00_1424;

											BgL_arg1466z00_1424 =
												SYMBOL_TO_STRING(BgL_idzd2nilzd2_930);
											BgL_res1893z00_1425 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1424);
										}
										BgL_arg1303z00_986 = BgL_res1893z00_1425;
									}
									BgL_arg1300z00_984 =
										string_append(BgL_arg1301z00_985, BgL_arg1303z00_986);
								}
								BgL_thezd2idzd2nilz00_932 =
									bstring_to_symbol(BgL_arg1300z00_984);
							}
							{	/* Object/nil.scm 60 */
								obj_t BgL_thezd2tidzd2nilz00_933;

								BgL_thezd2tidzd2nilz00_933 =
									BGl_makezd2typedzd2identz00zzast_identz00
									(BgL_thezd2idzd2nilz00_932, CNST_TABLE_REF(((long) 2)));
								{	/* Object/nil.scm 61 */
									obj_t BgL_allocz00_934;

									{	/* Object/nil.scm 62 */
										obj_t BgL_arg1297z00_981;

										{	/* Object/nil.scm 62 */
											obj_t BgL_arg1298z00_982;
											obj_t BgL_arg1299z00_983;

											{	/* Object/nil.scm 62 */
												obj_t BgL_res1895z00_1430;

												{	/* Object/nil.scm 62 */
													obj_t BgL_symbolz00_1428;

													BgL_symbolz00_1428 = CNST_TABLE_REF(((long) 3));
													{	/* Object/nil.scm 62 */
														obj_t BgL_arg1466z00_1429;

														BgL_arg1466z00_1429 =
															SYMBOL_TO_STRING(BgL_symbolz00_1428);
														BgL_res1895z00_1430 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1429);
												}}
												BgL_arg1298z00_982 = BgL_res1895z00_1430;
											}
											{	/* Object/nil.scm 62 */
												obj_t BgL_res1896z00_1433;

												{	/* Object/nil.scm 62 */
													obj_t BgL_arg1466z00_1432;

													BgL_arg1466z00_1432 = SYMBOL_TO_STRING(BgL_idz00_929);
													BgL_res1896z00_1433 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1432);
												}
												BgL_arg1299z00_983 = BgL_res1896z00_1433;
											}
											BgL_arg1297z00_981 =
												string_append(BgL_arg1298z00_982, BgL_arg1299z00_983);
										}
										BgL_allocz00_934 = bstring_to_symbol(BgL_arg1297z00_981);
									}
									{	/* Object/nil.scm 62 */
										obj_t BgL_fillz00_935;

										{	/* Object/nil.scm 63 */
											obj_t BgL_list1293z00_978;

											{	/* Object/nil.scm 63 */
												obj_t BgL_arg1295z00_979;

												{	/* Object/nil.scm 63 */
													obj_t BgL_arg1296z00_980;

													BgL_arg1296z00_980 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)), BNIL);
													BgL_arg1295z00_979 =
														MAKE_YOUNG_PAIR(BgL_idz00_929, BgL_arg1296z00_980);
												}
												BgL_list1293z00_978 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
													BgL_arg1295z00_979);
											}
											BgL_fillz00_935 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list1293z00_978);
										}
										{	/* Object/nil.scm 63 */
											obj_t BgL_tmpz00_936;

											{	/* Object/nil.scm 64 */

												{	/* Object/nil.scm 64 */

													BgL_tmpz00_936 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
											}}
											{	/* Object/nil.scm 64 */
												obj_t BgL_tmptz00_937;

												BgL_tmptz00_937 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_tmpz00_936, BgL_idz00_929);
												{	/* Object/nil.scm 65 */

													{	/* Object/nil.scm 66 */
														obj_t BgL_arg1223z00_938;

														{	/* Object/nil.scm 66 */
															obj_t BgL_arg1225z00_939;

															{	/* Object/nil.scm 66 */
																obj_t BgL_arg1227z00_940;

																BgL_arg1227z00_940 =
																	MAKE_YOUNG_PAIR(BgL_tidzd2nilzd2_931, BNIL);
																BgL_arg1225z00_939 =
																	MAKE_YOUNG_PAIR(BgL_arg1227z00_940, BNIL);
															}
															BgL_arg1223z00_938 =
																MAKE_YOUNG_PAIR(BgL_importz00_8,
																BgL_arg1225z00_939);
														}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BgL_arg1223z00_938);
													}
													{	/* Object/nil.scm 68 */
														obj_t BgL_arg1229z00_941;
														obj_t BgL_arg1232z00_942;

														{	/* Object/nil.scm 68 */
															obj_t BgL_arg1242z00_945;

															{	/* Object/nil.scm 68 */
																obj_t BgL_arg1243z00_946;

																BgL_arg1243z00_946 =
																	MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																BgL_arg1242z00_945 =
																	MAKE_YOUNG_PAIR(BgL_thezd2tidzd2nilz00_933,
																	BgL_arg1243z00_946);
															}
															BgL_arg1229z00_941 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																BgL_arg1242z00_945);
														}
														{	/* Object/nil.scm 69 */
															obj_t BgL_arg1245z00_947;

															{	/* Object/nil.scm 69 */
																obj_t BgL_arg1246z00_948;

																{	/* Object/nil.scm 69 */
																	obj_t BgL_arg1247z00_949;
																	obj_t BgL_arg1250z00_950;

																	BgL_arg1247z00_949 =
																		MAKE_YOUNG_PAIR(BgL_tidzd2nilzd2_931, BNIL);
																	{	/* Object/nil.scm 71 */
																		obj_t BgL_arg1252z00_951;

																		{	/* Object/nil.scm 71 */
																			obj_t BgL_arg1253z00_952;

																			{	/* Object/nil.scm 71 */
																				obj_t BgL_arg1256z00_954;

																				{	/* Object/nil.scm 71 */
																					obj_t BgL_arg1258z00_955;
																					obj_t BgL_arg1263z00_956;

																					{	/* Object/nil.scm 71 */
																						obj_t BgL_arg1268z00_957;

																						{	/* Object/nil.scm 71 */
																							obj_t BgL_arg1270z00_958;

																							BgL_arg1270z00_958 =
																								MAKE_YOUNG_PAIR(BgL_idz00_929,
																								BNIL);
																							BgL_arg1268z00_957 =
																								MAKE_YOUNG_PAIR
																								(BgL_thezd2idzd2nilz00_932,
																								BgL_arg1270z00_958);
																						}
																						BgL_arg1258z00_955 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 7)),
																							BgL_arg1268z00_957);
																					}
																					{	/* Object/nil.scm 73 */
																						obj_t BgL_arg1271z00_959;

																						{	/* Object/nil.scm 73 */
																							obj_t BgL_arg1273z00_960;

																							{	/* Object/nil.scm 73 */
																								obj_t BgL_arg1274z00_961;

																								{	/* Object/nil.scm 73 */
																									obj_t BgL_arg1275z00_962;
																									obj_t BgL_arg1276z00_963;

																									{	/* Object/nil.scm 73 */
																										obj_t BgL_arg1277z00_964;

																										{	/* Object/nil.scm 73 */
																											obj_t BgL_arg1280z00_965;

																											{	/* Object/nil.scm 73 */
																												obj_t
																													BgL_arg1281z00_966;
																												BgL_arg1281z00_966 =
																													MAKE_YOUNG_PAIR
																													(BgL_allocz00_934,
																													BNIL);
																												BgL_arg1280z00_965 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1281z00_966,
																													BNIL);
																											}
																											BgL_arg1277z00_964 =
																												MAKE_YOUNG_PAIR
																												(BgL_tmptz00_937,
																												BgL_arg1280z00_965);
																										}
																										BgL_arg1275z00_962 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1277z00_964,
																											BNIL);
																									}
																									{	/* Object/nil.scm 74 */
																										obj_t BgL_arg1282z00_967;
																										obj_t BgL_arg1284z00_968;

																										{	/* Object/nil.scm 74 */
																											obj_t BgL_arg1285z00_969;

																											{	/* Object/nil.scm 74 */
																												obj_t
																													BgL_arg1286z00_970;
																												BgL_arg1286z00_970 =
																													MAKE_YOUNG_PAIR
																													(BgL_tmpz00_936,
																													BNIL);
																												BgL_arg1285z00_969 =
																													MAKE_YOUNG_PAIR
																													(BgL_thezd2idzd2nilz00_932,
																													BgL_arg1286z00_970);
																											}
																											BgL_arg1282z00_967 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														8)),
																												BgL_arg1285z00_969);
																										}
																										{	/* Object/nil.scm 75 */
																											obj_t BgL_arg1287z00_971;
																											obj_t BgL_arg1288z00_972;

																											{	/* Object/nil.scm 75 */
																												obj_t
																													BgL_arg1289z00_973;
																												{	/* Object/nil.scm 75 */
																													obj_t
																														BgL_arg1290z00_974;
																													{	/* Object/nil.scm 75 */
																														obj_t
																															BgL_arg1291z00_975;
																														{	/* Object/nil.scm 75 */
																															obj_t
																																BgL_arg1292z00_976;
																															{
																																BgL_tclassz00_bglt
																																	BgL_auxz00_1758;
																																{
																																	obj_t
																																		BgL_auxz00_1759;
																																	{	/* Object/nil.scm 75 */
																																		BgL_objectz00_bglt
																																			BgL_tmpz00_1760;
																																		BgL_tmpz00_1760
																																			=
																																			(
																																			(BgL_objectz00_bglt)
																																			BgL_classz00_6);
																																		BgL_auxz00_1759
																																			=
																																			BGL_OBJECT_WIDENING
																																			(BgL_tmpz00_1760);
																																	}
																																	BgL_auxz00_1758
																																		=
																																		(
																																		(BgL_tclassz00_bglt)
																																		BgL_auxz00_1759);
																																}
																																BgL_arg1292z00_976
																																	=
																																	(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1758))->BgL_slotsz00);
																															}
																															BgL_arg1291z00_975
																																=
																																BGl_fillzd2nilzd2zzobject_nilz00
																																(BgL_arg1292z00_976);
																														}
																														BgL_arg1290z00_974 =
																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg1291z00_975,
																															BNIL);
																													}
																													BgL_arg1289z00_973 =
																														MAKE_YOUNG_PAIR
																														(BgL_tmpz00_936,
																														BgL_arg1290z00_974);
																												}
																												BgL_arg1287z00_971 =
																													MAKE_YOUNG_PAIR
																													(BgL_fillz00_935,
																													BgL_arg1289z00_973);
																											}
																											BgL_arg1288z00_972 =
																												MAKE_YOUNG_PAIR
																												(BgL_tmpz00_936, BNIL);
																											BgL_arg1284z00_968 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1287z00_971,
																												BgL_arg1288z00_972);
																										}
																										BgL_arg1276z00_963 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1282z00_967,
																											BgL_arg1284z00_968);
																									}
																									BgL_arg1274z00_961 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1275z00_962,
																										BgL_arg1276z00_963);
																								}
																								BgL_arg1273z00_960 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 9)),
																									BgL_arg1274z00_961);
																							}
																							BgL_arg1271z00_959 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1273z00_960, BNIL);
																						}
																						BgL_arg1263z00_956 =
																							MAKE_YOUNG_PAIR
																							(BgL_thezd2idzd2nilz00_932,
																							BgL_arg1271z00_959);
																					}
																					BgL_arg1256z00_954 =
																						MAKE_YOUNG_PAIR(BgL_arg1258z00_955,
																						BgL_arg1263z00_956);
																				}
																				BgL_arg1253z00_952 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							10)), BgL_arg1256z00_954);
																			}
																			{	/* Object/nil.scm 70 */
																				obj_t BgL_list1254z00_953;

																				BgL_list1254z00_953 =
																					MAKE_YOUNG_PAIR(BgL_arg1253z00_952,
																					BNIL);
																				BgL_arg1252z00_951 =
																					BGl_makezd2privatezd2sexpz00zzast_privatez00
																					(CNST_TABLE_REF(((long) 11)),
																					BgL_idz00_929, BgL_list1254z00_953);
																		}}
																		BgL_arg1250z00_950 =
																			MAKE_YOUNG_PAIR(BgL_arg1252z00_951, BNIL);
																	}
																	BgL_arg1246z00_948 =
																		MAKE_YOUNG_PAIR(BgL_arg1247z00_949,
																		BgL_arg1250z00_950);
																}
																BgL_arg1245z00_947 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																	BgL_arg1246z00_948);
															}
															BgL_arg1232z00_942 =
																BGl_epairifyz00zztools_miscz00
																(BgL_arg1245z00_947, BgL_srczd2defzd2_7);
														}
														{	/* Object/nil.scm 67 */
															obj_t BgL_list1233z00_943;

															{	/* Object/nil.scm 67 */
																obj_t BgL_arg1239z00_944;

																BgL_arg1239z00_944 =
																	MAKE_YOUNG_PAIR(BgL_arg1232z00_942, BNIL);
																BgL_list1233z00_943 =
																	MAKE_YOUNG_PAIR(BgL_arg1229z00_941,
																	BgL_arg1239z00_944);
															}
															return BgL_list1233z00_943;
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



/* &gen-plain-class-nil */
	obj_t BGl_z62genzd2plainzd2classzd2nilzb0zzobject_nilz00(obj_t
		BgL_envz00_1629, obj_t BgL_classz00_1630, obj_t BgL_srczd2defzd2_1631,
		obj_t BgL_importz00_1632)
	{
		{	/* Object/nil.scm 55 */
			return
				BGl_genzd2plainzd2classzd2nilzd2zzobject_nilz00(
				((BgL_typez00_bglt) BgL_classz00_1630), BgL_srczd2defzd2_1631,
				BgL_importz00_1632);
		}

	}



/* gen-wide-class-nil */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(BgL_typez00_bglt
		BgL_classz00_9, obj_t BgL_srczd2defzd2_10, obj_t BgL_importz00_11)
	{
		{	/* Object/nil.scm 84 */
			{	/* Object/nil.scm 86 */
				obj_t BgL_idz00_991;

				BgL_idz00_991 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_9)))->BgL_idz00);
				{	/* Object/nil.scm 86 */
					obj_t BgL_superzd2idzd2_992;

					{	/* Object/nil.scm 87 */
						obj_t BgL_arg1552z00_1083;

						{
							BgL_tclassz00_bglt BgL_auxz00_1794;

							{
								obj_t BgL_auxz00_1795;

								{	/* Object/nil.scm 87 */
									BgL_objectz00_bglt BgL_tmpz00_1796;

									BgL_tmpz00_1796 = ((BgL_objectz00_bglt) BgL_classz00_9);
									BgL_auxz00_1795 = BGL_OBJECT_WIDENING(BgL_tmpz00_1796);
								}
								BgL_auxz00_1794 = ((BgL_tclassz00_bglt) BgL_auxz00_1795);
							}
							BgL_arg1552z00_1083 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1794))->
								BgL_itszd2superzd2);
						}
						BgL_superzd2idzd2_992 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt)
										((BgL_typez00_bglt) BgL_arg1552z00_1083))))->BgL_idz00);
					}
					{	/* Object/nil.scm 87 */
						obj_t BgL_superzd2slotszd2_993;

						{	/* Object/nil.scm 88 */
							obj_t BgL_arg1540z00_1082;

							{
								BgL_tclassz00_bglt BgL_auxz00_1804;

								{
									obj_t BgL_auxz00_1805;

									{	/* Object/nil.scm 88 */
										BgL_objectz00_bglt BgL_tmpz00_1806;

										BgL_tmpz00_1806 = ((BgL_objectz00_bglt) BgL_classz00_9);
										BgL_auxz00_1805 = BGL_OBJECT_WIDENING(BgL_tmpz00_1806);
									}
									BgL_auxz00_1804 = ((BgL_tclassz00_bglt) BgL_auxz00_1805);
								}
								BgL_arg1540z00_1082 =
									(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1804))->
									BgL_itszd2superzd2);
							}
							{
								BgL_tclassz00_bglt BgL_auxz00_1811;

								{
									obj_t BgL_auxz00_1812;

									{	/* Object/nil.scm 88 */
										BgL_objectz00_bglt BgL_tmpz00_1813;

										BgL_tmpz00_1813 =
											((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_arg1540z00_1082));
										BgL_auxz00_1812 = BGL_OBJECT_WIDENING(BgL_tmpz00_1813);
									}
									BgL_auxz00_1811 = ((BgL_tclassz00_bglt) BgL_auxz00_1812);
								}
								BgL_superzd2slotszd2_993 =
									(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1811))->
									BgL_slotsz00);
							}
						}
						{	/* Object/nil.scm 88 */
							obj_t BgL_idzd2nilzd2_994;

							{	/* Object/nil.scm 89 */
								obj_t BgL_arg1528z00_1079;

								{	/* Object/nil.scm 89 */
									obj_t BgL_arg1536z00_1080;
									obj_t BgL_arg1537z00_1081;

									{	/* Object/nil.scm 89 */
										obj_t BgL_res1899z00_1446;

										{	/* Object/nil.scm 89 */
											obj_t BgL_arg1466z00_1445;

											BgL_arg1466z00_1445 = SYMBOL_TO_STRING(BgL_idz00_991);
											BgL_res1899z00_1446 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1445);
										}
										BgL_arg1536z00_1080 = BgL_res1899z00_1446;
									}
									{	/* Object/nil.scm 89 */
										obj_t BgL_res1900z00_1449;

										{	/* Object/nil.scm 89 */
											obj_t BgL_symbolz00_1447;

											BgL_symbolz00_1447 = CNST_TABLE_REF(((long) 0));
											{	/* Object/nil.scm 89 */
												obj_t BgL_arg1466z00_1448;

												BgL_arg1466z00_1448 =
													SYMBOL_TO_STRING(BgL_symbolz00_1447);
												BgL_res1900z00_1449 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1448);
										}}
										BgL_arg1537z00_1081 = BgL_res1900z00_1449;
									}
									BgL_arg1528z00_1079 =
										string_append(BgL_arg1536z00_1080, BgL_arg1537z00_1081);
								}
								BgL_idzd2nilzd2_994 = bstring_to_symbol(BgL_arg1528z00_1079);
							}
							{	/* Object/nil.scm 89 */
								obj_t BgL_tidzd2nilzd2_995;

								BgL_tidzd2nilzd2_995 =
									BGl_makezd2typedzd2identz00zzast_identz00(BgL_idzd2nilzd2_994,
									BgL_idz00_991);
								{	/* Object/nil.scm 90 */
									obj_t BgL_thezd2idzd2nilz00_996;

									{	/* Object/nil.scm 91 */
										obj_t BgL_arg1497z00_1076;

										{	/* Object/nil.scm 91 */
											obj_t BgL_arg1518z00_1077;
											obj_t BgL_arg1521z00_1078;

											{	/* Object/nil.scm 91 */
												obj_t BgL_res1902z00_1454;

												{	/* Object/nil.scm 91 */
													obj_t BgL_symbolz00_1452;

													BgL_symbolz00_1452 = CNST_TABLE_REF(((long) 1));
													{	/* Object/nil.scm 91 */
														obj_t BgL_arg1466z00_1453;

														BgL_arg1466z00_1453 =
															SYMBOL_TO_STRING(BgL_symbolz00_1452);
														BgL_res1902z00_1454 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1453);
												}}
												BgL_arg1518z00_1077 = BgL_res1902z00_1454;
											}
											{	/* Object/nil.scm 91 */
												obj_t BgL_res1903z00_1457;

												{	/* Object/nil.scm 91 */
													obj_t BgL_arg1466z00_1456;

													BgL_arg1466z00_1456 =
														SYMBOL_TO_STRING(BgL_idzd2nilzd2_994);
													BgL_res1903z00_1457 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1456);
												}
												BgL_arg1521z00_1078 = BgL_res1903z00_1457;
											}
											BgL_arg1497z00_1076 =
												string_append(BgL_arg1518z00_1077, BgL_arg1521z00_1078);
										}
										BgL_thezd2idzd2nilz00_996 =
											bstring_to_symbol(BgL_arg1497z00_1076);
									}
									{	/* Object/nil.scm 91 */
										obj_t BgL_thezd2tidzd2nilz00_997;

										BgL_thezd2tidzd2nilz00_997 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_thezd2idzd2nilz00_996, CNST_TABLE_REF(((long) 2)));
										{	/* Object/nil.scm 92 */
											obj_t BgL_wideningz00_998;

											{	/* Object/nil.scm 93 */
												obj_t BgL_arg1489z00_1072;

												{
													BgL_tclassz00_bglt BgL_auxz00_1836;

													{
														obj_t BgL_auxz00_1837;

														{	/* Object/nil.scm 93 */
															BgL_objectz00_bglt BgL_tmpz00_1838;

															BgL_tmpz00_1838 =
																((BgL_objectz00_bglt) BgL_classz00_9);
															BgL_auxz00_1837 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_1838);
														}
														BgL_auxz00_1836 =
															((BgL_tclassz00_bglt) BgL_auxz00_1837);
													}
													BgL_arg1489z00_1072 =
														(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1836))->
														BgL_wideningz00);
												}
												{	/* Object/nil.scm 93 */
													obj_t BgL_list1490z00_1073;

													{	/* Object/nil.scm 93 */
														obj_t BgL_arg1493z00_1074;

														{	/* Object/nil.scm 93 */
															obj_t BgL_arg1495z00_1075;

															BgL_arg1495z00_1075 =
																MAKE_YOUNG_PAIR(BgL_idz00_991, BNIL);
															BgL_arg1493z00_1074 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																BgL_arg1495z00_1075);
														}
														BgL_list1490z00_1073 =
															MAKE_YOUNG_PAIR(BgL_arg1489z00_1072,
															BgL_arg1493z00_1074);
													}
													BgL_wideningz00_998 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list1490z00_1073);
											}}
											{	/* Object/nil.scm 93 */
												obj_t BgL_superzd2alloczd2_999;

												{	/* Object/nil.scm 94 */
													obj_t BgL_arg1474z00_1069;

													{	/* Object/nil.scm 94 */
														obj_t BgL_arg1476z00_1070;
														obj_t BgL_arg1477z00_1071;

														{	/* Object/nil.scm 94 */
															obj_t BgL_res1905z00_1464;

															{	/* Object/nil.scm 94 */
																obj_t BgL_symbolz00_1462;

																BgL_symbolz00_1462 = CNST_TABLE_REF(((long) 3));
																{	/* Object/nil.scm 94 */
																	obj_t BgL_arg1466z00_1463;

																	BgL_arg1466z00_1463 =
																		SYMBOL_TO_STRING(BgL_symbolz00_1462);
																	BgL_res1905z00_1464 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_1463);
															}}
															BgL_arg1476z00_1070 = BgL_res1905z00_1464;
														}
														{	/* Object/nil.scm 94 */
															obj_t BgL_res1906z00_1467;

															{	/* Object/nil.scm 94 */
																obj_t BgL_arg1466z00_1466;

																BgL_arg1466z00_1466 =
																	SYMBOL_TO_STRING(BgL_superzd2idzd2_992);
																BgL_res1906z00_1467 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_1466);
															}
															BgL_arg1477z00_1071 = BgL_res1906z00_1467;
														}
														BgL_arg1474z00_1069 =
															string_append(BgL_arg1476z00_1070,
															BgL_arg1477z00_1071);
													}
													BgL_superzd2alloczd2_999 =
														bstring_to_symbol(BgL_arg1474z00_1069);
												}
												{	/* Object/nil.scm 94 */
													obj_t BgL_superzd2fillzd2_1000;

													{	/* Object/nil.scm 95 */
														obj_t BgL_list1462z00_1066;

														{	/* Object/nil.scm 95 */
															obj_t BgL_arg1464z00_1067;

															{	/* Object/nil.scm 95 */
																obj_t BgL_arg1465z00_1068;

																BgL_arg1465z00_1068 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																	BNIL);
																BgL_arg1464z00_1067 =
																	MAKE_YOUNG_PAIR(BgL_superzd2idzd2_992,
																	BgL_arg1465z00_1068);
															}
															BgL_list1462z00_1066 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																BgL_arg1464z00_1067);
														}
														BgL_superzd2fillzd2_1000 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list1462z00_1066);
													}
													{	/* Object/nil.scm 95 */
														obj_t BgL_idzf3zf3_1001;

														{	/* Object/nil.scm 96 */
															obj_t BgL_arg1448z00_1063;

															{	/* Object/nil.scm 96 */
																obj_t BgL_arg1449z00_1064;
																obj_t BgL_arg1461z00_1065;

																{	/* Object/nil.scm 96 */
																	obj_t BgL_res1908z00_1472;

																	{	/* Object/nil.scm 96 */
																		obj_t BgL_arg1466z00_1471;

																		BgL_arg1466z00_1471 =
																			SYMBOL_TO_STRING(BgL_idz00_991);
																		BgL_res1908z00_1472 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg1466z00_1471);
																	}
																	BgL_arg1449z00_1064 = BgL_res1908z00_1472;
																}
																{	/* Object/nil.scm 96 */
																	obj_t BgL_res1909z00_1475;

																	{	/* Object/nil.scm 96 */
																		obj_t BgL_symbolz00_1473;

																		BgL_symbolz00_1473 =
																			CNST_TABLE_REF(((long) 13));
																		{	/* Object/nil.scm 96 */
																			obj_t BgL_arg1466z00_1474;

																			BgL_arg1466z00_1474 =
																				SYMBOL_TO_STRING(BgL_symbolz00_1473);
																			BgL_res1909z00_1475 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg1466z00_1474);
																	}}
																	BgL_arg1461z00_1065 = BgL_res1909z00_1475;
																}
																BgL_arg1448z00_1063 =
																	string_append(BgL_arg1449z00_1064,
																	BgL_arg1461z00_1065);
															}
															BgL_idzf3zf3_1001 =
																bstring_to_symbol(BgL_arg1448z00_1063);
														}
														{	/* Object/nil.scm 96 */
															obj_t BgL_tmpz00_1002;

															{	/* Object/nil.scm 97 */

																{	/* Object/nil.scm 97 */

																	BgL_tmpz00_1002 =
																		BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}}
															{	/* Object/nil.scm 97 */
																obj_t BgL_tmptz00_1003;

																BgL_tmptz00_1003 =
																	BGl_makezd2typedzd2identz00zzast_identz00
																	(BgL_tmpz00_1002, BgL_idz00_991);
																{	/* Object/nil.scm 98 */

																	{	/* Object/nil.scm 99 */
																		obj_t BgL_arg1308z00_1004;

																		{	/* Object/nil.scm 99 */
																			obj_t BgL_arg1309z00_1005;

																			{	/* Object/nil.scm 99 */
																				obj_t BgL_arg1310z00_1006;

																				BgL_arg1310z00_1006 =
																					MAKE_YOUNG_PAIR(BgL_tidzd2nilzd2_995,
																					BNIL);
																				BgL_arg1309z00_1005 =
																					MAKE_YOUNG_PAIR(BgL_arg1310z00_1006,
																					BNIL);
																			}
																			BgL_arg1308z00_1004 =
																				MAKE_YOUNG_PAIR(BgL_importz00_11,
																				BgL_arg1309z00_1005);
																		}
																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_arg1308z00_1004);
																	}
																	{	/* Object/nil.scm 101 */
																		obj_t BgL_arg1311z00_1007;
																		obj_t BgL_arg1312z00_1008;

																		{	/* Object/nil.scm 101 */
																			obj_t BgL_arg1315z00_1011;

																			{	/* Object/nil.scm 101 */
																				obj_t BgL_arg1316z00_1012;

																				BgL_arg1316z00_1012 =
																					MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																				BgL_arg1315z00_1011 =
																					MAKE_YOUNG_PAIR
																					(BgL_thezd2tidzd2nilz00_997,
																					BgL_arg1316z00_1012);
																			}
																			BgL_arg1311z00_1007 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						6)), BgL_arg1315z00_1011);
																		}
																		{	/* Object/nil.scm 102 */
																			obj_t BgL_arg1317z00_1013;

																			{	/* Object/nil.scm 102 */
																				obj_t BgL_arg1319z00_1014;

																				{	/* Object/nil.scm 102 */
																					obj_t BgL_arg1322z00_1015;
																					obj_t BgL_arg1324z00_1016;

																					BgL_arg1322z00_1015 =
																						MAKE_YOUNG_PAIR
																						(BgL_tidzd2nilzd2_995, BNIL);
																					{	/* Object/nil.scm 104 */
																						obj_t BgL_arg1325z00_1017;

																						{	/* Object/nil.scm 104 */
																							obj_t BgL_arg1326z00_1018;

																							{	/* Object/nil.scm 104 */
																								obj_t BgL_arg1328z00_1020;

																								{	/* Object/nil.scm 104 */
																									obj_t BgL_arg1329z00_1021;
																									obj_t BgL_arg1330z00_1022;

																									{	/* Object/nil.scm 104 */
																										obj_t BgL_arg1331z00_1023;

																										BgL_arg1331z00_1023 =
																											MAKE_YOUNG_PAIR
																											(BgL_thezd2idzd2nilz00_996,
																											BNIL);
																										BgL_arg1329z00_1021 =
																											MAKE_YOUNG_PAIR
																											(BgL_idzf3zf3_1001,
																											BgL_arg1331z00_1023);
																									}
																									{	/* Object/nil.scm 107 */
																										obj_t BgL_arg1334z00_1024;

																										{	/* Object/nil.scm 107 */
																											obj_t BgL_arg1335z00_1025;

																											{	/* Object/nil.scm 107 */
																												obj_t
																													BgL_arg1337z00_1026;
																												{	/* Object/nil.scm 107 */
																													obj_t
																														BgL_arg1338z00_1027;
																													obj_t
																														BgL_arg1339z00_1028;
																													{	/* Object/nil.scm 107 */
																														obj_t
																															BgL_arg1340z00_1029;
																														{	/* Object/nil.scm 107 */
																															obj_t
																																BgL_arg1344z00_1030;
																															{	/* Object/nil.scm 107 */
																																obj_t
																																	BgL_arg1345z00_1031;
																																BgL_arg1345z00_1031
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_superzd2alloczd2_999,
																																	BNIL);
																																BgL_arg1344z00_1030
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1345z00_1031,
																																	BNIL);
																															}
																															BgL_arg1340z00_1029
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_tmptz00_1003,
																																BgL_arg1344z00_1030);
																														}
																														BgL_arg1338z00_1027
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1340z00_1029,
																															BNIL);
																													}
																													{	/* Object/nil.scm 108 */
																														obj_t
																															BgL_arg1346z00_1032;
																														obj_t
																															BgL_arg1347z00_1033;
																														{	/* Object/nil.scm 108 */
																															obj_t
																																BgL_arg1348z00_1034;
																															{	/* Object/nil.scm 108 */
																																obj_t
																																	BgL_arg1351z00_1035;
																																BgL_arg1351z00_1035
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_tmpz00_1002,
																																	BNIL);
																																BgL_arg1348z00_1034
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_thezd2idzd2nilz00_996,
																																	BgL_arg1351z00_1035);
																															}
																															BgL_arg1346z00_1032
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 8)),
																																BgL_arg1348z00_1034);
																														}
																														{	/* Object/nil.scm 110 */
																															obj_t
																																BgL_arg1352z00_1036;
																															obj_t
																																BgL_arg1357z00_1037;
																															{	/* Object/nil.scm 110 */
																																obj_t
																																	BgL_arg1360z00_1038;
																																BgL_arg1360z00_1038
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_tmpz00_1002,
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BGl_fillzd2nilzd2zzobject_nilz00
																																		(BgL_superzd2slotszd2_993),
																																		BNIL));
																																BgL_arg1352z00_1036
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_superzd2fillzd2_1000,
																																	BgL_arg1360z00_1038);
																															}
																															{	/* Object/nil.scm 114 */
																																obj_t
																																	BgL_arg1364z00_1041;
																																obj_t
																																	BgL_arg1367z00_1042;
																																{	/* Object/nil.scm 114 */
																																	obj_t
																																		BgL_arg1370z00_1043;
																																	{	/* Object/nil.scm 114 */
																																		obj_t
																																			BgL_arg1371z00_1044;
																																		{	/* Object/nil.scm 114 */
																																			obj_t
																																				BgL_arg1372z00_1045;
																																			{	/* Object/nil.scm 114 */
																																				obj_t
																																					BgL_arg1381z00_1046;
																																				{	/* Object/nil.scm 114 */
																																					obj_t
																																						BgL_arg1382z00_1047;
																																					{	/* Object/nil.scm 114 */
																																						obj_t
																																							BgL_arg1383z00_1048;
																																						{	/* Object/nil.scm 114 */
																																							obj_t
																																								BgL_arg1384z00_1049;
																																							obj_t
																																								BgL_arg1385z00_1050;
																																							{	/* Object/nil.scm 114 */
																																								BgL_globalz00_bglt
																																									BgL_arg1386z00_1051;
																																								{
																																									BgL_tclassz00_bglt
																																										BgL_auxz00_1893;
																																									{
																																										obj_t
																																											BgL_auxz00_1894;
																																										{	/* Object/nil.scm 114 */
																																											BgL_objectz00_bglt
																																												BgL_tmpz00_1895;
																																											BgL_tmpz00_1895
																																												=
																																												(
																																												(BgL_objectz00_bglt)
																																												BgL_classz00_9);
																																											BgL_auxz00_1894
																																												=
																																												BGL_OBJECT_WIDENING
																																												(BgL_tmpz00_1895);
																																										}
																																										BgL_auxz00_1893
																																											=
																																											(
																																											(BgL_tclassz00_bglt)
																																											BgL_auxz00_1894);
																																									}
																																									BgL_arg1386z00_1051
																																										=
																																										(
																																										((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1893))->BgL_holderz00);
																																								}
																																								BgL_arg1384z00_1049
																																									=
																																									(
																																									((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_arg1386z00_1051)))->BgL_idz00);
																																							}
																																							{	/* Object/nil.scm 115 */
																																								obj_t
																																									BgL_arg1387z00_1052;
																																								{	/* Object/nil.scm 115 */
																																									BgL_globalz00_bglt
																																										BgL_arg1388z00_1053;
																																									{
																																										BgL_tclassz00_bglt
																																											BgL_auxz00_1902;
																																										{
																																											obj_t
																																												BgL_auxz00_1903;
																																											{	/* Object/nil.scm 115 */
																																												BgL_objectz00_bglt
																																													BgL_tmpz00_1904;
																																												BgL_tmpz00_1904
																																													=
																																													(
																																													(BgL_objectz00_bglt)
																																													BgL_classz00_9);
																																												BgL_auxz00_1903
																																													=
																																													BGL_OBJECT_WIDENING
																																													(BgL_tmpz00_1904);
																																											}
																																											BgL_auxz00_1902
																																												=
																																												(
																																												(BgL_tclassz00_bglt)
																																												BgL_auxz00_1903);
																																										}
																																										BgL_arg1388z00_1053
																																											=
																																											(
																																											((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1902))->BgL_holderz00);
																																									}
																																									BgL_arg1387z00_1052
																																										=
																																										(
																																										((BgL_globalz00_bglt) COBJECT(BgL_arg1388z00_1053))->BgL_modulez00);
																																								}
																																								BgL_arg1385z00_1050
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1387z00_1052,
																																									BNIL);
																																							}
																																							BgL_arg1383z00_1048
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1384z00_1049,
																																								BgL_arg1385z00_1050);
																																						}
																																						BgL_arg1382z00_1047
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 14)), BgL_arg1383z00_1048);
																																					}
																																					BgL_arg1381z00_1046
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1382z00_1047,
																																						BNIL);
																																				}
																																				BgL_arg1372z00_1045
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 15)), BgL_arg1381z00_1046);
																																			}
																																			BgL_arg1371z00_1044
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1372z00_1045,
																																				BNIL);
																																		}
																																		BgL_arg1370z00_1043
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_tmpz00_1002,
																																			BgL_arg1371z00_1044);
																																	}
																																	BgL_arg1364z00_1041
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				16)),
																																		BgL_arg1370z00_1043);
																																}
																																{	/* Object/nil.scm 119 */
																																	obj_t
																																		BgL_arg1394z00_1054;
																																	obj_t
																																		BgL_arg1396z00_1055;
																																	{	/* Object/nil.scm 119 */
																																		obj_t
																																			BgL_arg1417z00_1056;
																																		{	/* Object/nil.scm 119 */
																																			obj_t
																																				BgL_arg1418z00_1057;
																																			{	/* Object/nil.scm 119 */
																																				obj_t
																																					BgL_arg1421z00_1058;
																																				{	/* Object/nil.scm 119 */
																																					obj_t
																																						BgL_arg1422z00_1059;
																																					{	/* Object/nil.scm 119 */
																																						obj_t
																																							BgL_arg1441z00_1060;
																																						{	/* Object/nil.scm 119 */
																																							obj_t
																																								BgL_arg1442z00_1061;
																																							{
																																								BgL_tclassz00_bglt
																																									BgL_auxz00_1921;
																																								{
																																									obj_t
																																										BgL_auxz00_1922;
																																									{	/* Object/nil.scm 119 */
																																										BgL_objectz00_bglt
																																											BgL_tmpz00_1923;
																																										BgL_tmpz00_1923
																																											=
																																											(
																																											(BgL_objectz00_bglt)
																																											BgL_classz00_9);
																																										BgL_auxz00_1922
																																											=
																																											BGL_OBJECT_WIDENING
																																											(BgL_tmpz00_1923);
																																									}
																																									BgL_auxz00_1921
																																										=
																																										(
																																										(BgL_tclassz00_bglt)
																																										BgL_auxz00_1922);
																																								}
																																								BgL_arg1442z00_1061
																																									=
																																									(
																																									((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1921))->BgL_slotsz00);
																																							}
																																							BgL_arg1441z00_1060
																																								=
																																								BGl_fillzd2nilzd2zzobject_nilz00
																																								(BgL_arg1442z00_1061);
																																						}
																																						BgL_arg1422z00_1059
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_arg1441z00_1060,
																																							BNIL);
																																					}
																																					BgL_arg1421z00_1058
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_wideningz00_998,
																																						BgL_arg1422z00_1059);
																																				}
																																				BgL_arg1418z00_1057
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1421z00_1058,
																																					BNIL);
																																			}
																																			BgL_arg1417z00_1056
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_tmpz00_1002,
																																				BgL_arg1418z00_1057);
																																		}
																																		BgL_arg1394z00_1054
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					17)),
																																			BgL_arg1417z00_1056);
																																	}
																																	BgL_arg1396z00_1055
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_tmpz00_1002,
																																		BNIL);
																																	BgL_arg1367z00_1042
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1394z00_1054,
																																		BgL_arg1396z00_1055);
																																}
																																BgL_arg1357z00_1037
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1364z00_1041,
																																	BgL_arg1367z00_1042);
																															}
																															BgL_arg1347z00_1033
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1352z00_1036,
																																BgL_arg1357z00_1037);
																														}
																														BgL_arg1339z00_1028
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1346z00_1032,
																															BgL_arg1347z00_1033);
																													}
																													BgL_arg1337z00_1026 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1338z00_1027,
																														BgL_arg1339z00_1028);
																												}
																												BgL_arg1335z00_1025 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 9)),
																													BgL_arg1337z00_1026);
																											}
																											BgL_arg1334z00_1024 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1335z00_1025,
																												BNIL);
																										}
																										BgL_arg1330z00_1022 =
																											MAKE_YOUNG_PAIR
																											(BgL_thezd2idzd2nilz00_996,
																											BgL_arg1334z00_1024);
																									}
																									BgL_arg1328z00_1020 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1329z00_1021,
																										BgL_arg1330z00_1022);
																								}
																								BgL_arg1326z00_1018 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 10)),
																									BgL_arg1328z00_1020);
																							}
																							{	/* Object/nil.scm 103 */
																								obj_t BgL_list1327z00_1019;

																								BgL_list1327z00_1019 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1326z00_1018, BNIL);
																								BgL_arg1325z00_1017 =
																									BGl_makezd2privatezd2sexpz00zzast_privatez00
																									(CNST_TABLE_REF(((long) 11)),
																									BgL_idz00_991,
																									BgL_list1327z00_1019);
																						}}
																						BgL_arg1324z00_1016 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1325z00_1017, BNIL);
																					}
																					BgL_arg1319z00_1014 =
																						MAKE_YOUNG_PAIR(BgL_arg1322z00_1015,
																						BgL_arg1324z00_1016);
																				}
																				BgL_arg1317z00_1013 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							6)), BgL_arg1319z00_1014);
																			}
																			BgL_arg1312z00_1008 =
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg1317z00_1013,
																				BgL_srczd2defzd2_10);
																		}
																		{	/* Object/nil.scm 100 */
																			obj_t BgL_list1313z00_1009;

																			{	/* Object/nil.scm 100 */
																				obj_t BgL_arg1314z00_1010;

																				BgL_arg1314z00_1010 =
																					MAKE_YOUNG_PAIR(BgL_arg1312z00_1008,
																					BNIL);
																				BgL_list1313z00_1009 =
																					MAKE_YOUNG_PAIR(BgL_arg1311z00_1007,
																					BgL_arg1314z00_1010);
																			}
																			return BgL_list1313z00_1009;
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



/* &gen-wide-class-nil */
	obj_t BGl_z62genzd2widezd2classzd2nilzb0zzobject_nilz00(obj_t BgL_envz00_1633,
		obj_t BgL_classz00_1634, obj_t BgL_srczd2defzd2_1635,
		obj_t BgL_importz00_1636)
	{
		{	/* Object/nil.scm 84 */
			return
				BGl_genzd2widezd2classzd2nilzd2zzobject_nilz00(
				((BgL_typez00_bglt) BgL_classz00_1634), BgL_srczd2defzd2_1635,
				BgL_importz00_1636);
		}

	}



/* fill-nil */
	obj_t BGl_fillzd2nilzd2zzobject_nilz00(obj_t BgL_slotsz00_12)
	{
		{	/* Object/nil.scm 126 */
			{
				obj_t BgL_slotsz00_1086;
				obj_t BgL_initsz00_1087;

				BgL_slotsz00_1086 = BgL_slotsz00_12;
				BgL_initsz00_1087 = BNIL;
			BgL_zc3z04anonymousza31553ze3z87_1088:
				if (NULLP(BgL_slotsz00_1086))
					{	/* Object/nil.scm 129 */
						return bgl_reverse_bang(BgL_initsz00_1087);
					}
				else
					{	/* Object/nil.scm 131 */
						obj_t BgL_slotz00_1090;

						BgL_slotz00_1090 = CAR(((obj_t) BgL_slotsz00_1086));
						if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
								((BgL_slotz00_bglt) BgL_slotz00_1090)))
							{	/* Object/nil.scm 134 */
								obj_t BgL_arg1558z00_1092;

								BgL_arg1558z00_1092 = CDR(((obj_t) BgL_slotsz00_1086));
								{
									obj_t BgL_slotsz00_1970;

									BgL_slotsz00_1970 = BgL_arg1558z00_1092;
									BgL_slotsz00_1086 = BgL_slotsz00_1970;
									goto BgL_zc3z04anonymousza31553ze3z87_1088;
								}
							}
						else
							{	/* Object/nil.scm 136 */
								obj_t BgL_arg1561z00_1093;
								obj_t BgL_arg1564z00_1094;

								BgL_arg1561z00_1093 = CDR(((obj_t) BgL_slotsz00_1086));
								BgL_arg1564z00_1094 =
									MAKE_YOUNG_PAIR(BGl_slotzd2getzd2nilz00zzobject_nilz00
									(BgL_slotz00_1090), BgL_initsz00_1087);
								{
									obj_t BgL_initsz00_1976;
									obj_t BgL_slotsz00_1975;

									BgL_slotsz00_1975 = BgL_arg1561z00_1093;
									BgL_initsz00_1976 = BgL_arg1564z00_1094;
									BgL_initsz00_1087 = BgL_initsz00_1976;
									BgL_slotsz00_1086 = BgL_slotsz00_1975;
									goto BgL_zc3z04anonymousza31553ze3z87_1088;
								}
							}
					}
			}
		}

	}



/* slot-get-nil */
	obj_t BGl_slotzd2getzd2nilz00zzobject_nilz00(obj_t BgL_slotz00_13)
	{
		{	/* Object/nil.scm 142 */
			{	/* Object/nil.scm 145 */
				bool_t BgL_test2000z00_1977;

				{	/* Object/nil.scm 145 */
					obj_t BgL_arg1669z00_1132;

					BgL_arg1669z00_1132 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_13)))->BgL_typez00);
					BgL_test2000z00_1977 =
						BGl_isazf3zf3zz__objectz00(BgL_arg1669z00_1132,
						BGl_tclassz00zzobject_classz00);
				}
				if (BgL_test2000z00_1977)
					{	/* Object/nil.scm 146 */
						obj_t BgL_arg1575z00_1100;

						{	/* Object/nil.scm 146 */
							obj_t BgL_arg1578z00_1101;

							{	/* Object/nil.scm 146 */
								obj_t BgL_arg1582z00_1102;
								obj_t BgL_arg1584z00_1103;

								{	/* Object/nil.scm 146 */
									obj_t BgL_arg1588z00_1104;

									BgL_arg1588z00_1104 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt)
													(((BgL_slotz00_bglt) COBJECT(
																((BgL_slotz00_bglt) BgL_slotz00_13)))->
														BgL_typez00))))->BgL_idz00);
									{	/* Object/nil.scm 146 */
										obj_t BgL_res1914z00_1492;

										{	/* Object/nil.scm 146 */
											obj_t BgL_arg1466z00_1491;

											BgL_arg1466z00_1491 =
												SYMBOL_TO_STRING(BgL_arg1588z00_1104);
											BgL_res1914z00_1492 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1491);
										}
										BgL_arg1582z00_1102 = BgL_res1914z00_1492;
									}
								}
								{	/* Object/nil.scm 146 */
									obj_t BgL_res1915z00_1495;

									{	/* Object/nil.scm 146 */
										obj_t BgL_symbolz00_1493;

										BgL_symbolz00_1493 = CNST_TABLE_REF(((long) 0));
										{	/* Object/nil.scm 146 */
											obj_t BgL_arg1466z00_1494;

											BgL_arg1466z00_1494 =
												SYMBOL_TO_STRING(BgL_symbolz00_1493);
											BgL_res1915z00_1495 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1494);
									}}
									BgL_arg1584z00_1103 = BgL_res1915z00_1495;
								}
								BgL_arg1578z00_1101 =
									string_append(BgL_arg1582z00_1102, BgL_arg1584z00_1103);
							}
							BgL_arg1575z00_1100 = bstring_to_symbol(BgL_arg1578z00_1101);
						}
						return MAKE_YOUNG_PAIR(BgL_arg1575z00_1100, BNIL);
					}
				else
					{	/* Object/nil.scm 147 */
						bool_t BgL_test2001z00_1993;

						{	/* Object/nil.scm 147 */
							obj_t BgL_arg1667z00_1131;

							BgL_arg1667z00_1131 =
								(((BgL_slotz00_bglt) COBJECT(
										((BgL_slotz00_bglt) BgL_slotz00_13)))->BgL_typez00);
							BgL_test2001z00_1993 =
								BGl_isazf3zf3zz__objectz00(BgL_arg1667z00_1131,
								BGl_tvecz00zztvector_tvectorz00);
						}
						if (BgL_test2001z00_1993)
							{	/* Object/nil.scm 148 */
								obj_t BgL_arg1597z00_1108;

								{	/* Object/nil.scm 148 */
									obj_t BgL_arg1599z00_1109;
									obj_t BgL_arg1604z00_1110;

									{	/* Object/nil.scm 148 */
										obj_t BgL_arg1605z00_1111;

										{	/* Object/nil.scm 148 */
											obj_t BgL_arg1606z00_1112;

											BgL_arg1606z00_1112 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt)
															(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_slotz00_13)))->
																BgL_typez00))))->BgL_idz00);
											BgL_arg1605z00_1111 =
												MAKE_YOUNG_PAIR(BgL_arg1606z00_1112, BNIL);
										}
										BgL_arg1599z00_1109 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
											BgL_arg1605z00_1111);
									}
									{	/* Object/nil.scm 148 */
										obj_t BgL_arg1612z00_1114;

										{	/* Object/nil.scm 148 */
											obj_t BgL_arg1613z00_1115;

											BgL_arg1613z00_1115 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_arg1612z00_1114 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
												BgL_arg1613z00_1115);
										}
										BgL_arg1604z00_1110 =
											MAKE_YOUNG_PAIR(BgL_arg1612z00_1114, BNIL);
									}
									BgL_arg1597z00_1108 =
										MAKE_YOUNG_PAIR(BgL_arg1599z00_1109, BgL_arg1604z00_1110);
								}
								return
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
									BgL_arg1597z00_1108);
							}
						else
							{	/* Object/nil.scm 149 */
								bool_t BgL_test2002z00_2011;

								{	/* Object/nil.scm 149 */
									obj_t BgL_arg1664z00_1130;

									BgL_arg1664z00_1130 =
										(((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt) BgL_slotz00_13)))->BgL_typez00);
									BgL_test2002z00_2011 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1664z00_1130,
										BGl_jarrayz00zzforeign_jtypez00);
								}
								if (BgL_test2002z00_2011)
									{	/* Object/nil.scm 150 */
										obj_t BgL_arg1626z00_1118;
										obj_t BgL_arg1627z00_1119;

										{	/* Object/nil.scm 150 */
											obj_t BgL_arg1631z00_1120;

											{	/* Object/nil.scm 150 */
												obj_t BgL_arg1634z00_1121;
												obj_t BgL_arg1639z00_1122;

												{	/* Object/nil.scm 150 */
													obj_t BgL_res1919z00_1503;

													{	/* Object/nil.scm 150 */
														obj_t BgL_symbolz00_1501;

														BgL_symbolz00_1501 = CNST_TABLE_REF(((long) 20));
														{	/* Object/nil.scm 150 */
															obj_t BgL_arg1466z00_1502;

															BgL_arg1466z00_1502 =
																SYMBOL_TO_STRING(BgL_symbolz00_1501);
															BgL_res1919z00_1503 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1502);
													}}
													BgL_arg1634z00_1121 = BgL_res1919z00_1503;
												}
												{	/* Object/nil.scm 150 */
													obj_t BgL_arg1640z00_1123;

													BgL_arg1640z00_1123 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt)
																	(((BgL_slotz00_bglt) COBJECT(
																				((BgL_slotz00_bglt) BgL_slotz00_13)))->
																		BgL_typez00))))->BgL_idz00);
													{	/* Object/nil.scm 150 */
														obj_t BgL_res1920z00_1507;

														{	/* Object/nil.scm 150 */
															obj_t BgL_arg1466z00_1506;

															BgL_arg1466z00_1506 =
																SYMBOL_TO_STRING(BgL_arg1640z00_1123);
															BgL_res1920z00_1507 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1506);
														}
														BgL_arg1639z00_1122 = BgL_res1920z00_1507;
												}}
												BgL_arg1631z00_1120 =
													string_append(BgL_arg1634z00_1121,
													BgL_arg1639z00_1122);
											}
											BgL_arg1626z00_1118 =
												bstring_to_symbol(BgL_arg1631z00_1120);
										}
										BgL_arg1627z00_1119 =
											MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
										return
											MAKE_YOUNG_PAIR(BgL_arg1626z00_1118, BgL_arg1627z00_1119);
									}
								else
									{	/* Object/nil.scm 151 */
										bool_t BgL_test2003z00_2029;

										{	/* Object/nil.scm 151 */
											obj_t BgL_arg1663z00_1129;

											BgL_arg1663z00_1129 =
												(((BgL_slotz00_bglt) COBJECT(
														((BgL_slotz00_bglt) BgL_slotz00_13)))->BgL_typez00);
											BgL_test2003z00_2029 =
												BGl_bigloozd2typezf3z21zztype_typez00(
												((BgL_typez00_bglt) BgL_arg1663z00_1129));
										}
										if (BgL_test2003z00_2029)
											{	/* Object/nil.scm 152 */
												obj_t BgL_arg1652z00_1127;

												BgL_arg1652z00_1127 =
													(((BgL_slotz00_bglt) COBJECT(
															((BgL_slotz00_bglt) BgL_slotz00_13)))->
													BgL_typez00);
												return
													BGl_bigloozd2primitivezd2typezd2nilzd2zzobject_nilz00
													(BgL_arg1652z00_1127, BgL_slotz00_13);
											}
										else
											{	/* Object/nil.scm 154 */
												obj_t BgL_arg1662z00_1128;

												BgL_arg1662z00_1128 =
													(((BgL_slotz00_bglt) COBJECT(
															((BgL_slotz00_bglt) BgL_slotz00_13)))->
													BgL_typez00);
												return
													BGl_externzd2typezd2nilz00zzobject_nilz00
													(BgL_arg1662z00_1128, BgL_slotz00_13);
											}
									}
							}
					}
			}
		}

	}



/* type-nil-value */
	BGL_EXPORTED_DEF obj_t BGl_typezd2nilzd2valuez00zzobject_nilz00(obj_t
		BgL_typez00_14, obj_t BgL_slotz00_15)
	{
		{	/* Object/nil.scm 159 */
			if (BGl_isazf3zf3zz__objectz00(BgL_typez00_14,
					BGl_tclassz00zzobject_classz00))
				{	/* Object/nil.scm 162 */
					obj_t BgL_arg1672z00_1134;

					{	/* Object/nil.scm 162 */
						obj_t BgL_arg1684z00_1135;

						BgL_arg1684z00_1135 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt)
										((BgL_typez00_bglt) BgL_typez00_14))))->BgL_idz00);
						BgL_arg1672z00_1134 = MAKE_YOUNG_PAIR(BgL_arg1684z00_1135, BNIL);
					}
					return
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)), BgL_arg1672z00_1134);
				}
			else
				{	/* Object/nil.scm 161 */
					if (BGl_isazf3zf3zz__objectz00(BgL_typez00_14,
							BGl_tvecz00zztvector_tvectorz00))
						{	/* Object/nil.scm 164 */
							obj_t BgL_arg1686z00_1137;

							{	/* Object/nil.scm 164 */
								obj_t BgL_arg1687z00_1138;
								obj_t BgL_arg1688z00_1139;

								{	/* Object/nil.scm 164 */
									obj_t BgL_arg1692z00_1140;

									{	/* Object/nil.scm 164 */
										obj_t BgL_arg1695z00_1141;

										BgL_arg1695z00_1141 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt)
														((BgL_typez00_bglt) BgL_typez00_14))))->BgL_idz00);
										BgL_arg1692z00_1140 =
											MAKE_YOUNG_PAIR(BgL_arg1695z00_1141, BNIL);
									}
									BgL_arg1687z00_1138 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
										BgL_arg1692z00_1140);
								}
								{	/* Object/nil.scm 164 */
									obj_t BgL_arg1696z00_1142;

									{	/* Object/nil.scm 164 */
										obj_t BgL_arg1697z00_1143;

										BgL_arg1697z00_1143 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_arg1696z00_1142 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
											BgL_arg1697z00_1143);
									}
									BgL_arg1688z00_1139 =
										MAKE_YOUNG_PAIR(BgL_arg1696z00_1142, BNIL);
								}
								BgL_arg1686z00_1137 =
									MAKE_YOUNG_PAIR(BgL_arg1687z00_1138, BgL_arg1688z00_1139);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
								BgL_arg1686z00_1137);
						}
					else
						{	/* Object/nil.scm 163 */
							if (BGl_isazf3zf3zz__objectz00(BgL_typez00_14,
									BGl_jarrayz00zzforeign_jtypez00))
								{	/* Object/nil.scm 166 */
									obj_t BgL_arg1704z00_1145;
									obj_t BgL_arg1707z00_1146;

									{	/* Object/nil.scm 166 */
										obj_t BgL_arg1708z00_1147;

										{	/* Object/nil.scm 166 */
											obj_t BgL_arg1711z00_1148;
											obj_t BgL_arg1712z00_1149;

											{	/* Object/nil.scm 166 */
												obj_t BgL_res1925z00_1517;

												{	/* Object/nil.scm 166 */
													obj_t BgL_symbolz00_1515;

													BgL_symbolz00_1515 = CNST_TABLE_REF(((long) 20));
													{	/* Object/nil.scm 166 */
														obj_t BgL_arg1466z00_1516;

														BgL_arg1466z00_1516 =
															SYMBOL_TO_STRING(BgL_symbolz00_1515);
														BgL_res1925z00_1517 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1516);
												}}
												BgL_arg1711z00_1148 = BgL_res1925z00_1517;
											}
											{	/* Object/nil.scm 166 */
												obj_t BgL_arg1719z00_1150;

												BgL_arg1719z00_1150 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt)
																((BgL_typez00_bglt) BgL_typez00_14))))->
													BgL_idz00);
												{	/* Object/nil.scm 166 */
													obj_t BgL_res1926z00_1521;

													{	/* Object/nil.scm 166 */
														obj_t BgL_arg1466z00_1520;

														BgL_arg1466z00_1520 =
															SYMBOL_TO_STRING(BgL_arg1719z00_1150);
														BgL_res1926z00_1521 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1520);
													}
													BgL_arg1712z00_1149 = BgL_res1926z00_1521;
											}}
											BgL_arg1708z00_1147 =
												string_append(BgL_arg1711z00_1148, BgL_arg1712z00_1149);
										}
										BgL_arg1704z00_1145 =
											bstring_to_symbol(BgL_arg1708z00_1147);
									}
									BgL_arg1707z00_1146 = MAKE_YOUNG_PAIR(BINT(((long) 0)), BNIL);
									return
										MAKE_YOUNG_PAIR(BgL_arg1704z00_1145, BgL_arg1707z00_1146);
								}
							else
								{	/* Object/nil.scm 165 */
									if (BGl_bigloozd2typezf3z21zztype_typez00(
											((BgL_typez00_bglt) BgL_typez00_14)))
										{	/* Object/nil.scm 167 */
											return
												BGl_bigloozd2primitivezd2typezd2nilzd2zzobject_nilz00
												(BgL_typez00_14, BgL_slotz00_15);
										}
									else
										{	/* Object/nil.scm 167 */
											return
												BGl_externzd2typezd2nilz00zzobject_nilz00
												(BgL_typez00_14, BgL_slotz00_15);
										}
								}
						}
				}
		}

	}



/* &type-nil-value */
	obj_t BGl_z62typezd2nilzd2valuez62zzobject_nilz00(obj_t BgL_envz00_1637,
		obj_t BgL_typez00_1638, obj_t BgL_slotz00_1639)
	{
		{	/* Object/nil.scm 159 */
			return
				BGl_typezd2nilzd2valuez00zzobject_nilz00(BgL_typez00_1638,
				BgL_slotz00_1639);
		}

	}



/* bigloo-primitive-type-nil */
	obj_t BGl_bigloozd2primitivezd2typezd2nilzd2zzobject_nilz00(obj_t
		BgL_typez00_16, obj_t BgL_slotz00_17)
	{
		{	/* Object/nil.scm 175 */
			{	/* Object/nil.scm 177 */
				bool_t BgL_test2008z00_2084;

				if ((BgL_typez00_16 == BGl_za2objza2z00zztype_cachez00))
					{	/* Object/nil.scm 177 */
						BgL_test2008z00_2084 = ((bool_t) 1);
					}
				else
					{	/* Object/nil.scm 177 */
						BgL_test2008z00_2084 =
							(BgL_typez00_16 == BGl_za2unspecza2z00zztype_cachez00);
					}
				if (BgL_test2008z00_2084)
					{	/* Object/nil.scm 177 */
						return BUNSPEC;
					}
				else
					{	/* Object/nil.scm 177 */
						if ((BgL_typez00_16 == BGl_za2cellza2z00zztype_cachez00))
							{	/* Object/nil.scm 178 */
								return CNST_TABLE_REF(((long) 22));
							}
						else
							{	/* Object/nil.scm 178 */
								if ((BgL_typez00_16 == BGl_za2bintza2z00zztype_cachez00))
									{	/* Object/nil.scm 179 */
										return BINT(((long) 0));
									}
								else
									{	/* Object/nil.scm 179 */
										if ((BgL_typez00_16 == BGl_za2bllongza2z00zztype_cachez00))
											{	/* Object/nil.scm 180 */
												return CNST_TABLE_REF(((long) 23));
											}
										else
											{	/* Object/nil.scm 180 */
												if (
													(BgL_typez00_16 ==
														BGl_za2belongza2z00zztype_cachez00))
													{	/* Object/nil.scm 181 */
														return CNST_TABLE_REF(((long) 24));
													}
												else
													{	/* Object/nil.scm 181 */
														if (
															(BgL_typez00_16 ==
																BGl_za2bignumza2z00zztype_cachez00))
															{	/* Object/nil.scm 182 */
																return CNST_TABLE_REF(((long) 25));
															}
														else
															{	/* Object/nil.scm 182 */
																if (
																	(BgL_typez00_16 ==
																		BGl_za2boolza2z00zztype_cachez00))
																	{	/* Object/nil.scm 183 */
																		return BFALSE;
																	}
																else
																	{	/* Object/nil.scm 183 */
																		if (
																			(BgL_typez00_16 ==
																				BGl_za2brealza2z00zztype_cachez00))
																			{	/* Object/nil.scm 184 */
																				return
																					BGL_REAL_CNST
																					(BGl_real1977z00zzobject_nilz00);
																			}
																		else
																			{	/* Object/nil.scm 184 */
																				if (
																					(BgL_typez00_16 ==
																						BGl_za2bcharza2z00zztype_cachez00))
																					{	/* Object/nil.scm 185 */
																						return BCHAR(((unsigned char) '_'));
																					}
																				else
																					{	/* Object/nil.scm 186 */
																						bool_t BgL_test2018z00_2110;

																						if (
																							(BgL_typez00_16 ==
																								BGl_za2bnilza2z00zztype_cachez00))
																							{	/* Object/nil.scm 186 */
																								BgL_test2018z00_2110 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Object/nil.scm 186 */
																								BgL_test2018z00_2110 =
																									(BgL_typez00_16 ==
																									BGl_za2pairzd2nilza2zd2zztype_cachez00);
																							}
																						if (BgL_test2018z00_2110)
																							{	/* Object/nil.scm 186 */
																								return
																									CNST_TABLE_REF(((long) 26));
																							}
																						else
																							{	/* Object/nil.scm 186 */
																								if (
																									(BgL_typez00_16 ==
																										BGl_za2pairza2z00zztype_cachez00))
																									{	/* Object/nil.scm 187 */
																										return
																											CNST_TABLE_REF(((long)
																												27));
																									}
																								else
																									{	/* Object/nil.scm 187 */
																										if (
																											(BgL_typez00_16 ==
																												BGl_za2epairza2z00zztype_cachez00))
																											{	/* Object/nil.scm 188 */
																												return
																													CNST_TABLE_REF(((long)
																														28));
																											}
																										else
																											{	/* Object/nil.scm 188 */
																												if (
																													(BgL_typez00_16 ==
																														BGl_za2bstringza2z00zztype_cachez00))
																													{	/* Object/nil.scm 189 */
																														return
																															BGl_string1978z00zzobject_nilz00;
																													}
																												else
																													{	/* Object/nil.scm 189 */
																														if (
																															(BgL_typez00_16 ==
																																BGl_za2symbolza2z00zztype_cachez00))
																															{	/* Object/nil.scm 190 */
																																return
																																	CNST_TABLE_REF
																																	(((long) 29));
																															}
																														else
																															{	/* Object/nil.scm 190 */
																																if (
																																	(BgL_typez00_16
																																		==
																																		BGl_za2keywordza2z00zztype_cachez00))
																																	{	/* Object/nil.scm 191 */
																																		return
																																			CNST_TABLE_REF
																																			(((long)
																																				30));
																																	}
																																else
																																	{	/* Object/nil.scm 191 */
																																		if (
																																			(BgL_typez00_16
																																				==
																																				BGl_za2vectorza2z00zztype_cachez00))
																																			{	/* Object/nil.scm 192 */
																																				return
																																					CNST_TABLE_REF
																																					(((long) 31));
																																			}
																																		else
																																			{	/* Object/nil.scm 192 */
																																				if (
																																					(BgL_typez00_16
																																						==
																																						BGl_za2procedureza2z00zztype_cachez00))
																																					{	/* Object/nil.scm 193 */
																																						return
																																							CNST_TABLE_REF
																																							(((long) 32));
																																					}
																																				else
																																					{	/* Object/nil.scm 195 */
																																						obj_t
																																							BgL_casezd2valuezd2_1171;
																																						BgL_casezd2valuezd2_1171
																																							=
																																							(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_typez00_16)))->BgL_idz00);
																																						if (
																																							(BgL_casezd2valuezd2_1171
																																								==
																																								CNST_TABLE_REF
																																								(((long) 33))))
																																							{	/* Object/nil.scm 195 */
																																								return
																																									CNST_TABLE_REF
																																									(
																																									((long) 34));
																																							}
																																						else
																																							{	/* Object/nil.scm 195 */
																																								if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 35))))
																																									{	/* Object/nil.scm 195 */
																																										return
																																											CNST_TABLE_REF
																																											(
																																											((long) 36));
																																									}
																																								else
																																									{	/* Object/nil.scm 195 */
																																										if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 37))))
																																											{	/* Object/nil.scm 195 */
																																												return
																																													CNST_TABLE_REF
																																													(
																																													((long) 36));
																																											}
																																										else
																																											{	/* Object/nil.scm 195 */
																																												if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 38))))
																																													{	/* Object/nil.scm 195 */
																																														return
																																															CNST_TABLE_REF
																																															(
																																															((long) 36));
																																													}
																																												else
																																													{	/* Object/nil.scm 195 */
																																														if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 39))))
																																															{	/* Object/nil.scm 195 */
																																																return
																																																	CNST_TABLE_REF
																																																	(
																																																	((long) 40));
																																															}
																																														else
																																															{	/* Object/nil.scm 195 */
																																																if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 41))))
																																																	{	/* Object/nil.scm 195 */
																																																		return
																																																			CNST_TABLE_REF
																																																			(
																																																			((long) 42));
																																																	}
																																																else
																																																	{	/* Object/nil.scm 195 */
																																																		bool_t
																																																			BgL_test2033z00_2161;
																																																		{	/* Object/nil.scm 195 */
																																																			bool_t
																																																				BgL__ortest_1078z00_1232;
																																																			BgL__ortest_1078z00_1232
																																																				=
																																																				(BgL_casezd2valuezd2_1171
																																																				==
																																																				CNST_TABLE_REF
																																																				(((long) 2)));
																																																			if (BgL__ortest_1078z00_1232)
																																																				{	/* Object/nil.scm 195 */
																																																					BgL_test2033z00_2161
																																																						=
																																																						BgL__ortest_1078z00_1232;
																																																				}
																																																			else
																																																				{	/* Object/nil.scm 195 */
																																																					BgL_test2033z00_2161
																																																						=
																																																						(BgL_casezd2valuezd2_1171
																																																						==
																																																						CNST_TABLE_REF
																																																						(((long) 43)));
																																																		}}
																																																		if (BgL_test2033z00_2161)
																																																			{	/* Object/nil.scm 195 */
																																																				return
																																																					BUNSPEC;
																																																			}
																																																		else
																																																			{	/* Object/nil.scm 195 */
																																																				if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 44))))
																																																					{	/* Object/nil.scm 195 */
																																																						return
																																																							CNST_TABLE_REF
																																																							(
																																																							((long) 22));
																																																					}
																																																				else
																																																					{	/* Object/nil.scm 195 */
																																																						if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 45))))
																																																							{	/* Object/nil.scm 195 */
																																																								return
																																																									BINT
																																																									(
																																																									((long) 0));
																																																							}
																																																						else
																																																							{	/* Object/nil.scm 195 */
																																																								if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 46))))
																																																									{	/* Object/nil.scm 195 */
																																																										return
																																																											CNST_TABLE_REF
																																																											(
																																																											((long) 23));
																																																									}
																																																								else
																																																									{	/* Object/nil.scm 195 */
																																																										if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 47))))
																																																											{	/* Object/nil.scm 195 */
																																																												return
																																																													CNST_TABLE_REF
																																																													(
																																																													((long) 24));
																																																											}
																																																										else
																																																											{	/* Object/nil.scm 195 */
																																																												bool_t
																																																													BgL_test2039z00_2183;
																																																												{	/* Object/nil.scm 195 */
																																																													bool_t
																																																														BgL__ortest_1079z00_1231;
																																																													BgL__ortest_1079z00_1231
																																																														=
																																																														(BgL_casezd2valuezd2_1171
																																																														==
																																																														CNST_TABLE_REF
																																																														(((long) 48)));
																																																													if (BgL__ortest_1079z00_1231)
																																																														{	/* Object/nil.scm 195 */
																																																															BgL_test2039z00_2183
																																																																=
																																																																BgL__ortest_1079z00_1231;
																																																														}
																																																													else
																																																														{	/* Object/nil.scm 195 */
																																																															BgL_test2039z00_2183
																																																																=
																																																																(BgL_casezd2valuezd2_1171
																																																																==
																																																																CNST_TABLE_REF
																																																																(((long) 49)));
																																																												}}
																																																												if (BgL_test2039z00_2183)
																																																													{	/* Object/nil.scm 195 */
																																																														return
																																																															BFALSE;
																																																													}
																																																												else
																																																													{	/* Object/nil.scm 195 */
																																																														if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 50))))
																																																															{	/* Object/nil.scm 195 */
																																																																return
																																																																	BGL_REAL_CNST
																																																																	(BGl_real1977z00zzobject_nilz00);
																																																															}
																																																														else
																																																															{	/* Object/nil.scm 195 */
																																																																if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 51))))
																																																																	{	/* Object/nil.scm 195 */
																																																																		return
																																																																			BCHAR
																																																																			(
																																																																			((unsigned char) '_'));
																																																																	}
																																																																else
																																																																	{	/* Object/nil.scm 195 */
																																																																		bool_t
																																																																			BgL_test2043z00_2196;
																																																																		{	/* Object/nil.scm 195 */
																																																																			bool_t
																																																																				BgL__ortest_1080z00_1230;
																																																																			BgL__ortest_1080z00_1230
																																																																				=
																																																																				(BgL_casezd2valuezd2_1171
																																																																				==
																																																																				CNST_TABLE_REF
																																																																				(((long) 52)));
																																																																			if (BgL__ortest_1080z00_1230)
																																																																				{	/* Object/nil.scm 195 */
																																																																					BgL_test2043z00_2196
																																																																						=
																																																																						BgL__ortest_1080z00_1230;
																																																																				}
																																																																			else
																																																																				{	/* Object/nil.scm 195 */
																																																																					BgL_test2043z00_2196
																																																																						=
																																																																						(BgL_casezd2valuezd2_1171
																																																																						==
																																																																						CNST_TABLE_REF
																																																																						(((long) 53)));
																																																																		}}
																																																																		if (BgL_test2043z00_2196)
																																																																			{	/* Object/nil.scm 195 */
																																																																				return
																																																																					CNST_TABLE_REF
																																																																					(
																																																																					((long) 26));
																																																																			}
																																																																		else
																																																																			{	/* Object/nil.scm 195 */
																																																																				if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 54))))
																																																																					{	/* Object/nil.scm 195 */
																																																																						return
																																																																							CNST_TABLE_REF
																																																																							(
																																																																							((long) 27));
																																																																					}
																																																																				else
																																																																					{	/* Object/nil.scm 195 */
																																																																						if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 55))))
																																																																							{	/* Object/nil.scm 195 */
																																																																								return
																																																																									CNST_TABLE_REF
																																																																									(
																																																																									((long) 28));
																																																																							}
																																																																						else
																																																																							{	/* Object/nil.scm 195 */
																																																																								if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 56))))
																																																																									{	/* Object/nil.scm 195 */
																																																																										return
																																																																											BGl_string1978z00zzobject_nilz00;
																																																																									}
																																																																								else
																																																																									{	/* Object/nil.scm 195 */
																																																																										if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 57))))
																																																																											{	/* Object/nil.scm 195 */
																																																																												return
																																																																													CNST_TABLE_REF
																																																																													(
																																																																													((long) 29));
																																																																											}
																																																																										else
																																																																											{	/* Object/nil.scm 195 */
																																																																												if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 58))))
																																																																													{	/* Object/nil.scm 195 */
																																																																														return
																																																																															CNST_TABLE_REF
																																																																															(
																																																																															((long) 30));
																																																																													}
																																																																												else
																																																																													{	/* Object/nil.scm 195 */
																																																																														if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 59))))
																																																																															{	/* Object/nil.scm 195 */
																																																																																return
																																																																																	CNST_TABLE_REF
																																																																																	(
																																																																																	((long) 31));
																																																																															}
																																																																														else
																																																																															{	/* Object/nil.scm 195 */
																																																																																if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 60))))
																																																																																	{	/* Object/nil.scm 217 */
																																																																																		obj_t
																																																																																			BgL_arg1775z00_1197;
																																																																																		{	/* Object/nil.scm 217 */
																																																																																			obj_t
																																																																																				BgL_arg1778z00_1198;
																																																																																			obj_t
																																																																																				BgL_arg1779z00_1199;
																																																																																			{	/* Object/nil.scm 217 */
																																																																																				obj_t
																																																																																					BgL_arg1782z00_1200;
																																																																																				{	/* Object/nil.scm 217 */
																																																																																					obj_t
																																																																																						BgL_arg1784z00_1201;
																																																																																					{	/* Object/nil.scm 217 */

																																																																																						{	/* Object/nil.scm 217 */

																																																																																							BgL_arg1784z00_1201
																																																																																								=
																																																																																								BGl_gensymz00zz__r4_symbols_6_4z00
																																																																																								(BFALSE);
																																																																																					}}
																																																																																					BgL_arg1782z00_1200
																																																																																						=
																																																																																						MAKE_YOUNG_PAIR
																																																																																						(BgL_arg1784z00_1201,
																																																																																						BNIL);
																																																																																				}
																																																																																				BgL_arg1778z00_1198
																																																																																					=
																																																																																					MAKE_YOUNG_PAIR
																																																																																					(CNST_TABLE_REF
																																																																																					(((long) 18)), BgL_arg1782z00_1200);
																																																																																			}
																																																																																			{	/* Object/nil.scm 217 */
																																																																																				obj_t
																																																																																					BgL_arg1790z00_1203;
																																																																																				BgL_arg1790z00_1203
																																																																																					=
																																																																																					MAKE_YOUNG_PAIR
																																																																																					(BFALSE,
																																																																																					BNIL);
																																																																																				BgL_arg1779z00_1199
																																																																																					=
																																																																																					MAKE_YOUNG_PAIR
																																																																																					(BINT
																																																																																					(((long) 0)), BgL_arg1790z00_1203);
																																																																																			}
																																																																																			BgL_arg1775z00_1197
																																																																																				=
																																																																																				MAKE_YOUNG_PAIR
																																																																																				(BgL_arg1778z00_1198,
																																																																																				BgL_arg1779z00_1199);
																																																																																		}
																																																																																		return
																																																																																			MAKE_YOUNG_PAIR
																																																																																			(CNST_TABLE_REF
																																																																																			(((long) 61)), BgL_arg1775z00_1197);
																																																																																	}
																																																																																else
																																																																																	{	/* Object/nil.scm 195 */
																																																																																		if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 62))))
																																																																																			{	/* Object/nil.scm 195 */
																																																																																				return
																																																																																					CNST_TABLE_REF
																																																																																					(
																																																																																					((long) 32));
																																																																																			}
																																																																																		else
																																																																																			{	/* Object/nil.scm 195 */
																																																																																				if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 63))))
																																																																																					{	/* Object/nil.scm 195 */
																																																																																						return
																																																																																							CNST_TABLE_REF
																																																																																							(
																																																																																							((long) 64));
																																																																																					}
																																																																																				else
																																																																																					{	/* Object/nil.scm 195 */
																																																																																						if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 65))))
																																																																																							{	/* Object/nil.scm 195 */
																																																																																								return
																																																																																									CNST_TABLE_REF
																																																																																									(
																																																																																									((long) 66));
																																																																																							}
																																																																																						else
																																																																																							{	/* Object/nil.scm 195 */
																																																																																								if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 67))))
																																																																																									{	/* Object/nil.scm 195 */
																																																																																										return
																																																																																											CNST_TABLE_REF
																																																																																											(
																																																																																											((long) 68));
																																																																																									}
																																																																																								else
																																																																																									{	/* Object/nil.scm 195 */
																																																																																										if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 69))))
																																																																																											{	/* Object/nil.scm 195 */
																																																																																												return
																																																																																													CNST_TABLE_REF
																																																																																													(
																																																																																													((long) 70));
																																																																																											}
																																																																																										else
																																																																																											{	/* Object/nil.scm 195 */
																																																																																												if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 71))))
																																																																																													{	/* Object/nil.scm 195 */
																																																																																														return
																																																																																															CNST_TABLE_REF
																																																																																															(
																																																																																															((long) 72));
																																																																																													}
																																																																																												else
																																																																																													{	/* Object/nil.scm 195 */
																																																																																														if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 73))))
																																																																																															{	/* Object/nil.scm 195 */
																																																																																																return
																																																																																																	CNST_TABLE_REF
																																																																																																	(
																																																																																																	((long) 74));
																																																																																															}
																																																																																														else
																																																																																															{	/* Object/nil.scm 195 */
																																																																																																if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 75))))
																																																																																																	{	/* Object/nil.scm 195 */
																																																																																																		return
																																																																																																			CNST_TABLE_REF
																																																																																																			(
																																																																																																			((long) 76));
																																																																																																	}
																																																																																																else
																																																																																																	{	/* Object/nil.scm 195 */
																																																																																																		if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 77))))
																																																																																																			{	/* Object/nil.scm 195 */
																																																																																																				return
																																																																																																					CNST_TABLE_REF
																																																																																																					(
																																																																																																					((long) 78));
																																																																																																			}
																																																																																																		else
																																																																																																			{	/* Object/nil.scm 195 */
																																																																																																				if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 79))))
																																																																																																					{	/* Object/nil.scm 195 */
																																																																																																						return
																																																																																																							CNST_TABLE_REF
																																																																																																							(
																																																																																																							((long) 80));
																																																																																																					}
																																																																																																				else
																																																																																																					{	/* Object/nil.scm 195 */
																																																																																																						if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 81))))
																																																																																																							{	/* Object/nil.scm 195 */
																																																																																																								return
																																																																																																									CNST_TABLE_REF
																																																																																																									(
																																																																																																									((long) 82));
																																																																																																							}
																																																																																																						else
																																																																																																							{	/* Object/nil.scm 195 */
																																																																																																								if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 83))))
																																																																																																									{	/* Object/nil.scm 195 */
																																																																																																										return
																																																																																																											CNST_TABLE_REF
																																																																																																											(
																																																																																																											((long) 84));
																																																																																																									}
																																																																																																								else
																																																																																																									{	/* Object/nil.scm 195 */
																																																																																																										if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 85))))
																																																																																																											{	/* Object/nil.scm 195 */
																																																																																																												return
																																																																																																													CNST_TABLE_REF
																																																																																																													(
																																																																																																													((long) 86));
																																																																																																											}
																																																																																																										else
																																																																																																											{	/* Object/nil.scm 195 */
																																																																																																												if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 87))))
																																																																																																													{	/* Object/nil.scm 195 */
																																																																																																														return
																																																																																																															CNST_TABLE_REF
																																																																																																															(
																																																																																																															((long) 88));
																																																																																																													}
																																																																																																												else
																																																																																																													{	/* Object/nil.scm 195 */
																																																																																																														if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 89))))
																																																																																																															{	/* Object/nil.scm 195 */
																																																																																																																return
																																																																																																																	CNST_TABLE_REF
																																																																																																																	(
																																																																																																																	((long) 90));
																																																																																																															}
																																																																																																														else
																																																																																																															{	/* Object/nil.scm 195 */
																																																																																																																if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 91))))
																																																																																																																	{	/* Object/nil.scm 195 */
																																																																																																																		return
																																																																																																																			CNST_TABLE_REF
																																																																																																																			(
																																																																																																																			((long) 92));
																																																																																																																	}
																																																																																																																else
																																																																																																																	{	/* Object/nil.scm 195 */
																																																																																																																		if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 93))))
																																																																																																																			{	/* Object/nil.scm 195 */
																																																																																																																				return
																																																																																																																					CNST_TABLE_REF
																																																																																																																					(
																																																																																																																					((long) 94));
																																																																																																																			}
																																																																																																																		else
																																																																																																																			{	/* Object/nil.scm 195 */
																																																																																																																				if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 95))))
																																																																																																																					{	/* Object/nil.scm 195 */
																																																																																																																						return
																																																																																																																							CNST_TABLE_REF
																																																																																																																							(
																																																																																																																							((long) 96));
																																																																																																																					}
																																																																																																																				else
																																																																																																																					{	/* Object/nil.scm 195 */
																																																																																																																						if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 97))))
																																																																																																																							{	/* Object/nil.scm 195 */
																																																																																																																								return
																																																																																																																									CNST_TABLE_REF
																																																																																																																									(
																																																																																																																									((long) 98));
																																																																																																																							}
																																																																																																																						else
																																																																																																																							{	/* Object/nil.scm 195 */
																																																																																																																								if ((BgL_casezd2valuezd2_1171 == CNST_TABLE_REF(((long) 99))))
																																																																																																																									{	/* Object/nil.scm 195 */
																																																																																																																										return
																																																																																																																											CNST_TABLE_REF
																																																																																																																											(
																																																																																																																											((long) 100));
																																																																																																																									}
																																																																																																																								else
																																																																																																																									{	/* Object/nil.scm 238 */
																																																																																																																										obj_t
																																																																																																																											BgL_arg1820z00_1224;
																																																																																																																										obj_t
																																																																																																																											BgL_arg1821z00_1225;
																																																																																																																										obj_t
																																																																																																																											BgL_arg1822z00_1226;
																																																																																																																										BgL_arg1820z00_1224
																																																																																																																											=
																																																																																																																											(
																																																																																																																											((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) (((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt) BgL_slotz00_17)))->BgL_classzd2ownerzd2))))->BgL_idz00);
																																																																																																																										{	/* Object/nil.scm 239 */
																																																																																																																											obj_t
																																																																																																																												BgL_arg1824z00_1228;
																																																																																																																											BgL_arg1824z00_1228
																																																																																																																												=
																																																																																																																												(
																																																																																																																												((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_typez00_16)))->BgL_idz00);
																																																																																																																											{	/* Object/nil.scm 239 */
																																																																																																																												obj_t
																																																																																																																													BgL_list1825z00_1229;
																																																																																																																												BgL_list1825z00_1229
																																																																																																																													=
																																																																																																																													MAKE_YOUNG_PAIR
																																																																																																																													(BgL_arg1824z00_1228,
																																																																																																																													BNIL);
																																																																																																																												BgL_arg1821z00_1225
																																																																																																																													=
																																																																																																																													BGl_formatz00zz__r4_output_6_10_3z00
																																																																																																																													(BGl_string1979z00zzobject_nilz00,
																																																																																																																													BgL_list1825z00_1229);
																																																																																																																											}
																																																																																																																										}
																																																																																																																										BgL_arg1822z00_1226
																																																																																																																											=
																																																																																																																											(
																																																																																																																											((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt) BgL_slotz00_17)))->BgL_idz00);
																																																																																																																										return
																																																																																																																											BGl_errorz00zz__errorz00
																																																																																																																											(BgL_arg1820z00_1224,
																																																																																																																											BgL_arg1821z00_1225,
																																																																																																																											BgL_arg1822z00_1226);
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
													}
											}
									}
							}
					}
			}
		}

	}



/* extern-type-nil */
	obj_t BGl_externzd2typezd2nilz00zzobject_nilz00(obj_t BgL_typez00_18,
		obj_t BgL_slotz00_19)
	{
		{	/* Object/nil.scm 245 */
			{	/* Object/nil.scm 247 */
				bool_t BgL_test2072z00_2330;

				if ((BgL_typez00_18 == BGl_za2intza2z00zztype_cachez00))
					{	/* Object/nil.scm 247 */
						BgL_test2072z00_2330 = ((bool_t) 1);
					}
				else
					{	/* Object/nil.scm 247 */
						BgL_test2072z00_2330 =
							(BgL_typez00_18 == BGl_za2longza2z00zztype_cachez00);
					}
				if (BgL_test2072z00_2330)
					{	/* Object/nil.scm 247 */
						return BINT(((long) 0));
					}
				else
					{	/* Object/nil.scm 247 */
						if ((BgL_typez00_18 == BGl_za2boolza2z00zztype_cachez00))
							{	/* Object/nil.scm 248 */
								return BFALSE;
							}
						else
							{	/* Object/nil.scm 248 */
								if ((BgL_typez00_18 == BGl_za2realza2z00zztype_cachez00))
									{	/* Object/nil.scm 249 */
										return BGL_REAL_CNST(BGl_real1977z00zzobject_nilz00);
									}
								else
									{	/* Object/nil.scm 249 */
										if ((BgL_typez00_18 == BGl_za2elongza2z00zztype_cachez00))
											{	/* Object/nil.scm 250 */
												return CNST_TABLE_REF(((long) 24));
											}
										else
											{	/* Object/nil.scm 250 */
												if (
													(BgL_typez00_18 == BGl_za2llongza2z00zztype_cachez00))
													{	/* Object/nil.scm 251 */
														return CNST_TABLE_REF(((long) 23));
													}
												else
													{	/* Object/nil.scm 251 */
														if (
															(BgL_typez00_18 ==
																BGl_za2charza2z00zztype_cachez00))
															{	/* Object/nil.scm 252 */
																return BCHAR(((unsigned char) '_'));
															}
														else
															{	/* Object/nil.scm 252 */
																if (
																	(BgL_typez00_18 ==
																		BGl_za2stringza2z00zztype_cachez00))
																	{	/* Object/nil.scm 253 */
																		return BGl_string1978z00zzobject_nilz00;
																	}
																else
																	{	/* Object/nil.scm 254 */
																		bool_t BgL_test2080z00_2350;

																		if (BGl_isazf3zf3zz__objectz00
																			(BgL_typez00_18,
																				BGl_jclassz00zzobject_classz00))
																			{	/* Object/nil.scm 254 */
																				BgL_test2080z00_2350 = ((bool_t) 1);
																			}
																		else
																			{	/* Object/nil.scm 254 */
																				BgL_test2080z00_2350 =
																					BGl_isazf3zf3zz__objectz00
																					(BgL_typez00_18,
																					BGl_jarrayz00zzforeign_jtypez00);
																			}
																		if (BgL_test2080z00_2350)
																			{	/* Object/nil.scm 255 */
																				obj_t BgL_arg1836z00_1245;

																				BgL_arg1836z00_1245 =
																					(((BgL_typez00_bglt) COBJECT(
																							((BgL_typez00_bglt)
																								BgL_typez00_18)))->BgL_idz00);
																				return
																					BGl_makezd2privatezd2sexpz00zzast_privatez00
																					(CNST_TABLE_REF(((long) 101)),
																					BgL_arg1836z00_1245, BNIL);
																			}
																		else
																			{	/* Object/nil.scm 257 */
																				obj_t BgL_casezd2valuezd2_1247;

																				BgL_casezd2valuezd2_1247 =
																					(((BgL_typez00_bglt) COBJECT(
																							((BgL_typez00_bglt)
																								BgL_typez00_18)))->BgL_idz00);
																				{	/* Object/nil.scm 257 */
																					bool_t BgL_test2082z00_2360;

																					{	/* Object/nil.scm 257 */
																						bool_t BgL__ortest_1081z00_1265;

																						BgL__ortest_1081z00_1265 =
																							(BgL_casezd2valuezd2_1247 ==
																							CNST_TABLE_REF(((long) 102)));
																						if (BgL__ortest_1081z00_1265)
																							{	/* Object/nil.scm 257 */
																								BgL_test2082z00_2360 =
																									BgL__ortest_1081z00_1265;
																							}
																						else
																							{	/* Object/nil.scm 257 */
																								bool_t BgL__ortest_1082z00_1266;

																								BgL__ortest_1082z00_1266 =
																									(BgL_casezd2valuezd2_1247 ==
																									CNST_TABLE_REF(((long) 103)));
																								if (BgL__ortest_1082z00_1266)
																									{	/* Object/nil.scm 257 */
																										BgL_test2082z00_2360 =
																											BgL__ortest_1082z00_1266;
																									}
																								else
																									{	/* Object/nil.scm 257 */
																										BgL_test2082z00_2360 =
																											(BgL_casezd2valuezd2_1247
																											==
																											CNST_TABLE_REF(((long)
																													104)));
																					}}}
																					if (BgL_test2082z00_2360)
																						{	/* Object/nil.scm 257 */
																							return BINT(((long) 0));
																						}
																					else
																						{	/* Object/nil.scm 257 */
																							if (
																								(BgL_casezd2valuezd2_1247 ==
																									CNST_TABLE_REF(((long) 48))))
																								{	/* Object/nil.scm 257 */
																									return BFALSE;
																								}
																							else
																								{	/* Object/nil.scm 257 */
																									bool_t BgL_test2086z00_2373;

																									{	/* Object/nil.scm 257 */
																										bool_t
																											BgL__ortest_1083z00_1264;
																										BgL__ortest_1083z00_1264 =
																											(BgL_casezd2valuezd2_1247
																											==
																											CNST_TABLE_REF(((long)
																													105)));
																										if (BgL__ortest_1083z00_1264)
																											{	/* Object/nil.scm 257 */
																												BgL_test2086z00_2373 =
																													BgL__ortest_1083z00_1264;
																											}
																										else
																											{	/* Object/nil.scm 257 */
																												BgL_test2086z00_2373 =
																													(BgL_casezd2valuezd2_1247
																													==
																													CNST_TABLE_REF(((long)
																															106)));
																									}}
																									if (BgL_test2086z00_2373)
																										{	/* Object/nil.scm 257 */
																											return
																												BGL_REAL_CNST
																												(BGl_real1977z00zzobject_nilz00);
																										}
																									else
																										{	/* Object/nil.scm 257 */
																											if (
																												(BgL_casezd2valuezd2_1247
																													==
																													CNST_TABLE_REF(((long)
																															107))))
																												{	/* Object/nil.scm 257 */
																													return
																														BCHAR(((unsigned
																																char) '_'));
																												}
																											else
																												{	/* Object/nil.scm 257 */
																													if (
																														(BgL_casezd2valuezd2_1247
																															==
																															CNST_TABLE_REF((
																																	(long) 108))))
																														{	/* Object/nil.scm 257 */
																															return
																																BGl_string1978z00zzobject_nilz00;
																														}
																													else
																														{	/* Object/nil.scm 264 */
																															bool_t
																																BgL_test2090z00_2386;
																															{	/* Object/nil.scm 264 */
																																obj_t
																																	BgL_arg1853z00_1263;
																																BgL_arg1853z00_1263
																																	=
																																	BGl_thezd2backendzd2zzbackend_backendz00
																																	();
																																BgL_test2090z00_2386
																																	=
																																	(((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) BgL_arg1853z00_1263)))->BgL_pragmazd2supportzd2);
																															}
																															if (BgL_test2090z00_2386)
																																{	/* Object/nil.scm 265 */
																																	obj_t
																																		BgL_arg1847z00_1258;
																																	obj_t
																																		BgL_arg1848z00_1259;
																																	{	/* Object/nil.scm 265 */
																																		obj_t
																																			BgL_arg1850z00_1260;
																																		BgL_arg1850z00_1260
																																			=
																																			(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_typez00_18)))->BgL_idz00);
																																		BgL_arg1847z00_1258
																																			=
																																			BGl_makezd2typedzd2identz00zzast_identz00
																																			(CNST_TABLE_REF
																																			(((long)
																																					109)),
																																			BgL_arg1850z00_1260);
																																	}
																																	BgL_arg1848z00_1259
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string1980z00zzobject_nilz00,
																																		BNIL);
																																	return
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1847z00_1258,
																																		BgL_arg1848z00_1259);
																																}
																															else
																																{	/* Object/nil.scm 266 */
																																	obj_t
																																		BgL_arg1851z00_1261;
																																	BgL_arg1851z00_1261
																																		=
																																		(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_typez00_18)))->BgL_idz00);
																																	return
																																		BGl_makezd2privatezd2sexpz00zzast_privatez00
																																		(CNST_TABLE_REF
																																		(((long)
																																				101)),
																																		BgL_arg1851z00_1261,
																																		BNIL);
		}}}}}}}}}}}}}}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_nilz00()
	{
		{	/* Object/nil.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_nilz00()
	{
		{	/* Object/nil.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_nilz00()
	{
		{	/* Object/nil.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_nilz00()
	{
		{	/* Object/nil.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 287572811),
				BSTRING_TO_STRING(BGl_string1981z00zzobject_nilz00));
		}

	}

#ifdef __cplusplus
}
#endif
