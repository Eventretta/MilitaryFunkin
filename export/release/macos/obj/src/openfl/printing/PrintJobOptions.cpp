#include <hxcpp.h>

#ifndef INCLUDED_openfl_printing_PrintJobOptions
#include <openfl/printing/PrintJobOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f97e81a8b18c976_55_new,"openfl.printing.PrintJobOptions","new",0xc0b2cac5,"openfl.printing.PrintJobOptions.new","openfl/printing/PrintJobOptions.hx",55,0xb67d642b)
namespace openfl{
namespace printing{

void PrintJobOptions_obj::__construct(::hx::Null< bool >  __o_printAsBitmap){
            		bool printAsBitmap = __o_printAsBitmap.Default(false);
            	HX_STACKFRAME(&_hx_pos_1f97e81a8b18c976_55_new)
HXDLIN(  55)		this->printAsBitmap = printAsBitmap;
            	}

Dynamic PrintJobOptions_obj::__CreateEmpty() { return new PrintJobOptions_obj; }

void *PrintJobOptions_obj::_hx_vtable = 0;

Dynamic PrintJobOptions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PrintJobOptions_obj > _hx_result = new PrintJobOptions_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PrintJobOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x32538125;
}


PrintJobOptions_obj::PrintJobOptions_obj()
{
}

::hx::Val PrintJobOptions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"printAsBitmap") ) { return ::hx::Val( printAsBitmap ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PrintJobOptions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"printAsBitmap") ) { printAsBitmap=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PrintJobOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("printAsBitmap",ce,a3,a6,35));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PrintJobOptions_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(PrintJobOptions_obj,printAsBitmap),HX_("printAsBitmap",ce,a3,a6,35)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PrintJobOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String PrintJobOptions_obj_sMemberFields[] = {
	HX_("printAsBitmap",ce,a3,a6,35),
	::String(null()) };

::hx::Class PrintJobOptions_obj::__mClass;

void PrintJobOptions_obj::__register()
{
	PrintJobOptions_obj _hx_dummy;
	PrintJobOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.printing.PrintJobOptions",53,04,e3,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PrintJobOptions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PrintJobOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PrintJobOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PrintJobOptions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace printing
