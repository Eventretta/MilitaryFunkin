#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMBitmap
#include <openfl/display/_internal/DOMBitmap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d34f8755a1b4262c_20_clear,"openfl.display._internal.DOMBitmap","clear",0xbe3441f4,"openfl.display._internal.DOMBitmap.clear","openfl/display/_internal/DOMBitmap.hx",20,0xcb448c4c)
HX_LOCAL_STACK_FRAME(_hx_pos_d34f8755a1b4262c_44_render,"openfl.display._internal.DOMBitmap","render",0xad06f50f,"openfl.display._internal.DOMBitmap.render","openfl/display/_internal/DOMBitmap.hx",44,0xcb448c4c)
HX_LOCAL_STACK_FRAME(_hx_pos_d34f8755a1b4262c_70_renderCanvas,"openfl.display._internal.DOMBitmap","renderCanvas",0x9cc57347,"openfl.display._internal.DOMBitmap.renderCanvas","openfl/display/_internal/DOMBitmap.hx",70,0xcb448c4c)
HX_LOCAL_STACK_FRAME(_hx_pos_d34f8755a1b4262c_112_renderDrawable,"openfl.display._internal.DOMBitmap","renderDrawable",0xcc53c3cd,"openfl.display._internal.DOMBitmap.renderDrawable","openfl/display/_internal/DOMBitmap.hx",112,0xcb448c4c)
HX_LOCAL_STACK_FRAME(_hx_pos_d34f8755a1b4262c_133_renderDrawableClear,"openfl.display._internal.DOMBitmap","renderDrawableClear",0x10db3680,"openfl.display._internal.DOMBitmap.renderDrawableClear","openfl/display/_internal/DOMBitmap.hx",133,0xcb448c4c)
HX_LOCAL_STACK_FRAME(_hx_pos_d34f8755a1b4262c_137_renderImage,"openfl.display._internal.DOMBitmap","renderImage",0x1c91e3cc,"openfl.display._internal.DOMBitmap.renderImage","openfl/display/_internal/DOMBitmap.hx",137,0xcb448c4c)
HX_LOCAL_STACK_FRAME(_hx_pos_d34f8755a1b4262c_17_boot,"openfl.display._internal.DOMBitmap","boot",0x8e8cfdab,"openfl.display._internal.DOMBitmap.boot","openfl/display/_internal/DOMBitmap.hx",17,0xcb448c4c)
namespace openfl{
namespace display{
namespace _internal{

void DOMBitmap_obj::__construct() { }

Dynamic DOMBitmap_obj::__CreateEmpty() { return new DOMBitmap_obj; }

void *DOMBitmap_obj::_hx_vtable = 0;

Dynamic DOMBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMBitmap_obj > _hx_result = new DOMBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72dce387;
}

void DOMBitmap_obj::clear( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d34f8755a1b4262c_20_clear)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,clear,(void))

void DOMBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d34f8755a1b4262c_44_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,render,(void))

void DOMBitmap_obj::renderCanvas( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d34f8755a1b4262c_70_renderCanvas)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderCanvas,(void))

void DOMBitmap_obj::renderDrawable( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d34f8755a1b4262c_112_renderDrawable)
HXLINE( 113)		renderer->_hx___updateCacheBitmap(bitmap,false);
HXLINE( 115)		bool _hx_tmp;
HXDLIN( 115)		if (::hx::IsNotNull( bitmap->_hx___cacheBitmap )) {
HXLINE( 115)			_hx_tmp = !(bitmap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 115)			_hx_tmp = false;
            		}
HXDLIN( 115)		if (_hx_tmp) {
HXLINE( 117)			renderer->_hx___renderDrawableClear(bitmap);
HXLINE( 118)			bitmap->_hx___cacheBitmap->stage = bitmap->stage;
            		}
HXLINE( 128)		renderer->_hx___renderEvent(bitmap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderDrawable,(void))

void DOMBitmap_obj::renderDrawableClear( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d34f8755a1b4262c_133_renderDrawableClear)
HXDLIN( 133)		::openfl::display::_internal::DOMBitmap_obj::clear(bitmap,renderer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderDrawableClear,(void))

void DOMBitmap_obj::renderImage( ::openfl::display::Bitmap bitmap, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d34f8755a1b4262c_137_renderImage)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMBitmap_obj,renderImage,(void))


DOMBitmap_obj::DOMBitmap_obj()
{
}

bool DOMBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderImage") ) { outValue = renderImage_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderCanvas") ) { outValue = renderCanvas_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMBitmap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMBitmap_obj::__mClass;

static ::String DOMBitmap_obj_sStaticFields[] = {
	HX_("clear",8d,71,5b,48),
	HX_("render",56,6b,29,05),
	HX_("renderCanvas",ce,58,98,27),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	HX_("renderImage",25,4c,1a,89),
	::String(null())
};

void DOMBitmap_obj::__register()
{
	DOMBitmap_obj _hx_dummy;
	DOMBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMBitmap",95,59,e7,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMBitmap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DOMBitmap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d34f8755a1b4262c_17_boot)
HXDLIN(  17)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
