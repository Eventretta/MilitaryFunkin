#include <hxcpp.h>

#ifndef INCLUDED_Mathematics
#include <Mathematics.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8d93f68488acfb7d_5_percentual,"Mathematics","percentual",0x3ea3a273,"Mathematics.percentual","Mathematics.hx",5,0x9b780a88)

void Mathematics_obj::__construct() { }

Dynamic Mathematics_obj::__CreateEmpty() { return new Mathematics_obj; }

void *Mathematics_obj::_hx_vtable = 0;

Dynamic Mathematics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mathematics_obj > _hx_result = new Mathematics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mathematics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47b41b36;
}

Float Mathematics_obj::percentual(Float num,Float perc){
            	HX_STACKFRAME(&_hx_pos_8d93f68488acfb7d_5_percentual)
HXLINE(   6)		Float perc1 = ((num / ( (Float)(100) )) * perc);
HXLINE(   7)		return perc1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mathematics_obj,percentual,return )


Mathematics_obj::Mathematics_obj()
{
}

bool Mathematics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"percentual") ) { outValue = percentual_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Mathematics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Mathematics_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Mathematics_obj::__mClass;

static ::String Mathematics_obj_sStaticFields[] = {
	HX_("percentual",fb,ba,3b,ec),
	::String(null())
};

void Mathematics_obj::__register()
{
	Mathematics_obj _hx_dummy;
	Mathematics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Mathematics",f6,d5,b8,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mathematics_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Mathematics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Mathematics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mathematics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mathematics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

