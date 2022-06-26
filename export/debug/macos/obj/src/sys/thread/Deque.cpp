#include <hxcpp.h>

#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2beacc257f186a5f_30_new,"sys.thread.Deque","new",0xfb067acf,"sys.thread.Deque.new","/usr/local/lib/haxe/std/cpp/_std/sys/thread/Deque.hx",30,0x960d395f)
HX_LOCAL_STACK_FRAME(_hx_pos_2beacc257f186a5f_34_add,"sys.thread.Deque","add",0xfafc9c90,"sys.thread.Deque.add","/usr/local/lib/haxe/std/cpp/_std/sys/thread/Deque.hx",34,0x960d395f)
HX_LOCAL_STACK_FRAME(_hx_pos_2beacc257f186a5f_38_push,"sys.thread.Deque","push",0xac03888b,"sys.thread.Deque.push","/usr/local/lib/haxe/std/cpp/_std/sys/thread/Deque.hx",38,0x960d395f)
HX_LOCAL_STACK_FRAME(_hx_pos_2beacc257f186a5f_42_pop,"sys.thread.Deque","pop",0xfb080800,"sys.thread.Deque.pop","/usr/local/lib/haxe/std/cpp/_std/sys/thread/Deque.hx",42,0x960d395f)
namespace sys{
namespace thread{

void Deque_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2beacc257f186a5f_30_new)
HXDLIN(  30)		this->q =  ::__hxcpp_deque_create();
            	}

Dynamic Deque_obj::__CreateEmpty() { return new Deque_obj; }

void *Deque_obj::_hx_vtable = 0;

Dynamic Deque_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Deque_obj > _hx_result = new Deque_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Deque_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b43d7ad;
}

void Deque_obj::add( ::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_2beacc257f186a5f_34_add)
HXDLIN(  34)		 ::__hxcpp_deque_add(this->q,i);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Deque_obj,add,(void))

void Deque_obj::push( ::Dynamic i){
            	HX_STACKFRAME(&_hx_pos_2beacc257f186a5f_38_push)
HXDLIN(  38)		 ::__hxcpp_deque_push(this->q,i);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Deque_obj,push,(void))

 ::Dynamic Deque_obj::pop(bool block){
            	HX_STACKFRAME(&_hx_pos_2beacc257f186a5f_42_pop)
HXDLIN(  42)		return  ::__hxcpp_deque_pop(this->q,block);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Deque_obj,pop,return )


Deque_obj::Deque_obj()
{
}

void Deque_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Deque);
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_END_CLASS();
}

void Deque_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(q,"q");
}

::hx::Val Deque_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { return ::hx::Val( q ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Deque_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Deque_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("q",71,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Deque_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Deque_obj,q),HX_("q",71,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Deque_obj_sStaticStorageInfo = 0;
#endif

static ::String Deque_obj_sMemberFields[] = {
	HX_("q",71,00,00,00),
	HX_("add",21,f2,49,00),
	HX_("push",da,11,61,4a),
	HX_("pop",91,5d,55,00),
	::String(null()) };

::hx::Class Deque_obj::__mClass;

void Deque_obj::__register()
{
	Deque_obj _hx_dummy;
	Deque_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.thread.Deque",5d,67,c7,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Deque_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Deque_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Deque_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Deque_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace thread
