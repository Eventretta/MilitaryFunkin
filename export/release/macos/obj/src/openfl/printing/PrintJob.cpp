#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_printing_PrintJob
#include <openfl/printing/PrintJob.h>
#endif
#ifndef INCLUDED_openfl_printing_PrintJobOptions
#include <openfl/printing/PrintJobOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3df9df7041a8ff06_180_new,"openfl.printing.PrintJob","new",0x7c74a8bd,"openfl.printing.PrintJob.new","openfl/printing/PrintJob.hx",180,0xa8c85173)
HX_LOCAL_STACK_FRAME(_hx_pos_3df9df7041a8ff06_285_addPage,"openfl.printing.PrintJob","addPage",0xac3fe7ed,"openfl.printing.PrintJob.addPage","openfl/printing/PrintJob.hx",285,0xa8c85173)
HX_LOCAL_STACK_FRAME(_hx_pos_3df9df7041a8ff06_323_send,"openfl.printing.PrintJob","send",0x6ced064b,"openfl.printing.PrintJob.send","openfl/printing/PrintJob.hx",323,0xa8c85173)
HX_LOCAL_STACK_FRAME(_hx_pos_3df9df7041a8ff06_426_start,"openfl.printing.PrintJob","start",0xec58ddff,"openfl.printing.PrintJob.start","openfl/printing/PrintJob.hx",426,0xa8c85173)
HX_LOCAL_STACK_FRAME(_hx_pos_3df9df7041a8ff06_74_boot,"openfl.printing.PrintJob","boot",0x61b7fd35,"openfl.printing.PrintJob.boot","openfl/printing/PrintJob.hx",74,0xa8c85173)
namespace openfl{
namespace printing{

void PrintJob_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3df9df7041a8ff06_180_new)
            	}

Dynamic PrintJob_obj::__CreateEmpty() { return new PrintJob_obj; }

void *PrintJob_obj::_hx_vtable = 0;

Dynamic PrintJob_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PrintJob_obj > _hx_result = new PrintJob_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PrintJob_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78a694d5;
}

void PrintJob_obj::addPage( ::openfl::display::Sprite sprite, ::openfl::geom::Rectangle printArea, ::openfl::printing::PrintJobOptions options,::hx::Null< int >  __o_frameNum){
            		int frameNum = __o_frameNum.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_3df9df7041a8ff06_285_addPage)
HXLINE( 286)		if (!(this->_hx___started)) {
HXLINE( 286)			return;
            		}
HXLINE( 288)		if (::hx::IsNull( printArea )) {
HXLINE( 290)			printArea = sprite->getBounds(sprite);
            		}
HXLINE( 293)		 ::openfl::display::BitmapData bitmapData =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::ceil(printArea->width),::Math_obj::ceil(printArea->height),true,0);
HXLINE( 294)		bitmapData->draw(sprite,null(),null(),null(),null(),null());
HXLINE( 296)		this->_hx___bitmapData->push(bitmapData);
            	}


HX_DEFINE_DYNAMIC_FUNC4(PrintJob_obj,addPage,(void))

void PrintJob_obj::send(){
            	HX_STACKFRAME(&_hx_pos_3df9df7041a8ff06_323_send)
HXDLIN( 323)		if (!(this->_hx___started)) {
HXDLIN( 323)			return;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PrintJob_obj,send,(void))

bool PrintJob_obj::start(){
            	HX_STACKFRAME(&_hx_pos_3df9df7041a8ff06_426_start)
HXLINE( 427)		if (::openfl::printing::PrintJob_obj::isSupported) {
HXLINE( 429)			this->_hx___started = true;
HXLINE( 430)			this->_hx___bitmapData = ::Array_obj< ::Dynamic>::__new();
HXLINE( 432)			return true;
            		}
HXLINE( 435)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(PrintJob_obj,start,return )

bool PrintJob_obj::isSupported;


::hx::ObjectPtr< PrintJob_obj > PrintJob_obj::__new() {
	::hx::ObjectPtr< PrintJob_obj > __this = new PrintJob_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PrintJob_obj > PrintJob_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PrintJob_obj *__this = (PrintJob_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PrintJob_obj), true, "openfl.printing.PrintJob"));
	*(void **)__this = PrintJob_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PrintJob_obj::PrintJob_obj()
{
}

void PrintJob_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PrintJob);
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(pageHeight,"pageHeight");
	HX_MARK_MEMBER_NAME(pageWidth,"pageWidth");
	HX_MARK_MEMBER_NAME(paperHeight,"paperHeight");
	HX_MARK_MEMBER_NAME(paperWidth,"paperWidth");
	HX_MARK_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(_hx___started,"__started");
	HX_MARK_END_CLASS();
}

void PrintJob_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(pageHeight,"pageHeight");
	HX_VISIT_MEMBER_NAME(pageWidth,"pageWidth");
	HX_VISIT_MEMBER_NAME(paperHeight,"paperHeight");
	HX_VISIT_MEMBER_NAME(paperWidth,"paperWidth");
	HX_VISIT_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___started,"__started");
}

::hx::Val PrintJob_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPage") ) { return ::hx::Val( addPage_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageWidth") ) { return ::hx::Val( pageWidth ); }
		if (HX_FIELD_EQ(inName,"__started") ) { return ::hx::Val( _hx___started ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pageHeight") ) { return ::hx::Val( pageHeight ); }
		if (HX_FIELD_EQ(inName,"paperWidth") ) { return ::hx::Val( paperWidth ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return ::hx::Val( orientation ); }
		if (HX_FIELD_EQ(inName,"paperHeight") ) { return ::hx::Val( paperHeight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return ::hx::Val( _hx___bitmapData ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PrintJob_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = ( isSupported ); return true; }
	}
	return false;
}

::hx::Val PrintJob_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"pageWidth") ) { pageWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__started") ) { _hx___started=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pageHeight") ) { pageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paperWidth") ) { paperWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paperHeight") ) { paperHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { _hx___bitmapData=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PrintJob_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void PrintJob_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("orientation",d0,ee,fe,fd));
	outFields->push(HX_("pageHeight",96,7b,31,b0));
	outFields->push(HX_("pageWidth",37,8d,79,70));
	outFields->push(HX_("paperHeight",93,ac,7a,d3));
	outFields->push(HX_("paperWidth",da,4a,56,6e));
	outFields->push(HX_("__bitmapData",d9,30,54,6c));
	outFields->push(HX_("__started",21,7a,69,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PrintJob_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PrintJob_obj,orientation),HX_("orientation",d0,ee,fe,fd)},
	{::hx::fsInt,(int)offsetof(PrintJob_obj,pageHeight),HX_("pageHeight",96,7b,31,b0)},
	{::hx::fsInt,(int)offsetof(PrintJob_obj,pageWidth),HX_("pageWidth",37,8d,79,70)},
	{::hx::fsInt,(int)offsetof(PrintJob_obj,paperHeight),HX_("paperHeight",93,ac,7a,d3)},
	{::hx::fsInt,(int)offsetof(PrintJob_obj,paperWidth),HX_("paperWidth",da,4a,56,6e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PrintJob_obj,_hx___bitmapData),HX_("__bitmapData",d9,30,54,6c)},
	{::hx::fsBool,(int)offsetof(PrintJob_obj,_hx___started),HX_("__started",21,7a,69,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PrintJob_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &PrintJob_obj::isSupported,HX_("isSupported",e4,7c,8a,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PrintJob_obj_sMemberFields[] = {
	HX_("orientation",d0,ee,fe,fd),
	HX_("pageHeight",96,7b,31,b0),
	HX_("pageWidth",37,8d,79,70),
	HX_("paperHeight",93,ac,7a,d3),
	HX_("paperWidth",da,4a,56,6e),
	HX_("__bitmapData",d9,30,54,6c),
	HX_("__started",21,7a,69,b6),
	HX_("addPage",10,1d,8f,86),
	HX_("send",48,8d,50,4c),
	HX_("start",62,74,0b,84),
	::String(null()) };

static void PrintJob_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintJob_obj::isSupported,"isSupported");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PrintJob_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintJob_obj::isSupported,"isSupported");
};

#endif

::hx::Class PrintJob_obj::__mClass;

static ::String PrintJob_obj_sStaticFields[] = {
	HX_("isSupported",e4,7c,8a,f3),
	::String(null())
};

void PrintJob_obj::__register()
{
	PrintJob_obj _hx_dummy;
	PrintJob_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.printing.PrintJob",4b,86,f0,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PrintJob_obj::__GetStatic;
	__mClass->mSetStaticField = &PrintJob_obj::__SetStatic;
	__mClass->mMarkFunc = PrintJob_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PrintJob_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PrintJob_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PrintJob_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PrintJob_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PrintJob_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PrintJob_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PrintJob_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3df9df7041a8ff06_74_boot)
HXDLIN(  74)		isSupported = false;
            	}
}

} // end namespace openfl
} // end namespace printing
