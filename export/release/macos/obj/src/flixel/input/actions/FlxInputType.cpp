#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
namespace flixel{
namespace input{
namespace actions{

::flixel::input::actions::FlxInputType FlxInputType_obj::ANALOG;

::flixel::input::actions::FlxInputType FlxInputType_obj::DIGITAL;

bool FlxInputType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ANALOG",30,82,a4,11)) { outValue = FlxInputType_obj::ANALOG; return true; }
	if (inName==HX_("DIGITAL",b8,9b,b4,4d)) { outValue = FlxInputType_obj::DIGITAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxInputType_obj)

int FlxInputType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ANALOG",30,82,a4,11)) return 1;
	if (inName==HX_("DIGITAL",b8,9b,b4,4d)) return 0;
	return super::__FindIndex(inName);
}

int FlxInputType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ANALOG",30,82,a4,11)) return 0;
	if (inName==HX_("DIGITAL",b8,9b,b4,4d)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxInputType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ANALOG",30,82,a4,11)) return ANALOG;
	if (inName==HX_("DIGITAL",b8,9b,b4,4d)) return DIGITAL;
	return super::__Field(inName,inCallProp);
}

static ::String FlxInputType_obj_sStaticFields[] = {
	HX_("DIGITAL",b8,9b,b4,4d),
	HX_("ANALOG",30,82,a4,11),
	::String(null())
};

::hx::Class FlxInputType_obj::__mClass;

Dynamic __Create_FlxInputType_obj() { return new FlxInputType_obj; }

void FlxInputType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.input.actions.FlxInputType",f9,03,01,76), ::hx::TCanCast< FlxInputType_obj >,FlxInputType_obj_sStaticFields,0,
	&__Create_FlxInputType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxInputType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxInputType_obj::__GetStatic;
}

void FlxInputType_obj::__boot()
{
ANALOG = ::hx::CreateConstEnum< FlxInputType_obj >(HX_("ANALOG",30,82,a4,11),1);
DIGITAL = ::hx::CreateConstEnum< FlxInputType_obj >(HX_("DIGITAL",b8,9b,b4,4d),0);
}


} // end namespace flixel
} // end namespace input
} // end namespace actions
