#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2a670326751daced_44_new,"flixel.util.FlxSave","new",0x2c4b0107,"flixel.util.FlxSave.new","flixel/util/FlxSave.hx",44,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_52_destroy,"flixel.util.FlxSave","destroy",0x7bc03d21,"flixel.util.FlxSave.destroy","flixel/util/FlxSave.hx",52,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_72_bind,"flixel.util.FlxSave","bind",0x8d6a5736,"flixel.util.FlxSave.bind","flixel/util/FlxSave.hx",72,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_100_close,"flixel.util.FlxSave","close",0xc505001f,"flixel.util.FlxSave.close","flixel/util/FlxSave.hx",100,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_113_flush,"flixel.util.FlxSave","flush",0x7f3d4b2b,"flixel.util.FlxSave.flush","flixel/util/FlxSave.hx",113,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_140_erase,"flixel.util.FlxSave","erase",0xefbed14d,"flixel.util.FlxSave.erase","flixel/util/FlxSave.hx",140,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_158_onDone,"flixel.util.FlxSave","onDone",0x76016afa,"flixel.util.FlxSave.onDone","flixel/util/FlxSave.hx",158,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_2a670326751daced_183_checkBinding,"flixel.util.FlxSave","checkBinding",0xf0eb45d6,"flixel.util.FlxSave.checkBinding","flixel/util/FlxSave.hx",183,0xc43cd0a9)
namespace flixel{
namespace util{

void FlxSave_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_44_new)
HXDLIN(  44)		this->_closeRequested = false;
            	}

Dynamic FlxSave_obj::__CreateEmpty() { return new FlxSave_obj; }

void *FlxSave_obj::_hx_vtable = 0;

Dynamic FlxSave_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSave_obj > _hx_result = new FlxSave_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSave_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x051f3151;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::util::FlxSave_obj::destroy,
};

void *FlxSave_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxSave__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxSave_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_52_destroy)
HXLINE(  53)		this->_sharedObject = null();
HXLINE(  54)		this->name = null();
HXLINE(  55)		this->path = null();
HXLINE(  56)		this->data = null();
HXLINE(  57)		this->_onComplete = null();
HXLINE(  58)		this->_closeRequested = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

bool FlxSave_obj::bind(::String Name,::String Path){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_72_bind)
HXLINE(  73)		this->destroy();
HXLINE(  74)		this->name = Name;
HXLINE(  75)		this->path = Path;
HXLINE(  76)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  78)			this->_sharedObject = ::openfl::net::SharedObject_obj::getLocal(this->name,this->path,null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  80)				{
HXLINE(  80)					null();
            				}
HXLINE(  76)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE(  82)					::flixel::FlxG_obj::log->advanced(HX_("There was a problem binding to\nthe shared object data from FlxSave.",75,65,d7,ba),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXLINE(  83)					this->destroy();
HXLINE(  84)					return false;
            				}
            				else {
HXLINE(  76)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  86)		this->data = this->_sharedObject->data;
HXLINE(  87)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,bind,return )

bool FlxSave_obj::close(::hx::Null< int >  __o_MinFileSize, ::Dynamic OnComplete){
            		int MinFileSize = __o_MinFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_100_close)
HXLINE( 101)		this->_closeRequested = true;
HXLINE( 102)		return this->flush(MinFileSize,OnComplete);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::flush(::hx::Null< int >  __o_MinFileSize, ::Dynamic OnComplete){
            		int MinFileSize = __o_MinFileSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_113_flush)
HXLINE( 114)		if (!(this->checkBinding())) {
HXLINE( 116)			return false;
            		}
HXLINE( 118)		this->_onComplete = OnComplete;
HXLINE( 119)		 ::Dynamic result = null();
HXLINE( 120)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 122)			result = this->_sharedObject->flush(null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 124)				{
HXLINE( 124)					null();
            				}
HXLINE( 120)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::openfl::errors::Error >())) {
HXLINE( 126)					return this->onDone(::flixel::util::FlxSaveStatus_obj::ERROR_dyn());
            				}
            				else {
HXLINE( 120)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 129)		 ::flixel::util::FlxSaveStatus _hx_tmp;
HXDLIN( 129)		if (::hx::IsEq( result,0 )) {
HXLINE( 129)			_hx_tmp = ::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn();
            		}
            		else {
HXLINE( 129)			_hx_tmp = ::flixel::util::FlxSaveStatus_obj::PENDING_dyn();
            		}
HXDLIN( 129)		return this->onDone(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::erase(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_140_erase)
HXLINE( 141)		if (!(this->checkBinding())) {
HXLINE( 143)			return false;
            		}
HXLINE( 145)		this->_sharedObject->clear();
HXLINE( 146)		this->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 147)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::onDone( ::flixel::util::FlxSaveStatus Result){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_158_onDone)
HXLINE( 159)		switch((int)(Result->_hx_getIndex())){
            			case (int)1: {
HXLINE( 162)				::flixel::FlxG_obj::log->advanced(HX_("FlxSave is requesting extra storage space.",65,ed,43,59),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            			break;
            			case (int)2: {
HXLINE( 164)				::flixel::FlxG_obj::log->advanced(HX_("There was a problem flushing\nthe shared object data from FlxSave.",0d,4e,e5,ad),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 168)		if (::hx::IsNotNull( this->_onComplete )) {
HXLINE( 169)			this->_onComplete(::hx::IsPointerEq( Result,::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn() ));
            		}
HXLINE( 171)		if (this->_closeRequested) {
HXLINE( 172)			this->destroy();
            		}
HXLINE( 174)		return ::hx::IsPointerEq( Result,::flixel::util::FlxSaveStatus_obj::SUCCESS_dyn() );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::checkBinding(){
            	HX_STACKFRAME(&_hx_pos_2a670326751daced_183_checkBinding)
HXLINE( 184)		if (::hx::IsNull( this->_sharedObject )) {
HXLINE( 186)			::flixel::FlxG_obj::log->advanced(HX_("You must call FlxSave.bind()\nbefore you can read or write data.",7f,af,d9,ea),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 187)			return false;
            		}
HXLINE( 189)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )


::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new() {
	::hx::ObjectPtr< FlxSave_obj > __this = new FlxSave_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSave_obj *__this = (FlxSave_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSave_obj), true, "flixel.util.FlxSave"));
	*(void **)__this = FlxSave_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
}

::hx::Val FlxSave_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"path") ) { return ::hx::Val( path ); }
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"erase") ) { return ::hx::Val( erase_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return ::hx::Val( onDone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return ::hx::Val( _onComplete ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return ::hx::Val( checkBinding_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return ::hx::Val( _sharedObject ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return ::hx::Val( _closeRequested ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSave_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast<  ::openfl::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("_sharedObject",23,ee,9d,aa));
	outFields->push(HX_("_closeRequested",35,43,b2,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSave_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSave_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsString,(int)offsetof(FlxSave_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(FlxSave_obj,path),HX_("path",a5,e5,51,4a)},
	{::hx::fsObject /*  ::openfl::net::SharedObject */ ,(int)offsetof(FlxSave_obj,_sharedObject),HX_("_sharedObject",23,ee,9d,aa)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSave_obj,_onComplete),HX_("_onComplete",17,a2,08,30)},
	{::hx::fsBool,(int)offsetof(FlxSave_obj,_closeRequested),HX_("_closeRequested",35,43,b2,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSave_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSave_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("name",4b,72,ff,48),
	HX_("path",a5,e5,51,4a),
	HX_("_sharedObject",23,ee,9d,aa),
	HX_("_onComplete",17,a2,08,30),
	HX_("_closeRequested",35,43,b2,fb),
	HX_("destroy",fa,2c,86,24),
	HX_("bind",bd,f5,16,41),
	HX_("close",b8,17,63,48),
	HX_("flush",c4,62,9b,02),
	HX_("erase",e6,e8,1c,73),
	HX_("onDone",41,f9,f7,e4),
	HX_("checkBinding",5d,43,b4,6c),
	::String(null()) };

::hx::Class FlxSave_obj::__mClass;

void FlxSave_obj::__register()
{
	FlxSave_obj _hx_dummy;
	FlxSave_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxSave",95,71,4e,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSave_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSave_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSave_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSave_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
