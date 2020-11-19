/*===========================================================================*/
/*   (Tools/license.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/license.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zztools_licensez00();
	static obj_t BGl_methodzd2initzd2zztools_licensez00();
	static obj_t BGl_gczd2rootszd2initz00zztools_licensez00();
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2licensezd2zztools_licensez00();
	static obj_t BGl_requirezd2initializa7ationz75zztools_licensez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztools_licensez00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztools_licensez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_licensez00();
	static obj_t BGl_z62bigloozd2licensezb0zztools_licensez00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2licensezd2envz00zztools_licensez00,
		BgL_bgl_za762biglooza7d2lice1016z00,
		BGl_z62bigloozd2licensezb0zztools_licensez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1015z00zztools_licensez00,
		BgL_bgl_string1015za700za7za7t1017za7,
		" ---------------------------------------------------------------------\n    A practical implementation for the Scheme programming language   \n                                                                     \n                                    ,--^,                            \n                              _ ___/ /|/                             \n                          ,;'( )__, ) '                              \n                         ;;  //   L__.                               \n                         '      /  '                               \n                              ^   ^                                  \n                                                                     \n               Copyright (c) 1992 - 2020 Manuel Serrano\n                http://www.inria.fr/indes/fp/Bigloo                                                                                               \n     Bug descriptions, user reports, comments or suggestions are      \n     welcome. Send them to            "
		"                               \n       https://github.com/manuel-serrano/bigloo\n       \n   This program is free software; you can redistribute it and/or modify\n   it under the terms of the GNU General Public License as published by \n   the Free Software Foundation; either version 2 of the License, or \n   (at your option) any later version. More precisely,\n\n      - The compiler and the tools are distributed under the terms of the\n      GNU General Public License.\n\n      - The Bigloo run-time system and the libraries are distributed under \n      the terms of the GNU Library General Public License. The source code\n      of the Bigloo runtime system is located in the ./runtime directory.\n      The source code of the FairThreads library is located in the\n      ./fthread directory.\n\n   This program is distributed in the hope that it will be useful,   \n   but WITHOUT ANY WARRANTY; without even the implied warranty of    \n   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     \n   GNU"
		" General Public License for more details.                      \n                                                                     \n   You should have received a copy of the GNU General Public         \n   License along with this program; if not, write to the Free        \n   Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,   \n   MA 02111-1307, USA.                                               \n--------------------------------------------------------------------- ",
		2499);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zztools_licensez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_licensez00(long
		BgL_checksumz00_12, char *BgL_fromz00_13)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_licensez00))
				{
					BGl_requirezd2initializa7ationz75zztools_licensez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_licensez00();
					BGl_libraryzd2moduleszd2initz00zztools_licensez00();
					return BGl_methodzd2initzd2zztools_licensez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_licensez00()
	{
		{	/* Tools/license.scm 2 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"tools_license");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_licensez00()
	{
		{	/* Tools/license.scm 2 */
			return bgl_gc_roots_register();
		}

	}



/* bigloo-license */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2licensezd2zztools_licensez00()
	{
		{	/* Tools/license.scm 4 */
			return BGl_string1015z00zztools_licensez00;
		}

	}



/* &bigloo-license */
	obj_t BGl_z62bigloozd2licensezb0zztools_licensez00(obj_t BgL_envz00_11)
	{
		{	/* Tools/license.scm 4 */
			return BGl_bigloozd2licensezd2zztools_licensez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_licensez00()
	{
		{	/* Tools/license.scm 2 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_licensez00()
	{
		{	/* Tools/license.scm 2 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_licensez00()
	{
		{	/* Tools/license.scm 2 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
