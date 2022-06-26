#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxAsyncLoop
#include <flixel/addons/util/FlxAsyncLoop.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ffe4b31713fe8fd6_9_new,"flixel.addons.util.FlxAsyncLoop","new",0x36f78e83,"flixel.addons.util.FlxAsyncLoop.new","flixel/addons/util/FlxAsyncLoop.hx",9,0xfc555d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe4b31713fe8fd6_39_start,"flixel.addons.util.FlxAsyncLoop","start",0x79b54145,"flixel.addons.util.FlxAsyncLoop.start","flixel/addons/util/FlxAsyncLoop.hx",39,0xfc555d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe4b31713fe8fd6_47_update,"flixel.addons.util.FlxAsyncLoop","update",0x85eeffc6,"flixel.addons.util.FlxAsyncLoop.update","flixel/addons/util/FlxAsyncLoop.hx",47,0xfc555d8c)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe4b31713fe8fd6_64_destroy,"flixel.addons.util.FlxAsyncLoop","destroy",0x31e7389d,"flixel.addons.util.FlxAsyncLoop.destroy","flixel/addons/util/FlxAsyncLoop.hx",64,0xfc555d8c)
namespace flixel{
namespace addons{
namespace util{

void FlxAsyncLoop_obj::__construct(int Iterations, ::Dynamic Callback,::hx::Null< int >  __o_IterationsPerUpdate){
            		int IterationsPerUpdate = __o_IterationsPerUpdate.Default(100);
            	HX_STACKFRAME(&_hx_pos_ffe4b31713fe8fd6_9_new)
HXLINE(  14)		this->_curIndex = 0;
HXLINE(  12)		this->finished = false;
HXLINE(  11)		this->started = false;
HXLINE(  28)		super::__construct();
HXLINE(  29)		this->set_visible(false);
HXLINE(  30)		this->_iterations = Iterations;
HXLINE(  31)		this->_callback = Callback;
HXLINE(  32)		this->_iterationsPerUpdate = IterationsPerUpdate;
            	}

Dynamic FlxAsyncLoop_obj::__CreateEmpty() { return new FlxAsyncLoop_obj; }

void *FlxAsyncLoop_obj::_hx_vtable = 0;

Dynamic FlxAsyncLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAsyncLoop_obj > _hx_result = new FlxAsyncLoop_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxAsyncLoop_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x231760c3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x231760c3;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxAsyncLoop_obj::start(){
            	HX_STACKFRAME(&_hx_pos_ffe4b31713fe8fd6_39_start)
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (!(this->finished)) {
HXLINE(  40)			_hx_tmp = this->started;
            		}
            		else {
HXLINE(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return;
            		}
HXLINE(  42)		this->_curIndex = 0;
HXLINE(  43)		this->started = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxAsyncLoop_obj,start,(void))

void FlxAsyncLoop_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ffe4b31713fe8fd6_47_update)
HXLINE(  48)		bool _hx_tmp;
HXDLIN(  48)		if (this->started) {
HXLINE(  48)			_hx_tmp = this->finished;
            		}
            		else {
HXLINE(  48)			_hx_tmp = true;
            		}
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  49)			return;
            		}
HXLINE(  51)		{
HXLINE(  51)			int _g = this->_curIndex;
HXDLIN(  51)			int _g1 = ::Std_obj::_hx_int(::Math_obj::min(( (Float)((this->_curIndex + this->_iterationsPerUpdate)) ),( (Float)(this->_iterations) )));
HXDLIN(  51)			while((_g < _g1)){
HXLINE(  51)				_g = (_g + 1);
HXDLIN(  51)				int i = (_g - 1);
HXLINE(  54)				this->_callback();
HXLINE(  55)				this->_curIndex++;
            			}
            		}
HXLINE(  57)		if ((this->_curIndex >= this->_iterations)) {
HXLINE(  58)			this->finished = true;
            		}
HXLINE(  60)		this->super::update(elapsed);
            	}


void FlxAsyncLoop_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ffe4b31713fe8fd6_64_destroy)
HXLINE(  65)		this->_callback = null();
HXLINE(  66)		this->super::destroy();
            	}



::hx::ObjectPtr< FlxAsyncLoop_obj > FlxAsyncLoop_obj::__new(int Iterations, ::Dynamic Callback,::hx::Null< int >  __o_IterationsPerUpdate) {
	::hx::ObjectPtr< FlxAsyncLoop_obj > __this = new FlxAsyncLoop_obj();
	__this->__construct(Iterations,Callback,__o_IterationsPerUpdate);
	return __this;
}

::hx::ObjectPtr< FlxAsyncLoop_obj > FlxAsyncLoop_obj::__alloc(::hx::Ctx *_hx_ctx,int Iterations, ::Dynamic Callback,::hx::Null< int >  __o_IterationsPerUpdate) {
	FlxAsyncLoop_obj *__this = (FlxAsyncLoop_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAsyncLoop_obj), true, "flixel.addons.util.FlxAsyncLoop"));
	*(void **)__this = FlxAsyncLoop_obj::_hx_vtable;
	__this->__construct(Iterations,Callback,__o_IterationsPerUpdate);
	return __this;
}

FlxAsyncLoop_obj::FlxAsyncLoop_obj()
{
}

void FlxAsyncLoop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAsyncLoop);
	HX_MARK_MEMBER_NAME(started,"started");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_iterationsPerUpdate,"_iterationsPerUpdate");
	HX_MARK_MEMBER_NAME(_iterations,"_iterations");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAsyncLoop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(started,"started");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_iterationsPerUpdate,"_iterationsPerUpdate");
	HX_VISIT_MEMBER_NAME(_iterations,"_iterations");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxAsyncLoop_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return ::hx::Val( started ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return ::hx::Val( finished ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return ::hx::Val( _curIndex ); }
		if (HX_FIELD_EQ(inName,"_callback") ) { return ::hx::Val( _callback ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iterations") ) { return ::hx::Val( _iterations ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_iterationsPerUpdate") ) { return ::hx::Val( _iterationsPerUpdate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxAsyncLoop_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { started=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_iterations") ) { _iterations=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_iterationsPerUpdate") ) { _iterationsPerUpdate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAsyncLoop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("started",41,29,1b,35));
	outFields->push(HX_("finished",72,93,0e,95));
	outFields->push(HX_("_curIndex",d1,8c,58,4d));
	outFields->push(HX_("_iterationsPerUpdate",b1,bf,fe,09));
	outFields->push(HX_("_iterations",55,c0,c3,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAsyncLoop_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxAsyncLoop_obj,started),HX_("started",41,29,1b,35)},
	{::hx::fsBool,(int)offsetof(FlxAsyncLoop_obj,finished),HX_("finished",72,93,0e,95)},
	{::hx::fsInt,(int)offsetof(FlxAsyncLoop_obj,_curIndex),HX_("_curIndex",d1,8c,58,4d)},
	{::hx::fsInt,(int)offsetof(FlxAsyncLoop_obj,_iterationsPerUpdate),HX_("_iterationsPerUpdate",b1,bf,fe,09)},
	{::hx::fsInt,(int)offsetof(FlxAsyncLoop_obj,_iterations),HX_("_iterations",55,c0,c3,34)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxAsyncLoop_obj,_callback),HX_("_callback",24,91,9c,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAsyncLoop_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAsyncLoop_obj_sMemberFields[] = {
	HX_("started",41,29,1b,35),
	HX_("finished",72,93,0e,95),
	HX_("_curIndex",d1,8c,58,4d),
	HX_("_iterationsPerUpdate",b1,bf,fe,09),
	HX_("_iterations",55,c0,c3,34),
	HX_("_callback",24,91,9c,c6),
	HX_("start",62,74,0b,84),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class FlxAsyncLoop_obj::__mClass;

void FlxAsyncLoop_obj::__register()
{
	FlxAsyncLoop_obj _hx_dummy;
	FlxAsyncLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util.FlxAsyncLoop",11,91,cf,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAsyncLoop_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAsyncLoop_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAsyncLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAsyncLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
