#include <hxcpp.h>

#ifndef INCLUDED_FPS
#include <FPS.h>
#endif
#ifndef INCLUDED_LogoImage
#include <LogoImage.h>
#endif
#ifndef INCLUDED_Preloader
#include <Preloader.h>
#endif
#ifndef INCLUDED_flixel_system_FlxBasePreloader
#include <flixel/system/FlxBasePreloader.h>
#endif
#ifndef INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader
#include <flixel/system/_FlxBasePreloader/DefaultPreloader.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_312e3f7dfa8ca2c7_23_new,"Preloader","new",0x90324848,"Preloader.new","Preloader.hx",23,0xc73f5828)
HX_LOCAL_STACK_FRAME(_hx_pos_312e3f7dfa8ca2c7_30_create,"Preloader","create",0xecaed014,"Preloader.create","Preloader.hx",30,0xc73f5828)
HX_LOCAL_STACK_FRAME(_hx_pos_312e3f7dfa8ca2c7_47_update,"Preloader","update",0xf7a4ef21,"Preloader.update","Preloader.hx",47,0xc73f5828)

void Preloader_obj::__construct(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs){
            		Float MinDisplayTime = __o_MinDisplayTime.Default(3);
            	HX_STACKFRAME(&_hx_pos_312e3f7dfa8ca2c7_23_new)
HXDLIN(  23)		super::__construct(MinDisplayTime,AllowedURLs);
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2f28d986) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x2f28d986;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x451fddce) {
				return inClassId==(int)0x318ede3c || inClassId==(int)0x451fddce;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Preloader_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_312e3f7dfa8ca2c7_30_create)
HXLINE(  31)		this->_width = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  32)		this->_height = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  34)		this->ratio = (( (Float)(this->_width) ) / ( (Float)(2560) ));
HXLINE(  36)		this->logo =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  37)		 ::openfl::display::Sprite _hx_tmp = this->logo;
HXDLIN(  37)		_hx_tmp->addChild( ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::LogoImage_obj::__alloc( HX_CTX ,0,0,null(),null()),null(),null()));
HXLINE(  38)		this->addChild(this->logo);
HXLINE(  40)		this->addChild( ::FPS_obj::__alloc( HX_CTX ,10,3,16777215));
HXLINE(  43)		this->super::create();
            	}


void Preloader_obj::update(Float Percent){
            	HX_STACKFRAME(&_hx_pos_312e3f7dfa8ca2c7_47_update)
HXLINE(  48)		this->super::update(Percent);
HXLINE(  50)		::haxe::Log_obj::trace(((Percent * ( (Float)(100) )) + HX_("% Complete",34,30,6a,82)),::hx::SourceInfo(HX_("Preloader.hx",28,58,3f,c7),50,HX_("Preloader",56,c4,4e,24),HX_("update",09,86,05,87)));
            	}



::hx::ObjectPtr< Preloader_obj > Preloader_obj::__new(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs) {
	::hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct(__o_MinDisplayTime,AllowedURLs);
	return __this;
}

::hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs) {
	Preloader_obj *__this = (Preloader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct(__o_MinDisplayTime,AllowedURLs);
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(ratio,"ratio");
	 ::flixel::_hx_system::FlxBasePreloader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(ratio,"ratio");
	 ::flixel::_hx_system::FlxBasePreloader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Preloader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { return ::hx::Val( ratio ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Preloader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ratio") ) { ratio=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("ratio",0b,35,24,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(Preloader_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsFloat,(int)offsetof(Preloader_obj,ratio),HX_("ratio",0b,35,24,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_("logo",6b,9f,b7,47),
	HX_("ratio",0b,35,24,e4),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	Preloader_obj _hx_dummy;
	Preloader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Preloader",56,c4,4e,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

