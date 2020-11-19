/*===========================================================================*/
/*   (Engine/param.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/param.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2additionalzd2tracesza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2synczd2profilingza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2pairzd2quotezd2maxzd2lengthza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31031ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31104ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2styleza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2stripza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2sawzd2spillza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2compilerzd2stackzd2debugzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2relativeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2splitzd2stringza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2stackablezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2passza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2gczd2customzf3za2z21zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31050ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31212ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31123ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2csharpzd2suffixza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2restzd2argsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2cfazf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2peepholeza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62addzd2doczd2variablez12z70zzengine_paramz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2returnzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31230ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31052ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31125ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2sawza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31054ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31217ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31128ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31039ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2startupzd2fileza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31056ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_appendzd221011zd2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t
		BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ccza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04za2prezd2processorza2za31251ze3z37zzengine_paramz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31074ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31058ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2ozd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2jvmzd2constructorzd2inliningza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2libraryza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2gczd2libza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cflagsza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cflagszd2optimza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2sawzd2bbvzf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2verboseza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2catchza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2includezd2multipleza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31079ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2initflowzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31096ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2reallocationzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2dlopenzd2initzd2gcza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2debugza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2mcozd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00
		= BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31187ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2warningzd2defaultzd2slotzd2valueza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cflagszd2profza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31293ze3ze5zzengine_paramz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2synczd2failsafezf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zzengine_paramz00();
	static obj_t
		BGl_z62reinitializa7ezd2bigloozd2variablesz12zd7zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2moveza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2extendzd2entryza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bmemzd2profilingza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62addzd2updaterz12za2zzengine_paramz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2namezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_za2optimzd2jvmza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_z62appendzd221011zb0zzengine_paramz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2applyzd2trackingzf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2debugzd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2stdcza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2envza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2dlopenzd2initza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2userzd2headerza2z00zzengine_paramz00 =
		BUNSPEC;
	extern obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2debugza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2purifyza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2garbagezd2collectorza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31110ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2versionza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2warningzd2typezd2errorza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2inliningza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2libzd2srczd2dirza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2javaza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2cfazd2pairzf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2destza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2helloza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2integratezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2emailza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31202ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2taggedzd2fxopzf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2czd2userzd2footza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2tmpzd2destza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2isazf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2uncellzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzengine_paramz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2locationzd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31060ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31117ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2shellza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31029ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2jvmzd2branchza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2keyzd2shapezf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2autozd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_evalzd2initzd2zzengine_paramz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31209ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2inliningzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2cmdzd2nameza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2warningzd2typesza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31064ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31048ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2modulezd2shapezf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31170ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2shellza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2variableszd2usagez00zzengine_paramz00(bool_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2classpathza2zd2zzengine_paramz00 =
		BUNSPEC;
	extern obj_t BGl_bigloozd2datezd2zztools_datez00();
	BGL_EXPORTED_DEF obj_t BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2urlza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31156ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2inliningzf3za2zf3zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31173ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31247ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_za2paramzd2updatersza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2structza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31191ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2styleza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31176ze3ze5zzengine_paramz00(obj_t);
	BGL_IMPORT bool_t bigloo_string_lt(obj_t, obj_t);
	static obj_t BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_IMPORT obj_t BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2evalzd2optionsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2heapzd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_datez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	BGL_EXPORTED_DEF obj_t BGl_za2profilezd2libraryza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2tracezd2nameza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2argsza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2withzd2filesza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2tracezd2writezd2lengthza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31195ze3ze5zzengine_paramz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31179ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2libza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2heapza2zd2zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_paramz00();
	BGL_EXPORTED_DEF obj_t BGl_za2prezd2processorza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2objzd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_paramz00();
	static obj_t BGl_z62bigloozd2variableszd2usagez62zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2srczd2suffixza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2indentza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cflagszd2rpathza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31198ze3ze5zzengine_paramz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2interpreterza2z00zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2arithmeticzd2genericityza2zd2zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2unsafezd2evalza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2compilerzd2typezd2debugzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00 =
		BUNSPEC;
	extern obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00(obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2sawzd2registerzd2allocationzd2onexpressionzf3za2z21zzengine_paramz00
		= BUNSPEC;
	static obj_t
		BGl_z62zc3z04za2inliningzd2kfactorza21218ze3z94zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2atomzd2inliningzf3za2zf3zzengine_paramz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00
		= BUNSPEC;
	BGL_EXPORTED_DEF obj_t
		BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2readerza2z00zzengine_paramz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31100ze3ze5zzengine_paramz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2includezd2foreignza2zd2zzengine_paramz00 =
		BUNSPEC;
	static obj_t
		BGl_z62zc3z04za2inliningzd2reducezd2k1219ze3ze4zzengine_paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2optimzd2cfazd2forcezd2loosezd2localzd2functionzf3za2z21zzengine_paramz00
		= BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31102ze3ze5zzengine_paramz00(obj_t);
	static obj_t __cnst[280];


	   
		 
		DEFINE_STRING(BGl_string1401z00zzengine_paramz00,
		BgL_bgl_string1401za700za7za7e1628za7, "The C linker -o option", 22);
	      DEFINE_STRING(BGl_string1403z00zzengine_paramz00,
		BgL_bgl_string1403za700za7za7e1629za7, "The C linker debugging option", 29);
	      DEFINE_STRING(BGl_string1405z00zzengine_paramz00,
		BgL_bgl_string1405za700za7za7e1630za7, "The C linker optimization flags",
		31);
	      DEFINE_STRING(BGl_string1407z00zzengine_paramz00,
		BgL_bgl_string1407za700za7za7e1631za7, "ld post options", 15);
	      DEFINE_STRING(BGl_string1408z00zzengine_paramz00,
		BgL_bgl_string1408za700za7za7e1632za7,
		"Use mv instead of -o when C compiling", 37);
	      DEFINE_STRING(BGl_string1409z00zzengine_paramz00,
		BgL_bgl_string1409za700za7za7e1633za7,
		"Relative or absolute path names for libraries", 45);
	      DEFINE_STRING(BGl_string1410z00zzengine_paramz00,
		BgL_bgl_string1410za700za7za7e1634za7, "Shall we strip the executable?",
		30);
	      DEFINE_STRING(BGl_string1411z00zzengine_paramz00,
		BgL_bgl_string1411za700za7za7e1635za7, "BIGLOOLIB", 9);
	      DEFINE_STRING(BGl_string1412z00zzengine_paramz00,
		BgL_bgl_string1412za700za7za7e1636za7, ".", 1);
	      DEFINE_STRING(BGl_string1413z00zzengine_paramz00,
		BgL_bgl_string1413za700za7za7e1637za7, "The lib dir path", 16);
	      DEFINE_STRING(BGl_string1415z00zzengine_paramz00,
		BgL_bgl_string1415za700za7za7e1638za7, "Depreacted, don't use", 21);
	      DEFINE_STRING(BGl_string1418z00zzengine_paramz00,
		BgL_bgl_string1418za700za7za7e1639za7, "runtime", 7);
	      DEFINE_STRING(BGl_string1420z00zzengine_paramz00,
		BgL_bgl_string1420za700za7za7e1640za7, "The Bigloo library", 18);
	      DEFINE_STRING(BGl_string1421z00zzengine_paramz00,
		BgL_bgl_string1421za700za7za7e1641za7, "The Gc library", 14);
	      DEFINE_STRING(BGl_string1423z00zzengine_paramz00,
		BgL_bgl_string1423za700za7za7e1642za7, "Are we using a custom GC library?",
		33);
	      DEFINE_STRING(BGl_string1425z00zzengine_paramz00,
		BgL_bgl_string1425za700za7za7e1643za7, "Are we using a multi-threaded GC?",
		33);
	      DEFINE_STRING(BGl_string1426z00zzengine_paramz00,
		BgL_bgl_string1426za700za7za7e1644za7,
		"Force GC roots registration for global variables (for experts only)", 67);
	      DEFINE_STRING(BGl_string1427z00zzengine_paramz00,
		BgL_bgl_string1427za700za7za7e1645za7,
		"Do we have the bigloo-abort function in executables?", 52);
	      DEFINE_STRING(BGl_string1429z00zzengine_paramz00,
		BgL_bgl_string1429za700za7za7e1646za7,
		"Do we use the static Bigloo library", 35);
	      DEFINE_STRING(BGl_string1430z00zzengine_paramz00,
		BgL_bgl_string1430za700za7za7e1647za7,
		"Do we use the static version of all Bigloo libraries?", 53);
	      DEFINE_STRING(BGl_string1431z00zzengine_paramz00,
		BgL_bgl_string1431za700za7za7e1648za7,
		"Do we include the additional user libraries twice?", 50);
	      DEFINE_STRING(BGl_string1432z00zzengine_paramz00,
		BgL_bgl_string1432za700za7za7e1649za7, "The user extra C libraries", 26);
	extern obj_t BGl_stringza2zd2ze3stringzd2envz41zztools_miscz00;
	   
		 
		DEFINE_STRING(BGl_string1434z00zzengine_paramz00,
		BgL_bgl_string1434za700za7za7e1650za7, "The user extra Bigloo libraries",
		31);
	      DEFINE_STRING(BGl_string1435z00zzengine_paramz00,
		BgL_bgl_string1435za700za7za7e1651za7,
		"A list of C functions to be called when starting the application", 64);
	      DEFINE_STRING(BGl_string1436z00zzengine_paramz00,
		BgL_bgl_string1436za700za7za7e1652za7, "The user extra Bigloo Zip files",
		31);
	      DEFINE_STRING(BGl_string1438z00zzengine_paramz00,
		BgL_bgl_string1438za700za7za7e1653za7,
		"Enable/disable multiple inclusion of same file", 46);
	      DEFINE_STRING(BGl_string1439z00zzengine_paramz00,
		BgL_bgl_string1439za700za7za7e1654za7, "bigloo.h", 8);
	extern obj_t BGl_replacez12zd2envzc0zztools_miscz00;
	   
		 
		DEFINE_STRING(BGl_string1600z00zzengine_paramz00,
		BgL_bgl_string1600za700za7za7e1655za7,
		"Enable/disable saw basic-blocks versionning", 43);
	      DEFINE_STRING(BGl_string1601z00zzengine_paramz00,
		BgL_bgl_string1601za700za7za7e1656za7,
		"Do we apply the self-global-tail-call stage?", 44);
	      DEFINE_STRING(BGl_string1602z00zzengine_paramz00,
		BgL_bgl_string1602za700za7za7e1657za7,
		"A user variable to store dynamic command line options", 53);
	      DEFINE_STRING(BGl_string1440z00zzengine_paramz00,
		BgL_bgl_string1440za700za7za7e1658za7, "The C included files", 20);
	      DEFINE_STRING(BGl_string1603z00zzengine_paramz00,
		BgL_bgl_string1603za700za7za7e1659za7, "If true, allow type redefinitions",
		33);
	      DEFINE_STRING(BGl_string1442z00zzengine_paramz00,
		BgL_bgl_string1442za700za7za7e1660za7, "The additional C included files",
		31);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1357z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1661za7,
		BGl_z62zc3z04anonymousza31029ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1605z00zzengine_paramz00,
		BgL_bgl_string1605za700za7za7e1662za7,
		"An optional function that pre-processes the source file", 55);
	      DEFINE_STRING(BGl_string1443z00zzengine_paramz00,
		BgL_bgl_string1443za700za7za7e1663za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string1606z00zzengine_paramz00,
		BgL_bgl_string1606za700za7za7e1664za7, "The load path", 13);
	      DEFINE_STRING(BGl_string1444z00zzengine_paramz00,
		BgL_bgl_string1444za700za7za7e1665za7, "The Bigloo heap base name", 25);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1359z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1666za7,
		BGl_z62zc3z04anonymousza31031ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1607z00zzengine_paramz00,
		BgL_bgl_string1607za700za7za7e1667za7, "The user specific compilation pass",
		34);
	      DEFINE_STRING(BGl_string1445z00zzengine_paramz00,
		BgL_bgl_string1445za700za7za7e1668za7, ".heap", 5);
	      DEFINE_STRING(BGl_string1608z00zzengine_paramz00,
		BgL_bgl_string1608za700za7za7e1669za7,
		"   All the Bigloo control variables can be changed from the", 59);
	      DEFINE_STRING(BGl_string1446z00zzengine_paramz00,
		BgL_bgl_string1446za700za7za7e1670za7, "The Bigloo heap file name", 25);
	      DEFINE_STRING(BGl_string1609z00zzengine_paramz00,
		BgL_bgl_string1609za700za7za7e1671za7,
		"   interpreter, by the means of the `-eval' option, or using", 60);
	      DEFINE_STRING(BGl_string1448z00zzengine_paramz00,
		BgL_bgl_string1448za700za7za7e1672za7, "The library the heap belongs to",
		31);
	      DEFINE_STRING(BGl_string1449z00zzengine_paramz00,
		BgL_bgl_string1449za700za7za7e1673za7, ".jheap", 6);
	      DEFINE_STRING(BGl_string1610z00zzengine_paramz00,
		BgL_bgl_string1610za700za7za7e1674za7,
		"   the module clause `option'. For instance the option", 54);
	      DEFINE_STRING(BGl_string1611z00zzengine_paramz00,
		BgL_bgl_string1611za700za7za7e1675za7,
		"   \"-eval '(set! *strip* #t)'\" will set the variable", 52);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1364z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1676za7,
		BGl_z62zc3z04anonymousza31039ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1612z00zzengine_paramz00,
		BgL_bgl_string1612za700za7za7e1677za7, "   `*strip*' to the value `#t'.",
		31);
	      DEFINE_STRING(BGl_string1450z00zzengine_paramz00,
		BgL_bgl_string1450za700za7za7e1678za7,
		"The Bigloo heap file name for the JVM backend", 45);
	      DEFINE_STRING(BGl_string1613z00zzengine_paramz00,
		BgL_bgl_string1613za700za7za7e1679za7, "   These variables are:", 23);
	      DEFINE_STRING(BGl_string1452z00zzengine_paramz00,
		BgL_bgl_string1452za700za7za7e1680za7, "The name of the heap to be dumped",
		33);
	      DEFINE_STRING(BGl_string1615z00zzengine_paramz00,
		BgL_bgl_string1615za700za7za7e1681za7, "   - ", 5);
	      DEFINE_STRING(BGl_string1453z00zzengine_paramz00,
		BgL_bgl_string1453za700za7za7e1682za7,
		"The identifier of the Jlib foreign class", 40);
	      DEFINE_STRING(BGl_string1616z00zzengine_paramz00,
		BgL_bgl_string1616za700za7za7e1683za7, " : ", 3);
	      DEFINE_STRING(BGl_string1454z00zzengine_paramz00,
		BgL_bgl_string1454za700za7za7e1684za7, "bigloo.foreign", 14);
	      DEFINE_STRING(BGl_string1617z00zzengine_paramz00,
		BgL_bgl_string1617za700za7za7e1685za7, "     ", 5);
	      DEFINE_STRING(BGl_string1455z00zzengine_paramz00,
		BgL_bgl_string1455za700za7za7e1686za7, "The name of the Jlib foreign class",
		34);
	      DEFINE_STRING(BGl_string1618z00zzengine_paramz00,
		BgL_bgl_string1618za700za7za7e1687za7, "     default: ", 14);
	      DEFINE_STRING(BGl_string1456z00zzengine_paramz00,
		BgL_bgl_string1456za700za7za7e1688za7,
		"A name of an additional heap file name to be build", 50);
	      DEFINE_STRING(BGl_string1619z00zzengine_paramz00,
		BgL_bgl_string1619za700za7za7e1689za7, " [", 2);
	      DEFINE_STRING(BGl_string1457z00zzengine_paramz00,
		BgL_bgl_string1457za700za7za7e1690za7,
		"A list of Bigloo additional heap file name", 42);
	      DEFINE_STRING(BGl_string1458z00zzengine_paramz00,
		BgL_bgl_string1458za700za7za7e1691za7, "The name of the C beautifier", 28);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1531z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1692za7,
		BGl_z62zc3z04anonymousza31217ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1370z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1693za7,
		BGl_z62zc3z04anonymousza31048ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1620z00zzengine_paramz00,
		BgL_bgl_string1620za700za7za7e1694za7, "]", 1);
	      DEFINE_STRING(BGl_string1621z00zzengine_paramz00,
		BgL_bgl_string1621za700za7za7e1695za7, "engine_param", 12);
	      DEFINE_STRING(BGl_string1622z00zzengine_paramz00,
		BgL_bgl_string1622za700za7za7e1696za7, "Engine/param.scm", 16);
	      DEFINE_STRING(BGl_string1460z00zzengine_paramz00,
		BgL_bgl_string1460za700za7za7e1697za7, "Debugging level", 15);
	      DEFINE_STRING(BGl_string1623z00zzengine_paramz00,
		BgL_bgl_string1623za700za7za7e1698za7,
		"*additional-traces* *old-load-path* *builtin-allocators* epairify* uncygdrive *rest-args* add-updater! append-21011 *typenode-shape?* *name-shape?* *bigloo-author* *typename-shape?* epairify-rec *bigloo-date* string*->string *early-with-modules* *user-shape?* add-doc-variable! *arithmetic-overflow* reinitialize-bigloo-variables! string-split-char *access-shape?* *bigloo-email* epairify *tmp-dest* *type-shape?* *location-shape?* *key-shape?* *bigloo-cmd-name* *module-shape?* bigloo-variables-usage bigloo-date *bigloo-url* epairify-propagate-loc *param-updaters* replace! *bigloo-variables* *bigloo-args* *arithmetic-genericity* build-path-from-shell-variable epairify-propagate *bdb-debug-no-line-directives?* *user-pass* *load-path* *pre-processor* *allow-type-redefinition* *eval-options* ((\"CONS\" . \"make_pair\") (\"%STRING->SYMBOL\" . \"make_symbol\") (\"%MAKE-STRING\" . \"string_to_bstring_len\") (\"%MAKE-OUTPUT-PORT\" . \"bgl_make_output_port\") (\"%MAKE-INPUT-PORT\" . \"bgl_make_input_port\") (\"%MAKE-ERRO"
		"R-PORT\" . \"make_error_port\")) *global-tail-call?* *saw-bbv?* *saw-spill* *saw-no-register-allocation-functions* *saw-register-allocation-functions* *saw-register-allocation-max-size* *saw-register-allocation-onexpression?* *saw-register-allocation?* *saw-register-reallocation?* *saw* *target-language* default-back-end *reader* plain *user-heap-size* *ast-case-sensitive* *auto-mode* ((\"ml\" . \"caml\") (\"mli\" . \"caml\") (\"oon\" . \"meroon\") (\"snow\" . \"snow\") (\"spi\" . \"pkgcomp\")) *mco-include-path* (\".\") *mco-suffix* (\"mco\") *obj-suffix* *csharp-suffix* (\"cs\") *c-suffix* (\"c\") *src-suffix* (\"scm\" \"bgl\") *extend-entry* *optim-uncell?* *optim-stackable?* *optim-tagged-fxop?* *optim-return-goto?* *optim-return?* *inlining-reduce-kfactor* *inlining-kfactor* *user-inlining?* *inlining?* *optim-reduce-beta?* *optim-sync-failsafe?* *optim-initflow?* *optim-dataflow-types?* *optim-dataflow-for-errors?* *optim-dataflow?* *optim-integrate?* *optim-cfa-force-loose-local-function?* *optim-cfa-u"
		"nbox-closure-args* *optim-cfa-pair-quote-max-length* *optim-cfa-pair?* *optim-cfa-apply-tracking?* *optim-cfa-free-var-tracking?* *optim-cfa-flonum-arithmetic?* *optim-cfa-fixnum-arithmetic?* *optim-cfa?* *optim-isa?* *optim-jvm* *jvm-env* *purify* *optim-symbol-case* *optim-jvm-fasteq* *optim-jvm-branch* *optim-jvm-peephole* *optim-jvm-constructor-inlining* *optim-jvm-inlining* *optim-O-macro?* *optim-atom-inlining?* *optim-loop-inlining?* *optim-unroll-loop?* *optim* *trace-write-length* *trace-name* *max-c-foreign-arity* *c-split-string* c-string-split *max-c-token-length* *dlopen-init-gc* *dlopen-init* *object-init-mode* stagged *init-mode* read *lib-mode* *shared-cnst?* *profile-library* *warning-default-slot-value* *warning-type-error* *warning-types* *warning-overriden-variables* *warning-overriden-slots* *unsafe-heap* *unsafe-eval* *unsafe-library* *unsafe-version* *unsafe-struct* *unsafe-range* *unsafe-arity* *unsafe-type* *garbage-collector* boehm *module-checksum-object?* *jvm-cinit-module* *jvm-ca"
		"tch* *jvm-directory* *jvm-jarpath* *jvm-path-separator* *jvm-mainclass* *jvm-classpath* *jvm-bigloo-classpath* *jvm-options* *jvm-java* java *jvm-shell* java-shell *jvm-jar?* *pass* ld *auto-link-main* *call/cc?* *startup-file* *interpreter* *with-files* *c-files* *o-files* *qualified-type-file-default* *qualified-type-file* *access-file-default* *access-files* *prof-table-name* *profile-mode* *bdb-debug* *jvm-debug* *c-user-foot* *c-user-header* *c-debug-option* c-compiler-debug-option *c-debug-lines-info* *c-debug* *debug-module* *sync-profiling* *bmem-profiling* *compiler-stack-debug?* *compiler-type-debug?* *compiler-sharing-debug?* *error-localization* *compiler-debug-trace* *compiler-debug* *indent* c-beautifier *additional-heap-names* *additional-heap-name* *jvm-foreign-class-name* *jvm-foreign-class-id* foreign *heap-dump-names* *heap-jvm-name* *heap-library* *heap-name* *heap-base-name* *additional-include-foreign* *include-foreign* *include-multiple* *additional-bigloo-zips* *bigloo-libraries-c-setu"
		"p* *additional-bigloo-libraries* *bigloo-user-lib* user-libraries *double-ld-libs?* *static-all-bigloo?* *static-bigloo?* *bigloo-abort?* have-bigloo-abort *gc-force-register-roots?* *multi-threaded-gc?* *gc-custom?* *gc-lib* gc-lib gc-custom *bigloo-lib* bigloo *lib-src-dir* *ld-library-dir* *default-lib-dir* *lib-dir* *strip* *ld-relative* *cc-move* *ld-post-options* *ld-optim-flags* c-linker-optim-flags *ld-debug-option* c-linker-debug-option *ld-o-option* c-linker-o-option *ld-options* c-linker-flags *ld-style* c-linker-style *rm-tmp-files* *cc-options* (\"\") *stdc* *c-object-file-extension* c-object-file-extension *cc-o-option* c-compiler-o-option *cflags-rpath* library-directory *cflags-prof* c-prof-flag *cflags-optim* c-compiler-optim-flag *cflags* c-flags *cc* c-compiler *cc-style* c-compiler-style *shell* shell *dest* *src-files* *hello* *verbose* *bigloo-licensing?* *bigloo-tmp* nothing-yet *bigloo-name* *bigloo-specific-version* specific-version *bigloo-version* release-number ",
		5042);
	      DEFINE_STRING(BGl_string1461z00zzengine_paramz00,
		BgL_bgl_string1461za700za7za7e1699za7, "Debugging trace level", 21);
	      DEFINE_STRING(BGl_string1462z00zzengine_paramz00,
		BgL_bgl_string1462za700za7za7e1700za7,
		"Localize error calls in the source code", 39);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1377z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1701za7,
		BGl_z62zc3z04anonymousza31050ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1463z00zzengine_paramz00,
		BgL_bgl_string1463za700za7za7e1702za7, "Compiler self sharing debug", 27);
	      DEFINE_STRING(BGl_string1464z00zzengine_paramz00,
		BgL_bgl_string1464za700za7za7e1703za7, "Compiler self type debug", 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1379z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1704za7,
		BGl_z62zc3z04anonymousza31052ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1465z00zzengine_paramz00,
		BgL_bgl_string1465za700za7za7e1705za7, "Compiler self stack trace debug",
		31);
	      DEFINE_STRING(BGl_string1466z00zzengine_paramz00,
		BgL_bgl_string1466za700za7za7e1706za7, "Instrument code for bmem profiling",
		34);
	      DEFINE_STRING(BGl_string1467z00zzengine_paramz00,
		BgL_bgl_string1467za700za7za7e1707za7,
		"Instrument code for synchronize profiling", 41);
	      DEFINE_STRING(BGl_string1468z00zzengine_paramz00,
		BgL_bgl_string1468za700za7za7e1708za7, "Module initilazation debugging",
		30);
	      DEFINE_STRING(BGl_string1469z00zzengine_paramz00,
		BgL_bgl_string1469za700za7za7e1709za7, "C debugging mode?", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1381z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1710za7,
		BGl_z62zc3z04anonymousza31054ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1383z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1711za7,
		BGl_z62zc3z04anonymousza31056ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1470z00zzengine_paramz00,
		BgL_bgl_string1470za700za7za7e1712za7, "Emit # line directives", 22);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1385z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1713za7,
		BGl_z62zc3z04anonymousza31058ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1471z00zzengine_paramz00,
		BgL_bgl_string1471za700za7za7e1714za7, "cc debugging option", 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1387z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1715za7,
		BGl_z62zc3z04anonymousza31060ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1473z00zzengine_paramz00,
		BgL_bgl_string1473za700za7za7e1716za7, "C header", 8);
	      DEFINE_STRING(BGl_string1474z00zzengine_paramz00,
		BgL_bgl_string1474za700za7za7e1717za7, "C foot", 6);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1389z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1718za7,
		BGl_z62zc3z04anonymousza31064ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1475z00zzengine_paramz00,
		BgL_bgl_string1475za700za7za7e1719za7, "JVM debugging mode?", 19);
	      DEFINE_STRING(BGl_string1476z00zzengine_paramz00,
		BgL_bgl_string1476za700za7za7e1720za7, "Bdb debugging mode", 18);
	      DEFINE_STRING(BGl_string1477z00zzengine_paramz00,
		BgL_bgl_string1477za700za7za7e1721za7, "Bigloo profile mode", 19);
	      DEFINE_STRING(BGl_string1478z00zzengine_paramz00,
		BgL_bgl_string1478za700za7za7e1722za7, "bmon.out", 8);
	      DEFINE_STRING(BGl_string1479z00zzengine_paramz00,
		BgL_bgl_string1479za700za7za7e1723za7, "Bprof translation table file name",
		33);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1391z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1724za7,
		BGl_z62zc3z04anonymousza31074ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1393z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1725za7,
		BGl_z62zc3z04anonymousza31079ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1480z00zzengine_paramz00,
		BgL_bgl_string1480za700za7za7e1726za7, "The access file names", 21);
	      DEFINE_STRING(BGl_string1481z00zzengine_paramz00,
		BgL_bgl_string1481za700za7za7e1727za7, ".afile", 6);
	      DEFINE_STRING(BGl_string1482z00zzengine_paramz00,
		BgL_bgl_string1482za700za7za7e1728za7, "The default access file name", 28);
	      DEFINE_STRING(BGl_string1483z00zzengine_paramz00,
		BgL_bgl_string1483za700za7za7e1729za7,
		"The qualifed-type association file name", 39);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1398z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1730za7,
		BGl_z62zc3z04anonymousza31096ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1484z00zzengine_paramz00,
		BgL_bgl_string1484za700za7za7e1731za7, ".jfile", 6);
	      DEFINE_STRING(BGl_string1485z00zzengine_paramz00,
		BgL_bgl_string1485za700za7za7e1732za7, "The additional obect files", 26);
	      DEFINE_STRING(BGl_string1486z00zzengine_paramz00,
		BgL_bgl_string1486za700za7za7e1733za7, "The C source files", 18);
	      DEFINE_STRING(BGl_string1487z00zzengine_paramz00,
		BgL_bgl_string1487za700za7za7e1734za7, "The additional modules", 22);
	      DEFINE_STRING(BGl_string1488z00zzengine_paramz00,
		BgL_bgl_string1488za700za7za7e1735za7,
		"Shall we interprete the source file?", 36);
	      DEFINE_STRING(BGl_string1489z00zzengine_paramz00,
		BgL_bgl_string1489za700za7za7e1736za7, "A startup file for the interpreter",
		34);
	      DEFINE_STRING(BGl_string1490z00zzengine_paramz00,
		BgL_bgl_string1490za700za7za7e1737za7, "Shall we enable call/cc?", 24);
	      DEFINE_STRING(BGl_string1491z00zzengine_paramz00,
		BgL_bgl_string1491za700za7za7e1738za7,
		"Enable automatically a main generation when linking", 51);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1569z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704za7a2inli1739z00,
		BGl_z62zc3z04za2inliningzd2kfactorza21218ze3z94zzengine_paramz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1492z00zzengine_paramz00,
		BgL_bgl_string1492za700za7za7e1740za7, "Stop after the pass", 19);
	      DEFINE_STRING(BGl_string1493z00zzengine_paramz00,
		BgL_bgl_string1493za700za7za7e1741za7,
		"Enable/disable a JAR file production for the JVM back-end", 57);
	      DEFINE_STRING(BGl_string1494z00zzengine_paramz00,
		BgL_bgl_string1494za700za7za7e1742za7,
		"Shell to be used when producing JVM run scripts", 47);
	      DEFINE_STRING(BGl_string1496z00zzengine_paramz00,
		BgL_bgl_string1496za700za7za7e1743za7,
		"JVM to be used to run Java programs", 35);
	      DEFINE_STRING(BGl_string1498z00zzengine_paramz00,
		BgL_bgl_string1498za700za7za7e1744za7, "", 0);
	      DEFINE_STRING(BGl_string1499z00zzengine_paramz00,
		BgL_bgl_string1499za700za7za7e1745za7, "JVM options", 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1571z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704za7a2inli1746z00,
		BGl_z62zc3z04za2inliningzd2reducezd2k1219ze3ze4zzengine_paramz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1583z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1747za7,
		BGl_z62zc3z04anonymousza31230ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1591z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1748za7,
		BGl_z62zc3z04anonymousza31247ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_appendzd221011zd2envz00zzengine_paramz00,
		BgL_bgl_za762appendza7d221011749z00,
		BGl_z62appendzd221011zb0zzengine_paramz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_addzd2updaterz12zd2envz12zzengine_paramz00,
		BgL_bgl_za762addza7d2updater1750z00,
		BGl_z62addzd2updaterz12za2zzengine_paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2variableszd2usagezd2envzd2zzengine_paramz00,
		BgL_bgl_za762biglooza7d2vari1751z00,
		BGl_z62bigloozd2variableszd2usagez62zzengine_paramz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_epairifyzd2propagatezd2loczd2envzd2zztools_miscz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reinitializa7ezd2bigloozd2variablesz12zd2envz67zzengine_paramz00,
		BgL_bgl_za762reinitializa7a71752z00,
		BGl_z62reinitializa7ezd2bigloozd2variablesz12zd7zzengine_paramz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1400z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1753za7,
		BGl_z62zc3z04anonymousza31100ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1402z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1754za7,
		BGl_z62zc3z04anonymousza31102ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1404z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1755za7,
		BGl_z62zc3z04anonymousza31104ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1406z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1756za7,
		BGl_z62zc3z04anonymousza31110ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1414z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1757za7,
		BGl_z62zc3z04anonymousza31117ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1500z00zzengine_paramz00,
		BgL_bgl_string1500za700za7za7e1758za7, "JVM Bigloo classpath", 20);
	      DEFINE_STRING(BGl_string1501z00zzengine_paramz00,
		BgL_bgl_string1501za700za7za7e1759za7, "JVM classpath", 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1416z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1760za7,
		BGl_z62zc3z04anonymousza31123ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1502z00zzengine_paramz00,
		BgL_bgl_string1502za700za7za7e1761za7, "JVM main class", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1417z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1762za7,
		BGl_z62zc3z04anonymousza31125ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1503z00zzengine_paramz00,
		BgL_bgl_string1503za700za7za7e1763za7, "JVM jarpath", 11);
	      DEFINE_STRING(BGl_string1504z00zzengine_paramz00,
		BgL_bgl_string1504za700za7za7e1764za7, "JVM object directory", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1419z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1765za7,
		BGl_z62zc3z04anonymousza31128ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1505z00zzengine_paramz00,
		BgL_bgl_string1505za700za7za7e1766za7, "Catch internal errors", 21);
	      DEFINE_STRING(BGl_string1506z00zzengine_paramz00,
		BgL_bgl_string1506za700za7za7e1767za7,
		"Enable JVM class constructors to initiliaze bigloo modules", 58);
	      DEFINE_STRING(BGl_string1507z00zzengine_paramz00,
		BgL_bgl_string1507za700za7za7e1768za7,
		"Produce a module checksum object (.mco)", 39);
	      DEFINE_STRING(BGl_string1508z00zzengine_paramz00,
		BgL_bgl_string1508za700za7za7e1769za7, "The garbage collector", 21);
	      DEFINE_STRING(BGl_string1509z00zzengine_paramz00,
		BgL_bgl_string1509za700za7za7e1770za7, "Runtime type safety", 19);
	extern obj_t BGl_uncygdrivezd2envzd2zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1422z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1771za7,
		BGl_z62zc3z04anonymousza31156ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1424z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1772za7,
		BGl_z62zc3z04anonymousza31170ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1510z00zzengine_paramz00,
		BgL_bgl_string1510za700za7za7e1773za7, "Runtime type arity safety", 25);
	      DEFINE_STRING(BGl_string1511z00zzengine_paramz00,
		BgL_bgl_string1511za700za7za7e1774za7, "Runtime range safety", 20);
	      DEFINE_STRING(BGl_string1512z00zzengine_paramz00,
		BgL_bgl_string1512za700za7za7e1775za7, "Runtime struct range safety", 27);
	      DEFINE_STRING(BGl_string1513z00zzengine_paramz00,
		BgL_bgl_string1513za700za7za7e1776za7, "Module version safety", 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1428z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1777za7,
		BGl_z62zc3z04anonymousza31173ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1514z00zzengine_paramz00,
		BgL_bgl_string1514za700za7za7e1778za7, "Use the unsafe library version",
		30);
	      DEFINE_STRING(BGl_string1515z00zzengine_paramz00,
		BgL_bgl_string1515za700za7za7e1779za7,
		"Disable type checking for eval functions", 40);
	      DEFINE_STRING(BGl_string1516z00zzengine_paramz00,
		BgL_bgl_string1516za700za7za7e1780za7, "Disable heap version checking", 29);
	      DEFINE_STRING(BGl_string1517z00zzengine_paramz00,
		BgL_bgl_string1517za700za7za7e1781za7,
		"Set to #t to warn about virtual slot overriding", 47);
	      DEFINE_STRING(BGl_string1518z00zzengine_paramz00,
		BgL_bgl_string1518za700za7za7e1782za7,
		"Set to #t to warn about variable overriding", 43);
	      DEFINE_STRING(BGl_string1356z00zzengine_paramz00,
		BgL_bgl_string1356za700za7za7e1783za7, "The Bigloo major release number",
		31);
	      DEFINE_STRING(BGl_string1519z00zzengine_paramz00,
		BgL_bgl_string1519za700za7za7e1784za7,
		"Set to #t to warn about type checks", 35);
	      DEFINE_STRING(BGl_string1358z00zzengine_paramz00,
		BgL_bgl_string1358za700za7za7e1785za7, "The Bigloo specific version", 27);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1433z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1786za7,
		BGl_z62zc3z04anonymousza31176ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1520z00zzengine_paramz00,
		BgL_bgl_string1520za700za7za7e1787za7,
		"Set to #t to treat type warnigns as error", 41);
	      DEFINE_STRING(BGl_string1521z00zzengine_paramz00,
		BgL_bgl_string1521za700za7za7e1788za7,
		"Set to #t to warn about non-inlinable default slot values", 57);
	      DEFINE_STRING(BGl_string1522z00zzengine_paramz00,
		BgL_bgl_string1522za700za7za7e1789za7, "Use the profiled library version",
		32);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1437z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1790za7,
		BGl_z62zc3z04anonymousza31179ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1360z00zzengine_paramz00,
		BgL_bgl_string1360za700za7za7e1791za7, ")", 1);
	      DEFINE_STRING(BGl_string1523z00zzengine_paramz00,
		BgL_bgl_string1523za700za7za7e1792za7, "Shared constant compilation?", 28);
	      DEFINE_STRING(BGl_string1361z00zzengine_paramz00,
		BgL_bgl_string1361za700za7za7e1793za7, "(", 1);
	      DEFINE_STRING(BGl_string1524z00zzengine_paramz00,
		BgL_bgl_string1524za700za7za7e1794za7, "Lib-mode compilation?", 21);
	      DEFINE_STRING(BGl_string1362z00zzengine_paramz00,
		BgL_bgl_string1362za700za7za7e1795za7, "Bigloo ", 7);
	      DEFINE_STRING(BGl_string1525z00zzengine_paramz00,
		BgL_bgl_string1525za700za7za7e1796za7, "Module initialization mode", 26);
	      DEFINE_STRING(BGl_string1363z00zzengine_paramz00,
		BgL_bgl_string1363za700za7za7e1797za7, "The Bigloo name", 15);
	      DEFINE_STRING(BGl_string1526z00zzengine_paramz00,
		BgL_bgl_string1526za700za7za7e1798za7, "Object initialization mode", 26);
	      DEFINE_STRING(BGl_string1527z00zzengine_paramz00,
		BgL_bgl_string1527za700za7za7e1799za7,
		"Emit a standard Bigloo dynamic loading init entry point", 55);
	      DEFINE_STRING(BGl_string1365z00zzengine_paramz00,
		BgL_bgl_string1365za700za7za7e1800za7, "Inria -- Sophia Antipolis", 25);
	      DEFINE_STRING(BGl_string1528z00zzengine_paramz00,
		BgL_bgl_string1528za700za7za7e1801za7,
		"Emit a standard GC init call when initialization the module", 59);
	      DEFINE_STRING(BGl_string1366z00zzengine_paramz00,
		BgL_bgl_string1366za700za7za7e1802za7, "bigloo@lists-sop.inria.fr", 25);
	      DEFINE_STRING(BGl_string1529z00zzengine_paramz00,
		BgL_bgl_string1529za700za7za7e1803za7, "Max C token length", 18);
	      DEFINE_STRING(BGl_string1367z00zzengine_paramz00,
		BgL_bgl_string1367za700za7za7e1804za7,
		"http://www-sop.inria.fr/indes/fp/Bigloo", 39);
	      DEFINE_STRING(BGl_string1368z00zzengine_paramz00,
		BgL_bgl_string1368za700za7za7e1805za7, "TMPDIR", 6);
	      DEFINE_STRING(BGl_string1369z00zzengine_paramz00,
		BgL_bgl_string1369za700za7za7e1806za7, "The tmp directory name", 22);
	extern obj_t
		BGl_buildzd2pathzd2fromzd2shellzd2variablezd2envzd2zztools_miscz00;
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1441z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1807za7,
		BGl_z62zc3z04anonymousza31187ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1604z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704za7a2preza71808za7,
		BGl_z62zc3z04za2prezd2processorza2za31251ze3z37zzengine_paramz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1530z00zzengine_paramz00,
		BgL_bgl_string1530za700za7za7e1809za7, "C split long strings", 20);
	      DEFINE_STRING(BGl_string1532z00zzengine_paramz00,
		BgL_bgl_string1532za700za7za7e1810za7, "Max C function arity", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1447z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1811za7,
		BGl_z62zc3z04anonymousza31191ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1533z00zzengine_paramz00,
		BgL_bgl_string1533za700za7za7e1812za7, "trace", 5);
	      DEFINE_STRING(BGl_string1371z00zzengine_paramz00,
		BgL_bgl_string1371za700za7za7e1813za7, "Add the Bigloo license ?", 24);
	      DEFINE_STRING(BGl_string1534z00zzengine_paramz00,
		BgL_bgl_string1534za700za7za7e1814za7, "Trace file name", 15);
	      DEFINE_STRING(BGl_string1372z00zzengine_paramz00,
		BgL_bgl_string1372za700za7za7e1815za7, "The verbosity level", 19);
	      DEFINE_STRING(BGl_string1535z00zzengine_paramz00,
		BgL_bgl_string1535za700za7za7e1816za7, "Trace dumping max level", 23);
	      DEFINE_STRING(BGl_string1373z00zzengine_paramz00,
		BgL_bgl_string1373za700za7za7e1817za7, "Say hello (when verbose)", 24);
	      DEFINE_STRING(BGl_string1536z00zzengine_paramz00,
		BgL_bgl_string1536za700za7za7e1818za7, "Optimization level", 18);
	      DEFINE_STRING(BGl_string1374z00zzengine_paramz00,
		BgL_bgl_string1374za700za7za7e1819za7, "The sources files", 17);
	      DEFINE_STRING(BGl_string1537z00zzengine_paramz00,
		BgL_bgl_string1537za700za7za7e1820za7, "Loop unrolling optimization", 27);
	      DEFINE_STRING(BGl_string1375z00zzengine_paramz00,
		BgL_bgl_string1375za700za7za7e1821za7, "The target name", 15);
	      DEFINE_STRING(BGl_string1538z00zzengine_paramz00,
		BgL_bgl_string1538za700za7za7e1822za7, "Loop inlining optimization", 26);
	      DEFINE_STRING(BGl_string1376z00zzengine_paramz00,
		BgL_bgl_string1376za700za7za7e1823za7, "The shell to exec C compilations",
		32);
	      DEFINE_STRING(BGl_string1539z00zzengine_paramz00,
		BgL_bgl_string1539za700za7za7e1824za7,
		"Skip atom in inlining parameter counting", 40);
	      DEFINE_STRING(BGl_string1378z00zzengine_paramz00,
		BgL_bgl_string1378za700za7za7e1825za7, "The C compiler style", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1451z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1826za7,
		BGl_z62zc3z04anonymousza31195ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1614z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1827za7,
		BGl_z62zc3z04anonymousza31293ze3ze5zzengine_paramz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1540z00zzengine_paramz00,
		BgL_bgl_string1540za700za7za7e1828za7,
		"Enable optimization by macro-expansion", 38);
	      DEFINE_STRING(BGl_string1541z00zzengine_paramz00,
		BgL_bgl_string1541za700za7za7e1829za7, "Enable JVM inlining", 19);
	      DEFINE_STRING(BGl_string1542z00zzengine_paramz00,
		BgL_bgl_string1542za700za7za7e1830za7,
		"Enable JVM inlining for constructors", 36);
	      DEFINE_STRING(BGl_string1380z00zzengine_paramz00,
		BgL_bgl_string1380za700za7za7e1831za7, "The C compiler", 14);
	      DEFINE_STRING(BGl_string1543z00zzengine_paramz00,
		BgL_bgl_string1543za700za7za7e1832za7, "Enable JVM peephole optimization",
		32);
	      DEFINE_STRING(BGl_string1544z00zzengine_paramz00,
		BgL_bgl_string1544za700za7za7e1833za7, "Enable JVM branch tensioning", 28);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1459z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1834za7,
		BGl_z62zc3z04anonymousza31198ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1382z00zzengine_paramz00,
		BgL_bgl_string1382za700za7za7e1835za7, "The C compiler option", 21);
	      DEFINE_STRING(BGl_string1545z00zzengine_paramz00,
		BgL_bgl_string1545za700za7za7e1836za7,
		"EQ? no longer works on integers (use =FX instead)", 49);
	      DEFINE_STRING(BGl_string1546z00zzengine_paramz00,
		BgL_bgl_string1546za700za7za7e1837za7,
		"Optimize case forms descrimining on symbols only", 48);
	      DEFINE_STRING(BGl_string1384z00zzengine_paramz00,
		BgL_bgl_string1384za700za7za7e1838za7, "The C compiler optimization option",
		34);
	      DEFINE_STRING(BGl_string1547z00zzengine_paramz00,
		BgL_bgl_string1547za700za7za7e1839za7,
		"Produce byte code verifier compliant JVM code", 45);
	      DEFINE_STRING(BGl_string1548z00zzengine_paramz00,
		BgL_bgl_string1548za700za7za7e1840za7,
		"List of environment variables to be available in the compiled code", 66);
	      DEFINE_STRING(BGl_string1386z00zzengine_paramz00,
		BgL_bgl_string1386za700za7za7e1841za7, "The C compiler profiling option",
		31);
	      DEFINE_STRING(BGl_string1549z00zzengine_paramz00,
		BgL_bgl_string1549za700za7za7e1842za7,
		"Enable optimization by inlining jvm code", 40);
	      DEFINE_STRING(BGl_string1388z00zzengine_paramz00,
		BgL_bgl_string1388za700za7za7e1843za7, "The C compiler rpath option", 27);
	extern obj_t BGl_epairifyzd2envzd2zztools_miscz00;
	   
		 
		DEFINE_STRING(BGl_string1550z00zzengine_paramz00,
		BgL_bgl_string1550za700za7za7e1844za7,
		"Enable isa type tests optimization (inlining)", 45);
	extern obj_t BGl_bigloozd2datezd2envz00zztools_datez00;
	   
		 
		DEFINE_STRING(BGl_string1551z00zzengine_paramz00,
		BgL_bgl_string1551za700za7za7e1845za7, "Enable CFA", 10);
	      DEFINE_STRING(BGl_string1552z00zzengine_paramz00,
		BgL_bgl_string1552za700za7za7e1846za7,
		"Enable refined fixnum arithmetic specialization", 47);
	      DEFINE_STRING(BGl_string1390z00zzengine_paramz00,
		BgL_bgl_string1390za700za7za7e1847za7, "The C compiler -o option", 24);
	      DEFINE_STRING(BGl_string1553z00zzengine_paramz00,
		BgL_bgl_string1553za700za7za7e1848za7,
		"Enable refined flonum arithmetic specialization", 47);
	      DEFINE_STRING(BGl_string1554z00zzengine_paramz00,
		BgL_bgl_string1554za700za7za7e1849za7,
		"Enable closure free-variables specialization", 44);
	      DEFINE_STRING(BGl_string1392z00zzengine_paramz00,
		BgL_bgl_string1392za700za7za7e1850za7, "The C object file extension", 27);
	      DEFINE_STRING(BGl_string1555z00zzengine_paramz00,
		BgL_bgl_string1555za700za7za7e1851za7, "Track values across apply", 25);
	      DEFINE_STRING(BGl_string1556z00zzengine_paramz00,
		BgL_bgl_string1556za700za7za7e1852za7, "Track values across pairs", 25);
	      DEFINE_STRING(BGl_string1394z00zzengine_paramz00,
		BgL_bgl_string1394za700za7za7e1853za7, "Shall we produce ISO C?", 23);
	      DEFINE_STRING(BGl_string1557z00zzengine_paramz00,
		BgL_bgl_string1557za700za7za7e1854za7,
		"Maximum length for pair literal tracking", 40);
	      DEFINE_STRING(BGl_string1395z00zzengine_paramz00,
		BgL_bgl_string1395za700za7za7e1855za7, "cc options", 10);
	      DEFINE_STRING(BGl_string1558z00zzengine_paramz00,
		BgL_bgl_string1558za700za7za7e1856za7, "Unbox closure arguments", 23);
	      DEFINE_STRING(BGl_string1396z00zzengine_paramz00,
		BgL_bgl_string1396za700za7za7e1857za7,
		"Shall the .c and .il produced files be removed?", 47);
	      DEFINE_STRING(BGl_string1559z00zzengine_paramz00,
		BgL_bgl_string1559za700za7za7e1858za7,
		"Force loosing local function approximations (for debugging)", 59);
	      DEFINE_STRING(BGl_string1397z00zzengine_paramz00,
		BgL_bgl_string1397za700za7za7e1859za7, "ld style", 8);
	      DEFINE_STRING(BGl_string1399z00zzengine_paramz00,
		BgL_bgl_string1399za700za7za7e1860za7, "ld options", 10);
	extern obj_t BGl_stringzd2splitzd2charzd2envzd2zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1472z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1861za7,
		BGl_z62zc3z04anonymousza31202ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1560z00zzengine_paramz00,
		BgL_bgl_string1560za700za7za7e1862za7,
		"Enable function integration (closure analysis)", 46);
	      DEFINE_STRING(BGl_string1561z00zzengine_paramz00,
		BgL_bgl_string1561za700za7za7e1863za7,
		"Enable simple dataflow optimization", 35);
	      DEFINE_STRING(BGl_string1562z00zzengine_paramz00,
		BgL_bgl_string1562za700za7za7e1864za7,
		"Enable simple dataflow optimization for eliminating bad error messages",
		70);
	      DEFINE_STRING(BGl_string1563z00zzengine_paramz00,
		BgL_bgl_string1563za700za7za7e1865za7,
		"Enable dataflow optimization for types", 38);
	      DEFINE_STRING(BGl_string1564z00zzengine_paramz00,
		BgL_bgl_string1564za700za7za7e1866za7,
		"Enable initflow optimization for global variables", 49);
	      DEFINE_STRING(BGl_string1565z00zzengine_paramz00,
		BgL_bgl_string1565za700za7za7e1867za7,
		"Enable failsafe synchronize optimization", 40);
	      DEFINE_STRING(BGl_string1566z00zzengine_paramz00,
		BgL_bgl_string1566za700za7za7e1868za7, "Enable simple beta reduction", 28);
	      DEFINE_STRING(BGl_string1567z00zzengine_paramz00,
		BgL_bgl_string1567za700za7za7e1869za7, "Inlining optimization", 21);
	      DEFINE_STRING(BGl_string1568z00zzengine_paramz00,
		BgL_bgl_string1568za700za7za7e1870za7, "User inlining optimization", 26);
	      DEFINE_STRING(BGl_string1570z00zzengine_paramz00,
		BgL_bgl_string1570za700za7za7e1871za7, "Inlining growth factor", 22);
	      DEFINE_STRING(BGl_string1572z00zzengine_paramz00,
		BgL_bgl_string1572za700za7za7e1872za7, "Inlinine growth factor reductor",
		31);
	      DEFINE_STRING(BGl_string1573z00zzengine_paramz00,
		BgL_bgl_string1573za700za7za7e1873za7, "Optimize set-exit used as return",
		32);
	      DEFINE_STRING(BGl_string1574z00zzengine_paramz00,
		BgL_bgl_string1574za700za7za7e1874za7,
		"Optimize set-exit by enabling local return", 42);
	      DEFINE_STRING(BGl_string1575z00zzengine_paramz00,
		BgL_bgl_string1575za700za7za7e1875za7, "Optimize tagged fixnum operations",
		33);
	      DEFINE_STRING(BGl_string1576z00zzengine_paramz00,
		BgL_bgl_string1576za700za7za7e1876za7, "Optimize stackable allocation", 29);
	      DEFINE_STRING(BGl_string1577z00zzengine_paramz00,
		BgL_bgl_string1577za700za7za7e1877za7, "Remove useless cells", 20);
	      DEFINE_STRING(BGl_string1578z00zzengine_paramz00,
		BgL_bgl_string1578za700za7za7e1878za7, "Extend entry", 12);
	      DEFINE_STRING(BGl_string1579z00zzengine_paramz00,
		BgL_bgl_string1579za700za7za7e1879za7, "Scheme legal suffixes", 21);
	      DEFINE_STRING(BGl_string1580z00zzengine_paramz00,
		BgL_bgl_string1580za700za7za7e1880za7, "C legal suffixes", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1495z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1881za7,
		BGl_z62zc3z04anonymousza31209ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1581z00zzengine_paramz00,
		BgL_bgl_string1581za700za7za7e1882za7, "C# legal suffixes", 17);
	      DEFINE_STRING(BGl_string1582z00zzengine_paramz00,
		BgL_bgl_string1582za700za7za7e1883za7, "Object legal suffixes", 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1497z00zzengine_paramz00,
		BgL_bgl_za762za7c3za704anonymo1884za7,
		BGl_z62zc3z04anonymousza31212ze3ze5zzengine_paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1584z00zzengine_paramz00,
		BgL_bgl_string1584za700za7za7e1885za7,
		"Module checksum object legal suffixes", 37);
	      DEFINE_STRING(BGl_string1585z00zzengine_paramz00,
		BgL_bgl_string1585za700za7za7e1886za7, "Module checksum C include path",
		30);
	      DEFINE_STRING(BGl_string1586z00zzengine_paramz00,
		BgL_bgl_string1586za700za7za7e1887za7, "auto-mode (extend mode) list", 28);
	      DEFINE_STRING(BGl_string1587z00zzengine_paramz00,
		BgL_bgl_string1587za700za7za7e1888za7, "Case sensitivity", 16);
	      DEFINE_STRING(BGl_string1588z00zzengine_paramz00,
		BgL_bgl_string1588za700za7za7e1889za7,
		"Heap size (in MegaByte) or #f for default value", 47);
	      DEFINE_STRING(BGl_string1589z00zzengine_paramz00,
		BgL_bgl_string1589za700za7za7e1890za7,
		"The way the reader reads input file ('plain or 'intern)", 55);
	      DEFINE_STRING(BGl_string1590z00zzengine_paramz00,
		BgL_bgl_string1590za700za7za7e1891za7,
		"The target language (either c, c-saw, jvm, or .net)", 51);
	      DEFINE_STRING(BGl_string1592z00zzengine_paramz00,
		BgL_bgl_string1592za700za7za7e1892za7, "Do we go to the saw-mill?", 25);
	      DEFINE_STRING(BGl_string1593z00zzengine_paramz00,
		BgL_bgl_string1593za700za7za7e1893za7,
		"Enable/disable saw register re-allocation", 41);
	      DEFINE_STRING(BGl_string1594z00zzengine_paramz00,
		BgL_bgl_string1594za700za7za7e1894za7,
		"Enable/disable saw register allocation", 38);
	      DEFINE_STRING(BGl_string1595z00zzengine_paramz00,
		BgL_bgl_string1595za700za7za7e1895za7,
		"Enable/disable saw register allocation on expression", 52);
	      DEFINE_STRING(BGl_string1596z00zzengine_paramz00,
		BgL_bgl_string1596za700za7za7e1896za7,
		"Max function size for optimizing the register allocation", 56);
	      DEFINE_STRING(BGl_string1597z00zzengine_paramz00,
		BgL_bgl_string1597za700za7za7e1897za7,
		"The list of functions allowing register allocation", 50);
	      DEFINE_STRING(BGl_string1598z00zzengine_paramz00,
		BgL_bgl_string1598za700za7za7e1898za7,
		"The list of functions disabling register allocation", 51);
	      DEFINE_STRING(BGl_string1599z00zzengine_paramz00,
		BgL_bgl_string1599za700za7za7e1899za7, "Enable saw spill optimization", 29);
	extern obj_t BGl_epairifyza2zd2envz70zztools_miscz00;
	extern obj_t BGl_epairifyzd2reczd2envz00zztools_miscz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_addzd2doczd2variablez12zd2envzc0zzengine_paramz00,
		BgL_bgl_za762addza7d2docza7d2v1900za7,
		BGl_z62addzd2doczd2variablez12z70zzengine_paramz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_epairifyzd2propagatezd2envz00zztools_miscz00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2additionalzd2tracesza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2synczd2profilingza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2arityza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*)
			(&BGl_za2optimzd2cfazd2pairzd2quotezd2maxzd2lengthza2zd2zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cczd2styleza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2stripza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2sawzd2spillza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2compilerzd2stackzd2debugzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2czd2filesza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*)
			(&BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ldzd2relativeza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2czd2splitzd2stringza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2optimzd2stackablezf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2passza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2gczd2customzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2csharpzd2suffixza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2restzd2argsza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2optimzd2cfazf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2optimzd2jvmzd2peepholeza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*)
			(&BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2optimzd2returnzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2sawza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2initzd2modeza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2startupzd2fileza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ccza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cczd2ozd2optionza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*)
			(&BGl_za2optimzd2jvmzd2constructorzd2inliningza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bdbzd2debugza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2heapzd2libraryza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2gczd2libza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2compilerzd2debugza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cflagsza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*)
			(&BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cflagszd2optimza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2sawzd2bbvzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2verboseza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2versionza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2catchza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2czd2suffixza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2includezd2multipleza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2optimzd2initflowzf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2nameza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2sawzd2registerzd2reallocationzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2dlopenzd2initzd2gcza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2debugza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2mcozd2suffixza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2warningzd2defaultzd2slotzd2valueza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cflagszd2profza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2synczd2failsafezf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2typeza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cczd2moveza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2extendzd2entryza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ozd2filesza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bmemzd2profilingza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2namezd2shapezf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2authorza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2optimzd2jvmza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2directoryza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2dateza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2userzd2shapezf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2optimzd2cfazd2applyzd2trackingzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2czd2debugzd2optionza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2stdcza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2optionsza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2envza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2dlopenzd2initza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2czd2userzd2headerza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2accesszd2filesza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2czd2debugza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2purifyza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2garbagezd2collectorza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2versionza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2warningzd2typezd2errorza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2jvmzd2inliningza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2libzd2srczd2dirza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2javaza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2optimzd2cfazd2pairzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2optimza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2destza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2helloza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2optimzd2integratezf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2accesszd2shapezf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2emailza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cczd2optionsza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2srczd2filesza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2targetzd2languageza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2taggedzd2fxopzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2czd2userzd2footza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2tmpza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2tmpzd2destza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2optimzd2isazf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2optimzd2uncellzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2typezd2shapezf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ldzd2optionsza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2locationzd2shapezf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2shellza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2optimzd2jvmzd2branchza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2keyzd2shapezf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2autozd2modeza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2debugzd2moduleza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00));
		     ADD_ROOT((void
				*)
			(&BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2libzd2modeza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2userzd2inliningzf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2bigloozd2cmdzd2nameza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2warningzd2typesza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2modulezd2shapezf3za2z21zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2shellza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2classpathza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2urlza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2inliningzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2paramzd2updatersza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2structza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ldzd2styleza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2rangeza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2variablesza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*)
			(&BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2evalzd2optionsza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2heapzd2nameza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2profilezd2libraryza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2tracezd2nameza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2profilezd2modeza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2argsza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2withzd2filesza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2tracezd2writezd2lengthza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2libzd2dirza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2libza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2libraryza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2heapza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2prezd2processorza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2objzd2suffixza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2srczd2suffixza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*)
			(&BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2indentza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2cflagszd2rpathza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2interpreterza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2arithmeticzd2genericityza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2unsafezd2evalza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2compilerzd2typezd2debugzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2callzf2cczf3za2z01zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*)
			(&BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00));
		     ADD_ROOT((void
				*)
			(&BGl_za2sawzd2registerzd2allocationzd2onexpressionzf3za2z21zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2optimzd2atomzd2inliningzf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void
				*) (&BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00));
		     ADD_ROOT((void
				*)
			(&BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2readerza2z00zzengine_paramz00));
		     ADD_ROOT((void *) (&BGl_za2includezd2foreignza2zd2zzengine_paramz00));
		   
			 ADD_ROOT((void
				*)
			(&BGl_za2optimzd2cfazd2forcezd2loosezd2localzd2functionzf3za2z21zzengine_paramz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long
		BgL_checksumz00_928, char *BgL_fromz00_929)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_paramz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_paramz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_paramz00();
					BGl_libraryzd2moduleszd2initz00zzengine_paramz00();
					BGl_cnstzd2initzd2zzengine_paramz00();
					BGl_importedzd2moduleszd2initz00zzengine_paramz00();
					BGl_evalzd2initzd2zzengine_paramz00();
					return BGl_toplevelzd2initzd2zzengine_paramz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"engine_param");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"engine_param");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			{	/* Engine/param.scm 15 */
				obj_t BgL_cportz00_884;

				{	/* Engine/param.scm 15 */
					obj_t BgL_stringz00_892;

					BgL_stringz00_892 = BGl_string1623z00zzengine_paramz00;
					{	/* Engine/param.scm 15 */
						obj_t BgL_startz00_893;

						BgL_startz00_893 = BINT(((long) 0));
						{	/* Engine/param.scm 15 */
							obj_t BgL_endz00_894;

							BgL_endz00_894 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_892)));
							{	/* Engine/param.scm 15 */

								BgL_cportz00_884 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_892, BgL_startz00_893, BgL_endz00_894);
				}}}}
				{
					long BgL_iz00_885;

					BgL_iz00_885 = ((long) 279);
				BgL_loopz00_886:
					if ((BgL_iz00_885 == ((long) -1)))
						{	/* Engine/param.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Engine/param.scm 15 */
							{	/* Engine/param.scm 15 */
								obj_t BgL_arg1626z00_888;

								{	/* Engine/param.scm 15 */

									{	/* Engine/param.scm 15 */
										obj_t BgL_locationz00_890;

										BgL_locationz00_890 = BBOOL(((bool_t) 0));
										{	/* Engine/param.scm 15 */

											BgL_arg1626z00_888 =
												BGl_readz00zz__readerz00(BgL_cportz00_884,
												BgL_locationz00_890);
										}
									}
								}
								{	/* Engine/param.scm 15 */
									int BgL_tmpz00_960;

									BgL_tmpz00_960 = (int) (BgL_iz00_885);
									CNST_TABLE_SET(BgL_tmpz00_960, BgL_arg1626z00_888);
							}}
							{	/* Engine/param.scm 15 */
								int BgL_auxz00_891;

								BgL_auxz00_891 = (int) ((BgL_iz00_885 - ((long) 1)));
								{
									long BgL_iz00_965;

									BgL_iz00_965 = (long) (BgL_auxz00_891);
									BgL_iz00_885 = BgL_iz00_965;
									goto BgL_loopz00_886;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 = BNIL;
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 = BNIL;
			BGl_za2bigloozd2versionza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 0)));
			{	/* Engine/param.scm 315 */
				obj_t BgL_idz00_244;

				BgL_idz00_244 = CNST_TABLE_REF(((long) 1));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_245;

					BgL_arg1256z00_245 =
						MAKE_YOUNG_PAIR(BgL_idz00_244, BGl_string1356z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_245,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1357z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 2)));
			{	/* Engine/param.scm 319 */
				obj_t BgL_idz00_246;

				BgL_idz00_246 = CNST_TABLE_REF(((long) 3));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_247;

					BgL_arg1256z00_247 =
						MAKE_YOUNG_PAIR(BgL_idz00_246, BGl_string1358z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_247,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1359z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			{	/* Engine/param.scm 325 */
				obj_t BgL_list1032z00_13;

				{	/* Engine/param.scm 325 */
					obj_t BgL_arg1033z00_14;

					{	/* Engine/param.scm 325 */
						obj_t BgL_arg1035z00_15;

						{	/* Engine/param.scm 325 */
							obj_t BgL_arg1036z00_16;

							{	/* Engine/param.scm 325 */
								obj_t BgL_arg1037z00_17;

								BgL_arg1037z00_17 =
									MAKE_YOUNG_PAIR(BGl_string1360z00zzengine_paramz00, BNIL);
								BgL_arg1036z00_16 =
									MAKE_YOUNG_PAIR
									(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
									BgL_arg1037z00_17);
							}
							BgL_arg1035z00_15 =
								MAKE_YOUNG_PAIR(BGl_string1361z00zzengine_paramz00,
								BgL_arg1036z00_16);
						}
						BgL_arg1033z00_14 =
							MAKE_YOUNG_PAIR
							(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
							BgL_arg1035z00_15);
					}
					BgL_list1032z00_13 =
						MAKE_YOUNG_PAIR(BGl_string1362z00zzengine_paramz00,
						BgL_arg1033z00_14);
				}
				BGl_za2bigloozd2nameza2zd2zzengine_paramz00 =
					BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1032z00_13);
			}
			{	/* Engine/param.scm 323 */
				obj_t BgL_idz00_248;

				BgL_idz00_248 = CNST_TABLE_REF(((long) 4));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_249;

					BgL_arg1256z00_249 =
						MAKE_YOUNG_PAIR(BgL_idz00_248, BGl_string1363z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_249,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1364z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2cmdzd2nameza2z00zzengine_paramz00 =
				CNST_TABLE_REF(((long) 5));
			BGl_za2bigloozd2argsza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 5));
			BGl_za2restzd2argsza2zd2zzengine_paramz00 = BNIL;
			BGl_za2bigloozd2authorza2zd2zzengine_paramz00 =
				BGl_string1365z00zzengine_paramz00;
			BGl_za2bigloozd2emailza2zd2zzengine_paramz00 =
				BGl_string1366z00zzengine_paramz00;
			BGl_za2bigloozd2urlza2zd2zzengine_paramz00 =
				BGl_string1367z00zzengine_paramz00;
			BGl_za2bigloozd2dateza2zd2zzengine_paramz00 =
				BGl_bigloozd2datezd2zztools_datez00();
			{	/* Engine/param.scm 340 */
				obj_t BgL_tmpz00_26;

				BgL_tmpz00_26 =
					BGl_getenvz00zz__osz00(BGl_string1368z00zzengine_paramz00);
				if (STRINGP(BgL_tmpz00_26))
					{	/* Engine/param.scm 341 */
						BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 = BgL_tmpz00_26;
					}
				else
					{	/* Engine/param.scm 341 */
						BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 =
							string_to_bstring(OS_TMP);
					}
			}
			{	/* Engine/param.scm 338 */
				obj_t BgL_idz00_251;

				BgL_idz00_251 = CNST_TABLE_REF(((long) 6));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_252;

					BgL_arg1256z00_252 =
						MAKE_YOUNG_PAIR(BgL_idz00_251, BGl_string1369z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_252,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1370z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 345 */
				obj_t BgL_idz00_254;

				BgL_idz00_254 = CNST_TABLE_REF(((long) 7));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_255;

					BgL_arg1256z00_255 =
						MAKE_YOUNG_PAIR(BgL_idz00_254, BGl_string1371z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_255,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2verboseza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 352 */
				obj_t BgL_idz00_256;

				BgL_idz00_256 = CNST_TABLE_REF(((long) 8));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_257;

					BgL_arg1256z00_257 =
						MAKE_YOUNG_PAIR(BgL_idz00_256, BGl_string1372z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_257,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2helloza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 356 */
				obj_t BgL_idz00_258;

				BgL_idz00_258 = CNST_TABLE_REF(((long) 9));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_259;

					BgL_arg1256z00_259 =
						MAKE_YOUNG_PAIR(BgL_idz00_258, BGl_string1373z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_259,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2srczd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 364 */
				obj_t BgL_idz00_260;

				BgL_idz00_260 = CNST_TABLE_REF(((long) 10));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_261;

					BgL_arg1256z00_261 =
						MAKE_YOUNG_PAIR(BgL_idz00_260, BGl_string1374z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_261,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2tmpzd2destza2zd2zzengine_paramz00 = BFALSE;
			BGl_za2destza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 369 */
				obj_t BgL_idz00_262;

				BgL_idz00_262 = CNST_TABLE_REF(((long) 11));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_263;

					BgL_arg1256z00_263 =
						MAKE_YOUNG_PAIR(BgL_idz00_262, BGl_string1375z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_263,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2shellza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 12)));
			{	/* Engine/param.scm 377 */
				obj_t BgL_idz00_264;

				BgL_idz00_264 = CNST_TABLE_REF(((long) 13));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_265;

					BgL_arg1256z00_265 =
						MAKE_YOUNG_PAIR(BgL_idz00_264, BGl_string1376z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_265,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1377z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cczd2styleza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 14)));
			{	/* Engine/param.scm 381 */
				obj_t BgL_idz00_266;

				BgL_idz00_266 = CNST_TABLE_REF(((long) 15));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_267;

					BgL_arg1256z00_267 =
						MAKE_YOUNG_PAIR(BgL_idz00_266, BGl_string1378z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_267,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1379z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ccza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 16)));
			{	/* Engine/param.scm 385 */
				obj_t BgL_idz00_268;

				BgL_idz00_268 = CNST_TABLE_REF(((long) 17));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_269;

					BgL_arg1256z00_269 =
						MAKE_YOUNG_PAIR(BgL_idz00_268, BGl_string1380z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_269,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1381z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cflagsza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 18)));
			{	/* Engine/param.scm 389 */
				obj_t BgL_idz00_270;

				BgL_idz00_270 = CNST_TABLE_REF(((long) 19));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_271;

					BgL_arg1256z00_271 =
						MAKE_YOUNG_PAIR(BgL_idz00_270, BGl_string1382z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_271,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1383z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cflagszd2optimza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 20)));
			{	/* Engine/param.scm 393 */
				obj_t BgL_idz00_272;

				BgL_idz00_272 = CNST_TABLE_REF(((long) 21));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_273;

					BgL_arg1256z00_273 =
						MAKE_YOUNG_PAIR(BgL_idz00_272, BGl_string1384z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_273,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1385z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cflagszd2profza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 22)));
			{	/* Engine/param.scm 397 */
				obj_t BgL_idz00_274;

				BgL_idz00_274 = CNST_TABLE_REF(((long) 23));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_275;

					BgL_arg1256z00_275 =
						MAKE_YOUNG_PAIR(BgL_idz00_274, BGl_string1386z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_275,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1387z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			{	/* Engine/param.scm 403 */
				obj_t BgL_arg1061z00_51;

				BgL_arg1061z00_51 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24)));
				{	/* Engine/param.scm 403 */
					obj_t BgL_list1062z00_52;

					BgL_list1062z00_52 = MAKE_YOUNG_PAIR(BgL_arg1061z00_51, BNIL);
					BGl_za2cflagszd2rpathza2zd2zzengine_paramz00 = BgL_list1062z00_52;
			}}
			{	/* Engine/param.scm 401 */
				obj_t BgL_idz00_277;

				BgL_idz00_277 = CNST_TABLE_REF(((long) 25));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_278;

					BgL_arg1256z00_278 =
						MAKE_YOUNG_PAIR(BgL_idz00_277, BGl_string1388z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_278,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1389z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2cczd2ozd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 26)));
			{	/* Engine/param.scm 405 */
				obj_t BgL_idz00_280;

				BgL_idz00_280 = CNST_TABLE_REF(((long) 27));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_281;

					BgL_arg1256z00_281 =
						MAKE_YOUNG_PAIR(BgL_idz00_280, BGl_string1390z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_281,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1391z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 28)));
			{	/* Engine/param.scm 409 */
				obj_t BgL_idz00_282;

				BgL_idz00_282 = CNST_TABLE_REF(((long) 29));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_283;

					BgL_arg1256z00_283 =
						MAKE_YOUNG_PAIR(BgL_idz00_282, BGl_string1392z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_283,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1393z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2stdcza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 413 */
				obj_t BgL_idz00_284;

				BgL_idz00_284 = CNST_TABLE_REF(((long) 30));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_285;

					BgL_arg1256z00_285 =
						MAKE_YOUNG_PAIR(BgL_idz00_284, BGl_string1394z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_285,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2cczd2optionsza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 31));
			{	/* Engine/param.scm 417 */
				obj_t BgL_idz00_286;

				BgL_idz00_286 = CNST_TABLE_REF(((long) 32));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_287;

					BgL_arg1256z00_287 =
						MAKE_YOUNG_PAIR(BgL_idz00_286, BGl_string1395z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_287,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 421 */
				obj_t BgL_idz00_288;

				BgL_idz00_288 = CNST_TABLE_REF(((long) 33));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_289;

					BgL_arg1256z00_289 =
						MAKE_YOUNG_PAIR(BgL_idz00_288, BGl_string1396z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_289,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ldzd2styleza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 34)));
			{	/* Engine/param.scm 425 */
				obj_t BgL_idz00_290;

				BgL_idz00_290 = CNST_TABLE_REF(((long) 35));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_291;

					BgL_arg1256z00_291 =
						MAKE_YOUNG_PAIR(BgL_idz00_290, BGl_string1397z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_291,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1398z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 36)));
			{	/* Engine/param.scm 429 */
				obj_t BgL_idz00_292;

				BgL_idz00_292 = CNST_TABLE_REF(((long) 37));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_293;

					BgL_arg1256z00_293 =
						MAKE_YOUNG_PAIR(BgL_idz00_292, BGl_string1399z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_293,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1400z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 38)));
			{	/* Engine/param.scm 433 */
				obj_t BgL_idz00_294;

				BgL_idz00_294 = CNST_TABLE_REF(((long) 39));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_295;

					BgL_arg1256z00_295 =
						MAKE_YOUNG_PAIR(BgL_idz00_294, BGl_string1401z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_295,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1402z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 40)));
			{	/* Engine/param.scm 437 */
				obj_t BgL_idz00_296;

				BgL_idz00_296 = CNST_TABLE_REF(((long) 41));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_297;

					BgL_arg1256z00_297 =
						MAKE_YOUNG_PAIR(BgL_idz00_296, BGl_string1403z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_297,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1404z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 42)));
			{	/* Engine/param.scm 441 */
				obj_t BgL_idz00_298;

				BgL_idz00_298 = CNST_TABLE_REF(((long) 43));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_299;

					BgL_arg1256z00_299 =
						MAKE_YOUNG_PAIR(BgL_idz00_298, BGl_string1405z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_299,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1406z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00 =
				CNST_TABLE_REF(((long) 31));
			{	/* Engine/param.scm 445 */
				obj_t BgL_idz00_300;

				BgL_idz00_300 = CNST_TABLE_REF(((long) 44));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_301;

					BgL_arg1256z00_301 =
						MAKE_YOUNG_PAIR(BgL_idz00_300, BGl_string1407z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_301,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2cczd2moveza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 449 */
				obj_t BgL_idz00_302;

				BgL_idz00_302 = CNST_TABLE_REF(((long) 45));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_303;

					BgL_arg1256z00_303 =
						MAKE_YOUNG_PAIR(BgL_idz00_302, BGl_string1408z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_303,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ldzd2relativeza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 453 */
				obj_t BgL_idz00_304;

				BgL_idz00_304 = CNST_TABLE_REF(((long) 46));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_305;

					BgL_arg1256z00_305 =
						MAKE_YOUNG_PAIR(BgL_idz00_304, BGl_string1409z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_305,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2stripza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 457 */
				obj_t BgL_idz00_306;

				BgL_idz00_306 = CNST_TABLE_REF(((long) 47));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_307;

					BgL_arg1256z00_307 =
						MAKE_YOUNG_PAIR(BgL_idz00_306, BGl_string1410z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_307,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 463 */
				obj_t BgL_libzd2envzd2_79;

				BgL_libzd2envzd2_79 =
					BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00
					(BGl_string1411z00zzengine_paramz00);
				if (NULLP(BgL_libzd2envzd2_79))
					{	/* Engine/param.scm 465 */
						obj_t BgL_arg1113z00_81;

						BgL_arg1113z00_81 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									24)));
						{	/* Engine/param.scm 465 */
							obj_t BgL_list1114z00_82;

							{	/* Engine/param.scm 465 */
								obj_t BgL_arg1115z00_83;

								BgL_arg1115z00_83 = MAKE_YOUNG_PAIR(BgL_arg1113z00_81, BNIL);
								BgL_list1114z00_82 =
									MAKE_YOUNG_PAIR(BGl_string1412z00zzengine_paramz00,
									BgL_arg1115z00_83);
							}
							BGl_za2libzd2dirza2zd2zzengine_paramz00 = BgL_list1114z00_82;
					}}
				else
					{	/* Engine/param.scm 464 */
						BGl_za2libzd2dirza2zd2zzengine_paramz00 =
							MAKE_YOUNG_PAIR(BGl_string1412z00zzengine_paramz00,
							BgL_libzd2envzd2_79);
					}
			}
			{	/* Engine/param.scm 461 */
				obj_t BgL_idz00_310;

				BgL_idz00_310 = CNST_TABLE_REF(((long) 48));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_311;

					BgL_arg1256z00_311 =
						MAKE_YOUNG_PAIR(BgL_idz00_310, BGl_string1413z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_311,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1414z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24)));
			{	/* Engine/param.scm 467 */
				obj_t BgL_idz00_314;

				BgL_idz00_314 = CNST_TABLE_REF(((long) 49));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_315;

					BgL_arg1256z00_315 =
						MAKE_YOUNG_PAIR(BgL_idz00_314, BGl_string1415z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_315,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1416z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24)));
			{	/* Engine/param.scm 470 */
				obj_t BgL_idz00_316;

				BgL_idz00_316 = CNST_TABLE_REF(((long) 50));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_317;

					BgL_arg1256z00_317 =
						MAKE_YOUNG_PAIR(BgL_idz00_316, BGl_string1415z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_317,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1417z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2libzd2srczd2dirza2z00zzengine_paramz00 =
				BGl_makezd2filezd2namez00zz__osz00(CAR
				(BGl_za2libzd2dirza2zd2zzengine_paramz00),
				BGl_string1418z00zzengine_paramz00);
			{	/* Engine/param.scm 474 */
				obj_t BgL_idz00_319;

				BgL_idz00_319 = CNST_TABLE_REF(((long) 51));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_320;

					BgL_arg1256z00_320 =
						MAKE_YOUNG_PAIR(BgL_idz00_319, BGl_string1413z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_320,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1419z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2bigloozd2libza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 52));
			{	/* Engine/param.scm 478 */
				obj_t BgL_idz00_322;

				BgL_idz00_322 = CNST_TABLE_REF(((long) 53));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_323;

					BgL_arg1256z00_323 =
						MAKE_YOUNG_PAIR(BgL_idz00_322, BGl_string1420z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_323,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 484 */
				bool_t BgL_test1905z00_1159;

				{	/* Engine/param.scm 484 */
					obj_t BgL_tmpz00_1160;

					BgL_tmpz00_1160 =
						BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 54)));
					BgL_test1905z00_1159 = STRINGP(BgL_tmpz00_1160);
				}
				if (BgL_test1905z00_1159)
					{	/* Engine/param.scm 485 */
						obj_t BgL_arg1140z00_105;

						BgL_arg1140z00_105 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									54)));
						{	/* Engine/param.scm 485 */
							obj_t BgL_res1308z00_326;

							BgL_res1308z00_326 =
								bstring_to_symbol(((obj_t) BgL_arg1140z00_105));
							BGl_za2gczd2libza2zd2zzengine_paramz00 = BgL_res1308z00_326;
					}}
				else
					{	/* Engine/param.scm 486 */
						obj_t BgL_arg1145z00_106;

						BgL_arg1145z00_106 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									55)));
						{	/* Engine/param.scm 486 */
							obj_t BgL_res1309z00_328;

							BgL_res1309z00_328 =
								bstring_to_symbol(((obj_t) BgL_arg1145z00_106));
							BGl_za2gczd2libza2zd2zzengine_paramz00 = BgL_res1309z00_328;
			}}}
			{	/* Engine/param.scm 482 */
				obj_t BgL_idz00_329;

				BgL_idz00_329 = CNST_TABLE_REF(((long) 56));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_330;

					BgL_arg1256z00_330 =
						MAKE_YOUNG_PAIR(BgL_idz00_329, BGl_string1421z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_330,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1422z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2gczd2customzf3za2z21zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 54)));
			{	/* Engine/param.scm 488 */
				obj_t BgL_idz00_336;

				BgL_idz00_336 = CNST_TABLE_REF(((long) 57));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_337;

					BgL_arg1256z00_337 =
						MAKE_YOUNG_PAIR(BgL_idz00_336, BGl_string1423z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_337,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1424z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 492 */
				obj_t BgL_idz00_338;

				BgL_idz00_338 = CNST_TABLE_REF(((long) 58));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_339;

					BgL_arg1256z00_339 =
						MAKE_YOUNG_PAIR(BgL_idz00_338, BGl_string1425z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_339,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 496 */
				obj_t BgL_idz00_340;

				BgL_idz00_340 = CNST_TABLE_REF(((long) 59));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_341;

					BgL_arg1256z00_341 =
						MAKE_YOUNG_PAIR(BgL_idz00_340, BGl_string1426z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_341,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 60)));
			{	/* Engine/param.scm 500 */
				obj_t BgL_idz00_342;

				BgL_idz00_342 = CNST_TABLE_REF(((long) 61));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_343;

					BgL_arg1256z00_343 =
						MAKE_YOUNG_PAIR(BgL_idz00_342, BGl_string1427z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_343,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1428z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 504 */
				obj_t BgL_idz00_344;

				BgL_idz00_344 = CNST_TABLE_REF(((long) 62));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_345;

					BgL_arg1256z00_345 =
						MAKE_YOUNG_PAIR(BgL_idz00_344, BGl_string1429z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_345,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 508 */
				obj_t BgL_idz00_346;

				BgL_idz00_346 = CNST_TABLE_REF(((long) 63));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_347;

					BgL_arg1256z00_347 =
						MAKE_YOUNG_PAIR(BgL_idz00_346, BGl_string1430z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_347,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 512 */
				obj_t BgL_idz00_348;

				BgL_idz00_348 = CNST_TABLE_REF(((long) 64));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_349;

					BgL_arg1256z00_349 =
						MAKE_YOUNG_PAIR(BgL_idz00_348, BGl_string1431z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_349,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00 =
				BGl_stringzd2splitzd2charz00zztools_miscz00
				(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 65))),
				BCHAR(((unsigned char) ' ')));
			{	/* Engine/param.scm 516 */
				obj_t BgL_idz00_350;

				BgL_idz00_350 = CNST_TABLE_REF(((long) 66));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_351;

					BgL_arg1256z00_351 =
						MAKE_YOUNG_PAIR(BgL_idz00_350, BGl_string1432z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_351,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1433z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 520 */
				obj_t BgL_idz00_352;

				BgL_idz00_352 = CNST_TABLE_REF(((long) 67));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_353;

					BgL_arg1256z00_353 =
						MAKE_YOUNG_PAIR(BgL_idz00_352, BGl_string1434z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_353,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 524 */
				obj_t BgL_idz00_354;

				BgL_idz00_354 = CNST_TABLE_REF(((long) 68));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_355;

					BgL_arg1256z00_355 =
						MAKE_YOUNG_PAIR(BgL_idz00_354, BGl_string1435z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_355,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 528 */
				obj_t BgL_idz00_356;

				BgL_idz00_356 = CNST_TABLE_REF(((long) 69));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_357;

					BgL_arg1256z00_357 =
						MAKE_YOUNG_PAIR(BgL_idz00_356, BGl_string1436z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_357,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00 =
				BGl_za2loadzd2pathza2zd2zz__evalz00;
			BGl_za2loadzd2pathza2zd2zz__evalz00 =
				BGl_appendzd221011zd2zzengine_paramz00
				(BGl_za2loadzd2pathza2zd2zz__evalz00,
				BGl_za2libzd2dirza2zd2zzengine_paramz00);
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1437z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2includezd2multipleza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 538 */
				obj_t BgL_idz00_358;

				BgL_idz00_358 = CNST_TABLE_REF(((long) 70));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_359;

					BgL_arg1256z00_359 =
						MAKE_YOUNG_PAIR(BgL_idz00_358, BGl_string1438z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_359,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 544 */
				obj_t BgL_list1180z00_129;

				BgL_list1180z00_129 =
					MAKE_YOUNG_PAIR(BGl_string1439z00zzengine_paramz00, BNIL);
				BGl_za2includezd2foreignza2zd2zzengine_paramz00 = BgL_list1180z00_129;
			}
			{	/* Engine/param.scm 542 */
				obj_t BgL_idz00_361;

				BgL_idz00_361 = CNST_TABLE_REF(((long) 71));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_362;

					BgL_arg1256z00_362 =
						MAKE_YOUNG_PAIR(BgL_idz00_361, BGl_string1440z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_362,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1441z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 546 */
				obj_t BgL_idz00_364;

				BgL_idz00_364 = CNST_TABLE_REF(((long) 72));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_365;

					BgL_arg1256z00_365 =
						MAKE_YOUNG_PAIR(BgL_idz00_364, BGl_string1442z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_365,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00 =
				BGl_string1443z00zzengine_paramz00;
			{	/* Engine/param.scm 550 */
				obj_t BgL_idz00_366;

				BgL_idz00_366 = CNST_TABLE_REF(((long) 73));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_367;

					BgL_arg1256z00_367 =
						MAKE_YOUNG_PAIR(BgL_idz00_366, BGl_string1444z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_367,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2heapzd2nameza2zd2zzengine_paramz00 =
				string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
				BGl_string1445z00zzengine_paramz00);
			{	/* Engine/param.scm 554 */
				obj_t BgL_idz00_368;

				BgL_idz00_368 = CNST_TABLE_REF(((long) 74));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_369;

					BgL_arg1256z00_369 =
						MAKE_YOUNG_PAIR(BgL_idz00_368, BGl_string1446z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_369,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1447z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2heapzd2libraryza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 52));
			{	/* Engine/param.scm 558 */
				obj_t BgL_idz00_370;

				BgL_idz00_370 = CNST_TABLE_REF(((long) 75));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_371;

					BgL_arg1256z00_371 =
						MAKE_YOUNG_PAIR(BgL_idz00_370, BGl_string1448z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_371,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00 =
				string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
				BGl_string1449z00zzengine_paramz00);
			{	/* Engine/param.scm 562 */
				obj_t BgL_idz00_372;

				BgL_idz00_372 = CNST_TABLE_REF(((long) 76));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_373;

					BgL_arg1256z00_373 =
						MAKE_YOUNG_PAIR(BgL_idz00_372, BGl_string1450z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_373,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1451z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 566 */
				obj_t BgL_idz00_374;

				BgL_idz00_374 = CNST_TABLE_REF(((long) 77));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_375;

					BgL_arg1256z00_375 =
						MAKE_YOUNG_PAIR(BgL_idz00_374, BGl_string1452z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_375,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 78));
			{	/* Engine/param.scm 570 */
				obj_t BgL_idz00_376;

				BgL_idz00_376 = CNST_TABLE_REF(((long) 79));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_377;

					BgL_arg1256z00_377 =
						MAKE_YOUNG_PAIR(BgL_idz00_376, BGl_string1453z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_377,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00 =
				BGl_string1454z00zzengine_paramz00;
			{	/* Engine/param.scm 574 */
				obj_t BgL_idz00_378;

				BgL_idz00_378 = CNST_TABLE_REF(((long) 80));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_379;

					BgL_arg1256z00_379 =
						MAKE_YOUNG_PAIR(BgL_idz00_378, BGl_string1455z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_379,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 578 */
				obj_t BgL_idz00_380;

				BgL_idz00_380 = CNST_TABLE_REF(((long) 81));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_381;

					BgL_arg1256z00_381 =
						MAKE_YOUNG_PAIR(BgL_idz00_380, BGl_string1456z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_381,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 582 */
				obj_t BgL_idz00_382;

				BgL_idz00_382 = CNST_TABLE_REF(((long) 82));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_383;

					BgL_arg1256z00_383 =
						MAKE_YOUNG_PAIR(BgL_idz00_382, BGl_string1457z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_383,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2indentza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 83)));
			{	/* Engine/param.scm 586 */
				obj_t BgL_idz00_384;

				BgL_idz00_384 = CNST_TABLE_REF(((long) 84));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_385;

					BgL_arg1256z00_385 =
						MAKE_YOUNG_PAIR(BgL_idz00_384, BGl_string1458z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_385,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1459z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2compilerzd2debugza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 590 */
				obj_t BgL_idz00_386;

				BgL_idz00_386 = CNST_TABLE_REF(((long) 85));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_387;

					BgL_arg1256z00_387 =
						MAKE_YOUNG_PAIR(BgL_idz00_386, BGl_string1460z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_387,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 594 */
				obj_t BgL_idz00_388;

				BgL_idz00_388 = CNST_TABLE_REF(((long) 86));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_389;

					BgL_arg1256z00_389 =
						MAKE_YOUNG_PAIR(BgL_idz00_388, BGl_string1461z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_389,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 598 */
				obj_t BgL_idz00_390;

				BgL_idz00_390 = CNST_TABLE_REF(((long) 87));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_391;

					BgL_arg1256z00_391 =
						MAKE_YOUNG_PAIR(BgL_idz00_390, BGl_string1462z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_391,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 601 */
				obj_t BgL_idz00_392;

				BgL_idz00_392 = CNST_TABLE_REF(((long) 88));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_393;

					BgL_arg1256z00_393 =
						MAKE_YOUNG_PAIR(BgL_idz00_392, BGl_string1463z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_393,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2compilerzd2typezd2debugzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 604 */
				obj_t BgL_idz00_394;

				BgL_idz00_394 = CNST_TABLE_REF(((long) 89));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_395;

					BgL_arg1256z00_395 =
						MAKE_YOUNG_PAIR(BgL_idz00_394, BGl_string1464z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_395,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2compilerzd2stackzd2debugzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 607 */
				obj_t BgL_idz00_396;

				BgL_idz00_396 = CNST_TABLE_REF(((long) 90));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_397;

					BgL_arg1256z00_397 =
						MAKE_YOUNG_PAIR(BgL_idz00_396, BGl_string1465z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_397,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bmemzd2profilingza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 611 */
				obj_t BgL_idz00_398;

				BgL_idz00_398 = CNST_TABLE_REF(((long) 91));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_399;

					BgL_arg1256z00_399 =
						MAKE_YOUNG_PAIR(BgL_idz00_398, BGl_string1466z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_399,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2synczd2profilingza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 615 */
				obj_t BgL_idz00_400;

				BgL_idz00_400 = CNST_TABLE_REF(((long) 92));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_401;

					BgL_arg1256z00_401 =
						MAKE_YOUNG_PAIR(BgL_idz00_400, BGl_string1467z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_401,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2debugzd2moduleza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 619 */
				obj_t BgL_idz00_402;

				BgL_idz00_402 = CNST_TABLE_REF(((long) 93));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_403;

					BgL_arg1256z00_403 =
						MAKE_YOUNG_PAIR(BgL_idz00_402, BGl_string1468z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_403,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2debugza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 623 */
				obj_t BgL_idz00_404;

				BgL_idz00_404 = CNST_TABLE_REF(((long) 94));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_405;

					BgL_arg1256z00_405 =
						MAKE_YOUNG_PAIR(BgL_idz00_404, BGl_string1469z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_405,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 627 */
				obj_t BgL_idz00_406;

				BgL_idz00_406 = CNST_TABLE_REF(((long) 95));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_407;

					BgL_arg1256z00_407 =
						MAKE_YOUNG_PAIR(BgL_idz00_406, BGl_string1470z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_407,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2debugzd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 96)));
			{	/* Engine/param.scm 631 */
				obj_t BgL_idz00_408;

				BgL_idz00_408 = CNST_TABLE_REF(((long) 97));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_409;

					BgL_arg1256z00_409 =
						MAKE_YOUNG_PAIR(BgL_idz00_408, BGl_string1471z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_409,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1472z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2czd2userzd2headerza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 635 */
				obj_t BgL_idz00_410;

				BgL_idz00_410 = CNST_TABLE_REF(((long) 98));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_411;

					BgL_arg1256z00_411 =
						MAKE_YOUNG_PAIR(BgL_idz00_410, BGl_string1473z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_411,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2userzd2footza2z00zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 639 */
				obj_t BgL_idz00_412;

				BgL_idz00_412 = CNST_TABLE_REF(((long) 99));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_413;

					BgL_arg1256z00_413 =
						MAKE_YOUNG_PAIR(BgL_idz00_412, BGl_string1474z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_413,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2debugza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 643 */
				obj_t BgL_idz00_414;

				BgL_idz00_414 = CNST_TABLE_REF(((long) 100));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_415;

					BgL_arg1256z00_415 =
						MAKE_YOUNG_PAIR(BgL_idz00_414, BGl_string1475z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_415,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bdbzd2debugza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 647 */
				obj_t BgL_idz00_416;

				BgL_idz00_416 = CNST_TABLE_REF(((long) 101));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_417;

					BgL_arg1256z00_417 =
						MAKE_YOUNG_PAIR(BgL_idz00_416, BGl_string1476z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_417,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00 =
				BFALSE;
			BGl_za2profilezd2modeza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 652 */
				obj_t BgL_idz00_418;

				BgL_idz00_418 = CNST_TABLE_REF(((long) 102));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_419;

					BgL_arg1256z00_419 =
						MAKE_YOUNG_PAIR(BgL_idz00_418, BGl_string1477z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_419,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00 =
				BGl_string1478z00zzengine_paramz00;
			{	/* Engine/param.scm 656 */
				obj_t BgL_idz00_420;

				BgL_idz00_420 = CNST_TABLE_REF(((long) 103));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_421;

					BgL_arg1256z00_421 =
						MAKE_YOUNG_PAIR(BgL_idz00_420, BGl_string1479z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_421,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2accesszd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 663 */
				obj_t BgL_idz00_422;

				BgL_idz00_422 = CNST_TABLE_REF(((long) 104));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_423;

					BgL_arg1256z00_423 =
						MAKE_YOUNG_PAIR(BgL_idz00_422, BGl_string1480z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_423,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00 =
				BGl_string1481z00zzengine_paramz00;
			{	/* Engine/param.scm 666 */
				obj_t BgL_idz00_424;

				BgL_idz00_424 = CNST_TABLE_REF(((long) 105));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_425;

					BgL_arg1256z00_425 =
						MAKE_YOUNG_PAIR(BgL_idz00_424, BGl_string1482z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_425,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 670 */
				obj_t BgL_idz00_426;

				BgL_idz00_426 = CNST_TABLE_REF(((long) 106));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_427;

					BgL_arg1256z00_427 =
						MAKE_YOUNG_PAIR(BgL_idz00_426, BGl_string1483z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_427,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00 =
				BGl_string1484z00zzengine_paramz00;
			{	/* Engine/param.scm 673 */
				obj_t BgL_idz00_428;

				BgL_idz00_428 = CNST_TABLE_REF(((long) 107));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_429;

					BgL_arg1256z00_429 =
						MAKE_YOUNG_PAIR(BgL_idz00_428, BGl_string1483z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_429,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2ozd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 680 */
				obj_t BgL_idz00_430;

				BgL_idz00_430 = CNST_TABLE_REF(((long) 108));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_431;

					BgL_arg1256z00_431 =
						MAKE_YOUNG_PAIR(BgL_idz00_430, BGl_string1485z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_431,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 683 */
				obj_t BgL_idz00_432;

				BgL_idz00_432 = CNST_TABLE_REF(((long) 109));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_433;

					BgL_arg1256z00_433 =
						MAKE_YOUNG_PAIR(BgL_idz00_432, BGl_string1486z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_433,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2withzd2filesza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 686 */
				obj_t BgL_idz00_434;

				BgL_idz00_434 = CNST_TABLE_REF(((long) 110));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_435;

					BgL_arg1256z00_435 =
						MAKE_YOUNG_PAIR(BgL_idz00_434, BGl_string1487z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_435,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00 = BNIL;
			BGl_za2interpreterza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 694 */
				obj_t BgL_idz00_436;

				BgL_idz00_436 = CNST_TABLE_REF(((long) 111));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_437;

					BgL_arg1256z00_437 =
						MAKE_YOUNG_PAIR(BgL_idz00_436, BGl_string1488z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_437,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2startupzd2fileza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 697 */
				obj_t BgL_idz00_438;

				BgL_idz00_438 = CNST_TABLE_REF(((long) 112));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_439;

					BgL_arg1256z00_439 =
						MAKE_YOUNG_PAIR(BgL_idz00_438, BGl_string1489z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_439,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2callzf2cczf3za2z01zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 700 */
				obj_t BgL_idz00_440;

				BgL_idz00_440 = CNST_TABLE_REF(((long) 113));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_441;

					BgL_arg1256z00_441 =
						MAKE_YOUNG_PAIR(BgL_idz00_440, BGl_string1490z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_441,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 703 */
				obj_t BgL_idz00_442;

				BgL_idz00_442 = CNST_TABLE_REF(((long) 114));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_443;

					BgL_arg1256z00_443 =
						MAKE_YOUNG_PAIR(BgL_idz00_442, BGl_string1491z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_443,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2passza2z00zzengine_paramz00 = CNST_TABLE_REF(((long) 115));
			{	/* Engine/param.scm 707 */
				obj_t BgL_idz00_444;

				BgL_idz00_444 = CNST_TABLE_REF(((long) 116));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_445;

					BgL_arg1256z00_445 =
						MAKE_YOUNG_PAIR(BgL_idz00_444, BGl_string1492z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_445,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 710 */
				obj_t BgL_idz00_446;

				BgL_idz00_446 = CNST_TABLE_REF(((long) 117));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_447;

					BgL_arg1256z00_447 =
						MAKE_YOUNG_PAIR(BgL_idz00_446, BGl_string1493z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_447,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2shellza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 118)));
			{	/* Engine/param.scm 713 */
				obj_t BgL_idz00_448;

				BgL_idz00_448 = CNST_TABLE_REF(((long) 119));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_449;

					BgL_arg1256z00_449 =
						MAKE_YOUNG_PAIR(BgL_idz00_448, BGl_string1494z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_449,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1495z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2jvmzd2javaza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 120)));
			{	/* Engine/param.scm 716 */
				obj_t BgL_idz00_450;

				BgL_idz00_450 = CNST_TABLE_REF(((long) 121));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_451;

					BgL_arg1256z00_451 =
						MAKE_YOUNG_PAIR(BgL_idz00_450, BGl_string1496z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_451,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1497z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2jvmzd2optionsza2zd2zzengine_paramz00 =
				BGl_string1498z00zzengine_paramz00;
			{	/* Engine/param.scm 719 */
				obj_t BgL_idz00_452;

				BgL_idz00_452 = CNST_TABLE_REF(((long) 122));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_453;

					BgL_arg1256z00_453 =
						MAKE_YOUNG_PAIR(BgL_idz00_452, BGl_string1499z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_453,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 722 */
				obj_t BgL_idz00_454;

				BgL_idz00_454 = CNST_TABLE_REF(((long) 123));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_455;

					BgL_arg1256z00_455 =
						MAKE_YOUNG_PAIR(BgL_idz00_454, BGl_string1500z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_455,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2classpathza2zd2zzengine_paramz00 =
				BGl_string1412z00zzengine_paramz00;
			{	/* Engine/param.scm 725 */
				obj_t BgL_idz00_456;

				BgL_idz00_456 = CNST_TABLE_REF(((long) 124));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_457;

					BgL_arg1256z00_457 =
						MAKE_YOUNG_PAIR(BgL_idz00_456, BGl_string1501z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_457,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 728 */
				obj_t BgL_idz00_458;

				BgL_idz00_458 = CNST_TABLE_REF(((long) 125));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_459;

					BgL_arg1256z00_459 =
						MAKE_YOUNG_PAIR(BgL_idz00_458, BGl_string1502z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_459,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 731 */
				obj_t BgL_idz00_460;

				BgL_idz00_460 = CNST_TABLE_REF(((long) 126));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_461;

					BgL_arg1256z00_461 =
						MAKE_YOUNG_PAIR(BgL_idz00_460, BGl_string1501z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_461,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 734 */
				obj_t BgL_idz00_462;

				BgL_idz00_462 = CNST_TABLE_REF(((long) 127));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_463;

					BgL_arg1256z00_463 =
						MAKE_YOUNG_PAIR(BgL_idz00_462, BGl_string1503z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_463,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2directoryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 737 */
				obj_t BgL_idz00_464;

				BgL_idz00_464 = CNST_TABLE_REF(((long) 128));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_465;

					BgL_arg1256z00_465 =
						MAKE_YOUNG_PAIR(BgL_idz00_464, BGl_string1504z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_465,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2catchza2zd2zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 740 */
				obj_t BgL_idz00_466;

				BgL_idz00_466 = CNST_TABLE_REF(((long) 129));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_467;

					BgL_arg1256z00_467 =
						MAKE_YOUNG_PAIR(BgL_idz00_466, BGl_string1505z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_467,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 743 */
				obj_t BgL_idz00_468;

				BgL_idz00_468 = CNST_TABLE_REF(((long) 130));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_469;

					BgL_arg1256z00_469 =
						MAKE_YOUNG_PAIR(BgL_idz00_468, BGl_string1506z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_469,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 746 */
				obj_t BgL_idz00_470;

				BgL_idz00_470 = CNST_TABLE_REF(((long) 131));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_471;

					BgL_arg1256z00_471 =
						MAKE_YOUNG_PAIR(BgL_idz00_470, BGl_string1507z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_471,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2garbagezd2collectorza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 132));
			{	/* Engine/param.scm 749 */
				obj_t BgL_idz00_472;

				BgL_idz00_472 = CNST_TABLE_REF(((long) 133));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_473;

					BgL_arg1256z00_473 =
						MAKE_YOUNG_PAIR(BgL_idz00_472, BGl_string1508z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_473,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2typeza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 756 */
				obj_t BgL_idz00_474;

				BgL_idz00_474 = CNST_TABLE_REF(((long) 134));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_475;

					BgL_arg1256z00_475 =
						MAKE_YOUNG_PAIR(BgL_idz00_474, BGl_string1509z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_475,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2arityza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 759 */
				obj_t BgL_idz00_476;

				BgL_idz00_476 = CNST_TABLE_REF(((long) 135));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_477;

					BgL_arg1256z00_477 =
						MAKE_YOUNG_PAIR(BgL_idz00_476, BGl_string1510z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_477,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2rangeza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 762 */
				obj_t BgL_idz00_478;

				BgL_idz00_478 = CNST_TABLE_REF(((long) 136));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_479;

					BgL_arg1256z00_479 =
						MAKE_YOUNG_PAIR(BgL_idz00_478, BGl_string1511z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_479,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2structza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 765 */
				obj_t BgL_idz00_480;

				BgL_idz00_480 = CNST_TABLE_REF(((long) 137));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_481;

					BgL_arg1256z00_481 =
						MAKE_YOUNG_PAIR(BgL_idz00_480, BGl_string1512z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_481,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2versionza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 768 */
				obj_t BgL_idz00_482;

				BgL_idz00_482 = CNST_TABLE_REF(((long) 138));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_483;

					BgL_arg1256z00_483 =
						MAKE_YOUNG_PAIR(BgL_idz00_482, BGl_string1513z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_483,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2libraryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 771 */
				obj_t BgL_idz00_484;

				BgL_idz00_484 = CNST_TABLE_REF(((long) 139));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_485;

					BgL_arg1256z00_485 =
						MAKE_YOUNG_PAIR(BgL_idz00_484, BGl_string1514z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_485,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2evalza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 774 */
				obj_t BgL_idz00_486;

				BgL_idz00_486 = CNST_TABLE_REF(((long) 140));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_487;

					BgL_arg1256z00_487 =
						MAKE_YOUNG_PAIR(BgL_idz00_486, BGl_string1515z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_487,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2unsafezd2heapza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 777 */
				obj_t BgL_idz00_488;

				BgL_idz00_488 = CNST_TABLE_REF(((long) 141));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_489;

					BgL_arg1256z00_489 =
						MAKE_YOUNG_PAIR(BgL_idz00_488, BGl_string1516z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_489,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 780 */
				obj_t BgL_idz00_490;

				BgL_idz00_490 = CNST_TABLE_REF(((long) 142));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_491;

					BgL_arg1256z00_491 =
						MAKE_YOUNG_PAIR(BgL_idz00_490, BGl_string1517z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_491,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 783 */
				obj_t BgL_idz00_492;

				BgL_idz00_492 = CNST_TABLE_REF(((long) 143));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_493;

					BgL_arg1256z00_493 =
						MAKE_YOUNG_PAIR(BgL_idz00_492, BGl_string1518z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_493,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2warningzd2typesza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 786 */
				obj_t BgL_idz00_494;

				BgL_idz00_494 = CNST_TABLE_REF(((long) 144));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_495;

					BgL_arg1256z00_495 =
						MAKE_YOUNG_PAIR(BgL_idz00_494, BGl_string1519z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_495,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2warningzd2typezd2errorza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 789 */
				obj_t BgL_idz00_496;

				BgL_idz00_496 = CNST_TABLE_REF(((long) 145));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_497;

					BgL_arg1256z00_497 =
						MAKE_YOUNG_PAIR(BgL_idz00_496, BGl_string1520z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_497,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2warningzd2defaultzd2slotzd2valueza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 792 */
				obj_t BgL_idz00_498;

				BgL_idz00_498 = CNST_TABLE_REF(((long) 146));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_499;

					BgL_arg1256z00_499 =
						MAKE_YOUNG_PAIR(BgL_idz00_498, BGl_string1521z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_499,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2profilezd2libraryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 795 */
				obj_t BgL_idz00_500;

				BgL_idz00_500 = CNST_TABLE_REF(((long) 147));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_501;

					BgL_arg1256z00_501 =
						MAKE_YOUNG_PAIR(BgL_idz00_500, BGl_string1522z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_501,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2modulezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2keyzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2typezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2accesszd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2locationzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2userzd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2namezd2shapezf3za2z21zzengine_paramz00 = BFALSE;
			BGl_za2arithmeticzd2genericityza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 809 */
				obj_t BgL_idz00_502;

				BgL_idz00_502 = CNST_TABLE_REF(((long) 148));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_503;

					BgL_arg1256z00_503 =
						MAKE_YOUNG_PAIR(BgL_idz00_502, BGl_string1523z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_503,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2libzd2modeza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 812 */
				obj_t BgL_idz00_504;

				BgL_idz00_504 = CNST_TABLE_REF(((long) 149));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_505;

					BgL_arg1256z00_505 =
						MAKE_YOUNG_PAIR(BgL_idz00_504, BGl_string1524z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_505,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2initzd2modeza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 150));
			{	/* Engine/param.scm 815 */
				obj_t BgL_idz00_506;

				BgL_idz00_506 = CNST_TABLE_REF(((long) 151));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_507;

					BgL_arg1256z00_507 =
						MAKE_YOUNG_PAIR(BgL_idz00_506, BGl_string1525z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_507,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 =
				CNST_TABLE_REF(((long) 152));
			{	/* Engine/param.scm 818 */
				obj_t BgL_idz00_508;

				BgL_idz00_508 = CNST_TABLE_REF(((long) 153));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_509;

					BgL_arg1256z00_509 =
						MAKE_YOUNG_PAIR(BgL_idz00_508, BGl_string1526z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_509,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dlopenzd2initza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 821 */
				obj_t BgL_idz00_510;

				BgL_idz00_510 = CNST_TABLE_REF(((long) 154));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_511;

					BgL_arg1256z00_511 =
						MAKE_YOUNG_PAIR(BgL_idz00_510, BGl_string1527z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_511,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2dlopenzd2initzd2gcza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 824 */
				obj_t BgL_idz00_512;

				BgL_idz00_512 = CNST_TABLE_REF(((long) 155));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_513;

					BgL_arg1256z00_513 =
						MAKE_YOUNG_PAIR(BgL_idz00_512, BGl_string1528z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_513,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00 =
				BINT(((long) 1024));
			{	/* Engine/param.scm 827 */
				obj_t BgL_idz00_514;

				BgL_idz00_514 = CNST_TABLE_REF(((long) 156));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_515;

					BgL_arg1256z00_515 =
						MAKE_YOUNG_PAIR(BgL_idz00_514, BGl_string1529z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_515,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2splitzd2stringza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 157)));
			{	/* Engine/param.scm 830 */
				obj_t BgL_idz00_516;

				BgL_idz00_516 = CNST_TABLE_REF(((long) 158));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_517;

					BgL_arg1256z00_517 =
						MAKE_YOUNG_PAIR(BgL_idz00_516, BGl_string1530z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_517,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1531z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00 =
				BINT(((long) 16));
			{	/* Engine/param.scm 833 */
				obj_t BgL_idz00_518;

				BgL_idz00_518 = CNST_TABLE_REF(((long) 159));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_519;

					BgL_arg1256z00_519 =
						MAKE_YOUNG_PAIR(BgL_idz00_518, BGl_string1532z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_519,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2tracezd2nameza2zd2zzengine_paramz00 =
				BGl_string1533z00zzengine_paramz00;
			{	/* Engine/param.scm 836 */
				obj_t BgL_idz00_520;

				BgL_idz00_520 = CNST_TABLE_REF(((long) 160));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_521;

					BgL_arg1256z00_521 =
						MAKE_YOUNG_PAIR(BgL_idz00_520, BGl_string1534z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_521,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2tracezd2writezd2lengthza2z00zzengine_paramz00 = BINT(((long) 80));
			{	/* Engine/param.scm 839 */
				obj_t BgL_idz00_522;

				BgL_idz00_522 = CNST_TABLE_REF(((long) 161));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_523;

					BgL_arg1256z00_523 =
						MAKE_YOUNG_PAIR(BgL_idz00_522, BGl_string1535z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_523,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2additionalzd2tracesza2zd2zzengine_paramz00 = BNIL;
			BGl_za2optimza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 847 */
				obj_t BgL_idz00_524;

				BgL_idz00_524 = CNST_TABLE_REF(((long) 162));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_525;

					BgL_arg1256z00_525 =
						MAKE_YOUNG_PAIR(BgL_idz00_524, BGl_string1536z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_525,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00 = BUNSPEC;
			{	/* Engine/param.scm 850 */
				obj_t BgL_idz00_526;

				BgL_idz00_526 = CNST_TABLE_REF(((long) 163));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_527;

					BgL_arg1256z00_527 =
						MAKE_YOUNG_PAIR(BgL_idz00_526, BGl_string1537z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_527,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 853 */
				obj_t BgL_idz00_528;

				BgL_idz00_528 = CNST_TABLE_REF(((long) 164));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_529;

					BgL_arg1256z00_529 =
						MAKE_YOUNG_PAIR(BgL_idz00_528, BGl_string1538z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_529,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2atomzd2inliningzf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 856 */
				obj_t BgL_idz00_530;

				BgL_idz00_530 = CNST_TABLE_REF(((long) 165));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_531;

					BgL_arg1256z00_531 =
						MAKE_YOUNG_PAIR(BgL_idz00_530, BGl_string1539z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_531,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 859 */
				obj_t BgL_idz00_532;

				BgL_idz00_532 = CNST_TABLE_REF(((long) 166));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_533;

					BgL_arg1256z00_533 =
						MAKE_YOUNG_PAIR(BgL_idz00_532, BGl_string1540z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_533,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2inliningza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 862 */
				obj_t BgL_idz00_534;

				BgL_idz00_534 = CNST_TABLE_REF(((long) 167));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_535;

					BgL_arg1256z00_535 =
						MAKE_YOUNG_PAIR(BgL_idz00_534, BGl_string1541z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_535,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2constructorzd2inliningza2zd2zzengine_paramz00 =
				BINT(((long) 0));
			{	/* Engine/param.scm 865 */
				obj_t BgL_idz00_536;

				BgL_idz00_536 = CNST_TABLE_REF(((long) 168));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_537;

					BgL_arg1256z00_537 =
						MAKE_YOUNG_PAIR(BgL_idz00_536, BGl_string1542z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_537,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2peepholeza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 868 */
				obj_t BgL_idz00_538;

				BgL_idz00_538 = CNST_TABLE_REF(((long) 169));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_539;

					BgL_arg1256z00_539 =
						MAKE_YOUNG_PAIR(BgL_idz00_538, BGl_string1543z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_539,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2branchza2z00zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 871 */
				obj_t BgL_idz00_540;

				BgL_idz00_540 = CNST_TABLE_REF(((long) 170));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_541;

					BgL_arg1256z00_541 =
						MAKE_YOUNG_PAIR(BgL_idz00_540, BGl_string1544z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_541,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 874 */
				obj_t BgL_idz00_542;

				BgL_idz00_542 = CNST_TABLE_REF(((long) 171));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_543;

					BgL_arg1256z00_543 =
						MAKE_YOUNG_PAIR(BgL_idz00_542, BGl_string1545z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_543,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 877 */
				obj_t BgL_idz00_544;

				BgL_idz00_544 = CNST_TABLE_REF(((long) 172));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_545;

					BgL_arg1256z00_545 =
						MAKE_YOUNG_PAIR(BgL_idz00_544, BGl_string1546z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_545,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2purifyza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 880 */
				obj_t BgL_idz00_546;

				BgL_idz00_546 = CNST_TABLE_REF(((long) 173));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_547;

					BgL_arg1256z00_547 =
						MAKE_YOUNG_PAIR(BgL_idz00_546, BGl_string1547z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_547,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2jvmzd2envza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 883 */
				obj_t BgL_idz00_548;

				BgL_idz00_548 = CNST_TABLE_REF(((long) 174));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_549;

					BgL_arg1256z00_549 =
						MAKE_YOUNG_PAIR(BgL_idz00_548, BGl_string1548z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_549,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2jvmza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 886 */
				obj_t BgL_idz00_550;

				BgL_idz00_550 = CNST_TABLE_REF(((long) 175));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_551;

					BgL_arg1256z00_551 =
						MAKE_YOUNG_PAIR(BgL_idz00_550, BGl_string1549z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_551,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2isazf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 889 */
				obj_t BgL_idz00_552;

				BgL_idz00_552 = CNST_TABLE_REF(((long) 176));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_553;

					BgL_arg1256z00_553 =
						MAKE_YOUNG_PAIR(BgL_idz00_552, BGl_string1550z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_553,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 892 */
				obj_t BgL_idz00_554;

				BgL_idz00_554 = CNST_TABLE_REF(((long) 177));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_555;

					BgL_arg1256z00_555 =
						MAKE_YOUNG_PAIR(BgL_idz00_554, BGl_string1551z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_555,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00 =
				BFALSE;
			{	/* Engine/param.scm 895 */
				obj_t BgL_idz00_556;

				BgL_idz00_556 = CNST_TABLE_REF(((long) 178));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_557;

					BgL_arg1256z00_557 =
						MAKE_YOUNG_PAIR(BgL_idz00_556, BGl_string1552z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_557,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00 =
				BFALSE;
			{	/* Engine/param.scm 898 */
				obj_t BgL_idz00_558;

				BgL_idz00_558 = CNST_TABLE_REF(((long) 179));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_559;

					BgL_arg1256z00_559 =
						MAKE_YOUNG_PAIR(BgL_idz00_558, BGl_string1553z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_559,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00 =
				BFALSE;
			{	/* Engine/param.scm 901 */
				obj_t BgL_idz00_560;

				BgL_idz00_560 = CNST_TABLE_REF(((long) 180));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_561;

					BgL_arg1256z00_561 =
						MAKE_YOUNG_PAIR(BgL_idz00_560, BGl_string1554z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_561,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2applyzd2trackingzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 904 */
				obj_t BgL_idz00_562;

				BgL_idz00_562 = CNST_TABLE_REF(((long) 181));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_563;

					BgL_arg1256z00_563 =
						MAKE_YOUNG_PAIR(BgL_idz00_562, BGl_string1555z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_563,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2pairzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 907 */
				obj_t BgL_idz00_564;

				BgL_idz00_564 = CNST_TABLE_REF(((long) 182));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_565;

					BgL_arg1256z00_565 =
						MAKE_YOUNG_PAIR(BgL_idz00_564, BGl_string1556z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_565,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2pairzd2quotezd2maxzd2lengthza2zd2zzengine_paramz00 =
				BINT(((long) 4));
			{	/* Engine/param.scm 910 */
				obj_t BgL_idz00_566;

				BgL_idz00_566 = CNST_TABLE_REF(((long) 183));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_567;

					BgL_arg1256z00_567 =
						MAKE_YOUNG_PAIR(BgL_idz00_566, BGl_string1557z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_567,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00 =
				BFALSE;
			{	/* Engine/param.scm 913 */
				obj_t BgL_idz00_568;

				BgL_idz00_568 = CNST_TABLE_REF(((long) 184));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_569;

					BgL_arg1256z00_569 =
						MAKE_YOUNG_PAIR(BgL_idz00_568, BGl_string1558z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_569,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2cfazd2forcezd2loosezd2localzd2functionzf3za2z21zzengine_paramz00
				= BFALSE;
			{	/* Engine/param.scm 916 */
				obj_t BgL_idz00_570;

				BgL_idz00_570 = CNST_TABLE_REF(((long) 185));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_571;

					BgL_arg1256z00_571 =
						MAKE_YOUNG_PAIR(BgL_idz00_570, BGl_string1559z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_571,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2integratezf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 919 */
				obj_t BgL_idz00_572;

				BgL_idz00_572 = CNST_TABLE_REF(((long) 186));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_573;

					BgL_arg1256z00_573 =
						MAKE_YOUNG_PAIR(BgL_idz00_572, BGl_string1560z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_573,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 922 */
				obj_t BgL_idz00_574;

				BgL_idz00_574 = CNST_TABLE_REF(((long) 187));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_575;

					BgL_arg1256z00_575 =
						MAKE_YOUNG_PAIR(BgL_idz00_574, BGl_string1561z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_575,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 925 */
				obj_t BgL_idz00_576;

				BgL_idz00_576 = CNST_TABLE_REF(((long) 188));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_577;

					BgL_arg1256z00_577 =
						MAKE_YOUNG_PAIR(BgL_idz00_576, BGl_string1562z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_577,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 928 */
				obj_t BgL_idz00_578;

				BgL_idz00_578 = CNST_TABLE_REF(((long) 189));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_579;

					BgL_arg1256z00_579 =
						MAKE_YOUNG_PAIR(BgL_idz00_578, BGl_string1563z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_579,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2initflowzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 931 */
				obj_t BgL_idz00_580;

				BgL_idz00_580 = CNST_TABLE_REF(((long) 190));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_581;

					BgL_arg1256z00_581 =
						MAKE_YOUNG_PAIR(BgL_idz00_580, BGl_string1564z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_581,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2synczd2failsafezf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 934 */
				obj_t BgL_idz00_582;

				BgL_idz00_582 = CNST_TABLE_REF(((long) 191));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_583;

					BgL_arg1256z00_583 =
						MAKE_YOUNG_PAIR(BgL_idz00_582, BGl_string1565z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_583,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 937 */
				obj_t BgL_idz00_584;

				BgL_idz00_584 = CNST_TABLE_REF(((long) 192));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_585;

					BgL_arg1256z00_585 =
						MAKE_YOUNG_PAIR(BgL_idz00_584, BGl_string1566z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_585,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2inliningzf3za2zf3zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 940 */
				obj_t BgL_idz00_586;

				BgL_idz00_586 = CNST_TABLE_REF(((long) 193));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_587;

					BgL_arg1256z00_587 =
						MAKE_YOUNG_PAIR(BgL_idz00_586, BGl_string1567z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_587,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2userzd2inliningzf3za2z21zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 943 */
				obj_t BgL_idz00_588;

				BgL_idz00_588 = CNST_TABLE_REF(((long) 194));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_589;

					BgL_arg1256z00_589 =
						MAKE_YOUNG_PAIR(BgL_idz00_588, BGl_string1568z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_589,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00 =
				BGl_proc1569z00zzengine_paramz00;
			{	/* Engine/param.scm 946 */
				obj_t BgL_idz00_592;

				BgL_idz00_592 = CNST_TABLE_REF(((long) 195));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_593;

					BgL_arg1256z00_593 =
						MAKE_YOUNG_PAIR(BgL_idz00_592, BGl_string1570z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_593,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00 =
				BGl_proc1571z00zzengine_paramz00;
			{	/* Engine/param.scm 949 */
				obj_t BgL_idz00_596;

				BgL_idz00_596 = CNST_TABLE_REF(((long) 196));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_597;

					BgL_arg1256z00_597 =
						MAKE_YOUNG_PAIR(BgL_idz00_596, BGl_string1572z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_597,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2returnzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 952 */
				obj_t BgL_idz00_598;

				BgL_idz00_598 = CNST_TABLE_REF(((long) 197));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_599;

					BgL_arg1256z00_599 =
						MAKE_YOUNG_PAIR(BgL_idz00_598, BGl_string1573z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_599,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 955 */
				obj_t BgL_idz00_600;

				BgL_idz00_600 = CNST_TABLE_REF(((long) 198));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_601;

					BgL_arg1256z00_601 =
						MAKE_YOUNG_PAIR(BgL_idz00_600, BGl_string1574z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_601,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2taggedzd2fxopzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 958 */
				obj_t BgL_idz00_602;

				BgL_idz00_602 = CNST_TABLE_REF(((long) 199));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_603;

					BgL_arg1256z00_603 =
						MAKE_YOUNG_PAIR(BgL_idz00_602, BGl_string1575z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_603,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2stackablezf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 961 */
				obj_t BgL_idz00_604;

				BgL_idz00_604 = CNST_TABLE_REF(((long) 200));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_605;

					BgL_arg1256z00_605 =
						MAKE_YOUNG_PAIR(BgL_idz00_604, BGl_string1576z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_605,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2optimzd2uncellzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 964 */
				obj_t BgL_idz00_606;

				BgL_idz00_606 = CNST_TABLE_REF(((long) 201));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_607;

					BgL_arg1256z00_607 =
						MAKE_YOUNG_PAIR(BgL_idz00_606, BGl_string1577z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_607,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2extendzd2entryza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 971 */
				obj_t BgL_idz00_608;

				BgL_idz00_608 = CNST_TABLE_REF(((long) 202));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_609;

					BgL_arg1256z00_609 =
						MAKE_YOUNG_PAIR(BgL_idz00_608, BGl_string1578z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_609,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2srczd2suffixza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 203));
			{	/* Engine/param.scm 980 */
				obj_t BgL_idz00_610;

				BgL_idz00_610 = CNST_TABLE_REF(((long) 204));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_611;

					BgL_arg1256z00_611 =
						MAKE_YOUNG_PAIR(BgL_idz00_610, BGl_string1579z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_611,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2czd2suffixza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 205));
			{	/* Engine/param.scm 989 */
				obj_t BgL_idz00_612;

				BgL_idz00_612 = CNST_TABLE_REF(((long) 206));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_613;

					BgL_arg1256z00_613 =
						MAKE_YOUNG_PAIR(BgL_idz00_612, BGl_string1580z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_613,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2csharpzd2suffixza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 207));
			{	/* Engine/param.scm 999 */
				obj_t BgL_idz00_614;

				BgL_idz00_614 = CNST_TABLE_REF(((long) 208));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_615;

					BgL_arg1256z00_615 =
						MAKE_YOUNG_PAIR(BgL_idz00_614, BGl_string1581z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_615,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 1010 */
				obj_t BgL_list1224z00_161;

				{	/* Engine/param.scm 1010 */
					obj_t BgL_arg1225z00_162;

					{	/* Engine/param.scm 1010 */
						obj_t BgL_arg1227z00_163;

						BgL_arg1227z00_163 =
							MAKE_YOUNG_PAIR(string_to_bstring(SHARED_LIB_SUFFIX), BNIL);
						BgL_arg1225z00_162 =
							MAKE_YOUNG_PAIR(string_to_bstring(STATIC_LIB_SUFFIX),
							BgL_arg1227z00_163);
					}
					BgL_list1224z00_161 =
						MAKE_YOUNG_PAIR
						(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
						BgL_arg1225z00_162);
				}
				BGl_za2objzd2suffixza2zd2zzengine_paramz00 = BgL_list1224z00_161;
			}
			{	/* Engine/param.scm 1008 */
				obj_t BgL_idz00_617;

				BgL_idz00_617 = CNST_TABLE_REF(((long) 209));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_618;

					BgL_arg1256z00_618 =
						MAKE_YOUNG_PAIR(BgL_idz00_617, BGl_string1582z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_618,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1583z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2mcozd2suffixza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 210));
			{	/* Engine/param.scm 1019 */
				obj_t BgL_idz00_620;

				BgL_idz00_620 = CNST_TABLE_REF(((long) 211));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_621;

					BgL_arg1256z00_621 =
						MAKE_YOUNG_PAIR(BgL_idz00_620, BGl_string1584z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_621,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00 =
				CNST_TABLE_REF(((long) 212));
			{	/* Engine/param.scm 1026 */
				obj_t BgL_idz00_622;

				BgL_idz00_622 = CNST_TABLE_REF(((long) 213));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_623;

					BgL_arg1256z00_623 =
						MAKE_YOUNG_PAIR(BgL_idz00_622, BGl_string1585z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_623,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2autozd2modeza2zd2zzengine_paramz00 = CNST_TABLE_REF(((long) 214));
			{	/* Engine/param.scm 1033 */
				obj_t BgL_idz00_624;

				BgL_idz00_624 = CNST_TABLE_REF(((long) 215));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_625;

					BgL_arg1256z00_625 =
						MAKE_YOUNG_PAIR(BgL_idz00_624, BGl_string1586z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_625,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00 = BTRUE;
			{	/* Engine/param.scm 1044 */
				obj_t BgL_idz00_626;

				BgL_idz00_626 = CNST_TABLE_REF(((long) 216));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_627;

					BgL_arg1256z00_627 =
						MAKE_YOUNG_PAIR(BgL_idz00_626, BGl_string1587z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_627,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00 = BINT(((long) 0));
			{	/* Engine/param.scm 1051 */
				obj_t BgL_idz00_628;

				BgL_idz00_628 = CNST_TABLE_REF(((long) 217));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_629;

					BgL_arg1256z00_629 =
						MAKE_YOUNG_PAIR(BgL_idz00_628, BGl_string1588z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_629,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2readerza2z00zzengine_paramz00 = CNST_TABLE_REF(((long) 218));
			{	/* Engine/param.scm 1058 */
				obj_t BgL_idz00_630;

				BgL_idz00_630 = CNST_TABLE_REF(((long) 219));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_631;

					BgL_arg1256z00_631 =
						MAKE_YOUNG_PAIR(BgL_idz00_630, BGl_string1589z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_631,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 1067 */
				obj_t BgL_arg1245z00_172;

				BgL_arg1245z00_172 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 220)));
				{	/* Engine/param.scm 1067 */
					obj_t BgL_res1319z00_633;

					BgL_res1319z00_633 = bstring_to_symbol(((obj_t) BgL_arg1245z00_172));
					BGl_za2targetzd2languageza2zd2zzengine_paramz00 = BgL_res1319z00_633;
			}}
			{	/* Engine/param.scm 1065 */
				obj_t BgL_idz00_634;

				BgL_idz00_634 = CNST_TABLE_REF(((long) 221));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_635;

					BgL_arg1256z00_635 =
						MAKE_YOUNG_PAIR(BgL_idz00_634, BGl_string1590z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_635,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BGl_proc1591z00zzengine_paramz00,
				BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
			BGl_za2sawza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1072 */
				obj_t BgL_idz00_638;

				BgL_idz00_638 = CNST_TABLE_REF(((long) 222));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_639;

					BgL_arg1256z00_639 =
						MAKE_YOUNG_PAIR(BgL_idz00_638, BGl_string1592z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_639,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2reallocationzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1079 */
				obj_t BgL_idz00_640;

				BgL_idz00_640 = CNST_TABLE_REF(((long) 223));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_641;

					BgL_arg1256z00_641 =
						MAKE_YOUNG_PAIR(BgL_idz00_640, BGl_string1593z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_641,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1086 */
				obj_t BgL_idz00_642;

				BgL_idz00_642 = CNST_TABLE_REF(((long) 224));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_643;

					BgL_arg1256z00_643 =
						MAKE_YOUNG_PAIR(BgL_idz00_642, BGl_string1594z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_643,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzd2onexpressionzf3za2z21zzengine_paramz00
				= BFALSE;
			{	/* Engine/param.scm 1093 */
				obj_t BgL_idz00_644;

				BgL_idz00_644 = CNST_TABLE_REF(((long) 225));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_645;

					BgL_arg1256z00_645 =
						MAKE_YOUNG_PAIR(BgL_idz00_644, BGl_string1595z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_645,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00 =
				BINT(((long) 4000));
			{	/* Engine/param.scm 1100 */
				obj_t BgL_idz00_646;

				BgL_idz00_646 = CNST_TABLE_REF(((long) 226));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_647;

					BgL_arg1256z00_647 =
						MAKE_YOUNG_PAIR(BgL_idz00_646, BGl_string1596z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_647,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00 =
				BNIL;
			{	/* Engine/param.scm 1107 */
				obj_t BgL_idz00_648;

				BgL_idz00_648 = CNST_TABLE_REF(((long) 227));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_649;

					BgL_arg1256z00_649 =
						MAKE_YOUNG_PAIR(BgL_idz00_648, BGl_string1597z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_649,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00
				= BNIL;
			{	/* Engine/param.scm 1114 */
				obj_t BgL_idz00_650;

				BgL_idz00_650 = CNST_TABLE_REF(((long) 228));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_651;

					BgL_arg1256z00_651 =
						MAKE_YOUNG_PAIR(BgL_idz00_650, BGl_string1598z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_651,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2spillza2zd2zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1121 */
				obj_t BgL_idz00_652;

				BgL_idz00_652 = CNST_TABLE_REF(((long) 229));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_653;

					BgL_arg1256z00_653 =
						MAKE_YOUNG_PAIR(BgL_idz00_652, BGl_string1599z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_653,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2sawzd2bbvzf3za2z21zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1128 */
				obj_t BgL_idz00_654;

				BgL_idz00_654 = CNST_TABLE_REF(((long) 230));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_655;

					BgL_arg1256z00_655 =
						MAKE_YOUNG_PAIR(BgL_idz00_654, BGl_string1600z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_655,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1135 */
				obj_t BgL_idz00_656;

				BgL_idz00_656 = CNST_TABLE_REF(((long) 231));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_657;

					BgL_arg1256z00_657 =
						MAKE_YOUNG_PAIR(BgL_idz00_656, BGl_string1601z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_657,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00 =
				CNST_TABLE_REF(((long) 232));
			BGl_za2evalzd2optionsza2zd2zzengine_paramz00 = BNIL;
			{	/* Engine/param.scm 1155 */
				obj_t BgL_idz00_658;

				BgL_idz00_658 = CNST_TABLE_REF(((long) 233));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_659;

					BgL_arg1256z00_659 =
						MAKE_YOUNG_PAIR(BgL_idz00_658, BGl_string1602z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_659,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00 = BFALSE;
			{	/* Engine/param.scm 1162 */
				obj_t BgL_idz00_660;

				BgL_idz00_660 = CNST_TABLE_REF(((long) 234));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_661;

					BgL_arg1256z00_661 =
						MAKE_YOUNG_PAIR(BgL_idz00_660, BGl_string1603z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_661,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			BGl_za2prezd2processorza2zd2zzengine_paramz00 =
				BGl_proc1604z00zzengine_paramz00;
			{	/* Engine/param.scm 1169 */
				obj_t BgL_idz00_662;

				BgL_idz00_662 = CNST_TABLE_REF(((long) 235));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_663;

					BgL_arg1256z00_663 =
						MAKE_YOUNG_PAIR(BgL_idz00_662, BGl_string1605z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_663,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 1176 */
				obj_t BgL_idz00_664;

				BgL_idz00_664 = CNST_TABLE_REF(((long) 236));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_665;

					BgL_arg1256z00_665 =
						MAKE_YOUNG_PAIR(BgL_idz00_664, BGl_string1606z00zzengine_paramz00);
					BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_665,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00);
			}}
			{	/* Engine/param.scm 1177 */
				obj_t BgL_idz00_666;

				BgL_idz00_666 = CNST_TABLE_REF(((long) 237));
				{	/* Engine/param.scm 257 */
					obj_t BgL_arg1256z00_667;

					BgL_arg1256z00_667 =
						MAKE_YOUNG_PAIR(BgL_idz00_666, BGl_string1607z00zzengine_paramz00);
					return (BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_arg1256z00_667,
							BGl_za2bigloozd2variablesza2zd2zzengine_paramz00), BUNSPEC);
				}
			}
		}

	}



/* &<@*pre-processor*:1251> */
	obj_t BGl_z62zc3z04za2prezd2processorza2za31251ze3z37zzengine_paramz00(obj_t
		BgL_envz00_798, obj_t BgL_xz00_799)
	{
		{	/* Engine/param.scm 1169 */
			return BgL_xz00_799;
		}

	}



/* &<@anonymous:1247> */
	obj_t BGl_z62zc3z04anonymousza31247ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_800)
	{
		{	/* Engine/param.scm 1065 */
			{	/* Engine/param.scm 1067 */
				obj_t BgL_arg1250z00_897;

				BgL_arg1250z00_897 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 220)));
				{	/* Engine/param.scm 1067 */
					obj_t BgL_res1320z00_898;

					BgL_res1320z00_898 = bstring_to_symbol(((obj_t) BgL_arg1250z00_897));
					return (BGl_za2targetzd2languageza2zd2zzengine_paramz00 =
						BgL_res1320z00_898, BUNSPEC);
				}
			}
		}

	}



/* &<@anonymous:1230> */
	obj_t BGl_z62zc3z04anonymousza31230ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_801)
	{
		{	/* Engine/param.scm 1008 */
			{	/* Engine/param.scm 1010 */
				obj_t BgL_list1240z00_899;

				{	/* Engine/param.scm 1010 */
					obj_t BgL_arg1242z00_900;

					{	/* Engine/param.scm 1010 */
						obj_t BgL_arg1243z00_901;

						BgL_arg1243z00_901 =
							MAKE_YOUNG_PAIR(string_to_bstring(SHARED_LIB_SUFFIX), BNIL);
						BgL_arg1242z00_900 =
							MAKE_YOUNG_PAIR(string_to_bstring(STATIC_LIB_SUFFIX),
							BgL_arg1243z00_901);
					}
					BgL_list1240z00_899 =
						MAKE_YOUNG_PAIR
						(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
						BgL_arg1242z00_900);
				}
				return (BGl_za2objzd2suffixza2zd2zzengine_paramz00 =
					BgL_list1240z00_899, BUNSPEC);
			}
		}

	}



/* &<@*inlining-reduce-k1219> */
	obj_t BGl_z62zc3z04za2inliningzd2reducezd2k1219ze3ze4zzengine_paramz00(obj_t
		BgL_envz00_802, obj_t BgL_kfactorz00_803)
	{
		{	/* Engine/param.scm 949 */
			return BINT(((long) CINT(BgL_kfactorz00_803) / ((long) 2)));
		}

	}



/* &<@*inlining-kfactor*1218> */
	obj_t BGl_z62zc3z04za2inliningzd2kfactorza21218ze3z94zzengine_paramz00(obj_t
		BgL_envz00_804, obj_t BgL_olevelz00_805)
	{
		{	/* Engine/param.scm 946 */
			return BINT((((long) 2) * (long) CINT(BgL_olevelz00_805)));
		}

	}



/* &<@anonymous:1217> */
	obj_t BGl_z62zc3z04anonymousza31217ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_806)
	{
		{	/* Engine/param.scm 830 */
			return (BGl_za2czd2splitzd2stringza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 157))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1212> */
	obj_t BGl_z62zc3z04anonymousza31212ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_807)
	{
		{	/* Engine/param.scm 716 */
			return (BGl_za2jvmzd2javaza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 120))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1209> */
	obj_t BGl_z62zc3z04anonymousza31209ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_808)
	{
		{	/* Engine/param.scm 713 */
			return (BGl_za2jvmzd2shellza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 118))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1202> */
	obj_t BGl_z62zc3z04anonymousza31202ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_809)
	{
		{	/* Engine/param.scm 631 */
			return (BGl_za2czd2debugzd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 96))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1198> */
	obj_t BGl_z62zc3z04anonymousza31198ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_810)
	{
		{	/* Engine/param.scm 586 */
			return (BGl_za2indentza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 83))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1195> */
	obj_t BGl_z62zc3z04anonymousza31195ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_811)
	{
		{	/* Engine/param.scm 562 */
			return (BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00 =
				string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
					BGl_string1449z00zzengine_paramz00), BUNSPEC);
		}

	}



/* &<@anonymous:1191> */
	obj_t BGl_z62zc3z04anonymousza31191ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_812)
	{
		{	/* Engine/param.scm 554 */
			return (BGl_za2heapzd2nameza2zd2zzengine_paramz00 =
				string_append(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00,
					BGl_string1445z00zzengine_paramz00), BUNSPEC);
		}

	}



/* &<@anonymous:1187> */
	obj_t BGl_z62zc3z04anonymousza31187ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_813)
	{
		{	/* Engine/param.scm 542 */
			{	/* Engine/param.scm 544 */
				obj_t BgL_list1188z00_902;

				BgL_list1188z00_902 =
					MAKE_YOUNG_PAIR(BGl_string1439z00zzengine_paramz00, BNIL);
				return (BGl_za2includezd2foreignza2zd2zzengine_paramz00 =
					BgL_list1188z00_902, BUNSPEC);
			}
		}

	}



/* &<@anonymous:1179> */
	obj_t BGl_z62zc3z04anonymousza31179ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_814)
	{
		{	/* Engine/param.scm 534 */
			return (BGl_za2loadzd2pathza2zd2zz__evalz00 =
				BGl_appendzd221011zd2zzengine_paramz00
				(BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00,
					BGl_za2libzd2dirza2zd2zzengine_paramz00), BUNSPEC);
		}

	}



/* &<@anonymous:1176> */
	obj_t BGl_z62zc3z04anonymousza31176ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_815)
	{
		{	/* Engine/param.scm 516 */
			return (BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00 =
				BGl_stringzd2splitzd2charz00zztools_miscz00
				(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 65))),
					BCHAR(((unsigned char) ' '))), BUNSPEC);
		}

	}



/* &<@anonymous:1173> */
	obj_t BGl_z62zc3z04anonymousza31173ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_816)
	{
		{	/* Engine/param.scm 500 */
			return (BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 60))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1170> */
	obj_t BGl_z62zc3z04anonymousza31170ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_817)
	{
		{	/* Engine/param.scm 488 */
			return (BGl_za2gczd2customzf3za2z21zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 54))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1156> */
	obj_t BGl_z62zc3z04anonymousza31156ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_818)
	{
		{	/* Engine/param.scm 482 */
			{	/* Engine/param.scm 484 */
				bool_t BgL_test1906z00_1769;

				{	/* Engine/param.scm 484 */
					obj_t BgL_tmpz00_1770;

					BgL_tmpz00_1770 =
						BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 54)));
					BgL_test1906z00_1769 = STRINGP(BgL_tmpz00_1770);
				}
				if (BgL_test1906z00_1769)
					{	/* Engine/param.scm 485 */
						obj_t BgL_arg1165z00_903;

						BgL_arg1165z00_903 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									54)));
						{	/* Engine/param.scm 485 */
							obj_t BgL_res1311z00_904;

							BgL_res1311z00_904 =
								bstring_to_symbol(((obj_t) BgL_arg1165z00_903));
							return (BGl_za2gczd2libza2zd2zzengine_paramz00 =
								BgL_res1311z00_904, BUNSPEC);
						}
					}
				else
					{	/* Engine/param.scm 486 */
						obj_t BgL_arg1166z00_905;

						BgL_arg1166z00_905 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									55)));
						{	/* Engine/param.scm 486 */
							obj_t BgL_res1312z00_906;

							BgL_res1312z00_906 =
								bstring_to_symbol(((obj_t) BgL_arg1166z00_905));
							return (BGl_za2gczd2libza2zd2zzengine_paramz00 =
								BgL_res1312z00_906, BUNSPEC);
						}
					}
			}
		}

	}



/* &<@anonymous:1128> */
	obj_t BGl_z62zc3z04anonymousza31128ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_819)
	{
		{	/* Engine/param.scm 474 */
			return (BGl_za2libzd2srczd2dirza2z00zzengine_paramz00 =
				BGl_makezd2filezd2namez00zz__osz00(CAR
					(BGl_za2libzd2dirza2zd2zzengine_paramz00),
					BGl_string1418z00zzengine_paramz00), BUNSPEC);
		}

	}



/* &<@anonymous:1125> */
	obj_t BGl_z62zc3z04anonymousza31125ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_820)
	{
		{	/* Engine/param.scm 470 */
			return (BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1123> */
	obj_t BGl_z62zc3z04anonymousza31123ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_821)
	{
		{	/* Engine/param.scm 467 */
			return (BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1117> */
	obj_t BGl_z62zc3z04anonymousza31117ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_822)
	{
		{	/* Engine/param.scm 461 */
			{	/* Engine/param.scm 463 */
				obj_t BgL_libzd2envzd2_907;

				BgL_libzd2envzd2_907 =
					BGl_buildzd2pathzd2fromzd2shellzd2variablez00zztools_miscz00
					(BGl_string1411z00zzengine_paramz00);
				if (NULLP(BgL_libzd2envzd2_907))
					{	/* Engine/param.scm 465 */
						obj_t BgL_arg1118z00_908;

						BgL_arg1118z00_908 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									24)));
						{	/* Engine/param.scm 465 */
							obj_t BgL_list1119z00_909;

							{	/* Engine/param.scm 465 */
								obj_t BgL_arg1121z00_910;

								BgL_arg1121z00_910 = MAKE_YOUNG_PAIR(BgL_arg1118z00_908, BNIL);
								BgL_list1119z00_909 =
									MAKE_YOUNG_PAIR(BGl_string1412z00zzengine_paramz00,
									BgL_arg1121z00_910);
							}
							return (BGl_za2libzd2dirza2zd2zzengine_paramz00 =
								BgL_list1119z00_909, BUNSPEC);
						}
					}
				else
					{	/* Engine/param.scm 464 */
						return (BGl_za2libzd2dirza2zd2zzengine_paramz00 =
							MAKE_YOUNG_PAIR(BGl_string1412z00zzengine_paramz00,
								BgL_libzd2envzd2_907), BUNSPEC);
					}
			}
		}

	}



/* &<@anonymous:1110> */
	obj_t BGl_z62zc3z04anonymousza31110ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_823)
	{
		{	/* Engine/param.scm 441 */
			return (BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 42))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1104> */
	obj_t BGl_z62zc3z04anonymousza31104ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_824)
	{
		{	/* Engine/param.scm 437 */
			return (BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 40))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1102> */
	obj_t BGl_z62zc3z04anonymousza31102ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_825)
	{
		{	/* Engine/param.scm 433 */
			return (BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 38))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1100> */
	obj_t BGl_z62zc3z04anonymousza31100ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_826)
	{
		{	/* Engine/param.scm 429 */
			return (BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 36))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1096> */
	obj_t BGl_z62zc3z04anonymousza31096ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_827)
	{
		{	/* Engine/param.scm 425 */
			return (BGl_za2ldzd2styleza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 34))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1079> */
	obj_t BGl_z62zc3z04anonymousza31079ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_828)
	{
		{	/* Engine/param.scm 409 */
			return (BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 28))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1074> */
	obj_t BGl_z62zc3z04anonymousza31074ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_829)
	{
		{	/* Engine/param.scm 405 */
			return (BGl_za2cczd2ozd2optionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 26))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1064> */
	obj_t BGl_z62zc3z04anonymousza31064ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_830)
	{
		{	/* Engine/param.scm 401 */
			{	/* Engine/param.scm 403 */
				obj_t BgL_arg1065z00_911;

				BgL_arg1065z00_911 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 24)));
				{	/* Engine/param.scm 403 */
					obj_t BgL_list1066z00_912;

					BgL_list1066z00_912 = MAKE_YOUNG_PAIR(BgL_arg1065z00_911, BNIL);
					return (BGl_za2cflagszd2rpathza2zd2zzengine_paramz00 =
						BgL_list1066z00_912, BUNSPEC);
				}
			}
		}

	}



/* &<@anonymous:1060> */
	obj_t BGl_z62zc3z04anonymousza31060ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_831)
	{
		{	/* Engine/param.scm 397 */
			return (BGl_za2cflagszd2profza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 22))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1058> */
	obj_t BGl_z62zc3z04anonymousza31058ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_832)
	{
		{	/* Engine/param.scm 393 */
			return (BGl_za2cflagszd2optimza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 20))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1056> */
	obj_t BGl_z62zc3z04anonymousza31056ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_833)
	{
		{	/* Engine/param.scm 389 */
			return (BGl_za2cflagsza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 18))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1054> */
	obj_t BGl_z62zc3z04anonymousza31054ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_834)
	{
		{	/* Engine/param.scm 385 */
			return (BGl_za2ccza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 16))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1052> */
	obj_t BGl_z62zc3z04anonymousza31052ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_835)
	{
		{	/* Engine/param.scm 381 */
			return (BGl_za2cczd2styleza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 14))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1050> */
	obj_t BGl_z62zc3z04anonymousza31050ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_836)
	{
		{	/* Engine/param.scm 377 */
			return (BGl_za2shellza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 12))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1048> */
	obj_t BGl_z62zc3z04anonymousza31048ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_837)
	{
		{	/* Engine/param.scm 338 */
			{	/* Engine/param.scm 340 */
				obj_t BgL_tmpz00_913;

				BgL_tmpz00_913 =
					BGl_getenvz00zz__osz00(BGl_string1368z00zzengine_paramz00);
				if (STRINGP(BgL_tmpz00_913))
					{	/* Engine/param.scm 341 */
						return (BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 =
							BgL_tmpz00_913, BUNSPEC);
					}
				else
					{	/* Engine/param.scm 341 */
						return (BGl_za2bigloozd2tmpza2zd2zzengine_paramz00 =
							string_to_bstring(OS_TMP), BUNSPEC);
					}
			}
		}

	}



/* &<@anonymous:1039> */
	obj_t BGl_z62zc3z04anonymousza31039ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_838)
	{
		{	/* Engine/param.scm 323 */
			{	/* Engine/param.scm 325 */
				obj_t BgL_list1040z00_914;

				{	/* Engine/param.scm 325 */
					obj_t BgL_arg1041z00_915;

					{	/* Engine/param.scm 325 */
						obj_t BgL_arg1042z00_916;

						{	/* Engine/param.scm 325 */
							obj_t BgL_arg1043z00_917;

							{	/* Engine/param.scm 325 */
								obj_t BgL_arg1044z00_918;

								BgL_arg1044z00_918 =
									MAKE_YOUNG_PAIR(BGl_string1360z00zzengine_paramz00, BNIL);
								BgL_arg1043z00_917 =
									MAKE_YOUNG_PAIR
									(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
									BgL_arg1044z00_918);
							}
							BgL_arg1042z00_916 =
								MAKE_YOUNG_PAIR(BGl_string1361z00zzengine_paramz00,
								BgL_arg1043z00_917);
						}
						BgL_arg1041z00_915 =
							MAKE_YOUNG_PAIR
							(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
							BgL_arg1042z00_916);
					}
					BgL_list1040z00_914 =
						MAKE_YOUNG_PAIR(BGl_string1362z00zzengine_paramz00,
						BgL_arg1041z00_915);
				}
				return (BGl_za2bigloozd2nameza2zd2zzengine_paramz00 =
					BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1040z00_914),
					BUNSPEC);
			}
		}

	}



/* &<@anonymous:1031> */
	obj_t BGl_z62zc3z04anonymousza31031ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_839)
	{
		{	/* Engine/param.scm 319 */
			return (BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 2))),
				BUNSPEC);
		}

	}



/* &<@anonymous:1029> */
	obj_t BGl_z62zc3z04anonymousza31029ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_840)
	{
		{	/* Engine/param.scm 315 */
			return (BGl_za2bigloozd2versionza2zd2zzengine_paramz00 =
				BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 0))),
				BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzengine_paramz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_179;

				BgL_headz00_179 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_180;
					obj_t BgL_tailz00_181;

					BgL_prevz00_180 = BgL_headz00_179;
					BgL_tailz00_181 = BgL_l1z00_1;
				BgL_loopz00_182:
					if (PAIRP(BgL_tailz00_181))
						{
							obj_t BgL_newzd2prevzd2_184;

							BgL_newzd2prevzd2_184 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_181), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_180, BgL_newzd2prevzd2_184);
							{
								obj_t BgL_tailz00_1846;
								obj_t BgL_prevz00_1845;

								BgL_prevz00_1845 = BgL_newzd2prevzd2_184;
								BgL_tailz00_1846 = CDR(BgL_tailz00_181);
								BgL_tailz00_181 = BgL_tailz00_1846;
								BgL_prevz00_180 = BgL_prevz00_1845;
								goto BgL_loopz00_182;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_179);
				}
			}
		}

	}



/* &append-21011 */
	obj_t BGl_z62appendzd221011zb0zzengine_paramz00(obj_t BgL_envz00_841,
		obj_t BgL_l1z00_842, obj_t BgL_l2z00_843)
	{
		{
			return
				BGl_appendzd221011zd2zzengine_paramz00(BgL_l1z00_842, BgL_l2z00_843);
		}

	}



/* &add-doc-variable! */
	obj_t BGl_z62addzd2doczd2variablez12z70zzengine_paramz00(obj_t BgL_envz00_844,
		obj_t BgL_idz00_845, obj_t BgL_docz00_846)
	{
		{	/* Engine/param.scm 256 */
			{	/* Engine/param.scm 257 */
				obj_t BgL_arg1256z00_919;

				BgL_arg1256z00_919 = MAKE_YOUNG_PAIR(BgL_idz00_845, BgL_docz00_846);
				return (BGl_za2bigloozd2variablesza2zd2zzengine_paramz00 =
					MAKE_YOUNG_PAIR(BgL_arg1256z00_919,
						BGl_za2bigloozd2variablesza2zd2zzengine_paramz00), BUNSPEC);
			}
		}

	}



/* &add-updater! */
	obj_t BGl_z62addzd2updaterz12za2zzengine_paramz00(obj_t BgL_envz00_847,
		obj_t BgL_procz00_848)
	{
		{	/* Engine/param.scm 263 */
			return (BGl_za2paramzd2updatersza2zd2zzengine_paramz00 =
				MAKE_YOUNG_PAIR(BgL_procz00_848,
					BGl_za2paramzd2updatersza2zd2zzengine_paramz00), BUNSPEC);
		}

	}



/* reinitialize-bigloo-variables! */
	BGL_EXPORTED_DEF obj_t
		BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00()
	{
		{	/* Engine/param.scm 266 */
			{	/* Engine/param.scm 267 */
				obj_t BgL_g1018z00_188;

				BgL_g1018z00_188 =
					bgl_reverse(BGl_za2paramzd2updatersza2zd2zzengine_paramz00);
				{
					obj_t BgL_l1016z00_190;

					{	/* Engine/param.scm 267 */
						bool_t BgL_tmpz00_1854;

						BgL_l1016z00_190 = BgL_g1018z00_188;
					BgL_zc3z04anonymousza31257ze3z87_191:
						if (PAIRP(BgL_l1016z00_190))
							{	/* Engine/param.scm 267 */
								{	/* Engine/param.scm 267 */
									obj_t BgL_procz00_193;

									BgL_procz00_193 = CAR(BgL_l1016z00_190);
									PROCEDURE_ENTRY(BgL_procz00_193) (BgL_procz00_193, BEOA);
								}
								{
									obj_t BgL_l1016z00_1861;

									BgL_l1016z00_1861 = CDR(BgL_l1016z00_190);
									BgL_l1016z00_190 = BgL_l1016z00_1861;
									goto BgL_zc3z04anonymousza31257ze3z87_191;
								}
							}
						else
							{	/* Engine/param.scm 267 */
								BgL_tmpz00_1854 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_1854);
					}
				}
			}
		}

	}



/* &reinitialize-bigloo-variables! */
	obj_t BGl_z62reinitializa7ezd2bigloozd2variablesz12zd7zzengine_paramz00(obj_t
		BgL_envz00_849)
	{
		{	/* Engine/param.scm 266 */
			return BGl_reinitializa7ezd2bigloozd2variablesz12zb5zzengine_paramz00();
		}

	}



/* bigloo-variables-usage */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2variableszd2usagez00zzengine_paramz00(bool_t
		BgL_manualzf3zf3_6)
	{
		{	/* Engine/param.scm 284 */
			{	/* Engine/param.scm 285 */
				obj_t BgL_port1019z00_196;

				{	/* Engine/param.scm 285 */
					obj_t BgL_res1323z00_678;

					{	/* Engine/param.scm 285 */
						obj_t BgL_tmpz00_1865;

						BgL_tmpz00_1865 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1323z00_678 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1865);
					}
					BgL_port1019z00_196 = BgL_res1323z00_678;
				}
				bgl_display_string(BGl_string1608z00zzengine_paramz00,
					BgL_port1019z00_196);
				bgl_display_char(((unsigned char) 10), BgL_port1019z00_196);
			}
			{	/* Engine/param.scm 286 */
				obj_t BgL_port1020z00_197;

				{	/* Engine/param.scm 286 */
					obj_t BgL_res1324z00_683;

					{	/* Engine/param.scm 286 */
						obj_t BgL_tmpz00_1870;

						BgL_tmpz00_1870 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1324z00_683 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1870);
					}
					BgL_port1020z00_197 = BgL_res1324z00_683;
				}
				bgl_display_string(BGl_string1609z00zzengine_paramz00,
					BgL_port1020z00_197);
				bgl_display_char(((unsigned char) 10), BgL_port1020z00_197);
			}
			{	/* Engine/param.scm 287 */
				obj_t BgL_port1021z00_198;

				{	/* Engine/param.scm 287 */
					obj_t BgL_res1325z00_688;

					{	/* Engine/param.scm 287 */
						obj_t BgL_tmpz00_1875;

						BgL_tmpz00_1875 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1325z00_688 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1875);
					}
					BgL_port1021z00_198 = BgL_res1325z00_688;
				}
				bgl_display_string(BGl_string1610z00zzengine_paramz00,
					BgL_port1021z00_198);
				bgl_display_char(((unsigned char) 10), BgL_port1021z00_198);
			}
			{	/* Engine/param.scm 288 */
				obj_t BgL_port1022z00_199;

				{	/* Engine/param.scm 288 */
					obj_t BgL_res1326z00_693;

					{	/* Engine/param.scm 288 */
						obj_t BgL_tmpz00_1880;

						BgL_tmpz00_1880 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1326z00_693 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1880);
					}
					BgL_port1022z00_199 = BgL_res1326z00_693;
				}
				bgl_display_string(BGl_string1611z00zzengine_paramz00,
					BgL_port1022z00_199);
				bgl_display_char(((unsigned char) 10), BgL_port1022z00_199);
			}
			{	/* Engine/param.scm 289 */
				obj_t BgL_port1023z00_200;

				{	/* Engine/param.scm 289 */
					obj_t BgL_res1327z00_698;

					{	/* Engine/param.scm 289 */
						obj_t BgL_tmpz00_1885;

						BgL_tmpz00_1885 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1327z00_698 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1885);
					}
					BgL_port1023z00_200 = BgL_res1327z00_698;
				}
				bgl_display_string(BGl_string1612z00zzengine_paramz00,
					BgL_port1023z00_200);
				bgl_display_char(((unsigned char) 10), BgL_port1023z00_200);
			}
			{	/* Engine/param.scm 290 */
				obj_t BgL_port1024z00_201;

				{	/* Engine/param.scm 290 */
					obj_t BgL_res1328z00_703;

					{	/* Engine/param.scm 290 */
						obj_t BgL_tmpz00_1890;

						BgL_tmpz00_1890 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1328z00_703 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1890);
					}
					BgL_port1024z00_201 = BgL_res1328z00_703;
				}
				bgl_display_string(BGl_string1613z00zzengine_paramz00,
					BgL_port1024z00_201);
				bgl_display_char(((unsigned char) 10), BgL_port1024z00_201);
			}
			{	/* Engine/param.scm 291 */
				obj_t BgL_arg1268z00_202;

				{	/* Engine/param.scm 291 */
					obj_t BgL_res1329z00_708;

					{	/* Engine/param.scm 291 */
						obj_t BgL_tmpz00_1895;

						BgL_tmpz00_1895 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1329z00_708 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1895);
					}
					BgL_arg1268z00_202 = BgL_res1329z00_708;
				}
				bgl_display_char(((unsigned char) 10), BgL_arg1268z00_202);
			}
			{	/* Engine/param.scm 292 */
				obj_t BgL_g1015z00_203;

				BgL_g1015z00_203 =
					BGl_sortz00zz__r4_vectors_6_8z00
					(BGl_za2bigloozd2variablesza2zd2zzengine_paramz00,
					BGl_proc1614z00zzengine_paramz00);
				{
					obj_t BgL_lz00_205;

					{	/* Engine/param.scm 292 */
						bool_t BgL_tmpz00_1900;

						BgL_lz00_205 = BgL_g1015z00_203;
					BgL_zc3z04anonymousza31269ze3z87_206:
						if (PAIRP(BgL_lz00_205))
							{	/* Engine/param.scm 297 */
								obj_t BgL_varz00_208;

								BgL_varz00_208 = CAR(BgL_lz00_205);
								if (BgL_manualzf3zf3_6)
									{	/* Engine/param.scm 298 */
										{	/* Engine/param.scm 300 */
											obj_t BgL_port1025z00_209;

											{	/* Engine/param.scm 300 */
												obj_t BgL_res1334z00_728;

												{	/* Engine/param.scm 300 */
													obj_t BgL_tmpz00_1905;

													BgL_tmpz00_1905 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1334z00_728 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1905);
												}
												BgL_port1025z00_209 = BgL_res1334z00_728;
											}
											bgl_display_string(BGl_string1615z00zzengine_paramz00,
												BgL_port1025z00_209);
											{	/* Engine/param.scm 300 */
												obj_t BgL_arg1271z00_210;

												BgL_arg1271z00_210 = CAR(((obj_t) BgL_varz00_208));
												bgl_display_obj(BgL_arg1271z00_210,
													BgL_port1025z00_209);
											}
											bgl_display_string(BGl_string1616z00zzengine_paramz00,
												BgL_port1025z00_209);
											bgl_display_char(((unsigned char) 10),
												BgL_port1025z00_209);
										}
										{	/* Engine/param.scm 301 */
											obj_t BgL_port1026z00_211;

											{	/* Engine/param.scm 301 */
												obj_t BgL_res1335z00_736;

												{	/* Engine/param.scm 301 */
													obj_t BgL_tmpz00_1914;

													BgL_tmpz00_1914 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1335z00_736 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1914);
												}
												BgL_port1026z00_211 = BgL_res1335z00_736;
											}
											bgl_display_string(BGl_string1617z00zzengine_paramz00,
												BgL_port1026z00_211);
											{	/* Engine/param.scm 301 */
												obj_t BgL_arg1273z00_212;

												BgL_arg1273z00_212 = CDR(((obj_t) BgL_varz00_208));
												bgl_display_obj(BgL_arg1273z00_212,
													BgL_port1026z00_211);
											}
											bgl_display_char(((unsigned char) 10),
												BgL_port1026z00_211);
										}
										{	/* Engine/param.scm 302 */
											obj_t BgL_arg1274z00_213;

											{	/* Engine/param.scm 302 */
												obj_t BgL_res1336z00_742;

												{	/* Engine/param.scm 302 */
													obj_t BgL_tmpz00_1922;

													BgL_tmpz00_1922 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1336z00_742 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1922);
												}
												BgL_arg1274z00_213 = BgL_res1336z00_742;
											}
											bgl_display_string(BGl_string1618z00zzengine_paramz00,
												BgL_arg1274z00_213);
										}
										{	/* Engine/param.scm 303 */
											obj_t BgL_arg1275z00_214;

											{	/* Engine/param.scm 303 */
												obj_t BgL_arg1277z00_216;

												BgL_arg1277z00_216 = CAR(((obj_t) BgL_varz00_208));
												{	/* Engine/param.scm 303 */
													obj_t BgL_envz00_218;

													BgL_envz00_218 =
														BGl_defaultzd2environmentzd2zz__evalz00();
													{	/* Engine/param.scm 303 */

														BgL_arg1275z00_214 =
															BGl_evalz00zz__evalz00(BgL_arg1277z00_216,
															BgL_envz00_218);
											}}}
											BGl_writez00zz__r4_output_6_10_3z00(BgL_arg1275z00_214,
												BNIL);
										}
										{	/* Engine/param.scm 304 */
											obj_t BgL_arg1280z00_219;

											{	/* Engine/param.scm 304 */
												obj_t BgL_res1337z00_747;

												{	/* Engine/param.scm 304 */
													obj_t BgL_tmpz00_1931;

													BgL_tmpz00_1931 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1337z00_747 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1931);
												}
												BgL_arg1280z00_219 = BgL_res1337z00_747;
											}
											bgl_display_char(((unsigned char) 10),
												BgL_arg1280z00_219);
									}}
								else
									{	/* Engine/param.scm 298 */
										{	/* Engine/param.scm 306 */
											obj_t BgL_arg1281z00_220;
											obj_t BgL_arg1282z00_221;

											BgL_arg1281z00_220 = CAR(((obj_t) BgL_varz00_208));
											BgL_arg1282z00_221 = CDR(((obj_t) BgL_varz00_208));
											{	/* Engine/param.scm 306 */
												obj_t BgL_list1283z00_222;

												{	/* Engine/param.scm 306 */
													obj_t BgL_arg1284z00_223;

													{	/* Engine/param.scm 306 */
														obj_t BgL_arg1285z00_224;

														{	/* Engine/param.scm 306 */
															obj_t BgL_arg1286z00_225;

															{	/* Engine/param.scm 306 */
																obj_t BgL_arg1287z00_226;

																BgL_arg1287z00_226 =
																	MAKE_YOUNG_PAIR
																	(BGl_string1619z00zzengine_paramz00, BNIL);
																BgL_arg1286z00_225 =
																	MAKE_YOUNG_PAIR(BgL_arg1282z00_221,
																	BgL_arg1287z00_226);
															}
															BgL_arg1285z00_224 =
																MAKE_YOUNG_PAIR
																(BGl_string1616z00zzengine_paramz00,
																BgL_arg1286z00_225);
														}
														BgL_arg1284z00_223 =
															MAKE_YOUNG_PAIR(BgL_arg1281z00_220,
															BgL_arg1285z00_224);
													}
													BgL_list1283z00_222 =
														MAKE_YOUNG_PAIR(BGl_string1615z00zzengine_paramz00,
														BgL_arg1284z00_223);
												}
												BGl_displayza2za2zz__r4_output_6_10_3z00
													(BgL_list1283z00_222);
											}
										}
										{	/* Engine/param.scm 307 */
											obj_t BgL_arg1288z00_227;

											{	/* Engine/param.scm 307 */
												obj_t BgL_arg1290z00_229;

												BgL_arg1290z00_229 = CAR(((obj_t) BgL_varz00_208));
												{	/* Engine/param.scm 307 */
													obj_t BgL_envz00_231;

													BgL_envz00_231 =
														BGl_defaultzd2environmentzd2zz__evalz00();
													{	/* Engine/param.scm 307 */

														BgL_arg1288z00_227 =
															BGl_evalz00zz__evalz00(BgL_arg1290z00_229,
															BgL_envz00_231);
													}
												}
											}
											BGl_writez00zz__r4_output_6_10_3z00(BgL_arg1288z00_227,
												BNIL);
										}
										{	/* Engine/param.scm 308 */
											obj_t BgL_port1027z00_232;

											{	/* Engine/param.scm 308 */
												obj_t BgL_res1338z00_753;

												{	/* Engine/param.scm 308 */
													obj_t BgL_tmpz00_1950;

													BgL_tmpz00_1950 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1338z00_753 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1950);
												}
												BgL_port1027z00_232 = BgL_res1338z00_753;
											}
											bgl_display_string(BGl_string1620z00zzengine_paramz00,
												BgL_port1027z00_232);
											bgl_display_char(((unsigned char) 10),
												BgL_port1027z00_232);
									}}
								{
									obj_t BgL_lz00_1955;

									BgL_lz00_1955 = CDR(BgL_lz00_205);
									BgL_lz00_205 = BgL_lz00_1955;
									goto BgL_zc3z04anonymousza31269ze3z87_206;
								}
							}
						else
							{	/* Engine/param.scm 296 */
								BgL_tmpz00_1900 = ((bool_t) 0);
							}
						return BBOOL(BgL_tmpz00_1900);
					}
				}
			}
		}

	}



/* &bigloo-variables-usage */
	obj_t BGl_z62bigloozd2variableszd2usagez62zzengine_paramz00(obj_t
		BgL_envz00_851, obj_t BgL_manualzf3zf3_852)
	{
		{	/* Engine/param.scm 284 */
			return
				BGl_bigloozd2variableszd2usagez00zzengine_paramz00(CBOOL
				(BgL_manualzf3zf3_852));
		}

	}



/* &<@anonymous:1293> */
	obj_t BGl_z62zc3z04anonymousza31293ze3ze5zzengine_paramz00(obj_t
		BgL_envz00_853, obj_t BgL_xz00_854, obj_t BgL_yz00_855)
	{
		{	/* Engine/param.scm 293 */
			{	/* Engine/param.scm 294 */
				bool_t BgL_tmpz00_1960;

				{	/* Engine/param.scm 294 */
					obj_t BgL_arg1295z00_920;
					obj_t BgL_arg1296z00_921;

					{	/* Engine/param.scm 294 */
						obj_t BgL_arg1297z00_922;

						BgL_arg1297z00_922 = CAR(((obj_t) BgL_xz00_854));
						{	/* Engine/param.scm 294 */
							obj_t BgL_res1330z00_923;

							{	/* Engine/param.scm 294 */
								obj_t BgL_arg1466z00_924;

								BgL_arg1466z00_924 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1297z00_922));
								BgL_res1330z00_923 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_924);
							}
							BgL_arg1295z00_920 = BgL_res1330z00_923;
						}
					}
					{	/* Engine/param.scm 295 */
						obj_t BgL_arg1298z00_925;

						BgL_arg1298z00_925 = CAR(((obj_t) BgL_yz00_855));
						{	/* Engine/param.scm 295 */
							obj_t BgL_res1331z00_926;

							{	/* Engine/param.scm 295 */
								obj_t BgL_arg1466z00_927;

								BgL_arg1466z00_927 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1298z00_925));
								BgL_res1331z00_926 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_927);
							}
							BgL_arg1296z00_921 = BgL_res1331z00_926;
						}
					}
					BgL_tmpz00_1960 =
						bigloo_string_lt(BgL_arg1295z00_920, BgL_arg1296z00_921);
				}
				return BBOOL(BgL_tmpz00_1960);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_datez00(((long) 408802544),
				BSTRING_TO_STRING(BGl_string1621z00zzengine_paramz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1621z00zzengine_paramz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_configurez00(((long)
					272817155), BSTRING_TO_STRING(BGl_string1621z00zzengine_paramz00));
		}

	}



/* eval-init */
	obj_t BGl_evalzd2initzd2zzengine_paramz00()
	{
		{	/* Engine/param.scm 15 */
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 185)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2forcezd2loosezd2localzd2functionzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 71)),
				__EVMEANING_ADDRESS((BGl_za2includezd2foreignza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 219)),
				__EVMEANING_ADDRESS((BGl_za2readerza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 238)),
				__EVMEANING_ADDRESS(
					(BGl_za2bdbzd2debugzd2nozd2linezd2directiveszf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 81)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 239)),
				BGl_epairifyzd2propagatezd2envz00zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 165)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2atomzd2inliningzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 225)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzd2onexpressionzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 226)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 240)),
				BGl_buildzd2pathzd2fromzd2shellzd2variablezd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 106)),
				__EVMEANING_ADDRESS(
					(BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 39)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 107)),
				__EVMEANING_ADDRESS(
					(BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 113)),
				__EVMEANING_ADDRESS((BGl_za2callzf2cczf3za2z01zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 89)),
				__EVMEANING_ADDRESS(
					(BGl_za2compilerzd2typezd2debugzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 140)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2evalza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 148)),
				__EVMEANING_ADDRESS((BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 241)),
				__EVMEANING_ADDRESS(
					(BGl_za2arithmeticzd2genericityza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 111)),
				__EVMEANING_ADDRESS((BGl_za2interpreterza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 61)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2abortzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 25)),
				__EVMEANING_ADDRESS((BGl_za2cflagszd2rpathza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 84)),
				__EVMEANING_ADDRESS((BGl_za2indentza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 228)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 204)),
				__EVMEANING_ADDRESS((BGl_za2srczd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 59)),
				__EVMEANING_ADDRESS(
					(BGl_za2gczd2forcezd2registerzd2rootszf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 164)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 209)),
				__EVMEANING_ADDRESS((BGl_za2objzd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 235)),
				__EVMEANING_ADDRESS((BGl_za2prezd2processorza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 141)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2heapza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 139)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2libraryza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 234)),
				__EVMEANING_ADDRESS(
					(BGl_za2allowzd2typezd2redefinitionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 198)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2returnzd2gotozf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 196)),
				__EVMEANING_ADDRESS(
					(BGl_za2inliningzd2reducezd2kfactorza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 53)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2libza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 117)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2jarzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 48)),
				__EVMEANING_ADDRESS((BGl_za2libzd2dirza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 161)),
				__EVMEANING_ADDRESS(
					(BGl_za2tracezd2writezd2lengthza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 224)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 110)),
				__EVMEANING_ADDRESS((BGl_za2withzd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 242)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2argsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 102)),
				__EVMEANING_ADDRESS((BGl_za2profilezd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 160)),
				__EVMEANING_ADDRESS((BGl_za2tracezd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 147)),
				__EVMEANING_ADDRESS((BGl_za2profilezd2libraryza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 74)),
				__EVMEANING_ADDRESS((BGl_za2heapzd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 233)),
				__EVMEANING_ADDRESS((BGl_za2evalzd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 58)),
				__EVMEANING_ADDRESS(
					(BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 180)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2freezd2varzd2trackingzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(CNST_TABLE_REF(((long)
						243)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2variablesza2zd2zzengine_paramz00)),
				BGl_string1622z00zzengine_paramz00, BINT(((long) 7102)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 244)),
				BGl_replacez12zd2envzc0zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 136)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2rangeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 125)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2mainclassza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 35)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2styleza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 137)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2structza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 62)),
				__EVMEANING_ADDRESS(
					(BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(CNST_TABLE_REF(((long)
						245)),
				__EVMEANING_ADDRESS((BGl_za2paramzd2updatersza2zd2zzengine_paramz00)),
				BGl_string1622z00zzengine_paramz00, BINT(((long) 7553)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 43)),
				__EVMEANING_ADDRESS(
					(BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 193)),
				__EVMEANING_ADDRESS((BGl_za2inliningzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 88)),
				__EVMEANING_ADDRESS(
					(BGl_za2compilerzd2sharingzd2debugzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 7)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2licensingzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 130)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2cinitzd2moduleza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 246)),
				BGl_epairifyzd2propagatezd2loczd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 247)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2urlza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 195)),
				__EVMEANING_ADDRESS(
					(BGl_za2inliningzd2kfactorza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 248)),
				BGl_bigloozd2datezd2envz00zztools_datez00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 124)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2classpathza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 249)),
				BGl_bigloozd2variableszd2usagezd2envzd2zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 13)),
				__EVMEANING_ADDRESS((BGl_za2shellza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 72)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 79)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 250)),
				__EVMEANING_ADDRESS((BGl_za2modulezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 142)),
				__EVMEANING_ADDRESS(
					(BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 144)),
				__EVMEANING_ADDRESS((BGl_za2warningzd2typesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 251)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2cmdzd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 194)),
				__EVMEANING_ADDRESS(
					(BGl_za2userzd2inliningzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 149)),
				__EVMEANING_ADDRESS((BGl_za2libzd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 179)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2flonumzd2arithmeticzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 68)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2librarieszd2czd2setupza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 67)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 93)),
				__EVMEANING_ADDRESS((BGl_za2debugzd2moduleza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 215)),
				__EVMEANING_ADDRESS((BGl_za2autozd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 252)),
				__EVMEANING_ADDRESS((BGl_za2keyzd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 170)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2branchza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(CNST_TABLE_REF(((long)
						50)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2libraryzd2dirza2z00zzengine_paramz00)),
				BGl_string1622z00zzengine_paramz00, BINT(((long) 14286)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 119)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2shellza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 253)),
				__EVMEANING_ADDRESS(
					(BGl_za2locationzd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 159)),
				__EVMEANING_ADDRESS(
					(BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 37)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 69)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2bigloozd2za7ipsza2za7zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 254)),
				__EVMEANING_ADDRESS((BGl_za2typezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 201)),
				__EVMEANING_ADDRESS((BGl_za2optimzd2uncellzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 176)),
				__EVMEANING_ADDRESS((BGl_za2optimzd2isazf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 255)),
				__EVMEANING_ADDRESS((BGl_za2tmpzd2destza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 256)),
				BGl_epairifyzd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 6)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2tmpza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 99)),
				__EVMEANING_ADDRESS((BGl_za2czd2userzd2footza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 199)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2taggedzd2fxopzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 143)),
				__EVMEANING_ADDRESS(
					(BGl_za2warningzd2overridenzd2variablesza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 221)),
				__EVMEANING_ADDRESS((BGl_za2targetzd2languageza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 64)),
				__EVMEANING_ADDRESS(
					(BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 10)),
				__EVMEANING_ADDRESS((BGl_za2srczd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 32)),
				__EVMEANING_ADDRESS((BGl_za2cczd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 257)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2emailza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 258)),
				__EVMEANING_ADDRESS((BGl_za2accesszd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 114)),
				__EVMEANING_ADDRESS(
					(BGl_za2autozd2linkzd2mainza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 186)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2integratezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 73)),
				__EVMEANING_ADDRESS(
					(BGl_za2heapzd2basezd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 123)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2bigloozd2classpathza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 9)),
				__EVMEANING_ADDRESS((BGl_za2helloza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 11)),
				__EVMEANING_ADDRESS((BGl_za2destza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 77)),
				__EVMEANING_ADDRESS(
					(BGl_za2heapzd2dumpzd2namesza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 162)),
				__EVMEANING_ADDRESS((BGl_za2optimza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 163)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 182)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2pairzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 121)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2javaza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 51)),
				__EVMEANING_ADDRESS((BGl_za2libzd2srczd2dirza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 167)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2inliningza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 145)),
				__EVMEANING_ADDRESS(
					(BGl_za2warningzd2typezd2errorza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 192)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 138)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2versionza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 133)),
				__EVMEANING_ADDRESS(
					(BGl_za2garbagezd2collectorza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 173)),
				__EVMEANING_ADDRESS((BGl_za2purifyza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 94)),
				__EVMEANING_ADDRESS((BGl_za2czd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 104)),
				__EVMEANING_ADDRESS((BGl_za2accesszd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 213)),
				__EVMEANING_ADDRESS(
					(BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 259)),
				BGl_stringzd2splitzd2charzd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 98)),
				__EVMEANING_ADDRESS((BGl_za2czd2userzd2headerza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 154)),
				__EVMEANING_ADDRESS((BGl_za2dlopenzd2initza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 174)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2envza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 33)),
				__EVMEANING_ADDRESS((BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 172)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 86)),
				__EVMEANING_ADDRESS(
					(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 3)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 49)),
				__EVMEANING_ADDRESS(
					(BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 260)),
				BGl_reinitializa7ezd2bigloozd2variablesz12zd2envz67zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 122)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2optionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 80)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 30)),
				__EVMEANING_ADDRESS((BGl_za2stdcza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 97)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2debugzd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 261)),
				__EVMEANING_ADDRESS(
					(BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 262)),
				BGl_addzd2doczd2variablez12zd2envzc0zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 181)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2applyzd2trackingzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 263)),
				__EVMEANING_ADDRESS((BGl_za2userzd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 231)),
				__EVMEANING_ADDRESS(
					(BGl_za2globalzd2tailzd2callzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 189)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 264)),
				__EVMEANING_ADDRESS(
					(BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 265)),
				BGl_stringza2zd2ze3stringzd2envz41zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 266)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2dateza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 128)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2directoryza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 267)),
				BGl_epairifyzd2reczd2envz00zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 268)),
				__EVMEANING_ADDRESS(
					(BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(CNST_TABLE_REF(((long)
						175)),
				__EVMEANING_ADDRESS((BGl_za2optimzd2jvmza2zd2zzengine_paramz00)),
				BGl_string1622z00zzengine_paramz00, BINT(((long) 26258)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 269)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2authorza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 270)),
				__EVMEANING_ADDRESS((BGl_za2namezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 91)),
				__EVMEANING_ADDRESS((BGl_za2bmemzd2profilingza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 187)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 108)),
				__EVMEANING_ADDRESS((BGl_za2ozd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 202)),
				__EVMEANING_ADDRESS((BGl_za2extendzd2entryza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 45)),
				__EVMEANING_ADDRESS((BGl_za2cczd2moveza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 134)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2typeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 66)),
				__EVMEANING_ADDRESS(
					(BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 191)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2synczd2failsafezf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 217)),
				__EVMEANING_ADDRESS(
					(BGl_za2userzd2heapzd2siza7eza2za7zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 188)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2dataflowzd2forzd2errorszf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 23)),
				__EVMEANING_ADDRESS((BGl_za2cflagszd2profza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 146)),
				__EVMEANING_ADDRESS(
					(BGl_za2warningzd2defaultzd2slotzd2valueza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 29)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 82)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 211)),
				__EVMEANING_ADDRESS((BGl_za2mcozd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 100)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 155)),
				__EVMEANING_ADDRESS(
					(BGl_za2dlopenzd2initzd2gcza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 223)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2reallocationzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 4)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2nameza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 271)),
				__EVMEANING_ADDRESS(
					(BGl_za2typenodezd2shapezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 171)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 190)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2initflowzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 70)),
				__EVMEANING_ADDRESS(
					(BGl_za2includezd2multipleza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 206)),
				__EVMEANING_ADDRESS((BGl_za2czd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 129)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2catchza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 105)),
				__EVMEANING_ADDRESS(
					(BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 1)),
				__EVMEANING_ADDRESS((BGl_za2bigloozd2versionza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 8)),
				__EVMEANING_ADDRESS((BGl_za2verboseza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 230)),
				__EVMEANING_ADDRESS((BGl_za2sawzd2bbvzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 21)),
				__EVMEANING_ADDRESS((BGl_za2cflagszd2optimza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 44)),
				__EVMEANING_ADDRESS(
					(BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 184)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2unboxzd2closurezd2argsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 19)),
				__EVMEANING_ADDRESS((BGl_za2cflagsza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 85)),
				__EVMEANING_ADDRESS((BGl_za2compilerzd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 41)),
				__EVMEANING_ADDRESS(
					(BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 56)),
				__EVMEANING_ADDRESS((BGl_za2gczd2libza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 75)),
				__EVMEANING_ADDRESS((BGl_za2heapzd2libraryza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 156)),
				__EVMEANING_ADDRESS(
					(BGl_za2maxzd2czd2tokenzd2lengthza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 101)),
				__EVMEANING_ADDRESS((BGl_za2bdbzd2debugza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 168)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2constructorzd2inliningza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 126)),
				__EVMEANING_ADDRESS(
					(BGl_za2jvmzd2pathzd2separatorza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 27)),
				__EVMEANING_ADDRESS((BGl_za2cczd2ozd2optionza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 87)),
				__EVMEANING_ADDRESS(
					(BGl_za2errorzd2localiza7ationza2z75zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 17)),
				__EVMEANING_ADDRESS((BGl_za2ccza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 131)),
				__EVMEANING_ADDRESS(
					(BGl_za2modulezd2checksumzd2objectzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 166)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 272)),
				BGl_appendzd221011zd2envz00zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 112)),
				__EVMEANING_ADDRESS((BGl_za2startupzd2fileza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 273)),
				BGl_addzd2updaterz12zd2envz12zzengine_paramz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 151)),
				__EVMEANING_ADDRESS((BGl_za2initzd2modeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 95)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2debugzd2lineszd2infoza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 222)),
				__EVMEANING_ADDRESS((BGl_za2sawza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 127)),
				__EVMEANING_ADDRESS((BGl_za2jvmzd2jarpathza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 197)),
				__EVMEANING_ADDRESS((BGl_za2optimzd2returnzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 178)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2fixnumzd2arithmeticzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 169)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2jvmzd2peepholeza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 177)),
				__EVMEANING_ADDRESS((BGl_za2optimzd2cfazf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 274)),
				__EVMEANING_ADDRESS((BGl_za2restzd2argsza2zd2zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 275)),
				BGl_uncygdrivezd2envzd2zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 208)),
				__EVMEANING_ADDRESS((BGl_za2csharpzd2suffixza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 57)),
				__EVMEANING_ADDRESS((BGl_za2gczd2customzf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 116)),
				__EVMEANING_ADDRESS((BGl_za2passza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 153)),
				__EVMEANING_ADDRESS(
					(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00)));
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 276)),
				BGl_epairifyza2zd2envz70zztools_miscz00);
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 200)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2stackablezf3za2z21zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 158)),
				__EVMEANING_ADDRESS(
					(BGl_za2czd2splitzd2stringza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 46)),
				__EVMEANING_ADDRESS((BGl_za2ldzd2relativeza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 227)),
				__EVMEANING_ADDRESS(
					(BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 109)),
				__EVMEANING_ADDRESS((BGl_za2czd2filesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 277)),
				__EVMEANING_ADDRESS(
					(BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 63)),
				__EVMEANING_ADDRESS(
					(BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 90)),
				__EVMEANING_ADDRESS(
					(BGl_za2compilerzd2stackzd2debugzf3za2zf3zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 229)),
				__EVMEANING_ADDRESS((BGl_za2sawzd2spillza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 47)),
				__EVMEANING_ADDRESS((BGl_za2stripza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 15)),
				__EVMEANING_ADDRESS((BGl_za2cczd2styleza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 216)),
				__EVMEANING_ADDRESS(
					(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 103)),
				__EVMEANING_ADDRESS(
					(BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 183)),
				__EVMEANING_ADDRESS(
					(BGl_za2optimzd2cfazd2pairzd2quotezd2maxzd2lengthza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(CNST_TABLE_REF(((long)
						278)),
				__EVMEANING_ADDRESS((BGl_za2oldzd2loadzd2pathza2z00zzengine_paramz00)),
				BGl_string1622z00zzengine_paramz00, BINT(((long) 16412)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 135)),
				__EVMEANING_ADDRESS((BGl_za2unsafezd2arityza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 92)),
				__EVMEANING_ADDRESS((BGl_za2synczd2profilingza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 279)),
				__EVMEANING_ADDRESS(
					(BGl_za2additionalzd2tracesza2zd2zzengine_paramz00)));
			BGl_definezd2primopzd2refz12z12zz__evenvz00(CNST_TABLE_REF(((long) 76)),
				__EVMEANING_ADDRESS((BGl_za2heapzd2jvmzd2nameza2z00zzengine_paramz00)));
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
