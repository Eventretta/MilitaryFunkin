#include <hxcpp.h>

#ifndef INCLUDED_openfl_printing__PrintJobOrientation_PrintJobOrientation_Impl_
#include <openfl/printing/_PrintJobOrientation/PrintJobOrientation_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_aa0bc7102f87a915_28_fromString,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_","fromString",0x04e1633b,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_.fromString","openfl/printing/PrintJobOrientation.hx",28,0xcd513d79)
HX_LOCAL_STACK_FRAME(_hx_pos_aa0bc7102f87a915_38_toString,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_","toString",0xf3d1ee0c,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_.toString","openfl/printing/PrintJobOrientation.hx",38,0xcd513d79)
HX_LOCAL_STACK_FRAME(_hx_pos_aa0bc7102f87a915_17_boot,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_","boot",0x468c7192,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_.boot","openfl/printing/PrintJobOrientation.hx",17,0xcd513d79)
HX_LOCAL_STACK_FRAME(_hx_pos_aa0bc7102f87a915_24_boot,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_","boot",0x468c7192,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_.boot","openfl/printing/PrintJobOrientation.hx",24,0xcd513d79)
namespace openfl{
namespace printing{
namespace _PrintJobOrientation{

void PrintJobOrientation_Impl__obj::__construct() { }

Dynamic PrintJobOrientation_Impl__obj::__CreateEmpty() { return new PrintJobOrientation_Impl__obj; }

void *PrintJobOrientation_Impl__obj::_hx_vtable = 0;

Dynamic PrintJobOrientation_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PrintJobOrientation_Impl__obj > _hx_result = new PrintJobOrientation_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PrintJobOrientation_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5df95e72;
}

 ::Dynamic PrintJobOrientation_Impl__obj::LANDSCAPE;

 ::Dynamic PrintJobOrientation_Impl__obj::PORTRAIT;

 ::Dynamic PrintJobOrientation_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_aa0bc7102f87a915_28_fromString)
HXDLIN(  28)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("landscape",3b,78,ad,fc)) ){
HXLINE(  30)			return 0;
HXDLIN(  30)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("portrait",5b,21,af,b8)) ){
HXLINE(  31)			return 1;
HXDLIN(  31)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  32)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  28)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PrintJobOrientation_Impl__obj,fromString,return )

::String PrintJobOrientation_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_aa0bc7102f87a915_38_toString)
HXDLIN(  38)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  40)			return HX_("landscape",3b,78,ad,fc);
HXDLIN(  40)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  41)			return HX_("portrait",5b,21,af,b8);
HXDLIN(  41)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  42)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  38)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PrintJobOrientation_Impl__obj,toString,return )


PrintJobOrientation_Impl__obj::PrintJobOrientation_Impl__obj()
{
}

bool PrintJobOrientation_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PrintJobOrientation_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PrintJobOrientation_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &PrintJobOrientation_Impl__obj::LANDSCAPE,HX_("LANDSCAPE",1b,e8,05,f8)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &PrintJobOrientation_Impl__obj::PORTRAIT,HX_("PORTRAIT",5b,b1,34,12)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PrintJobOrientation_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintJobOrientation_Impl__obj::LANDSCAPE,"LANDSCAPE");
	HX_MARK_MEMBER_NAME(PrintJobOrientation_Impl__obj::PORTRAIT,"PORTRAIT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PrintJobOrientation_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintJobOrientation_Impl__obj::LANDSCAPE,"LANDSCAPE");
	HX_VISIT_MEMBER_NAME(PrintJobOrientation_Impl__obj::PORTRAIT,"PORTRAIT");
};

#endif

::hx::Class PrintJobOrientation_Impl__obj::__mClass;

static ::String PrintJobOrientation_Impl__obj_sStaticFields[] = {
	HX_("LANDSCAPE",1b,e8,05,f8),
	HX_("PORTRAIT",5b,b1,34,12),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void PrintJobOrientation_Impl__obj::__register()
{
	PrintJobOrientation_Impl__obj _hx_dummy;
	PrintJobOrientation_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_",0e,6f,ca,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PrintJobOrientation_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PrintJobOrientation_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PrintJobOrientation_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PrintJobOrientation_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PrintJobOrientation_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PrintJobOrientation_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PrintJobOrientation_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PrintJobOrientation_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aa0bc7102f87a915_17_boot)
HXDLIN(  17)		LANDSCAPE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_aa0bc7102f87a915_24_boot)
HXDLIN(  24)		PORTRAIT = 1;
            	}
}

} // end namespace openfl
} // end namespace printing
} // end namespace _PrintJobOrientation
