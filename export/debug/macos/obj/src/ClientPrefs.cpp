#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_82_loadDefaultKeys,"ClientPrefs","loadDefaultKeys",0x2cdfb226,"ClientPrefs.loadDefaultKeys","ClientPrefs.hx",82,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_86_saveSettings,"ClientPrefs","saveSettings",0xab8c0989,"ClientPrefs.saveSettings","ClientPrefs.hx",86,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_128_loadPrefs,"ClientPrefs","loadPrefs",0x58c63c41,"ClientPrefs.loadPrefs","ClientPrefs.hx",128,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_253_getGameplaySetting,"ClientPrefs","getGameplaySetting",0x56c38c5d,"ClientPrefs.getGameplaySetting","ClientPrefs.hx",253,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_256_reloadControls,"ClientPrefs","reloadControls",0xe353bb78,"ClientPrefs.reloadControls","ClientPrefs.hx",256,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_267_copyKey,"ClientPrefs","copyKey",0x7112a941,"ClientPrefs.copyKey","ClientPrefs.hx",267,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_10_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",10,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_11_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",11,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_12_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",12,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_13_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",13,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_14_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",14,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_15_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",15,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_16_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",16,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_17_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",17,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_18_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",18,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_19_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",19,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_20_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",20,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_21_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",21,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_22_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",22,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_23_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",23,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_24_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",24,0x329d1619)
static const int _hx_array_data_8ae055c5_24[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_25[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_26[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_27[] = {
	(int)0,(int)0,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_25_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",25,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_26_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",26,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_27_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",27,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_28_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",28,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_29_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",29,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_30_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",30,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_31_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",31,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_32_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",32,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_33_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",33,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_45_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",45,0x329d1619)
static const int _hx_array_data_8ae055c5_39[] = {
	(int)0,(int)0,(int)0,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_46_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",46,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_48_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",48,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_49_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",49,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_50_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",50,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_51_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",51,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_52_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",52,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_55_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",55,0x329d1619)
static const int _hx_array_data_8ae055c5_47[] = {
	(int)65,(int)37,
};
static const int _hx_array_data_8ae055c5_48[] = {
	(int)83,(int)40,
};
static const int _hx_array_data_8ae055c5_49[] = {
	(int)87,(int)38,
};
static const int _hx_array_data_8ae055c5_50[] = {
	(int)68,(int)39,
};
static const int _hx_array_data_8ae055c5_51[] = {
	(int)65,(int)37,
};
static const int _hx_array_data_8ae055c5_52[] = {
	(int)83,(int)40,
};
static const int _hx_array_data_8ae055c5_53[] = {
	(int)87,(int)38,
};
static const int _hx_array_data_8ae055c5_54[] = {
	(int)68,(int)39,
};
static const int _hx_array_data_8ae055c5_55[] = {
	(int)32,(int)13,
};
static const int _hx_array_data_8ae055c5_56[] = {
	(int)8,(int)27,
};
static const int _hx_array_data_8ae055c5_57[] = {
	(int)13,(int)27,
};
static const int _hx_array_data_8ae055c5_58[] = {
	(int)82,(int)-1,
};
static const int _hx_array_data_8ae055c5_59[] = {
	(int)48,(int)-1,
};
static const int _hx_array_data_8ae055c5_60[] = {
	(int)107,(int)187,
};
static const int _hx_array_data_8ae055c5_61[] = {
	(int)109,(int)189,
};
static const int _hx_array_data_8ae055c5_62[] = {
	(int)55,(int)-1,
};
static const int _hx_array_data_8ae055c5_63[] = {
	(int)56,(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_79_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",79,0x329d1619)

void ClientPrefs_obj::__construct() { }

Dynamic ClientPrefs_obj::__CreateEmpty() { return new ClientPrefs_obj; }

void *ClientPrefs_obj::_hx_vtable = 0;

Dynamic ClientPrefs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientPrefs_obj > _hx_result = new ClientPrefs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClientPrefs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ddb9b05;
}

bool ClientPrefs_obj::downScroll;

bool ClientPrefs_obj::middleScroll;

bool ClientPrefs_obj::showFPS;

bool ClientPrefs_obj::flashing;

bool ClientPrefs_obj::globalAntialiasing;

bool ClientPrefs_obj::noteSplashes;

bool ClientPrefs_obj::lowQuality;

int ClientPrefs_obj::framerate;

bool ClientPrefs_obj::cursing;

bool ClientPrefs_obj::violence;

bool ClientPrefs_obj::camZooms;

bool ClientPrefs_obj::keysound;

bool ClientPrefs_obj::hideHud;

int ClientPrefs_obj::noteOffset;

::Array< ::Dynamic> ClientPrefs_obj::arrowHSV;

bool ClientPrefs_obj::imagesPersist;

bool ClientPrefs_obj::ghostTapping;

::String ClientPrefs_obj::timeBarType;

bool ClientPrefs_obj::scoreZoom;

bool ClientPrefs_obj::hard;

bool ClientPrefs_obj::noReset;

Float ClientPrefs_obj::healthBarAlpha;

bool ClientPrefs_obj::controllerMode;

 ::haxe::ds::StringMap ClientPrefs_obj::gameplaySettings;

::Array< int > ClientPrefs_obj::comboOffset;

bool ClientPrefs_obj::keSustains;

int ClientPrefs_obj::ratingOffset;

int ClientPrefs_obj::sickWindow;

int ClientPrefs_obj::goodWindow;

int ClientPrefs_obj::badWindow;

Float ClientPrefs_obj::safeFrames;

 ::haxe::ds::StringMap ClientPrefs_obj::keyBinds;

 ::haxe::ds::StringMap ClientPrefs_obj::defaultKeys;

void ClientPrefs_obj::loadDefaultKeys(){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_82_loadDefaultKeys)
HXDLIN(  82)		::ClientPrefs_obj::defaultKeys = ::ClientPrefs_obj::keyBinds->copy();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,loadDefaultKeys,(void))

void ClientPrefs_obj::saveSettings(){
            	HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_86_saveSettings)
HXLINE(  87)		::flixel::FlxG_obj::save->data->__SetField(HX_("downScroll",0f,ba,68,84),::ClientPrefs_obj::downScroll,::hx::paccDynamic);
HXLINE(  88)		::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),::ClientPrefs_obj::middleScroll,::hx::paccDynamic);
HXLINE(  89)		::flixel::FlxG_obj::save->data->__SetField(HX_("showFPS",ec,0a,9a,7b),::ClientPrefs_obj::showFPS,::hx::paccDynamic);
HXLINE(  90)		::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),::ClientPrefs_obj::flashing,::hx::paccDynamic);
HXLINE(  91)		::flixel::FlxG_obj::save->data->__SetField(HX_("globalAntialiasing",f7,9c,ed,4c),::ClientPrefs_obj::globalAntialiasing,::hx::paccDynamic);
HXLINE(  92)		::flixel::FlxG_obj::save->data->__SetField(HX_("noteSplashes",a7,57,29,8d),::ClientPrefs_obj::noteSplashes,::hx::paccDynamic);
HXLINE(  93)		::flixel::FlxG_obj::save->data->__SetField(HX_("lowQuality",8b,52,27,3e),::ClientPrefs_obj::lowQuality,::hx::paccDynamic);
HXLINE(  94)		::flixel::FlxG_obj::save->data->__SetField(HX_("framerate",8d,e5,4b,4e),::ClientPrefs_obj::framerate,::hx::paccDynamic);
HXLINE(  97)		::flixel::FlxG_obj::save->data->__SetField(HX_("camZooms",71,f3,cd,90),::ClientPrefs_obj::camZooms,::hx::paccDynamic);
HXLINE(  98)		::flixel::FlxG_obj::save->data->__SetField(HX_("noteOffset",25,a5,53,fe),::ClientPrefs_obj::noteOffset,::hx::paccDynamic);
HXLINE(  99)		::flixel::FlxG_obj::save->data->__SetField(HX_("hideHud",15,b9,3c,b7),::ClientPrefs_obj::hideHud,::hx::paccDynamic);
HXLINE( 100)		::flixel::FlxG_obj::save->data->__SetField(HX_("arrowHSV",c2,f4,b4,fd),::ClientPrefs_obj::arrowHSV,::hx::paccDynamic);
HXLINE( 101)		::flixel::FlxG_obj::save->data->__SetField(HX_("imagesPersist",3c,00,5c,08),::ClientPrefs_obj::imagesPersist,::hx::paccDynamic);
HXLINE( 102)		::flixel::FlxG_obj::save->data->__SetField(HX_("ghostTapping",c6,6a,da,10),::ClientPrefs_obj::ghostTapping,::hx::paccDynamic);
HXLINE( 103)		::flixel::FlxG_obj::save->data->__SetField(HX_("timeBarType",a0,5d,bb,01),::ClientPrefs_obj::timeBarType,::hx::paccDynamic);
HXLINE( 104)		::flixel::FlxG_obj::save->data->__SetField(HX_("scoreZoom",85,53,bc,e0),::ClientPrefs_obj::scoreZoom,::hx::paccDynamic);
HXLINE( 105)		::flixel::FlxG_obj::save->data->__SetField(HX_("noReset",ce,cd,cb,b9),::ClientPrefs_obj::noReset,::hx::paccDynamic);
HXLINE( 106)		::flixel::FlxG_obj::save->data->__SetField(HX_("healthBarAlpha",47,c9,a0,80),::ClientPrefs_obj::healthBarAlpha,::hx::paccDynamic);
HXLINE( 107)		::flixel::FlxG_obj::save->data->__SetField(HX_("comboOffset",81,62,09,89),::ClientPrefs_obj::comboOffset,::hx::paccDynamic);
HXLINE( 108)		::flixel::FlxG_obj::save->data->__SetField(HX_("achievementsMap",d8,6f,d5,91),::Achievements_obj::achievementsMap,::hx::paccDynamic);
HXLINE( 109)		::flixel::FlxG_obj::save->data->__SetField(HX_("henchmenDeath",f4,76,2a,dd),::Achievements_obj::henchmenDeath,::hx::paccDynamic);
HXLINE( 111)		::flixel::FlxG_obj::save->data->__SetField(HX_("ratingOffset",90,b3,eb,a5),::ClientPrefs_obj::ratingOffset,::hx::paccDynamic);
HXLINE( 112)		::flixel::FlxG_obj::save->data->__SetField(HX_("sickWindow",4e,b7,93,ed),::ClientPrefs_obj::sickWindow,::hx::paccDynamic);
HXLINE( 113)		::flixel::FlxG_obj::save->data->__SetField(HX_("goodWindow",0d,a9,05,67),::ClientPrefs_obj::goodWindow,::hx::paccDynamic);
HXLINE( 114)		::flixel::FlxG_obj::save->data->__SetField(HX_("badWindow",95,db,0a,32),::ClientPrefs_obj::badWindow,::hx::paccDynamic);
HXLINE( 115)		::flixel::FlxG_obj::save->data->__SetField(HX_("safeFrames",d3,18,18,62),::ClientPrefs_obj::safeFrames,::hx::paccDynamic);
HXLINE( 116)		::flixel::FlxG_obj::save->data->__SetField(HX_("gameplaySettings",e9,91,4c,17),::ClientPrefs_obj::gameplaySettings,::hx::paccDynamic);
HXLINE( 117)		::flixel::FlxG_obj::save->data->__SetField(HX_("controllerMode",1f,16,a7,29),::ClientPrefs_obj::controllerMode,::hx::paccDynamic);
HXLINE( 119)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 121)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 122)		save->bind(HX_("controls_v2",65,e4,a2,26),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 123)		save->data->__SetField(HX_("customControls",47,63,49,5a),::ClientPrefs_obj::keyBinds,::hx::paccDynamic);
HXLINE( 124)		save->flush(null(),null());
HXLINE( 125)		::flixel::FlxG_obj::log->advanced(HX_("Settings saved!",37,01,d5,e3),::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,saveSettings,(void))

void ClientPrefs_obj::loadPrefs(){
            	HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_128_loadPrefs)
HXLINE( 129)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downScroll",0f,ba,68,84),::hx::paccDynamic) )) {
HXLINE( 130)			::ClientPrefs_obj::downScroll = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downScroll",0f,ba,68,84),::hx::paccDynamic)) );
            		}
HXLINE( 132)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic) )) {
HXLINE( 133)			::ClientPrefs_obj::middleScroll = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) );
            		}
HXLINE( 135)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("showFPS",ec,0a,9a,7b),::hx::paccDynamic) )) {
HXLINE( 136)			::ClientPrefs_obj::showFPS = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("showFPS",ec,0a,9a,7b),::hx::paccDynamic)) );
HXLINE( 137)			if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 138)				::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            			}
            		}
HXLINE( 141)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE( 142)			::ClientPrefs_obj::flashing = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) );
            		}
HXLINE( 144)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("globalAntialiasing",f7,9c,ed,4c),::hx::paccDynamic) )) {
HXLINE( 145)			::ClientPrefs_obj::globalAntialiasing = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("globalAntialiasing",f7,9c,ed,4c),::hx::paccDynamic)) );
            		}
HXLINE( 147)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("noteSplashes",a7,57,29,8d),::hx::paccDynamic) )) {
HXLINE( 148)			::ClientPrefs_obj::noteSplashes = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("noteSplashes",a7,57,29,8d),::hx::paccDynamic)) );
            		}
HXLINE( 150)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("lowQuality",8b,52,27,3e),::hx::paccDynamic) )) {
HXLINE( 151)			::ClientPrefs_obj::lowQuality = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("lowQuality",8b,52,27,3e),::hx::paccDynamic)) );
            		}
HXLINE( 153)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic) )) {
HXLINE( 154)			::ClientPrefs_obj::framerate = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic)) );
HXLINE( 155)			if ((::ClientPrefs_obj::framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE( 156)				::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
HXLINE( 157)				::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
            			}
            			else {
HXLINE( 159)				::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
HXLINE( 160)				::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
            			}
            		}
HXLINE( 169)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("camZooms",71,f3,cd,90),::hx::paccDynamic) )) {
HXLINE( 170)			::ClientPrefs_obj::camZooms = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("camZooms",71,f3,cd,90),::hx::paccDynamic)) );
            		}
HXLINE( 172)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("hideHud",15,b9,3c,b7),::hx::paccDynamic) )) {
HXLINE( 173)			::ClientPrefs_obj::hideHud = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("hideHud",15,b9,3c,b7),::hx::paccDynamic)) );
            		}
HXLINE( 175)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("noteOffset",25,a5,53,fe),::hx::paccDynamic) )) {
HXLINE( 176)			::ClientPrefs_obj::noteOffset = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("noteOffset",25,a5,53,fe),::hx::paccDynamic)) );
            		}
HXLINE( 178)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("arrowHSV",c2,f4,b4,fd),::hx::paccDynamic) )) {
HXLINE( 179)			::ClientPrefs_obj::arrowHSV = ( (::Array< ::Dynamic>)(::flixel::FlxG_obj::save->data->__Field(HX_("arrowHSV",c2,f4,b4,fd),::hx::paccDynamic)) );
            		}
HXLINE( 181)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("imagesPersist",3c,00,5c,08),::hx::paccDynamic) )) {
HXLINE( 182)			::ClientPrefs_obj::imagesPersist = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("imagesPersist",3c,00,5c,08),::hx::paccDynamic)) );
HXLINE( 183)			::flixel::graphics::FlxGraphic_obj::defaultPersist = ::ClientPrefs_obj::imagesPersist;
            		}
HXLINE( 185)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("ghostTapping",c6,6a,da,10),::hx::paccDynamic) )) {
HXLINE( 186)			::ClientPrefs_obj::ghostTapping = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("ghostTapping",c6,6a,da,10),::hx::paccDynamic)) );
            		}
HXLINE( 188)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("timeBarType",a0,5d,bb,01),::hx::paccDynamic) )) {
HXLINE( 189)			::ClientPrefs_obj::timeBarType = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("timeBarType",a0,5d,bb,01),::hx::paccDynamic)) );
            		}
HXLINE( 191)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("scoreZoom",85,53,bc,e0),::hx::paccDynamic) )) {
HXLINE( 192)			::ClientPrefs_obj::scoreZoom = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("scoreZoom",85,53,bc,e0),::hx::paccDynamic)) );
            		}
HXLINE( 194)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("noReset",ce,cd,cb,b9),::hx::paccDynamic) )) {
HXLINE( 195)			::ClientPrefs_obj::noReset = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("noReset",ce,cd,cb,b9),::hx::paccDynamic)) );
            		}
HXLINE( 197)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("healthBarAlpha",47,c9,a0,80),::hx::paccDynamic) )) {
HXLINE( 198)			::ClientPrefs_obj::healthBarAlpha = ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("healthBarAlpha",47,c9,a0,80),::hx::paccDynamic)) );
            		}
HXLINE( 200)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("comboOffset",81,62,09,89),::hx::paccDynamic) )) {
HXLINE( 201)			::ClientPrefs_obj::comboOffset = ( (::Array< int >)(::flixel::FlxG_obj::save->data->__Field(HX_("comboOffset",81,62,09,89),::hx::paccDynamic)) );
            		}
HXLINE( 204)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("ratingOffset",90,b3,eb,a5),::hx::paccDynamic) )) {
HXLINE( 205)			::ClientPrefs_obj::ratingOffset = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("ratingOffset",90,b3,eb,a5),::hx::paccDynamic)) );
            		}
HXLINE( 207)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("sickWindow",4e,b7,93,ed),::hx::paccDynamic) )) {
HXLINE( 208)			::ClientPrefs_obj::sickWindow = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("sickWindow",4e,b7,93,ed),::hx::paccDynamic)) );
            		}
HXLINE( 210)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("goodWindow",0d,a9,05,67),::hx::paccDynamic) )) {
HXLINE( 211)			::ClientPrefs_obj::goodWindow = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("goodWindow",0d,a9,05,67),::hx::paccDynamic)) );
            		}
HXLINE( 213)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("badWindow",95,db,0a,32),::hx::paccDynamic) )) {
HXLINE( 214)			::ClientPrefs_obj::badWindow = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("badWindow",95,db,0a,32),::hx::paccDynamic)) );
            		}
HXLINE( 216)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("safeFrames",d3,18,18,62),::hx::paccDynamic) )) {
HXLINE( 217)			::ClientPrefs_obj::safeFrames = ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("safeFrames",d3,18,18,62),::hx::paccDynamic)) );
            		}
HXLINE( 219)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("controllerMode",1f,16,a7,29),::hx::paccDynamic) )) {
HXLINE( 220)			::ClientPrefs_obj::controllerMode = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("controllerMode",1f,16,a7,29),::hx::paccDynamic)) );
            		}
HXLINE( 222)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("gameplaySettings",e9,91,4c,17),::hx::paccDynamic) )) {
HXLINE( 224)			 ::haxe::ds::StringMap savedMap = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("gameplaySettings",e9,91,4c,17),::hx::paccDynamic)) );
HXLINE( 225)			{
HXLINE( 225)				::Dynamic map = savedMap;
HXDLIN( 225)				::Dynamic _g_map = map;
HXDLIN( 225)				 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 225)				while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 225)					::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 225)					 ::Dynamic _g1_value = ::haxe::IMap_obj::get(_g_map,key);
HXDLIN( 225)					::String _g1_key = key;
HXDLIN( 225)					::String name = _g1_key;
HXDLIN( 225)					 ::Dynamic value = _g1_value;
HXLINE( 227)					::ClientPrefs_obj::gameplaySettings->set(name,value);
            				}
            			}
            		}
HXLINE( 232)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic) )) {
HXLINE( 234)			::flixel::FlxG_obj::sound->set_volume(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("volume",da,29,53,5f),::hx::paccDynamic)) ));
            		}
HXLINE( 236)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic) )) {
HXLINE( 238)			::flixel::FlxG_obj::sound->muted = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("mute",d9,6e,65,48),::hx::paccDynamic)) );
            		}
HXLINE( 241)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 242)		save->bind(HX_("controls_v2",65,e4,a2,26),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 243)		bool _hx_tmp;
HXDLIN( 243)		if (::hx::IsNotNull( save )) {
HXLINE( 243)			_hx_tmp = ::hx::IsNotNull( save->data->__Field(HX_("customControls",47,63,49,5a),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 243)			_hx_tmp = false;
            		}
HXDLIN( 243)		if (_hx_tmp) {
HXLINE( 244)			 ::haxe::ds::StringMap loadedControls = ( ( ::haxe::ds::StringMap)(save->data->__Field(HX_("customControls",47,63,49,5a),::hx::paccDynamic)) );
HXLINE( 245)			{
HXLINE( 245)				::Dynamic map = loadedControls;
HXDLIN( 245)				::Dynamic _g_map = map;
HXDLIN( 245)				 ::Dynamic _g_keys = ::haxe::IMap_obj::keys(map);
HXDLIN( 245)				while(( (bool)(_g_keys->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 245)					::String key = ( (::String)(_g_keys->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN( 245)					::Array< int > _g1_value = ( (::Array< int >)(::haxe::IMap_obj::get(_g_map,key)) );
HXDLIN( 245)					::String _g1_key = key;
HXDLIN( 245)					::String control = _g1_key;
HXDLIN( 245)					::Array< int > keys = _g1_value;
HXLINE( 246)					::ClientPrefs_obj::keyBinds->set(control,keys);
            				}
            			}
HXLINE( 248)			::ClientPrefs_obj::reloadControls();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,loadPrefs,(void))

 ::Dynamic ClientPrefs_obj::getGameplaySetting(::String name, ::Dynamic defaultValue){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_253_getGameplaySetting)
HXDLIN( 253)		if (::ClientPrefs_obj::gameplaySettings->exists(name)) {
HXDLIN( 253)			return ::ClientPrefs_obj::gameplaySettings->get(name);
            		}
            		else {
HXDLIN( 253)			return defaultValue;
            		}
HXDLIN( 253)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ClientPrefs_obj,getGameplaySetting,return )

void ClientPrefs_obj::reloadControls(){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_256_reloadControls)
HXLINE( 257)		::PlayerSettings_obj::player1->controls->setKeyboardScheme(::KeyboardScheme_obj::Solo_dyn(),null());
HXLINE( 259)		::TitleState_obj::muteKeys = ::ClientPrefs_obj::copyKey(( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(HX_("volume_mute",9e,6a,db,fa))) ));
HXLINE( 260)		::TitleState_obj::volumeDownKeys = ::ClientPrefs_obj::copyKey(( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(HX_("volume_down",27,f4,e3,f4))) ));
HXLINE( 261)		::TitleState_obj::volumeUpKeys = ::ClientPrefs_obj::copyKey(( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(HX_("volume_up",e0,76,ad,60))) ));
HXLINE( 262)		::flixel::FlxG_obj::sound->muteKeys = ::TitleState_obj::muteKeys;
HXLINE( 263)		::flixel::FlxG_obj::sound->volumeDownKeys = ::TitleState_obj::volumeDownKeys;
HXLINE( 264)		::flixel::FlxG_obj::sound->volumeUpKeys = ::TitleState_obj::volumeUpKeys;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,reloadControls,(void))

::Array< int > ClientPrefs_obj::copyKey(::Array< int > arrayToCopy){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_267_copyKey)
HXLINE( 268)		::Array< int > copiedArray = arrayToCopy->copy();
HXLINE( 269)		int i = 0;
HXLINE( 270)		int len = copiedArray->length;
HXLINE( 272)		while((i < len)){
HXLINE( 273)			if ((copiedArray->__get(i) == -1)) {
HXLINE( 274)				copiedArray->remove(-1);
HXLINE( 275)				i = (i - 1);
            			}
HXLINE( 277)			i = (i + 1);
HXLINE( 278)			len = copiedArray->length;
            		}
HXLINE( 280)		return copiedArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientPrefs_obj,copyKey,return )


ClientPrefs_obj::ClientPrefs_obj()
{
}

bool ClientPrefs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hard") ) { outValue = ( hard ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { outValue = ( showFPS ); return true; }
		if (HX_FIELD_EQ(inName,"cursing") ) { outValue = ( cursing ); return true; }
		if (HX_FIELD_EQ(inName,"hideHud") ) { outValue = ( hideHud ); return true; }
		if (HX_FIELD_EQ(inName,"noReset") ) { outValue = ( noReset ); return true; }
		if (HX_FIELD_EQ(inName,"copyKey") ) { outValue = copyKey_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { outValue = ( flashing ); return true; }
		if (HX_FIELD_EQ(inName,"violence") ) { outValue = ( violence ); return true; }
		if (HX_FIELD_EQ(inName,"camZooms") ) { outValue = ( camZooms ); return true; }
		if (HX_FIELD_EQ(inName,"keysound") ) { outValue = ( keysound ); return true; }
		if (HX_FIELD_EQ(inName,"arrowHSV") ) { outValue = ( arrowHSV ); return true; }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { outValue = ( keyBinds ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"framerate") ) { outValue = ( framerate ); return true; }
		if (HX_FIELD_EQ(inName,"scoreZoom") ) { outValue = ( scoreZoom ); return true; }
		if (HX_FIELD_EQ(inName,"badWindow") ) { outValue = ( badWindow ); return true; }
		if (HX_FIELD_EQ(inName,"loadPrefs") ) { outValue = loadPrefs_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { outValue = ( downScroll ); return true; }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { outValue = ( lowQuality ); return true; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { outValue = ( noteOffset ); return true; }
		if (HX_FIELD_EQ(inName,"keSustains") ) { outValue = ( keSustains ); return true; }
		if (HX_FIELD_EQ(inName,"sickWindow") ) { outValue = ( sickWindow ); return true; }
		if (HX_FIELD_EQ(inName,"goodWindow") ) { outValue = ( goodWindow ); return true; }
		if (HX_FIELD_EQ(inName,"safeFrames") ) { outValue = ( safeFrames ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeBarType") ) { outValue = ( timeBarType ); return true; }
		if (HX_FIELD_EQ(inName,"comboOffset") ) { outValue = ( comboOffset ); return true; }
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { outValue = ( defaultKeys ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { outValue = ( middleScroll ); return true; }
		if (HX_FIELD_EQ(inName,"noteSplashes") ) { outValue = ( noteSplashes ); return true; }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { outValue = ( ghostTapping ); return true; }
		if (HX_FIELD_EQ(inName,"ratingOffset") ) { outValue = ( ratingOffset ); return true; }
		if (HX_FIELD_EQ(inName,"saveSettings") ) { outValue = saveSettings_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imagesPersist") ) { outValue = ( imagesPersist ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"healthBarAlpha") ) { outValue = ( healthBarAlpha ); return true; }
		if (HX_FIELD_EQ(inName,"controllerMode") ) { outValue = ( controllerMode ); return true; }
		if (HX_FIELD_EQ(inName,"reloadControls") ) { outValue = reloadControls_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadDefaultKeys") ) { outValue = loadDefaultKeys_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gameplaySettings") ) { outValue = ( gameplaySettings ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"globalAntialiasing") ) { outValue = ( globalAntialiasing ); return true; }
		if (HX_FIELD_EQ(inName,"getGameplaySetting") ) { outValue = getGameplaySetting_dyn(); return true; }
	}
	return false;
}

bool ClientPrefs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hard") ) { hard=ioValue.Cast< bool >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { showFPS=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"cursing") ) { cursing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hideHud") ) { hideHud=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"noReset") ) { noReset=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { flashing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"violence") ) { violence=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"camZooms") ) { camZooms=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"keysound") ) { keysound=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"arrowHSV") ) { arrowHSV=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { keyBinds=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"scoreZoom") ) { scoreZoom=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"badWindow") ) { badWindow=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { downScroll=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { lowQuality=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { noteOffset=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"keSustains") ) { keSustains=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"sickWindow") ) { sickWindow=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"goodWindow") ) { goodWindow=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"safeFrames") ) { safeFrames=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeBarType") ) { timeBarType=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"comboOffset") ) { comboOffset=ioValue.Cast< ::Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { middleScroll=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"noteSplashes") ) { noteSplashes=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { ghostTapping=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"ratingOffset") ) { ratingOffset=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imagesPersist") ) { imagesPersist=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"healthBarAlpha") ) { healthBarAlpha=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"controllerMode") ) { controllerMode=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gameplaySettings") ) { gameplaySettings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"globalAntialiasing") ) { globalAntialiasing=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClientPrefs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ClientPrefs_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &ClientPrefs_obj::downScroll,HX_("downScroll",0f,ba,68,84)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::middleScroll,HX_("middleScroll",42,cd,58,62)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::showFPS,HX_("showFPS",ec,0a,9a,7b)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::flashing,HX_("flashing",32,85,e8,99)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::globalAntialiasing,HX_("globalAntialiasing",f7,9c,ed,4c)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::noteSplashes,HX_("noteSplashes",a7,57,29,8d)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::lowQuality,HX_("lowQuality",8b,52,27,3e)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::framerate,HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::cursing,HX_("cursing",cf,db,8f,cc)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::violence,HX_("violence",5b,5e,88,3f)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::camZooms,HX_("camZooms",71,f3,cd,90)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::keysound,HX_("keysound",d0,c2,08,32)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::hideHud,HX_("hideHud",15,b9,3c,b7)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::noteOffset,HX_("noteOffset",25,a5,53,fe)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ClientPrefs_obj::arrowHSV,HX_("arrowHSV",c2,f4,b4,fd)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::imagesPersist,HX_("imagesPersist",3c,00,5c,08)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::ghostTapping,HX_("ghostTapping",c6,6a,da,10)},
	{::hx::fsString,(void *) &ClientPrefs_obj::timeBarType,HX_("timeBarType",a0,5d,bb,01)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::scoreZoom,HX_("scoreZoom",85,53,bc,e0)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::hard,HX_("hard",eb,2e,08,45)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::noReset,HX_("noReset",ce,cd,cb,b9)},
	{::hx::fsFloat,(void *) &ClientPrefs_obj::healthBarAlpha,HX_("healthBarAlpha",47,c9,a0,80)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::controllerMode,HX_("controllerMode",1f,16,a7,29)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::gameplaySettings,HX_("gameplaySettings",e9,91,4c,17)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &ClientPrefs_obj::comboOffset,HX_("comboOffset",81,62,09,89)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::keSustains,HX_("keSustains",2a,56,fc,2a)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::ratingOffset,HX_("ratingOffset",90,b3,eb,a5)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::sickWindow,HX_("sickWindow",4e,b7,93,ed)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::goodWindow,HX_("goodWindow",0d,a9,05,67)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::badWindow,HX_("badWindow",95,db,0a,32)},
	{::hx::fsFloat,(void *) &ClientPrefs_obj::safeFrames,HX_("safeFrames",d3,18,18,62)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::keyBinds,HX_("keyBinds",f7,b5,69,f7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &ClientPrefs_obj::defaultKeys,HX_("defaultKeys",55,db,c5,18)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ClientPrefs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::downScroll,"downScroll");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::middleScroll,"middleScroll");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::showFPS,"showFPS");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::flashing,"flashing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::globalAntialiasing,"globalAntialiasing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::noteSplashes,"noteSplashes");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::lowQuality,"lowQuality");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::framerate,"framerate");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::cursing,"cursing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::violence,"violence");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::camZooms,"camZooms");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::keysound,"keysound");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::hideHud,"hideHud");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::noteOffset,"noteOffset");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::arrowHSV,"arrowHSV");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::imagesPersist,"imagesPersist");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::ghostTapping,"ghostTapping");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::timeBarType,"timeBarType");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::scoreZoom,"scoreZoom");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::hard,"hard");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::noReset,"noReset");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::healthBarAlpha,"healthBarAlpha");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::controllerMode,"controllerMode");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::gameplaySettings,"gameplaySettings");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::comboOffset,"comboOffset");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::keSustains,"keSustains");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::ratingOffset,"ratingOffset");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::sickWindow,"sickWindow");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::goodWindow,"goodWindow");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::badWindow,"badWindow");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::safeFrames,"safeFrames");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClientPrefs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::downScroll,"downScroll");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::middleScroll,"middleScroll");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::showFPS,"showFPS");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::flashing,"flashing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::globalAntialiasing,"globalAntialiasing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::noteSplashes,"noteSplashes");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::lowQuality,"lowQuality");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::framerate,"framerate");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::cursing,"cursing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::violence,"violence");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::camZooms,"camZooms");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::keysound,"keysound");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::hideHud,"hideHud");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::noteOffset,"noteOffset");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::arrowHSV,"arrowHSV");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::imagesPersist,"imagesPersist");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::ghostTapping,"ghostTapping");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::timeBarType,"timeBarType");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::scoreZoom,"scoreZoom");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::hard,"hard");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::noReset,"noReset");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::healthBarAlpha,"healthBarAlpha");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::controllerMode,"controllerMode");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::gameplaySettings,"gameplaySettings");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::comboOffset,"comboOffset");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::keSustains,"keSustains");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::ratingOffset,"ratingOffset");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::sickWindow,"sickWindow");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::goodWindow,"goodWindow");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::badWindow,"badWindow");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::safeFrames,"safeFrames");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
};

#endif

::hx::Class ClientPrefs_obj::__mClass;

static ::String ClientPrefs_obj_sStaticFields[] = {
	HX_("downScroll",0f,ba,68,84),
	HX_("middleScroll",42,cd,58,62),
	HX_("showFPS",ec,0a,9a,7b),
	HX_("flashing",32,85,e8,99),
	HX_("globalAntialiasing",f7,9c,ed,4c),
	HX_("noteSplashes",a7,57,29,8d),
	HX_("lowQuality",8b,52,27,3e),
	HX_("framerate",8d,e5,4b,4e),
	HX_("cursing",cf,db,8f,cc),
	HX_("violence",5b,5e,88,3f),
	HX_("camZooms",71,f3,cd,90),
	HX_("keysound",d0,c2,08,32),
	HX_("hideHud",15,b9,3c,b7),
	HX_("noteOffset",25,a5,53,fe),
	HX_("arrowHSV",c2,f4,b4,fd),
	HX_("imagesPersist",3c,00,5c,08),
	HX_("ghostTapping",c6,6a,da,10),
	HX_("timeBarType",a0,5d,bb,01),
	HX_("scoreZoom",85,53,bc,e0),
	HX_("hard",eb,2e,08,45),
	HX_("noReset",ce,cd,cb,b9),
	HX_("healthBarAlpha",47,c9,a0,80),
	HX_("controllerMode",1f,16,a7,29),
	HX_("gameplaySettings",e9,91,4c,17),
	HX_("comboOffset",81,62,09,89),
	HX_("keSustains",2a,56,fc,2a),
	HX_("ratingOffset",90,b3,eb,a5),
	HX_("sickWindow",4e,b7,93,ed),
	HX_("goodWindow",0d,a9,05,67),
	HX_("badWindow",95,db,0a,32),
	HX_("safeFrames",d3,18,18,62),
	HX_("keyBinds",f7,b5,69,f7),
	HX_("defaultKeys",55,db,c5,18),
	HX_("loadDefaultKeys",cf,5e,fd,5c),
	HX_("saveSettings",40,c9,c5,9d),
	HX_("loadPrefs",2a,94,bf,e3),
	HX_("getGameplaySetting",54,6f,2e,77),
	HX_("reloadControls",ef,16,46,27),
	HX_("copyKey",ea,04,7f,43),
	::String(null())
};

void ClientPrefs_obj::__register()
{
	ClientPrefs_obj _hx_dummy;
	ClientPrefs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ClientPrefs",c5,55,e0,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClientPrefs_obj::__GetStatic;
	__mClass->mSetStaticField = &ClientPrefs_obj::__SetStatic;
	__mClass->mMarkFunc = ClientPrefs_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ClientPrefs_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ClientPrefs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClientPrefs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientPrefs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientPrefs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClientPrefs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_10_boot)
HXDLIN(  10)		downScroll = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_11_boot)
HXDLIN(  11)		middleScroll = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_12_boot)
HXDLIN(  12)		showFPS = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_13_boot)
HXDLIN(  13)		flashing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_14_boot)
HXDLIN(  14)		globalAntialiasing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_15_boot)
HXDLIN(  15)		noteSplashes = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_16_boot)
HXDLIN(  16)		lowQuality = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_17_boot)
HXDLIN(  17)		framerate = 60;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_18_boot)
HXDLIN(  18)		cursing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_19_boot)
HXDLIN(  19)		violence = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_20_boot)
HXDLIN(  20)		camZooms = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_21_boot)
HXDLIN(  21)		keysound = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_22_boot)
HXDLIN(  22)		hideHud = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_23_boot)
HXDLIN(  23)		noteOffset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_24_boot)
HXDLIN(  24)		arrowHSV = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_24,3))->init(1,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_25,3))->init(2,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_26,3))->init(3,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_27,3));
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_25_boot)
HXDLIN(  25)		imagesPersist = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_26_boot)
HXDLIN(  26)		ghostTapping = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_27_boot)
HXDLIN(  27)		timeBarType = HX_("Time Left",fa,08,f2,62);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_28_boot)
HXDLIN(  28)		scoreZoom = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_29_boot)
HXDLIN(  29)		hard = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_30_boot)
HXDLIN(  30)		noReset = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_31_boot)
HXDLIN(  31)		healthBarAlpha = ((Float)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_32_boot)
HXDLIN(  32)		controllerMode = false;
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_33_boot)
HXDLIN(  33)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  33)			_g->set(HX_("scrollspeed",5a,70,19,38),((Float)1.0));
HXDLIN(  33)			_g->set(HX_("songspeed",92,6f,b6,1d),((Float)1.0));
HXDLIN(  33)			_g->set(HX_("healthgain",1b,97,1b,16),((Float)1.0));
HXDLIN(  33)			_g->set(HX_("healthloss",7f,50,74,19),((Float)1.0));
HXDLIN(  33)			_g->set(HX_("instakill",f9,72,23,49),false);
HXDLIN(  33)			_g->set(HX_("practice",bb,00,e7,a0),false);
HXDLIN(  33)			_g->set(HX_("botplay",7b,fb,a9,61),false);
HXDLIN(  33)			_g->set(HX_("opponentplay",11,7a,4c,86),false);
HXDLIN(  33)			_g->set(HX_("challenge",63,f4,63,32),false);
HXDLIN(  33)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_33_boot)
HXDLIN(  33)		gameplaySettings = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_45_boot)
HXDLIN(  45)		comboOffset = ::Array_obj< int >::fromData( _hx_array_data_8ae055c5_39,4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_46_boot)
HXDLIN(  46)		keSustains = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_48_boot)
HXDLIN(  48)		ratingOffset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_49_boot)
HXDLIN(  49)		sickWindow = 45;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_50_boot)
HXDLIN(  50)		goodWindow = 90;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_51_boot)
HXDLIN(  51)		badWindow = 135;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_52_boot)
HXDLIN(  52)		safeFrames = ((Float)10);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_55_boot)
HXDLIN(  55)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  55)			_g->set(HX_("note_left",b4,fe,20,a5),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_47,2));
HXDLIN(  55)			_g->set(HX_("note_down",0f,ef,de,9f),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_48,2));
HXDLIN(  55)			_g->set(HX_("note_up",c8,67,5c,4d),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_49,2));
HXDLIN(  55)			_g->set(HX_("note_right",8f,ec,ca,4e),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_50,2));
HXDLIN(  55)			_g->set(HX_("ui_left",12,4d,89,f7),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_51,2));
HXDLIN(  55)			_g->set(HX_("ui_down",6d,3d,47,f2),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_52,2));
HXDLIN(  55)			_g->set(HX_("ui_up",a6,c2,91,a3),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_53,2));
HXDLIN(  55)			_g->set(HX_("ui_right",71,30,a7,17),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_54,2));
HXDLIN(  55)			_g->set(HX_("accept",08,93,06,0b),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_55,2));
HXDLIN(  55)			_g->set(HX_("back",27,da,10,41),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_56,2));
HXDLIN(  55)			_g->set(HX_("pause",f6,d6,57,bd),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_57,2));
HXDLIN(  55)			_g->set(HX_("reset",cf,49,c8,e6),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_58,2));
HXDLIN(  55)			_g->set(HX_("volume_mute",9e,6a,db,fa),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_59,2));
HXDLIN(  55)			_g->set(HX_("volume_up",e0,76,ad,60),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_60,2));
HXDLIN(  55)			_g->set(HX_("volume_down",27,f4,e3,f4),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_61,2));
HXDLIN(  55)			_g->set(HX_("debug_1",05,20,57,5b),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_62,2));
HXDLIN(  55)			_g->set(HX_("debug_2",06,20,57,5b),::Array_obj< int >::fromData( _hx_array_data_8ae055c5_63,2));
HXDLIN(  55)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_55_boot)
HXDLIN(  55)		keyBinds = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_79_boot)
HXDLIN(  79)		defaultKeys = null();
            	}
}

