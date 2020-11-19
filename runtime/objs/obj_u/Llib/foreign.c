/*===========================================================================*/
/*   (Llib/foreign.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/foreign.scm -indent -o objs/obj_u/Llib/foreign.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62foreignzd2eqzf3z43zz__foreignz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__foreignz00 = BUNSPEC;
	static obj_t BGl_z62makezd2stringzd2ptrzd2nullzb0zz__foreignz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL char *BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00();
	static obj_t BGl_z62stringzd2ptrzd2nullzf3z91zz__foreignz00(obj_t, obj_t);
	static obj_t BGl_z62voidza2zd2nullzf3ze1zz__foreignz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__foreignz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00();
	static obj_t BGl_z62foreignzf3z91zz__foreignz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t);
	extern obj_t void_star_to_obj(void *);
	BGL_EXPORTED_DECL bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t, obj_t);
	BGL_EXPORTED_DECL void *BGl_makezd2voidza2zd2nullza2zz__foreignz00();
	static obj_t BGl_z62makezd2voidza2zd2nullzc0zz__foreignz00(obj_t);
	static obj_t BGl_z62foreignzd2nullzf3z43zz__foreignz00(obj_t, obj_t);
	extern long obj_to_cobj(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void *);
	BGL_EXPORTED_DECL bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char *);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62objzd2ze3cobjz53zz__foreignz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ptrzd2nullzf3zd2envz21zz__foreignz00,
		BgL_bgl_za762stringza7d2ptrza71425za7,
		BGl_z62stringzd2ptrzd2nullzf3z91zz__foreignz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_objzd2ze3cobjzd2envze3zz__foreignz00,
		BgL_bgl_za762objza7d2za7e3cobj1426za7,
		BGl_z62objzd2ze3cobjz53zz__foreignz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1417z00zz__foreignz00,
		BgL_bgl_string1417za700za7za7_1427za7, "foreign-null?", 13);
	      DEFINE_STRING(BGl_string1418z00zz__foreignz00,
		BgL_bgl_string1418za700za7za7_1428za7, "not a foreign object", 20);
	      DEFINE_STRING(BGl_string1419z00zz__foreignz00,
		BgL_bgl_string1419za700za7za7_1429za7, "/tmp/4.4a/runtime/Llib/foreign.scm",
		34);
	      DEFINE_STRING(BGl_string1420z00zz__foreignz00,
		BgL_bgl_string1420za700za7za7_1430za7, "&string-ptr-null?", 17);
	      DEFINE_STRING(BGl_string1421z00zz__foreignz00,
		BgL_bgl_string1421za700za7za7_1431za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1422z00zz__foreignz00,
		BgL_bgl_string1422za700za7za7_1432za7, "&void*-null?", 12);
	      DEFINE_STRING(BGl_string1423z00zz__foreignz00,
		BgL_bgl_string1423za700za7za7_1433za7, "void*", 5);
	      DEFINE_STRING(BGl_string1424z00zz__foreignz00,
		BgL_bgl_string1424za700za7za7_1434za7, "__foreign", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzf3zd2envz21zz__foreignz00,
		BgL_bgl_za762foreignza7f3za7911435za7, BGl_z62foreignzf3z91zz__foreignz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2voidza2zd2nullzd2envz70zz__foreignz00,
		BgL_bgl_za762makeza7d2voidza7a1436za7,
		BGl_z62makezd2voidza2zd2nullzc0zz__foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2stringzd2ptrzd2nullzd2envz00zz__foreignz00,
		BgL_bgl_za762makeza7d2string1437z00,
		BGl_z62makezd2stringzd2ptrzd2nullzb0zz__foreignz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzd2eqzf3zd2envzf3zz__foreignz00,
		BgL_bgl_za762foreignza7d2eqza71438za7,
		BGl_z62foreignzd2eqzf3z43zz__foreignz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_voidza2zd2nullzf3zd2envz51zz__foreignz00,
		BgL_bgl_za762voidza7a2za7d2nul1439za7,
		BGl_z62voidza2zd2nullzf3ze1zz__foreignz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzd2nullzf3zd2envzf3zz__foreignz00,
		BgL_bgl_za762foreignza7d2nul1440z00,
		BGl_z62foreignzd2nullzf3z43zz__foreignz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__foreignz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long
		BgL_checksumz00_1044, char *BgL_fromz00_1045)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__foreignz00))
				{
					BGl_requirezd2initializa7ationz75zz__foreignz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__foreignz00();
					return BGl_importedzd2moduleszd2initz00zz__foreignz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__foreignz00()
	{
		{	/* Llib/foreign.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* foreign? */
	BGL_EXPORTED_DEF bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t BgL_objz00_3)
	{
		{	/* Llib/foreign.scm 91 */
			return FOREIGNP(BgL_objz00_3);
		}

	}



/* &foreign? */
	obj_t BGl_z62foreignzf3z91zz__foreignz00(obj_t BgL_envz00_1025,
		obj_t BgL_objz00_1026)
	{
		{	/* Llib/foreign.scm 91 */
			return BBOOL(BGl_foreignzf3zf3zz__foreignz00(BgL_objz00_1026));
		}

	}



/* foreign-eq? */
	BGL_EXPORTED_DEF bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t
		BgL_o1z00_4, obj_t BgL_o2z00_5)
	{
		{	/* Llib/foreign.scm 97 */
			return FOREIGN_EQP(BgL_o1z00_4, BgL_o2z00_5);
		}

	}



/* &foreign-eq? */
	obj_t BGl_z62foreignzd2eqzf3z43zz__foreignz00(obj_t BgL_envz00_1027,
		obj_t BgL_o1z00_1028, obj_t BgL_o2z00_1029)
	{
		{	/* Llib/foreign.scm 97 */
			return
				BBOOL(BGl_foreignzd2eqzf3z21zz__foreignz00(BgL_o1z00_1028,
					BgL_o2z00_1029));
		}

	}



/* foreign-null? */
	BGL_EXPORTED_DEF bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t
		BgL_objz00_6)
	{
		{	/* Llib/foreign.scm 103 */
			if (FOREIGNP(BgL_objz00_6))
				{	/* Llib/foreign.scm 104 */
					return FOREIGN_NULLP(BgL_objz00_6);
				}
			else
				{	/* Llib/foreign.scm 104 */
					return
						CBOOL(BGl_errorz00zz__errorz00(BGl_string1417z00zz__foreignz00,
							BGl_string1418z00zz__foreignz00, BgL_objz00_6));
				}
		}

	}



/* &foreign-null? */
	obj_t BGl_z62foreignzd2nullzf3z43zz__foreignz00(obj_t BgL_envz00_1030,
		obj_t BgL_objz00_1031)
	{
		{	/* Llib/foreign.scm 103 */
			return BBOOL(BGl_foreignzd2nullzf3z21zz__foreignz00(BgL_objz00_1031));
		}

	}



/* string-ptr-null? */
	BGL_EXPORTED_DEF bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char
		*BgL_objz00_7)
	{
		{	/* Llib/foreign.scm 111 */
			return STRING_PTR_NULL(BgL_objz00_7);
		}

	}



/* &string-ptr-null? */
	obj_t BGl_z62stringzd2ptrzd2nullzf3z91zz__foreignz00(obj_t BgL_envz00_1032,
		obj_t BgL_objz00_1033)
	{
		{	/* Llib/foreign.scm 111 */
			{	/* Llib/foreign.scm 112 */
				bool_t BgL_tmpz00_1066;

				{	/* Llib/foreign.scm 112 */
					char *BgL_auxz00_1067;

					{	/* Llib/foreign.scm 112 */
						obj_t BgL_tmpz00_1068;

						if (STRINGP(BgL_objz00_1033))
							{	/* Llib/foreign.scm 112 */
								BgL_tmpz00_1068 = BgL_objz00_1033;
							}
						else
							{
								obj_t BgL_auxz00_1071;

								BgL_auxz00_1071 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1419z00zz__foreignz00, BINT(((long) 4854)),
									BGl_string1420z00zz__foreignz00,
									BGl_string1421z00zz__foreignz00, BgL_objz00_1033);
								FAILURE(BgL_auxz00_1071, BFALSE, BFALSE);
							}
						BgL_auxz00_1067 = BSTRING_TO_STRING(BgL_tmpz00_1068);
					}
					BgL_tmpz00_1066 =
						BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(BgL_auxz00_1067);
				}
				return BBOOL(BgL_tmpz00_1066);
			}
		}

	}



/* obj->cobj */
	BGL_EXPORTED_DEF long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t BgL_objz00_8)
	{
		{	/* Llib/foreign.scm 117 */
			return obj_to_cobj(BgL_objz00_8);
		}

	}



/* &obj->cobj */
	obj_t BGl_z62objzd2ze3cobjz53zz__foreignz00(obj_t BgL_envz00_1034,
		obj_t BgL_objz00_1035)
	{
		{	/* Llib/foreign.scm 117 */
			return (obj_t) (BGl_objzd2ze3cobjz31zz__foreignz00(BgL_objz00_1035));
		}

	}



/* void*-null? */
	BGL_EXPORTED_DEF bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void
		*BgL_objz00_9)
	{
		{	/* Llib/foreign.scm 123 */
			return FOREIGN_PTR_NULL(BgL_objz00_9);
		}

	}



/* &void*-null? */
	obj_t BGl_z62voidza2zd2nullzf3ze1zz__foreignz00(obj_t BgL_envz00_1036,
		obj_t BgL_objz00_1037)
	{
		{	/* Llib/foreign.scm 123 */
			{	/* Llib/foreign.scm 124 */
				bool_t BgL_tmpz00_1082;

				{	/* Llib/foreign.scm 124 */
					void *BgL_auxz00_1083;

					if (FOREIGNP(BgL_objz00_1037))
						{	/* Llib/foreign.scm 124 */
							BgL_auxz00_1083 = FOREIGN_TO_COBJ(BgL_objz00_1037);
						}
					else
						{
							obj_t BgL_auxz00_1087;

							BgL_auxz00_1087 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1419z00zz__foreignz00,
								BINT(((long) 5421)), BGl_string1422z00zz__foreignz00,
								BGl_string1423z00zz__foreignz00, BgL_objz00_1037);
							FAILURE(BgL_auxz00_1087, BFALSE, BFALSE);
						}
					BgL_tmpz00_1082 =
						BGl_voidza2zd2nullzf3z83zz__foreignz00(BgL_auxz00_1083);
				}
				return BBOOL(BgL_tmpz00_1082);
			}
		}

	}



/* make-string-ptr-null */
	BGL_EXPORTED_DEF char *BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00()
	{
		{	/* Llib/foreign.scm 129 */
			return (0L);
		}

	}



/* &make-string-ptr-null */
	obj_t BGl_z62makezd2stringzd2ptrzd2nullzb0zz__foreignz00(obj_t
		BgL_envz00_1038)
	{
		{	/* Llib/foreign.scm 129 */
			return
				string_to_bstring(BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00());
		}

	}



/* make-void*-null */
	BGL_EXPORTED_DEF void *BGl_makezd2voidza2zd2nullza2zz__foreignz00()
	{
		{	/* Llib/foreign.scm 135 */
			return (0L);
		}

	}



/* &make-void*-null */
	obj_t BGl_z62makezd2voidza2zd2nullzc0zz__foreignz00(obj_t BgL_envz00_1039)
	{
		{	/* Llib/foreign.scm 135 */
			return void_star_to_obj(BGl_makezd2voidza2zd2nullza2zz__foreignz00());
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00()
	{
		{	/* Llib/foreign.scm 18 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1424z00zz__foreignz00));
		}

	}

#ifdef __cplusplus
}
#endif
