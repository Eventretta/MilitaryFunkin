#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_33_startTracePushing,"CoolUtil","startTracePushing",0x4565cd22,"CoolUtil.startTracePushing","CoolUtil.hx",33,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_37_getDifficultyFilePath,"CoolUtil","getDifficultyFilePath",0x5ba9beaf,"CoolUtil.getDifficultyFilePath","CoolUtil.hx",37,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_54_difficultyString,"CoolUtil","difficultyString",0x7da345af,"CoolUtil.difficultyString","CoolUtil.hx",54,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_58_boundTo,"CoolUtil","boundTo",0xe1951d76,"CoolUtil.boundTo","CoolUtil.hx",58,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_62_coolTextFile,"CoolUtil","coolTextFile",0xa6086875,"CoolUtil.coolTextFile","CoolUtil.hx",62,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_79_getSysPath,"CoolUtil","getSysPath",0x1581675f,"CoolUtil.getSysPath","CoolUtil.hx",79,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_85_loadPreloadImage,"CoolUtil","loadPreloadImage",0xfb58725b,"CoolUtil.loadPreloadImage","CoolUtil.hx",85,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_91_loadPreloadImage,"CoolUtil","loadPreloadImage",0xfb58725b,"CoolUtil.loadPreloadImage","CoolUtil.hx",91,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_92_loadPreloadImage,"CoolUtil","loadPreloadImage",0xfb58725b,"CoolUtil.loadPreloadImage","CoolUtil.hx",92,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_93_loadPreloadImage,"CoolUtil","loadPreloadImage",0xfb58725b,"CoolUtil.loadPreloadImage","CoolUtil.hx",93,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_99_saveWithoutDialogue,"CoolUtil","saveWithoutDialogue",0x8bca9c60,"CoolUtil.saveWithoutDialogue","CoolUtil.hx",99,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_103_listFromString,"CoolUtil","listFromString",0x632b855c,"CoolUtil.listFromString","CoolUtil.hx",103,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_114_dominantColor,"CoolUtil","dominantColor",0xd61f0ec0,"CoolUtil.dominantColor","CoolUtil.hx",114,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_141_replayPath,"CoolUtil","replayPath",0x5f5a306f,"CoolUtil.replayPath","CoolUtil.hx",141,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_148_numberArray,"CoolUtil","numberArray",0x9e0008ad,"CoolUtil.numberArray","CoolUtil.hx",148,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_159_precacheSound,"CoolUtil","precacheSound",0x516888ed,"CoolUtil.precacheSound","CoolUtil.hx",159,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_168_browserLoad,"CoolUtil","browserLoad",0xdac4a08b,"CoolUtil.browserLoad","CoolUtil.hx",168,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_22_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",22,0x9f143813)
static const ::String _hx_array_data_c96d938b_25[] = {
	HX_("Easy",22,b8,e5,2d),HX_("Normal",47,e6,fd,64),HX_("Hard",0b,5b,e1,2f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_27_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",27,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_29_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",29,0x9f143813)

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24fe864b;
}

::Array< ::String > CoolUtil_obj::defaultDifficulties;

::String CoolUtil_obj::defaultDifficulty;

::Array< ::String > CoolUtil_obj::difficulties;

void CoolUtil_obj::startTracePushing(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_33_startTracePushing)
HXDLIN(  33)		::haxe::Log_obj::trace(HX_("dot",89,42,4c,00),::hx::SourceInfo(HX_("source/CoolUtil.hx",9f,65,de,ea),33,HX_("CoolUtil",8b,93,6d,c9),HX_("startTracePushing",c5,8e,08,0e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,startTracePushing,(void))

::String CoolUtil_obj::getDifficultyFilePath( ::Dynamic num){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_37_getDifficultyFilePath)
HXLINE(  38)		if (::hx::IsNull( num )) {
HXLINE(  38)			num = ::PlayState_obj::storyDifficulty;
            		}
HXLINE(  40)		::String fileSuffix = ::CoolUtil_obj::difficulties->__get(( (int)(num) ));
HXLINE(  41)		if ((fileSuffix != ::CoolUtil_obj::defaultDifficulty)) {
HXLINE(  43)			fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            		}
            		else {
HXLINE(  47)			fileSuffix = HX_("",00,00,00,00);
            		}
HXLINE(  49)		return ::StringTools_obj::replace(fileSuffix.toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getDifficultyFilePath,return )

::String CoolUtil_obj::difficultyString(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_54_difficultyString)
HXDLIN(  54)		return ::CoolUtil_obj::difficulties->__get(::PlayState_obj::storyDifficulty).toUpperCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,difficultyString,return )

Float CoolUtil_obj::boundTo(Float value,Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_58_boundTo)
HXDLIN(  58)		return ::Math_obj::max(min,::Math_obj::min(max,value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CoolUtil_obj,boundTo,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_62_coolTextFile)
HXLINE(  63)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE(  65)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  65)			daList = ::StringTools_obj::trim(::sys::io::File_obj::getContent(path)).split(HX_("\n",0a,00,00,00));
            		}
HXLINE(  70)		{
HXLINE(  70)			int _g = 0;
HXDLIN(  70)			int _g1 = daList->length;
HXDLIN(  70)			while((_g < _g1)){
HXLINE(  70)				_g = (_g + 1);
HXDLIN(  70)				int i = (_g - 1);
HXLINE(  72)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  75)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::String CoolUtil_obj::getSysPath(::String song){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_79_getSysPath)
HXLINE(  80)		::String gamepath = (::Sys_obj::getCwd() + ((HX_("assets/data/",f9,10,73,a0) + song) + HX_("/",2f,00,00,00)));
HXLINE(  81)		return gamepath;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getSysPath,return )

void CoolUtil_obj::loadPreloadImage(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_85_loadPreloadImage)
HXDLIN(  85)		int _g = 0;
HXDLIN(  85)		::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory((::Sys_obj::getCwd() + HX_("assets/images",04,3c,49,a0)));
HXDLIN(  85)		while((_g < _g1->length)){
HXDLIN(  85)			::String img = _g1->__get(_g);
HXDLIN(  85)			_g = (_g + 1);
HXLINE(  87)			if ((img.split(HX_(".",2e,00,00,00))->__get(1) == HX_("png",a9,5c,55,00))) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::lime::graphics::Image image){
            					HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_91_loadPreloadImage)
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            				void _hx_run(int loaded,int total){
            					HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_92_loadPreloadImage)
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            				void _hx_run( ::Dynamic error){
            					HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_93_loadPreloadImage)
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  89)				 ::flixel::_hx_system::frontEnds::BitmapFrontEnd _hx_tmp = ::flixel::FlxG_obj::bitmap;
HXDLIN(  89)				::String key = img.split(HX_(".",2e,00,00,00))->__get(0);
HXDLIN(  89)				::String library = null();
HXDLIN(  89)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  89)				 ::Dynamic _hx_tmp1;
HXDLIN(  89)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  89)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE(  89)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN(  89)				_hx_tmp->add(_hx_tmp1,null(),null());
HXLINE(  90)				::String key1 = img.split(HX_(".",2e,00,00,00))->__get(0);
HXDLIN(  90)				::String library1 = null();
HXDLIN(  90)				 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(key1);
HXDLIN(  90)				 ::Dynamic future;
HXDLIN(  90)				if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE(  90)					future = imageToReturn1;
            				}
            				else {
HXLINE(  90)					future = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            				}
HXDLIN(  90)				 ::lime::app::Future future1 = ::lime::graphics::Image_obj::loadFromFile(( (::String)(future) ));
HXLINE(  91)				future1->onComplete( ::Dynamic(new _hx_Closure_0()));
HXLINE(  92)				future1->onProgress( ::Dynamic(new _hx_Closure_1()));
HXLINE(  93)				future1->onError( ::Dynamic(new _hx_Closure_2()));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,loadPreloadImage,(void))

void CoolUtil_obj::saveWithoutDialogue(::String song,::String diff,::String daJson){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_99_saveWithoutDialogue)
HXDLIN(  99)		::sys::io::File_obj::saveContent((::CoolUtil_obj::getSysPath(song) + (((HX_("",00,00,00,00) + song) + diff) + HX_(".json",56,f1,d6,c2))),daJson);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CoolUtil_obj,saveWithoutDialogue,(void))

::Array< ::String > CoolUtil_obj::listFromString(::String string){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_103_listFromString)
HXLINE( 104)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE( 105)		daList = ::StringTools_obj::trim(string).split(HX_("\n",0a,00,00,00));
HXLINE( 107)		{
HXLINE( 107)			int _g = 0;
HXDLIN( 107)			int _g1 = daList->length;
HXDLIN( 107)			while((_g < _g1)){
HXLINE( 107)				_g = (_g + 1);
HXDLIN( 107)				int i = (_g - 1);
HXLINE( 109)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE( 112)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,listFromString,return )

int CoolUtil_obj::dominantColor( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_114_dominantColor)
HXLINE( 115)		 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 116)		{
HXLINE( 116)			int _g = 0;
HXDLIN( 116)			int _g1 = sprite->frameWidth;
HXDLIN( 116)			while((_g < _g1)){
HXLINE( 116)				_g = (_g + 1);
HXDLIN( 116)				int col = (_g - 1);
HXLINE( 117)				{
HXLINE( 117)					int _g1 = 0;
HXDLIN( 117)					int _g2 = sprite->frameHeight;
HXDLIN( 117)					while((_g1 < _g2)){
HXLINE( 117)						_g1 = (_g1 + 1);
HXDLIN( 117)						int row = (_g1 - 1);
HXLINE( 118)						int colorOfThisPixel = sprite->get_pixels()->getPixel32(col,row);
HXLINE( 119)						if ((colorOfThisPixel != 0)) {
HXLINE( 120)							if (countByColor->exists(colorOfThisPixel)) {
HXLINE( 121)								int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN( 121)								countByColor->set(colorOfThisPixel,v);
            							}
            							else {
HXLINE( 122)								if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE( 123)									countByColor->set(colorOfThisPixel,1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 128)		int maxCount = 0;
HXLINE( 129)		int maxKey = 0;
HXLINE( 130)		countByColor->set(-16777216,0);
HXLINE( 131)		{
HXLINE( 131)			 ::Dynamic key = countByColor->keys();
HXDLIN( 131)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 131)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 132)				if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE( 133)					maxCount = ( (int)(countByColor->get(key1)) );
HXLINE( 134)					maxKey = key1;
            				}
            			}
            		}
HXLINE( 137)		return maxKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,dominantColor,return )

::String CoolUtil_obj::replayPath(::String name){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_141_replayPath)
HXLINE( 142)		::String returne = ::Sys_obj::getCwd();
HXDLIN( 142)		::String returne1 = ((returne + ::StringTools_obj::replace(name,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00))) + HX_("-replay/",9b,6a,06,b9));
HXLINE( 143)		::haxe::Log_obj::trace((HX_("LOADING REPLAY FROM ",01,8a,77,1d) + returne1),::hx::SourceInfo(HX_("source/CoolUtil.hx",9f,65,de,ea),143,HX_("CoolUtil",8b,93,6d,c9),HX_("replayPath",6c,18,cd,14)));
HXLINE( 144)		return returne1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,replayPath,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_148_numberArray)
HXLINE( 149)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE( 150)		{
HXLINE( 150)			int _g = ( (int)(min) );
HXDLIN( 150)			int _g1 = max;
HXDLIN( 150)			while((_g < _g1)){
HXLINE( 150)				_g = (_g + 1);
HXDLIN( 150)				int i = (_g - 1);
HXLINE( 152)				dumbArray->push(i);
            			}
            		}
HXLINE( 154)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )

void CoolUtil_obj::precacheSound(::String sound,::String library){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_159_precacheSound)
HXDLIN( 159)		::Dynamic _hx_tmp = ::openfl::utils::Assets_obj::cache;
HXDLIN( 159)		if (!(::openfl::utils::IAssetCache_obj::hasSound(_hx_tmp,::Paths_obj::sound(sound,library)))) {
HXLINE( 160)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN( 160)			::String EmbeddedSound = ( (::String)(::Paths_obj::sound(sound,library)) );
HXDLIN( 160)			bool _hx_tmp;
HXDLIN( 160)			if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE( 160)				_hx_tmp = ::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE( 160)				_hx_tmp = true;
            			}
HXDLIN( 160)			if (_hx_tmp) {
HXLINE( 160)				::openfl::utils::Assets_obj::getSound(EmbeddedSound,true);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,precacheSound,(void))

void CoolUtil_obj::browserLoad(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_168_browserLoad)
HXDLIN( 168)		::String prefix = HX_("",00,00,00,00);
HXDLIN( 168)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXDLIN( 168)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN( 168)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,browserLoad,(void))


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"boundTo") ) { outValue = boundTo_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getSysPath") ) { outValue = getSysPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replayPath") ) { outValue = replayPath_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"browserLoad") ) { outValue = browserLoad_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { outValue = ( difficulties ); return true; }
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dominantColor") ) { outValue = dominantColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"precacheSound") ) { outValue = precacheSound_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"listFromString") ) { outValue = listFromString_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"difficultyString") ) { outValue = difficultyString_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadPreloadImage") ) { outValue = loadPreloadImage_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { outValue = ( defaultDifficulty ); return true; }
		if (HX_FIELD_EQ(inName,"startTracePushing") ) { outValue = startTracePushing_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { outValue = ( defaultDifficulties ); return true; }
		if (HX_FIELD_EQ(inName,"saveWithoutDialogue") ) { outValue = saveWithoutDialogue_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDifficultyFilePath") ) { outValue = getDifficultyFilePath_dyn(); return true; }
	}
	return false;
}

bool CoolUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { defaultDifficulty=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { defaultDifficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::defaultDifficulties,HX_("defaultDifficulties",ba,89,b7,7e)},
	{::hx::fsString,(void *) &CoolUtil_obj::defaultDifficulty,HX_("defaultDifficulty",5c,06,f0,1d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::difficulties,HX_("difficulties",59,c7,5e,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
};

#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("defaultDifficulties",ba,89,b7,7e),
	HX_("defaultDifficulty",5c,06,f0,1d),
	HX_("difficulties",59,c7,5e,02),
	HX_("startTracePushing",c5,8e,08,0e),
	HX_("getDifficultyFilePath",d2,8d,91,4d),
	HX_("difficultyString",6c,c9,73,cb),
	HX_("boundTo",59,05,b8,f3),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("getSysPath",5c,4f,f4,ca),
	HX_("loadPreloadImage",18,f6,28,49),
	HX_("saveWithoutDialogue",c3,4c,db,d3),
	HX_("listFromString",d9,af,fe,f5),
	HX_("dominantColor",e3,82,71,eb),
	HX_("replayPath",6c,18,cd,14),
	HX_("numberArray",10,1e,18,ad),
	HX_("precacheSound",10,fd,ba,66),
	HX_("browserLoad",ee,b5,dc,e9),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CoolUtil",8b,93,6d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtil_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_22_boot)
HXDLIN(  22)		defaultDifficulties = ::Array_obj< ::String >::fromData( _hx_array_data_c96d938b_25,3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_27_boot)
HXDLIN(  27)		defaultDifficulty = HX_("Normal",47,e6,fd,64);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_29_boot)
HXDLIN(  29)		difficulties = ::Array_obj< ::String >::__new(0);
            	}
}

