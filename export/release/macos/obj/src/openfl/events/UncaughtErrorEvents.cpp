#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f614a07866ea6e55_51_new,"openfl.events.UncaughtErrorEvents","new",0xf17d0a07,"openfl.events.UncaughtErrorEvents.new","openfl/events/UncaughtErrorEvents.hx",51,0x17415d69)
namespace openfl{
namespace events{

void UncaughtErrorEvents_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f614a07866ea6e55_51_new)
HXDLIN(  51)		super::__construct(null());
            	}

Dynamic UncaughtErrorEvents_obj::__CreateEmpty() { return new UncaughtErrorEvents_obj; }

void *UncaughtErrorEvents_obj::_hx_vtable = 0;

Dynamic UncaughtErrorEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UncaughtErrorEvents_obj > _hx_result = new UncaughtErrorEvents_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UncaughtErrorEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x2f77f7df;
	}
}


::hx::ObjectPtr< UncaughtErrorEvents_obj > UncaughtErrorEvents_obj::__new() {
	::hx::ObjectPtr< UncaughtErrorEvents_obj > __this = new UncaughtErrorEvents_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< UncaughtErrorEvents_obj > UncaughtErrorEvents_obj::__alloc(::hx::Ctx *_hx_ctx) {
	UncaughtErrorEvents_obj *__this = (UncaughtErrorEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UncaughtErrorEvents_obj), true, "openfl.events.UncaughtErrorEvents"));
	*(void **)__this = UncaughtErrorEvents_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

UncaughtErrorEvents_obj::UncaughtErrorEvents_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *UncaughtErrorEvents_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UncaughtErrorEvents_obj_sStaticStorageInfo = 0;
#endif

::hx::Class UncaughtErrorEvents_obj::__mClass;

void UncaughtErrorEvents_obj::__register()
{
	UncaughtErrorEvents_obj _hx_dummy;
	UncaughtErrorEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.UncaughtErrorEvents",95,fa,87,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< UncaughtErrorEvents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UncaughtErrorEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UncaughtErrorEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
