#include <hxcpp.h>

#ifndef INCLUDED_MosaicEffect
#include <MosaicEffect.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl8_MosaicShader
#include <openfl8/MosaicShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_578ffb082e540f39_9_new,"MosaicEffect","new",0xc2c9310d,"MosaicEffect.new","MosaicEffect.hx",9,0x961c6f03)
HX_LOCAL_STACK_FRAME(_hx_pos_578ffb082e540f39_42_setStrength,"MosaicEffect","setStrength",0x92e8f1f0,"MosaicEffect.setStrength","MosaicEffect.hx",42,0x961c6f03)
HX_LOCAL_STACK_FRAME(_hx_pos_578ffb082e540f39_14_boot,"MosaicEffect","boot",0xa55abae5,"MosaicEffect.boot","MosaicEffect.hx",14,0x961c6f03)

void MosaicEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_578ffb082e540f39_9_new)
HXLINE(  29)		this->strengthY = ((Float)1);
HXLINE(  24)		this->strengthX = ((Float)1);
HXLINE(  33)		this->shader =  ::openfl8::MosaicShader_obj::__alloc( HX_CTX );
HXLINE(  35)		 ::Dynamic(this->shader->get_data()->__Field(HX_("uBlocksize",59,e9,e4,ea),::hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),::cpp::VirtualArray_obj::__new(2)->init(0,this->strengthX)->init(1,this->strengthY),::hx::paccDynamic);
            	}

Dynamic MosaicEffect_obj::__CreateEmpty() { return new MosaicEffect_obj; }

void *MosaicEffect_obj::_hx_vtable = 0;

Dynamic MosaicEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MosaicEffect_obj > _hx_result = new MosaicEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MosaicEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x30d260bf;
}

void MosaicEffect_obj::setStrength(Float strengthX,Float strengthY){
            	HX_STACKFRAME(&_hx_pos_578ffb082e540f39_42_setStrength)
HXLINE(  43)		this->strengthX = strengthX;
HXLINE(  44)		this->strengthY = strengthY;
HXLINE(  46)		this->shader->uBlocksize->value[0] = strengthX;
HXLINE(  47)		this->shader->uBlocksize->value[1] = strengthY;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MosaicEffect_obj,setStrength,(void))

Float MosaicEffect_obj::DEFAULT_STRENGTH;


::hx::ObjectPtr< MosaicEffect_obj > MosaicEffect_obj::__new() {
	::hx::ObjectPtr< MosaicEffect_obj > __this = new MosaicEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MosaicEffect_obj > MosaicEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MosaicEffect_obj *__this = (MosaicEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MosaicEffect_obj), true, "MosaicEffect"));
	*(void **)__this = MosaicEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MosaicEffect_obj::MosaicEffect_obj()
{
}

void MosaicEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MosaicEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(strengthX,"strengthX");
	HX_MARK_MEMBER_NAME(strengthY,"strengthY");
	HX_MARK_END_CLASS();
}

void MosaicEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(strengthX,"strengthX");
	HX_VISIT_MEMBER_NAME(strengthY,"strengthY");
}

::hx::Val MosaicEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strengthX") ) { return ::hx::Val( strengthX ); }
		if (HX_FIELD_EQ(inName,"strengthY") ) { return ::hx::Val( strengthY ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setStrength") ) { return ::hx::Val( setStrength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MosaicEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl8::MosaicShader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"strengthX") ) { strengthX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strengthY") ) { strengthY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MosaicEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("strengthX",b7,5e,69,2e));
	outFields->push(HX_("strengthY",b8,5e,69,2e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MosaicEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl8::MosaicShader */ ,(int)offsetof(MosaicEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(MosaicEffect_obj,strengthX),HX_("strengthX",b7,5e,69,2e)},
	{::hx::fsFloat,(int)offsetof(MosaicEffect_obj,strengthY),HX_("strengthY",b8,5e,69,2e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MosaicEffect_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &MosaicEffect_obj::DEFAULT_STRENGTH,HX_("DEFAULT_STRENGTH",1f,91,92,60)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MosaicEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("strengthX",b7,5e,69,2e),
	HX_("strengthY",b8,5e,69,2e),
	HX_("setStrength",43,9c,ef,be),
	::String(null()) };

static void MosaicEffect_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MosaicEffect_obj::DEFAULT_STRENGTH,"DEFAULT_STRENGTH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MosaicEffect_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MosaicEffect_obj::DEFAULT_STRENGTH,"DEFAULT_STRENGTH");
};

#endif

::hx::Class MosaicEffect_obj::__mClass;

static ::String MosaicEffect_obj_sStaticFields[] = {
	HX_("DEFAULT_STRENGTH",1f,91,92,60),
	::String(null())
};

void MosaicEffect_obj::__register()
{
	MosaicEffect_obj _hx_dummy;
	MosaicEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MosaicEffect",9b,a6,a6,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MosaicEffect_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MosaicEffect_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MosaicEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MosaicEffect_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MosaicEffect_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MosaicEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MosaicEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MosaicEffect_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_578ffb082e540f39_14_boot)
HXDLIN(  14)		DEFAULT_STRENGTH = ((Float)1);
            	}
}

