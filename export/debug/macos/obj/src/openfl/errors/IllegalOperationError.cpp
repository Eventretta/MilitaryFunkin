#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4cf27cf07614edf1_36_new,"openfl.errors.IllegalOperationError","new",0x7489b4a4,"openfl.errors.IllegalOperationError.new","openfl/errors/IllegalOperationError.hx",36,0x72707d6c)
namespace openfl{
namespace errors{

void IllegalOperationError_obj::__construct(::String __o_message){
            		::String message = __o_message;
            		if (::hx::IsNull(__o_message)) message = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_4cf27cf07614edf1_36_new)
HXLINE(  37)		super::__construct(message,0);
HXLINE(  39)		this->name = HX_("IllegalOperationError",17,ce,c0,9e);
            	}

Dynamic IllegalOperationError_obj::__CreateEmpty() { return new IllegalOperationError_obj; }

void *IllegalOperationError_obj::_hx_vtable = 0;

Dynamic IllegalOperationError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IllegalOperationError_obj > _hx_result = new IllegalOperationError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IllegalOperationError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3495c9c5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3495c9c5;
	} else {
		return inClassId==(int)0x5e851dfc;
	}
}


::hx::ObjectPtr< IllegalOperationError_obj > IllegalOperationError_obj::__new(::String __o_message) {
	::hx::ObjectPtr< IllegalOperationError_obj > __this = new IllegalOperationError_obj();
	__this->__construct(__o_message);
	return __this;
}

::hx::ObjectPtr< IllegalOperationError_obj > IllegalOperationError_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_message) {
	IllegalOperationError_obj *__this = (IllegalOperationError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IllegalOperationError_obj), true, "openfl.errors.IllegalOperationError"));
	*(void **)__this = IllegalOperationError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

IllegalOperationError_obj::IllegalOperationError_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *IllegalOperationError_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *IllegalOperationError_obj_sStaticStorageInfo = 0;
#endif

::hx::Class IllegalOperationError_obj::__mClass;

void IllegalOperationError_obj::__register()
{
	IllegalOperationError_obj _hx_dummy;
	IllegalOperationError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.errors.IllegalOperationError",b2,d2,29,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< IllegalOperationError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IllegalOperationError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IllegalOperationError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
