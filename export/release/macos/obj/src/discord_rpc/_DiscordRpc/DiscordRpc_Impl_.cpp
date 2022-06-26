#include <hxcpp.h>

#ifndef INCLUDED_0f6f533a2f6f9a23
#define INCLUDED_0f6f533a2f6f9a23
#include "linc_discord_rpc.h"
#endif
#ifndef INCLUDED_discord_rpc_DiscordRpc
#include <discord_rpc/DiscordRpc.h>
#endif
#ifndef INCLUDED_discord_rpc__DiscordRpc_DiscordRpc_Impl_
#include <discord_rpc/_DiscordRpc/DiscordRpc_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_995998c3da26639d_159__onRequest,"discord_rpc._DiscordRpc.DiscordRpc_Impl_","_onRequest",0x77483374,"discord_rpc._DiscordRpc.DiscordRpc_Impl_._onRequest","discord_rpc/DiscordRpc.hx",159,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_995998c3da26639d_158__onSpectate,"discord_rpc._DiscordRpc.DiscordRpc_Impl_","_onSpectate",0xcae12414,"discord_rpc._DiscordRpc.DiscordRpc_Impl_._onSpectate","discord_rpc/DiscordRpc.hx",158,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_995998c3da26639d_156__onJoin,"discord_rpc._DiscordRpc.DiscordRpc_Impl_","_onJoin",0x01cc06a5,"discord_rpc._DiscordRpc.DiscordRpc_Impl_._onJoin","discord_rpc/DiscordRpc.hx",156,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_995998c3da26639d_154__onError,"discord_rpc._DiscordRpc.DiscordRpc_Impl_","_onError",0xb1bb5cad,"discord_rpc._DiscordRpc.DiscordRpc_Impl_._onError","discord_rpc/DiscordRpc.hx",154,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_995998c3da26639d_152__onDisconnected,"discord_rpc._DiscordRpc.DiscordRpc_Impl_","_onDisconnected",0x3e4c1176,"discord_rpc._DiscordRpc.DiscordRpc_Impl_._onDisconnected","discord_rpc/DiscordRpc.hx",152,0x60965528)
HX_LOCAL_STACK_FRAME(_hx_pos_995998c3da26639d_150__onReady,"discord_rpc._DiscordRpc.DiscordRpc_Impl_","_onReady",0x254c3148,"discord_rpc._DiscordRpc.DiscordRpc_Impl_._onReady","discord_rpc/DiscordRpc.hx",150,0x60965528)
namespace discord_rpc{
namespace _DiscordRpc{

void DiscordRpc_Impl__obj::__construct() { }

Dynamic DiscordRpc_Impl__obj::__CreateEmpty() { return new DiscordRpc_Impl__obj; }

void *DiscordRpc_Impl__obj::_hx_vtable = 0;

Dynamic DiscordRpc_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DiscordRpc_Impl__obj > _hx_result = new DiscordRpc_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DiscordRpc_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x403ef55f;
}

void DiscordRpc_Impl__obj::_onRequest(const  DiscordJoinRequest* _data){
            	HX_STACKFRAME(&_hx_pos_995998c3da26639d_159__onRequest)
HXLINE( 160)		 DiscordJoinRequest * star = ( ( DiscordJoinRequest *)(_data) );
HXLINE( 161)		if (::hx::IsNotNull( ::discord_rpc::DiscordRpc_obj::onRequest )) {
HXLINE( 161)			::discord_rpc::DiscordRpc_obj::onRequest(( ( ::Dynamic)(( (::cpp::Pointer<  DiscordJoinRequest >)(star) )) ));
            		}
            	}


void DiscordRpc_Impl__obj::_onSpectate(const char* _secret){
            	HX_STACKFRAME(&_hx_pos_995998c3da26639d_158__onSpectate)
HXDLIN( 158)		if (::hx::IsNotNull( ::discord_rpc::DiscordRpc_obj::onSpectate )) {
HXDLIN( 158)			::discord_rpc::DiscordRpc_obj::onSpectate(::String(_secret));
            		}
            	}


void DiscordRpc_Impl__obj::_onJoin(const char* _secret){
            	HX_STACKFRAME(&_hx_pos_995998c3da26639d_156__onJoin)
HXDLIN( 156)		if (::hx::IsNotNull( ::discord_rpc::DiscordRpc_obj::onJoin )) {
HXDLIN( 156)			::discord_rpc::DiscordRpc_obj::onJoin(::String(_secret));
            		}
            	}


void DiscordRpc_Impl__obj::_onError(int _errorCode,const char* _message){
            	HX_STACKFRAME(&_hx_pos_995998c3da26639d_154__onError)
HXDLIN( 154)		if (::hx::IsNotNull( ::discord_rpc::DiscordRpc_obj::onError )) {
HXDLIN( 154)			::discord_rpc::DiscordRpc_obj::onError(_errorCode,::String(_message));
            		}
            	}


void DiscordRpc_Impl__obj::_onDisconnected(int _errorCode,const char* _message){
            	HX_STACKFRAME(&_hx_pos_995998c3da26639d_152__onDisconnected)
HXDLIN( 152)		if (::hx::IsNotNull( ::discord_rpc::DiscordRpc_obj::onDisconnected )) {
HXDLIN( 152)			::discord_rpc::DiscordRpc_obj::onDisconnected(_errorCode,::String(_message));
            		}
            	}


void DiscordRpc_Impl__obj::_onReady(){
            	HX_STACKFRAME(&_hx_pos_995998c3da26639d_150__onReady)
HXDLIN( 150)		if (::hx::IsNotNull( ::discord_rpc::DiscordRpc_obj::onReady )) {
HXDLIN( 150)			::discord_rpc::DiscordRpc_obj::onReady();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DiscordRpc_Impl__obj,_onReady,(void))


DiscordRpc_Impl__obj::DiscordRpc_Impl__obj()
{
}

bool DiscordRpc_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_onReady") ) { outValue = _onReady_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DiscordRpc_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DiscordRpc_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DiscordRpc_Impl__obj::__mClass;

static ::String DiscordRpc_Impl__obj_sStaticFields[] = {
	HX_("_onReady",45,98,b0,b6),
	::String(null())
};

void DiscordRpc_Impl__obj::__register()
{
	DiscordRpc_Impl__obj _hx_dummy;
	DiscordRpc_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("discord_rpc._DiscordRpc.DiscordRpc_Impl_",cb,f3,3b,c4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DiscordRpc_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DiscordRpc_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DiscordRpc_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DiscordRpc_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DiscordRpc_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace discord_rpc
} // end namespace _DiscordRpc