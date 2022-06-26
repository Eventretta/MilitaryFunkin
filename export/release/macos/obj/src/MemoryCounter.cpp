#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MemoryCounter
#include <MemoryCounter.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3cfedaa16c7e66e_13_new,"MemoryCounter","new",0x0784584d,"MemoryCounter.new","MemoryCounter.hx",13,0xa431efc3)
HX_LOCAL_STACK_FRAME(_hx_pos_b3cfedaa16c7e66e_33_onEnter,"MemoryCounter","onEnter",0xf43b8de6,"MemoryCounter.onEnter","MemoryCounter.hx",33,0xa431efc3)

void MemoryCounter_obj::__construct(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol){
            		Float inX = __o_inX.Default(((Float)10.0));
            		Float inY = __o_inY.Default(((Float)10.0));
            		int inCol = __o_inCol.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_b3cfedaa16c7e66e_13_new)
HXLINE(  16)		this->memPeak = ((Float)0);
HXLINE(  20)		super::__construct();
HXLINE(  22)		this->set_x(inX);
HXLINE(  23)		this->set_y(inY);
HXLINE(  24)		this->set_selectable(false);
HXLINE(  25)		this->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("VCR OSD Mono",be,44,e4,b8),12,inCol,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  27)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnter_dyn(),null(),null(),null());
HXLINE(  28)		this->set_width(( (Float)(150) ));
HXLINE(  29)		this->set_height(( (Float)(70) ));
            	}

Dynamic MemoryCounter_obj::__CreateEmpty() { return new MemoryCounter_obj; }

void *MemoryCounter_obj::_hx_vtable = 0;

Dynamic MemoryCounter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MemoryCounter_obj > _hx_result = new MemoryCounter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MemoryCounter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5624736f) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x5624736f;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

void MemoryCounter_obj::onEnter( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_b3cfedaa16c7e66e_33_onEnter)
HXLINE(  34)		Float mem = (( (Float)(::Math_obj::round((((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ( (Float)(1024) )) / ( (Float)(1024) )) * ( (Float)(100) )))) ) / ( (Float)(100) ));
HXLINE(  35)		if ((mem > this->memPeak)) {
HXLINE(  35)			this->memPeak = mem;
            		}
HXLINE(  37)		if (this->get_visible()) {
HXLINE(  39)			this->set_text((((((((HX_("\nMEM: ",91,9f,42,83) + mem) + HX_(" MB\nMEM peak: ",85,3c,cd,94)) + this->memPeak) + HX_(" MB\nPysch ",a6,b2,1b,cf)) + ::MainMenuState_obj::psychEngineVersion) + HX_("\nMilitary ",49,f6,ac,fc)) + ::Main_obj::modVer));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MemoryCounter_obj,onEnter,(void))


::hx::ObjectPtr< MemoryCounter_obj > MemoryCounter_obj::__new(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol) {
	::hx::ObjectPtr< MemoryCounter_obj > __this = new MemoryCounter_obj();
	__this->__construct(__o_inX,__o_inY,__o_inCol);
	return __this;
}

::hx::ObjectPtr< MemoryCounter_obj > MemoryCounter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol) {
	MemoryCounter_obj *__this = (MemoryCounter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MemoryCounter_obj), true, "MemoryCounter"));
	*(void **)__this = MemoryCounter_obj::_hx_vtable;
	__this->__construct(__o_inX,__o_inY,__o_inCol);
	return __this;
}

MemoryCounter_obj::MemoryCounter_obj()
{
}

void MemoryCounter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MemoryCounter);
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(memPeak,"memPeak");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MemoryCounter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(memPeak,"memPeak");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MemoryCounter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return ::hx::Val( times ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { return ::hx::Val( memPeak ); }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return ::hx::Val( onEnter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MemoryCounter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { memPeak=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MemoryCounter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("times",c6,bf,35,10));
	outFields->push(HX_("memPeak",d4,46,8a,0e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MemoryCounter_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(MemoryCounter_obj,times),HX_("times",c6,bf,35,10)},
	{::hx::fsFloat,(int)offsetof(MemoryCounter_obj,memPeak),HX_("memPeak",d4,46,8a,0e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MemoryCounter_obj_sStaticStorageInfo = 0;
#endif

static ::String MemoryCounter_obj_sMemberFields[] = {
	HX_("times",c6,bf,35,10),
	HX_("memPeak",d4,46,8a,0e),
	HX_("onEnter",79,0b,c4,06),
	::String(null()) };

::hx::Class MemoryCounter_obj::__mClass;

void MemoryCounter_obj::__register()
{
	MemoryCounter_obj _hx_dummy;
	MemoryCounter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MemoryCounter",db,2d,6d,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MemoryCounter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MemoryCounter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MemoryCounter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MemoryCounter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

