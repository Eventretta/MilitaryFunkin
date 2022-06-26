#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_47_destroyLoadedImages,"Paths","destroyLoadedImages",0x55859157,"Paths.destroyLoadedImages","Paths.hx",47,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_67_setCurrentLevel,"Paths","setCurrentLevel",0x8a8c27ed,"Paths.setCurrentLevel","Paths.hx",67,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_71_getPath,"Paths","getPath",0x5f104ffb,"Paths.getPath","Paths.hx",71,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_94_getLibraryPath,"Paths","getLibraryPath",0xe56efeaa,"Paths.getLibraryPath","Paths.hx",94,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_99_getLibraryPathForce,"Paths","getLibraryPathForce",0xe1e5bae1,"Paths.getLibraryPathForce","Paths.hx",99,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_104_getPreloadPath,"Paths","getPreloadPath",0x2fdd9e78,"Paths.getPreloadPath","Paths.hx",104,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_109_file,"Paths","file",0x8f872fdc,"Paths.file","Paths.hx",109,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_114_txt,"Paths","txt",0x5a3a5910,"Paths.txt","Paths.hx",114,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_119_xml,"Paths","xml",0x5a3d5877,"Paths.xml","Paths.hx",119,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_124_json,"Paths","json",0x9233a388,"Paths.json","Paths.hx",124,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_129_lua,"Paths","lua",0x5a344458,"Paths.lua","Paths.hx",129,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_133_video,"Paths","video",0x3d25e71b,"Paths.video","Paths.hx",133,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_144_sound,"Paths","sound",0x86f65f6f,"Paths.sound","Paths.hx",144,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_159_soundRandom,"Paths","soundRandom",0x8e79b2d2,"Paths.soundRandom","Paths.hx",159,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_163_music,"Paths","music",0x1684a345,"Paths.music","Paths.hx",163,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_177_voices,"Paths","voices",0xbbb84fe1,"Paths.voices","Paths.hx",177,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_188_inst,"Paths","inst",0x9186a526,"Paths.inst","Paths.hx",188,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_200_returnSongFile,"Paths","returnSongFile",0xe8469721,"Paths.returnSongFile","Paths.hx",200,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_212_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",212,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_231_getTextFromFile,"Paths","getTextFromFile",0xab54cb29,"Paths.getTextFromFile","Paths.hx",231,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_259_font,"Paths","font",0x8f8bbf2f,"Paths.font","Paths.hx",259,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_270_fileExists,"Paths","fileExists",0x907b0ed8,"Paths.fileExists","Paths.hx",270,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_284_getSparrowAtlas,"Paths","getSparrowAtlas",0x5a1f05f5,"Paths.getSparrowAtlas","Paths.hx",284,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_299_getPackerAtlas,"Paths","getPackerAtlas",0xa8de8c4f,"Paths.getPackerAtlas","Paths.hx",299,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_314_formatToSongPath,"Paths","formatToSongPath",0xb1c0282c,"Paths.formatToSongPath","Paths.hx",314,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_317_addCustomGraphic,"Paths","addCustomGraphic",0x854c9176,"Paths.addCustomGraphic","Paths.hx",317,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_332_mods,"Paths","mods",0x942c34d1,"Paths.mods","Paths.hx",332,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_336_modsFont,"Paths","modsFont",0x75aefb40,"Paths.modsFont","Paths.hx",336,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_340_modsJson,"Paths","modsJson",0x7856df99,"Paths.modsJson","Paths.hx",340,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_344_modsVideo,"Paths","modsVideo",0xb5d739ea,"Paths.modsVideo","Paths.hx",344,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_348_modsMusic,"Paths","modsMusic",0x8f35f614,"Paths.modsMusic","Paths.hx",348,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_352_modsSounds,"Paths","modsSounds",0xb3144475,"Paths.modsSounds","Paths.hx",352,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_356_modsSongs,"Paths","modsSongs",0xffa25c6d,"Paths.modsSongs","Paths.hx",356,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_360_modsImages,"Paths","modsImages",0x7f77ec69,"Paths.modsImages","Paths.hx",360,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_364_modsXml,"Paths","modsXml",0x38d50986,"Paths.modsXml","Paths.hx",364,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_368_modsTxt,"Paths","modsTxt",0x38d20a1f,"Paths.modsTxt","Paths.hx",368,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_371_modFolders,"Paths","modFolders",0xd05558c3,"Paths.modFolders","Paths.hx",371,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_381_getModDirectories,"Paths","getModDirectories",0x27c7a23f,"Paths.getModDirectories","Paths.hx",381,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_20_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",20,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_21_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",21,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_24_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",24,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_25_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",25,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_31_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",31,0x309ea470)
static const ::String _hx_array_data_50847b0e_45[] = {
	HX_("characters",aa,58,ce,55),HX_("custom_events",27,a1,9e,e1),HX_("custom_notetypes",f9,35,37,af),HX_("data",2a,56,63,42),HX_("songs",fe,36,c7,80),HX_("music",a5,d0,5a,10),HX_("sounds",c4,a8,2e,32),HX_("videos",98,d7,95,e5),HX_("images",b8,50,92,fe),HX_("stages",f5,fb,f1,05),HX_("weeks",ff,95,be,c7),HX_("fonts",c4,b7,91,04),HX_("scripts",08,fc,e3,2c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_63_boot,"Paths","boot",0x8ce6e592,"Paths.boot","Paths.hx",63,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

::String Paths_obj::SOUND_EXT;

::String Paths_obj::VIDEO_EXT;

 ::haxe::ds::StringMap Paths_obj::customImagesLoaded;

 ::haxe::ds::StringMap Paths_obj::customSoundsLoaded;

::Array< ::String > Paths_obj::ignoreModFolders;

void Paths_obj::destroyLoadedImages(::hx::Null< bool >  __o_ignoreCheck){
            		bool ignoreCheck = __o_ignoreCheck.Default(false);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_47_destroyLoadedImages)
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (!(ignoreCheck)) {
HXLINE(  49)			_hx_tmp = ::ClientPrefs_obj::imagesPersist;
            		}
            		else {
HXLINE(  49)			_hx_tmp = false;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  49)			return;
            		}
HXLINE(  51)		{
HXLINE(  51)			 ::Dynamic key = ::Paths_obj::customImagesLoaded->keys();
HXDLIN(  51)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  51)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  52)				 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key1)) );
HXLINE(  53)				if (::hx::IsNotNull( graphic )) {
HXLINE(  54)					graphic->bitmap->dispose();
HXLINE(  55)					graphic->destroy();
HXLINE(  56)					::flixel::FlxG_obj::bitmap->removeByKey(key1);
            				}
            			}
            		}
HXLINE(  59)		::Paths_obj::customImagesLoaded->clear();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,destroyLoadedImages,(void))

::String Paths_obj::currentModDirectory;

::String Paths_obj::currentLevel;

void Paths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_67_setCurrentLevel)
HXDLIN(  67)		::Paths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,setCurrentLevel,(void))

::String Paths_obj::getPath(::String file,::String type,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_71_getPath)
HXLINE(  72)		if (::hx::IsNotNull( library )) {
HXLINE(  73)			return ::Paths_obj::getLibraryPath(file,library);
            		}
HXLINE(  75)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE(  77)			::String levelPath = HX_("",00,00,00,00);
HXLINE(  78)			if ((::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE(  79)				::String library = ::Paths_obj::currentLevel;
HXDLIN(  79)				levelPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXLINE(  80)				if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  81)					return levelPath;
            				}
            			}
HXLINE(  84)			levelPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + file);
HXLINE(  85)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  86)				return levelPath;
            			}
            		}
HXLINE(  89)		::String file1 = file;
HXDLIN(  89)		if (::hx::IsNull( file1 )) {
HXLINE(  89)			file1 = HX_("",00,00,00,00);
            		}
HXDLIN(  89)		return (HX_("assets/",4c,2a,dc,36) + file1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,getPath,return )

::String Paths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("preload",c9,47,43,35);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_94_getLibraryPath)
HXDLIN(  94)		bool _hx_tmp;
HXDLIN(  94)		if ((library != HX_("preload",c9,47,43,35))) {
HXDLIN(  94)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN(  94)			_hx_tmp = true;
            		}
HXDLIN(  94)		if (_hx_tmp) {
HXDLIN(  94)			::String file1 = file;
HXDLIN(  94)			if (::hx::IsNull( file1 )) {
HXDLIN(  94)				file1 = HX_("",00,00,00,00);
            			}
HXDLIN(  94)			return (HX_("assets/",4c,2a,dc,36) + file1);
            		}
            		else {
HXDLIN(  94)			return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            		}
HXDLIN(  94)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPath,return )

::String Paths_obj::getLibraryPathForce(::String file,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_99_getLibraryPathForce)
HXDLIN(  99)		return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getLibraryPathForce,return )

::String Paths_obj::getPreloadPath(::String __o_file){
            		::String file = __o_file;
            		if (::hx::IsNull(__o_file)) file = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_104_getPreloadPath)
HXDLIN( 104)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,getPreloadPath,return )

::String Paths_obj::file(::String file,::String __o_type,::String library){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_109_file)
HXDLIN( 109)		return ::Paths_obj::getPath(file,type,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Paths_obj,file,return )

::String Paths_obj::txt(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_114_txt)
HXDLIN( 114)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,txt,return )

::String Paths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_119_xml)
HXDLIN( 119)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,xml,return )

::String Paths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_124_json)
HXDLIN( 124)		return ::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,json,return )

::String Paths_obj::lua(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_129_lua)
HXDLIN( 129)		return ::Paths_obj::getPath(((HX_("",00,00,00,00) + key) + HX_(".lua",4a,2a,ba,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,lua,return )

::String Paths_obj::video(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_133_video)
HXLINE( 135)		::String file = ::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
HXLINE( 136)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 137)			return file;
            		}
HXLINE( 140)		return (((HX_("assets/videos/",cb,c4,dd,db) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,video,return )

 ::Dynamic Paths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_144_sound)
HXLINE( 146)		::String file = ::Paths_obj::modFolders((((HX_("sounds/",eb,02,a5,b6) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXLINE( 147)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 148)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 149)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 149)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXLINE( 151)			return ::Paths_obj::customSoundsLoaded->get(file);
            		}
HXLINE( 154)		return ::Paths_obj::getPath((((HX_("sounds/",eb,02,a5,b6) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,sound,return )

 ::Dynamic Paths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_159_soundRandom)
HXDLIN( 159)		return ::Paths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,soundRandom,return )

 ::Dynamic Paths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_163_music)
HXLINE( 165)		::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXLINE( 166)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 167)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 168)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 168)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXLINE( 170)			return ::Paths_obj::customSoundsLoaded->get(file);
            		}
HXLINE( 173)		return ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )

 ::Dynamic Paths_obj::voices(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_177_voices)
HXLINE( 179)		::String file = ::Paths_obj::modFolders((((HX_("songs/",71,e7,88,2d) + (::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)) + HX_("/Voices",10,18,4f,34))) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 179)		 ::openfl::media::Sound file1;
HXDLIN( 179)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 179)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 179)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 179)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXDLIN( 179)			file1 = ( ( ::openfl::media::Sound)(::Paths_obj::customSoundsLoaded->get(file)) );
            		}
            		else {
HXLINE( 179)			file1 = null();
            		}
HXLINE( 180)		if (::hx::IsNotNull( file1 )) {
HXLINE( 181)			return file1;
            		}
HXLINE( 184)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + ::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,voices,return )

 ::Dynamic Paths_obj::inst(::String song){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_188_inst)
HXLINE( 190)		::String file = ::Paths_obj::modFolders((((HX_("songs/",71,e7,88,2d) + (::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)) + HX_("/Inst",95,b3,69,40))) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 190)		 ::openfl::media::Sound file1;
HXDLIN( 190)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 190)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 190)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 190)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXDLIN( 190)			file1 = ( ( ::openfl::media::Sound)(::Paths_obj::customSoundsLoaded->get(file)) );
            		}
            		else {
HXLINE( 190)			file1 = null();
            		}
HXLINE( 191)		if (::hx::IsNotNull( file1 )) {
HXLINE( 192)			return file1;
            		}
HXLINE( 195)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + ::StringTools_obj::replace(song.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,inst,return )

 ::openfl::media::Sound Paths_obj::returnSongFile(::String file){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_200_returnSongFile)
HXLINE( 201)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 202)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 203)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 203)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXLINE( 205)			return ( ( ::openfl::media::Sound)(::Paths_obj::customSoundsLoaded->get(file)) );
            		}
HXLINE( 207)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,returnSongFile,return )

 ::Dynamic Paths_obj::image(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_212_image)
HXLINE( 214)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXLINE( 225)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 225)			return imageToReturn;
            		}
HXLINE( 227)		return ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,image,return )

::String Paths_obj::getTextFromFile(::String key, ::Dynamic __o_ignoreMods){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_231_getTextFromFile)
HXLINE( 234)		bool _hx_tmp;
HXDLIN( 234)		if (!(( (bool)(ignoreMods) ))) {
HXLINE( 234)			::String key1 = key;
HXDLIN( 234)			if (::hx::IsNull( key1 )) {
HXLINE( 234)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 234)			_hx_tmp = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            		}
            		else {
HXLINE( 234)			_hx_tmp = false;
            		}
HXDLIN( 234)		if (_hx_tmp) {
HXLINE( 235)			::String key1 = key;
HXDLIN( 235)			if (::hx::IsNull( key1 )) {
HXLINE( 235)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 235)			return ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + key1));
            		}
HXLINE( 238)		::String file = key;
HXDLIN( 238)		if (::hx::IsNull( file )) {
HXLINE( 238)			file = HX_("",00,00,00,00);
            		}
HXDLIN( 238)		if (::sys::FileSystem_obj::exists((HX_("assets/",4c,2a,dc,36) + file))) {
HXLINE( 239)			::String file = key;
HXDLIN( 239)			if (::hx::IsNull( file )) {
HXLINE( 239)				file = HX_("",00,00,00,00);
            			}
HXDLIN( 239)			return ::sys::io::File_obj::getContent((HX_("assets/",4c,2a,dc,36) + file));
            		}
HXLINE( 241)		if (::hx::IsNotNull( ::Paths_obj::currentLevel )) {
HXLINE( 243)			::String levelPath = HX_("",00,00,00,00);
HXLINE( 244)			if ((::Paths_obj::currentLevel != HX_("shared",a5,5e,2b,1d))) {
HXLINE( 245)				::String library = ::Paths_obj::currentLevel;
HXDLIN( 245)				levelPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + key);
HXLINE( 246)				if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 247)					return ::sys::io::File_obj::getContent(levelPath);
            				}
            			}
HXLINE( 250)			levelPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + key);
HXLINE( 251)			if (::sys::FileSystem_obj::exists(levelPath)) {
HXLINE( 252)				return ::sys::io::File_obj::getContent(levelPath);
            			}
            		}
HXLINE( 255)		return ::lime::utils::Assets_obj::getText(::Paths_obj::getPath(key,HX_("TEXT",ad,94,ba,37),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getTextFromFile,return )

::String Paths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_259_font)
HXLINE( 261)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
HXLINE( 262)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 263)			return file;
            		}
HXLINE( 266)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,font,return )

bool Paths_obj::fileExists(::String key,::String type, ::Dynamic __o_ignoreMods,::String library){
            		 ::Dynamic ignoreMods = __o_ignoreMods;
            		if (::hx::IsNull(__o_ignoreMods)) ignoreMods = false;
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_270_fileExists)
HXLINE( 272)		bool _hx_tmp;
HXDLIN( 272)		::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 272)		if (::hx::IsNull( key1 )) {
HXLINE( 272)			key1 = HX_("",00,00,00,00);
            		}
HXDLIN( 272)		if (!(::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1)))) {
HXLINE( 272)			::String key1 = key;
HXDLIN( 272)			if (::hx::IsNull( key1 )) {
HXLINE( 272)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 272)			_hx_tmp = ::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + key1));
            		}
            		else {
HXLINE( 272)			_hx_tmp = true;
            		}
HXDLIN( 272)		if (_hx_tmp) {
HXLINE( 273)			return true;
            		}
HXLINE( 277)		if (::openfl::utils::Assets_obj::exists(::Paths_obj::getPath(key,type,null()),null())) {
HXLINE( 278)			return true;
            		}
HXLINE( 280)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Paths_obj,fileExists,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getSparrowAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_284_getSparrowAtlas)
HXLINE( 286)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(key);
HXLINE( 287)		bool xmlExists = false;
HXLINE( 288)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 289)			xmlExists = true;
            		}
HXLINE( 292)		 ::Dynamic _hx_tmp;
HXDLIN( 292)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 292)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 292)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 292)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 292)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE( 292)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN( 292)		::String _hx_tmp1;
HXDLIN( 292)		if (xmlExists) {
HXLINE( 292)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 292)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 292)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames Paths_obj::getPackerAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_299_getPackerAtlas)
HXLINE( 301)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(key);
HXLINE( 302)		bool txtExists = false;
HXLINE( 303)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))))) {
HXLINE( 304)			txtExists = true;
            		}
HXLINE( 307)		 ::Dynamic _hx_tmp;
HXDLIN( 307)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 307)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 307)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 307)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 307)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE( 307)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN( 307)		::String _hx_tmp1;
HXDLIN( 307)		if (txtExists) {
HXLINE( 307)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e))));
            		}
            		else {
HXLINE( 307)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 307)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,getPackerAtlas,return )

::String Paths_obj::formatToSongPath(::String path){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_314_formatToSongPath)
HXDLIN( 314)		return ::StringTools_obj::replace(path.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,formatToSongPath,return )

 ::flixel::graphics::FlxGraphic Paths_obj::addCustomGraphic(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_317_addCustomGraphic)
HXLINE( 318)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e))))) {
HXLINE( 319)			if (!(::Paths_obj::customImagesLoaded->exists(key))) {
HXLINE( 320)				 ::openfl::display::BitmapData newBitmap = ::openfl::display::BitmapData_obj::fromFile(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e))));
HXLINE( 321)				 ::flixel::graphics::FlxGraphic newGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(newBitmap,false,key,null());
HXLINE( 322)				newGraphic->persist = true;
HXLINE( 323)				::flixel::FlxG_obj::bitmap->_cache->set(newGraphic->key,newGraphic);
HXLINE( 324)				::Paths_obj::customImagesLoaded->set(key,true);
            			}
HXLINE( 326)			return ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
            		}
HXLINE( 328)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,addCustomGraphic,return )

::String Paths_obj::mods(::String __o_key){
            		::String key = __o_key;
            		if (::hx::IsNull(__o_key)) key = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_332_mods)
HXDLIN( 332)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,mods,return )

::String Paths_obj::modsFont(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_336_modsFont)
HXDLIN( 336)		return ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + key));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsFont,return )

::String Paths_obj::modsJson(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_340_modsJson)
HXDLIN( 340)		return ::Paths_obj::modFolders(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsJson,return )

::String Paths_obj::modsVideo(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_344_modsVideo)
HXDLIN( 344)		return ::Paths_obj::modFolders((((HX_("videos/",97,cd,86,fd) + key) + HX_(".",2e,00,00,00)) + HX_("mp4",71,17,53,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsVideo,return )

::String Paths_obj::modsMusic(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_348_modsMusic)
HXDLIN( 348)		return ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsMusic,return )

::String Paths_obj::modsSounds(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_352_modsSounds)
HXDLIN( 352)		return ::Paths_obj::modFolders((((HX_("sounds/",eb,02,a5,b6) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsSounds,return )

::String Paths_obj::modsSongs(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_356_modsSongs)
HXDLIN( 356)		return ::Paths_obj::modFolders((((HX_("songs/",71,e7,88,2d) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsSongs,return )

::String Paths_obj::modsImages(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_360_modsImages)
HXDLIN( 360)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsImages,return )

::String Paths_obj::modsXml(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_364_modsXml)
HXDLIN( 364)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsXml,return )

::String Paths_obj::modsTxt(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_368_modsTxt)
HXDLIN( 368)		return ::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modsTxt,return )

::String Paths_obj::modFolders(::String key){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_371_modFolders)
HXLINE( 372)		bool _hx_tmp;
HXDLIN( 372)		if (::hx::IsNotNull( ::Paths_obj::currentModDirectory )) {
HXLINE( 372)			_hx_tmp = (::Paths_obj::currentModDirectory.length > 0);
            		}
            		else {
HXLINE( 372)			_hx_tmp = false;
            		}
HXDLIN( 372)		if (_hx_tmp) {
HXLINE( 373)			::String key1 = ((::Paths_obj::currentModDirectory + HX_("/",2f,00,00,00)) + key);
HXDLIN( 373)			if (::hx::IsNull( key1 )) {
HXLINE( 373)				key1 = HX_("",00,00,00,00);
            			}
HXDLIN( 373)			::String fileToCheck = (HX_("mods/",9e,2f,58,0c) + key1);
HXLINE( 374)			if (::sys::FileSystem_obj::exists(fileToCheck)) {
HXLINE( 375)				return fileToCheck;
            			}
            		}
HXLINE( 378)		return (HX_("mods/",9e,2f,58,0c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,modFolders,return )

::Array< ::String > Paths_obj::getModDirectories(){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_381_getModDirectories)
HXLINE( 382)		::Array< ::String > list = ::Array_obj< ::String >::__new(0);
HXLINE( 383)		::String modsFolder = HX_("mods/",9e,2f,58,0c);
HXLINE( 384)		if (::sys::FileSystem_obj::exists(modsFolder)) {
HXLINE( 385)			int _g = 0;
HXDLIN( 385)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(modsFolder);
HXDLIN( 385)			while((_g < _g1->length)){
HXLINE( 385)				::String folder = _g1->__get(_g);
HXDLIN( 385)				_g = (_g + 1);
HXLINE( 386)				::String path = ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,modsFolder)->init(1,folder));
HXLINE( 387)				bool _hx_tmp;
HXDLIN( 387)				bool _hx_tmp1;
HXDLIN( 387)				if (::sys::FileSystem_obj::isDirectory(path)) {
HXLINE( 387)					_hx_tmp1 = !(::Paths_obj::ignoreModFolders->contains(folder));
            				}
            				else {
HXLINE( 387)					_hx_tmp1 = false;
            				}
HXDLIN( 387)				if (_hx_tmp1) {
HXLINE( 387)					_hx_tmp = !(list->contains(folder));
            				}
            				else {
HXLINE( 387)					_hx_tmp = false;
            				}
HXDLIN( 387)				if (_hx_tmp) {
HXLINE( 388)					list->push(folder);
            				}
            			}
            		}
HXLINE( 392)		return list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Paths_obj,getModDirectories,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lua") ) { outValue = lua_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inst") ) { outValue = inst_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mods") ) { outValue = mods_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"video") ) { outValue = video_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"voices") ) { outValue = voices_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsXml") ) { outValue = modsXml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsTxt") ) { outValue = modsTxt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modsFont") ) { outValue = modsFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsJson") ) { outValue = modsJson_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"modsVideo") ) { outValue = modsVideo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsMusic") ) { outValue = modsMusic_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsSongs") ) { outValue = modsSongs_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fileExists") ) { outValue = fileExists_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsSounds") ) { outValue = modsSounds_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modsImages") ) { outValue = modsImages_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"modFolders") ) { outValue = modFolders_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"returnSongFile") ) { outValue = returnSongFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getTextFromFile") ) { outValue = getTextFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { outValue = ( ignoreModFolders ); return true; }
		if (HX_FIELD_EQ(inName,"formatToSongPath") ) { outValue = formatToSongPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addCustomGraphic") ) { outValue = addCustomGraphic_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getModDirectories") ) { outValue = getModDirectories_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"customImagesLoaded") ) { outValue = ( customImagesLoaded ); return true; }
		if (HX_FIELD_EQ(inName,"customSoundsLoaded") ) { outValue = ( customSoundsLoaded ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"destroyLoadedImages") ) { outValue = destroyLoadedImages_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { outValue = ( currentModDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
	}
	return false;
}

bool Paths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignoreModFolders") ) { ignoreModFolders=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"customImagesLoaded") ) { customImagesLoaded=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"customSoundsLoaded") ) { customSoundsLoaded=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentModDirectory") ) { currentModDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Paths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Paths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &Paths_obj::VIDEO_EXT,HX_("VIDEO_EXT",5d,03,77,8a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::customImagesLoaded,HX_("customImagesLoaded",2e,80,89,34)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Paths_obj::customSoundsLoaded,HX_("customSoundsLoaded",3a,69,f9,58)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Paths_obj::ignoreModFolders,HX_("ignoreModFolders",15,37,dd,7e)},
	{::hx::fsString,(void *) &Paths_obj::currentModDirectory,HX_("currentModDirectory",24,ad,ec,de)},
	{::hx::fsString,(void *) &Paths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Paths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_MARK_MEMBER_NAME(Paths_obj::customImagesLoaded,"customImagesLoaded");
	HX_MARK_MEMBER_NAME(Paths_obj::customSoundsLoaded,"customSoundsLoaded");
	HX_MARK_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_MARK_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_MARK_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::VIDEO_EXT,"VIDEO_EXT");
	HX_VISIT_MEMBER_NAME(Paths_obj::customImagesLoaded,"customImagesLoaded");
	HX_VISIT_MEMBER_NAME(Paths_obj::customSoundsLoaded,"customSoundsLoaded");
	HX_VISIT_MEMBER_NAME(Paths_obj::ignoreModFolders,"ignoreModFolders");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentModDirectory,"currentModDirectory");
	HX_VISIT_MEMBER_NAME(Paths_obj::currentLevel,"currentLevel");
};

#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("VIDEO_EXT",5d,03,77,8a),
	HX_("customImagesLoaded",2e,80,89,34),
	HX_("customSoundsLoaded",3a,69,f9,58),
	HX_("ignoreModFolders",15,37,dd,7e),
	HX_("destroyLoadedImages",b7,66,4c,b3),
	HX_("currentModDirectory",24,ad,ec,de),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("file",7c,ce,bb,43),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("json",28,42,68,46),
	HX_("lua",b8,59,52,00),
	HX_("video",7b,14,fc,36),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("voices",81,d6,49,5d),
	HX_("inst",c6,43,bb,45),
	HX_("returnSongFile",c1,bd,af,36),
	HX_("image",5b,1f,69,bd),
	HX_("getTextFromFile",89,70,ed,f8),
	HX_("font",cf,5d,c0,43),
	HX_("fileExists",78,65,64,a0),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	HX_("formatToSongPath",cc,36,b8,49),
	HX_("addCustomGraphic",16,a0,44,1d),
	HX_("mods",71,d3,60,48),
	HX_("modsFont",e0,69,a7,c3),
	HX_("modsJson",39,4e,4f,c6),
	HX_("modsVideo",4a,97,3f,a1),
	HX_("modsMusic",74,53,9e,7a),
	HX_("modsSounds",15,9b,fd,c2),
	HX_("modsSongs",cd,b9,0a,eb),
	HX_("modsImages",09,43,61,8f),
	HX_("modsXml",e6,4e,99,f6),
	HX_("modsTxt",7f,4f,96,f6),
	HX_("modFolders",63,af,3e,e0),
	HX_("getModDirectories",9f,5f,dc,88),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &Paths_obj::__SetStatic;
	__mClass->mMarkFunc = Paths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Paths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_20_boot)
HXDLIN(  20)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_21_boot)
HXDLIN(  21)		VIDEO_EXT = HX_("mp4",71,17,53,00);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_d75e02b628d1544a_24_boot)
HXDLIN(  24)		customImagesLoaded =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_d75e02b628d1544a_25_boot)
HXDLIN(  25)		customSoundsLoaded =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_31_boot)
HXDLIN(  31)		ignoreModFolders = ::Array_obj< ::String >::fromData( _hx_array_data_50847b0e_45,13);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_63_boot)
HXDLIN(  63)		currentModDirectory = HX_("",00,00,00,00);
            	}
}

