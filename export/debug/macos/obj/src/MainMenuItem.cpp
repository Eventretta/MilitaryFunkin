#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MainMenuItem
#include <MainMenuItem.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dfd473456db38c21_5_new,"MainMenuItem","new",0x3fda763d,"MainMenuItem.new","MainMenuItem.hx",5,0x844ddfd3)

void MainMenuItem_obj::__construct(::Array< ::String > optionShit,Float scale){
            	HX_GC_STACKFRAME(&_hx_pos_dfd473456db38c21_5_new)
HXLINE(   7)		this->pushedThing = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  12)		int _g = 0;
HXDLIN(  12)		int _g1 = optionShit->length;
HXDLIN(  12)		while((_g < _g1)){
HXLINE(  12)			_g = (_g + 1);
HXDLIN(  12)			int i = (_g - 1);
HXLINE(  14)			Float offset = (( (Float)(108) ) - ((::Math_obj::max(( (Float)(optionShit->length) ),( (Float)(4) )) - ( (Float)(4) )) * ( (Float)(80) )));
HXLINE(  15)			 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,((i * 140) + offset),null());
HXLINE(  16)			menuItem->scale->set_x(scale);
HXLINE(  17)			menuItem->scale->set_y(scale);
HXLINE(  18)			::String key = (HX_("mainmenu/menu_",a9,7b,4b,27) + optionShit->__get(i));
HXDLIN(  18)			::String library = null();
HXDLIN(  18)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  18)			bool xmlExists = false;
HXDLIN(  18)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  18)				xmlExists = true;
            			}
HXDLIN(  18)			 ::Dynamic _hx_tmp;
HXDLIN(  18)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  18)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  18)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  18)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  18)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  18)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  18)			::String _hx_tmp1;
HXDLIN(  18)			if (xmlExists) {
HXLINE(  18)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  18)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  18)			menuItem->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  19)			menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),(optionShit->__get(i) + HX_(" basic",8e,b6,25,79)),24,null(),null(),null());
HXLINE(  20)			menuItem->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(optionShit->__get(i) + HX_(" white",89,d6,28,95)),24,null(),null(),null());
HXLINE(  21)			menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  22)			menuItem->ID = i;
HXLINE(  23)			menuItem->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  24)			menuItem->set_x((menuItem->x + 190));
HXLINE(  25)			this->pushedThing->push(menuItem);
HXLINE(  26)			Float scr = (( (Float)((optionShit->length - 4)) ) * ((Float)0.135));
HXLINE(  27)			if ((optionShit->length < 6)) {
HXLINE(  27)				scr = ( (Float)(0) );
            			}
HXLINE(  28)			menuItem->scrollFactor->set(0,scr);
HXLINE(  29)			menuItem->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  31)			menuItem->updateHitbox();
            		}
            	}

Dynamic MainMenuItem_obj::__CreateEmpty() { return new MainMenuItem_obj; }

void *MainMenuItem_obj::_hx_vtable = 0;

Dynamic MainMenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuItem_obj > _hx_result = new MainMenuItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuItem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2be2e68b;
}


::hx::ObjectPtr< MainMenuItem_obj > MainMenuItem_obj::__new(::Array< ::String > optionShit,Float scale) {
	::hx::ObjectPtr< MainMenuItem_obj > __this = new MainMenuItem_obj();
	__this->__construct(optionShit,scale);
	return __this;
}

::hx::ObjectPtr< MainMenuItem_obj > MainMenuItem_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::String > optionShit,Float scale) {
	MainMenuItem_obj *__this = (MainMenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuItem_obj), true, "MainMenuItem"));
	*(void **)__this = MainMenuItem_obj::_hx_vtable;
	__this->__construct(optionShit,scale);
	return __this;
}

MainMenuItem_obj::MainMenuItem_obj()
{
}

void MainMenuItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuItem);
	HX_MARK_MEMBER_NAME(pushedThing,"pushedThing");
	HX_MARK_END_CLASS();
}

void MainMenuItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pushedThing,"pushedThing");
}

::hx::Val MainMenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"pushedThing") ) { return ::hx::Val( pushedThing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainMenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"pushedThing") ) { pushedThing=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainMenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pushedThing",75,24,a7,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MainMenuItem_obj,pushedThing),HX_("pushedThing",75,24,a7,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainMenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MainMenuItem_obj_sMemberFields[] = {
	HX_("pushedThing",75,24,a7,48),
	::String(null()) };

::hx::Class MainMenuItem_obj::__mClass;

void MainMenuItem_obj::__register()
{
	MainMenuItem_obj _hx_dummy;
	MainMenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuItem",cb,93,01,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

