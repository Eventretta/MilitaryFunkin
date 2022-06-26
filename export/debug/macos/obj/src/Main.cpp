#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MemoryCounter
#include <MemoryCounter.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_25_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",25,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_64_init,"Main","init",0xea732345,"Main.init","Main.hx",64,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_74_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",74,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_46_main,"Main","main",0xed0e206e,"Main.main","Main.hx",46,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_36_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",36,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_38_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",38,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_39_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",39,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_40_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",40,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_41_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",41,0x087e5c05)

void Main_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_25_new)
HXLINE(  34)		this->childs = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  33)		this->startFullscreen = false;
HXLINE(  32)		this->skipSplash = true;
HXLINE(  31)		this->framerate = 60;
HXLINE(  30)		this->zoom = ((Float)-1);
HXLINE(  29)		this->initialState = ::hx::ClassOf< ::TitleState >();
HXLINE(  28)		this->gameHeight = 720;
HXLINE(  27)		this->gameWidth = 1280;
HXLINE(  51)		super::__construct();
HXLINE(  53)		if (::hx::IsNotNull( this->stage )) {
HXLINE(  55)			this->init(null());
            		}
            		else {
HXLINE(  59)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null(),null(),null());
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::init( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_64_init)
HXLINE(  65)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE(  67)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null());
            		}
HXLINE(  70)		this->setupGame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

void Main_obj::setupGame(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_74_setupGame)
HXLINE(  75)		int stageWidth = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  76)		int stageHeight = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  78)		if ((this->zoom == -1)) {
HXLINE(  80)			Float ratioX = (( (Float)(stageWidth) ) / ( (Float)(this->gameWidth) ));
HXLINE(  81)			Float ratioY = (( (Float)(stageHeight) ) / ( (Float)(this->gameHeight) ));
HXLINE(  82)			this->zoom = ::Math_obj::min(ratioX,ratioY);
HXLINE(  83)			this->gameWidth = ::Math_obj::ceil((( (Float)(stageWidth) ) / this->zoom));
HXLINE(  84)			this->gameHeight = ::Math_obj::ceil((( (Float)(stageHeight) ) / this->zoom));
            		}
HXLINE(  92)		::Main_obj::fpsVar =  ::openfl::display::FPS_obj::__alloc( HX_CTX ,10,3,16777215);
HXLINE(  95)		::ClientPrefs_obj::loadDefaultKeys();
HXLINE(  96)		::CoolUtil_obj::loadPreloadImage();
HXLINE( 100)		::String library = null();
HXDLIN( 100)		 ::Dynamic opt =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::openfl::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("mainAdvancedOptions",a3,41,9d,55)) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library)))->doParse()->__Field(HX_("options",5e,33,fe,df),::hx::paccDynamic);
HXLINE( 102)		::haxe::Log_obj::trace(opt,::hx::SourceInfo(HX_("source/Main.hx",91,d3,a7,40),102,HX_("Main",59,64,2f,33),HX_("setupGame",0f,51,ed,9e)));
HXLINE( 104)		::cpp::VirtualArray _hx_tmp = this->childs;
HXDLIN( 104)		_hx_tmp->push( ::flixel::FlxGame_obj::__alloc( HX_CTX ,opt->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),opt->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic),this->initialState,this->zoom,opt->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic),opt->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic),opt->__Field(HX_("splash",67,81,98,bf),::hx::paccDynamic),this->startFullscreen));
HXLINE( 105)		this->childs->push(::Main_obj::fpsVar);
HXLINE( 106)		::cpp::VirtualArray _hx_tmp1 = this->childs;
HXDLIN( 106)		_hx_tmp1->push( ::MemoryCounter_obj::__alloc( HX_CTX ,10,3,16777215));
HXLINE( 108)		{
HXLINE( 108)			int _g = 0;
HXDLIN( 108)			::cpp::VirtualArray _g1 = this->childs;
HXDLIN( 108)			while((_g < _g1->get_length())){
HXLINE( 108)				 ::Dynamic i = _g1->__get(_g);
HXDLIN( 108)				_g = (_g + 1);
HXLINE( 110)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 110)				::String _hx_tmp1 = (HX_("adding child ",e3,0f,94,e8) + ::Std_obj::string(i));
HXDLIN( 110)				_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/Main.hx",91,d3,a7,40),110,HX_("Main",59,64,2f,33),HX_("setupGame",0f,51,ed,9e)));
HXLINE( 111)				this->addChild(( ( ::openfl::display::DisplayObject)(i) ));
            			}
            		}
HXLINE( 114)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 115)			::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

 ::openfl::display::FPS Main_obj::fpsVar;

::String Main_obj::modVer;

bool Main_obj::checkpointActive;

Float Main_obj::checkpointTime;

::String Main_obj::checksong;

bool Main_obj::exes;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_46_main)
HXDLIN(  46)		 ::openfl::display::MovieClip _hx_tmp = ::openfl::Lib_obj::get_current();
HXDLIN(  46)		_hx_tmp->addChild( ::Main_obj::__alloc( HX_CTX ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(initialState,"initialState");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(framerate,"framerate");
	HX_MARK_MEMBER_NAME(skipSplash,"skipSplash");
	HX_MARK_MEMBER_NAME(startFullscreen,"startFullscreen");
	HX_MARK_MEMBER_NAME(childs,"childs");
	HX_MARK_MEMBER_NAME(chartWin,"chartWin");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(initialState,"initialState");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(framerate,"framerate");
	HX_VISIT_MEMBER_NAME(skipSplash,"skipSplash");
	HX_VISIT_MEMBER_NAME(startFullscreen,"startFullscreen");
	HX_VISIT_MEMBER_NAME(childs,"childs");
	HX_VISIT_MEMBER_NAME(chartWin,"chartWin");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return ::hx::Val( zoom ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"childs") ) { return ::hx::Val( childs ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"chartWin") ) { return ::hx::Val( chartWin ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return ::hx::Val( gameWidth ); }
		if (HX_FIELD_EQ(inName,"framerate") ) { return ::hx::Val( framerate ); }
		if (HX_FIELD_EQ(inName,"setupGame") ) { return ::hx::Val( setupGame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return ::hx::Val( gameHeight ); }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { return ::hx::Val( skipSplash ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { return ::hx::Val( initialState ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { return ::hx::Val( startFullscreen ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exes") ) { outValue = ( exes ); return true; }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { outValue = ( fpsVar ); return true; }
		if (HX_FIELD_EQ(inName,"modVer") ) { outValue = ( modVer ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checksong") ) { outValue = ( checksong ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkpointTime") ) { outValue = ( checkpointTime ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkpointActive") ) { outValue = ( checkpointActive ); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"childs") ) { childs=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"chartWin") ) { chartWin=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipSplash") ) { skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"initialState") ) { initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startFullscreen") ) { startFullscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exes") ) { exes=ioValue.Cast< bool >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { fpsVar=ioValue.Cast<  ::openfl::display::FPS >(); return true; }
		if (HX_FIELD_EQ(inName,"modVer") ) { modVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checksong") ) { checksong=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkpointTime") ) { checkpointTime=ioValue.Cast< Float >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkpointActive") ) { checkpointActive=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gameWidth",b4,a4,7d,ff));
	outFields->push(HX_("gameHeight",79,f1,c1,44));
	outFields->push(HX_("initialState",ed,76,1b,48));
	outFields->push(HX_("zoom",13,a3,f8,50));
	outFields->push(HX_("framerate",8d,e5,4b,4e));
	outFields->push(HX_("skipSplash",46,75,9c,27));
	outFields->push(HX_("startFullscreen",3d,c1,ee,2d));
	outFields->push(HX_("childs",57,bf,ba,bc));
	outFields->push(HX_("chartWin",de,a1,75,bc));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Main_obj,gameWidth),HX_("gameWidth",b4,a4,7d,ff)},
	{::hx::fsInt,(int)offsetof(Main_obj,gameHeight),HX_("gameHeight",79,f1,c1,44)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(Main_obj,initialState),HX_("initialState",ed,76,1b,48)},
	{::hx::fsFloat,(int)offsetof(Main_obj,zoom),HX_("zoom",13,a3,f8,50)},
	{::hx::fsInt,(int)offsetof(Main_obj,framerate),HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(int)offsetof(Main_obj,skipSplash),HX_("skipSplash",46,75,9c,27)},
	{::hx::fsBool,(int)offsetof(Main_obj,startFullscreen),HX_("startFullscreen",3d,c1,ee,2d)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Main_obj,childs),HX_("childs",57,bf,ba,bc)},
	{::hx::fsObject /*  ::lime::ui::Window */ ,(int)offsetof(Main_obj,chartWin),HX_("chartWin",de,a1,75,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::FPS */ ,(void *) &Main_obj::fpsVar,HX_("fpsVar",7e,e6,8c,91)},
	{::hx::fsString,(void *) &Main_obj::modVer,HX_("modVer",c1,a8,bb,c0)},
	{::hx::fsBool,(void *) &Main_obj::checkpointActive,HX_("checkpointActive",6e,92,8c,cd)},
	{::hx::fsFloat,(void *) &Main_obj::checkpointTime,HX_("checkpointTime",b5,22,42,e7)},
	{::hx::fsString,(void *) &Main_obj::checksong,HX_("checksong",9d,c0,5e,b5)},
	{::hx::fsBool,(void *) &Main_obj::exes,HX_("exes",a1,f3,1d,43)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("gameWidth",b4,a4,7d,ff),
	HX_("gameHeight",79,f1,c1,44),
	HX_("initialState",ed,76,1b,48),
	HX_("zoom",13,a3,f8,50),
	HX_("framerate",8d,e5,4b,4e),
	HX_("skipSplash",46,75,9c,27),
	HX_("startFullscreen",3d,c1,ee,2d),
	HX_("childs",57,bf,ba,bc),
	HX_("chartWin",de,a1,75,bc),
	HX_("init",10,3b,bb,45),
	HX_("setupGame",0f,51,ed,9e),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
	HX_MARK_MEMBER_NAME(Main_obj::modVer,"modVer");
	HX_MARK_MEMBER_NAME(Main_obj::checkpointActive,"checkpointActive");
	HX_MARK_MEMBER_NAME(Main_obj::checkpointTime,"checkpointTime");
	HX_MARK_MEMBER_NAME(Main_obj::checksong,"checksong");
	HX_MARK_MEMBER_NAME(Main_obj::exes,"exes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
	HX_VISIT_MEMBER_NAME(Main_obj::modVer,"modVer");
	HX_VISIT_MEMBER_NAME(Main_obj::checkpointActive,"checkpointActive");
	HX_VISIT_MEMBER_NAME(Main_obj::checkpointTime,"checkpointTime");
	HX_VISIT_MEMBER_NAME(Main_obj::checksong,"checksong");
	HX_VISIT_MEMBER_NAME(Main_obj::exes,"exes");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("fpsVar",7e,e6,8c,91),
	HX_("modVer",c1,a8,bb,c0),
	HX_("checkpointActive",6e,92,8c,cd),
	HX_("checkpointTime",b5,22,42,e7),
	HX_("checksong",9d,c0,5e,b5),
	HX_("exes",a1,f3,1d,43),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_36_boot)
HXDLIN(  36)		modVer = HX_("0.9.2",7f,11,cf,c1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_38_boot)
HXDLIN(  38)		checkpointActive = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_39_boot)
HXDLIN(  39)		checkpointTime = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_40_boot)
HXDLIN(  40)		checksong = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_41_boot)
HXDLIN(  41)		exes = false;
            	}
}

