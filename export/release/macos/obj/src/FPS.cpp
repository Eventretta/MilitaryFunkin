#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_FPS
#include <FPS.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_74708e26fcebdece_35_new,"FPS","new",0x44691d3b,"FPS.new","FPS.hx",35,0x4409a295)
HX_LOCAL_STACK_FRAME(_hx_pos_74708e26fcebdece_63___enterFrame,"FPS","__enterFrame",0xe7793eda,"FPS.__enterFrame","FPS.hx",63,0x4409a295)

void FPS_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color){
            		Float x = __o_x.Default(10);
            		Float y = __o_y.Default(10);
            		int color = __o_color.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_74708e26fcebdece_35_new)
HXLINE(  36)		super::__construct();
HXLINE(  38)		this->set_x(x);
HXLINE(  39)		this->set_y(y);
HXLINE(  41)		this->currentFPS = 0;
HXLINE(  42)		this->set_selectable(false);
HXLINE(  43)		this->mouseEnabled = false;
HXLINE(  44)		this->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("VCR OSD Mono",be,44,e4,b8),12,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  45)		this->set_text(HX_("FPS: ",af,da,2c,83));
HXLINE(  47)		this->cacheCount = 0;
HXLINE(  48)		this->currentTime = ( (Float)(0) );
HXLINE(  49)		this->times = ::Array_obj< Float >::__new(0);
            	}

Dynamic FPS_obj::__CreateEmpty() { return new FPS_obj; }

void *FPS_obj::_hx_vtable = 0;

Dynamic FPS_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPS_obj > _hx_result = new FPS_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FPS_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6b353933) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	} else {
		return inClassId==(int)0x7ed9a85d || inClassId==(int)0x7f0de750;
	}
}

void FPS_obj::_hx___enterFrame(int _tmp_deltaTime){
            	HX_STACKFRAME(&_hx_pos_74708e26fcebdece_63___enterFrame)
HXLINE(  64)		Float deltaTime = ( (Float)(_tmp_deltaTime) );
HXDLIN(  64)		 ::FPS _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  64)		_hx_tmp->currentTime = (_hx_tmp->currentTime + deltaTime);
HXLINE(  65)		this->times->push(this->currentTime);
HXLINE(  67)		while((this->times->__get(0) < (this->currentTime - ( (Float)(1000) )))){
HXLINE(  69)			this->times->shift();
            		}
HXLINE(  72)		int currentCount = this->times->length;
HXLINE(  73)		this->currentFPS = ::Math_obj::round((( (Float)((currentCount + this->cacheCount)) ) / ( (Float)(2) )));
HXLINE(  75)		if ((currentCount != this->cacheCount)) {
HXLINE(  77)			this->set_text((HX_("FPS: ",af,da,2c,83) + this->currentFPS));
            		}
HXLINE(  86)		this->cacheCount = currentCount;
            	}



::hx::ObjectPtr< FPS_obj > FPS_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	::hx::ObjectPtr< FPS_obj > __this = new FPS_obj();
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

::hx::ObjectPtr< FPS_obj > FPS_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	FPS_obj *__this = (FPS_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPS_obj), true, "FPS"));
	*(void **)__this = FPS_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

FPS_obj::FPS_obj()
{
}

void FPS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS);
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(cacheCount,"cacheCount");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	HX_MARK_MEMBER_NAME(times,"times");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(cacheCount,"cacheCount");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	HX_VISIT_MEMBER_NAME(times,"times");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FPS_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return ::hx::Val( times ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return ::hx::Val( currentFPS ); }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { return ::hx::Val( cacheCount ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FPS_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cacheCount") ) { cacheCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentFPS",30,71,28,c7));
	outFields->push(HX_("cacheCount",2d,ab,1b,8d));
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	outFields->push(HX_("times",c6,bf,35,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FPS_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FPS_obj,currentFPS),HX_("currentFPS",30,71,28,c7)},
	{::hx::fsInt,(int)offsetof(FPS_obj,cacheCount),HX_("cacheCount",2d,ab,1b,8d)},
	{::hx::fsFloat,(int)offsetof(FPS_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FPS_obj,times),HX_("times",c6,bf,35,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FPS_obj_sStaticStorageInfo = 0;
#endif

static ::String FPS_obj_sMemberFields[] = {
	HX_("currentFPS",30,71,28,c7),
	HX_("cacheCount",2d,ab,1b,8d),
	HX_("currentTime",e6,a4,8e,85),
	HX_("times",c6,bf,35,10),
	HX_("__enterFrame",15,7f,e3,3a),
	::String(null()) };

::hx::Class FPS_obj::__mClass;

void FPS_obj::__register()
{
	FPS_obj _hx_dummy;
	FPS_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FPS",c9,63,35,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPS_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPS_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPS_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPS_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
