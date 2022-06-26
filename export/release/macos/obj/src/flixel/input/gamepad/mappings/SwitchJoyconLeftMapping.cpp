#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_SwitchJoyconLeftID
#include <flixel/input/gamepad/id/SwitchJoyconLeftID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchJoyconLeftMapping
#include <flixel/input/gamepad/mappings/SwitchJoyconLeftMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ff520b897dd7c849_9_new,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping","new",0x086e60d1,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping.new","flixel/input/gamepad/mappings/SwitchJoyconLeftMapping.hx",9,0x5fc4481d)
HX_LOCAL_STACK_FRAME(_hx_pos_ff520b897dd7c849_23_initValues,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping","initValues",0x82982ec1,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping.initValues","flixel/input/gamepad/mappings/SwitchJoyconLeftMapping.hx",23,0x5fc4481d)
HX_LOCAL_STACK_FRAME(_hx_pos_ff520b897dd7c849_31_getID,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping","getID",0xc194e0a2,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping.getID","flixel/input/gamepad/mappings/SwitchJoyconLeftMapping.hx",31,0x5fc4481d)
HX_LOCAL_STACK_FRAME(_hx_pos_ff520b897dd7c849_53_getRawID,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping","getRawID",0x2feca53c,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping.getRawID","flixel/input/gamepad/mappings/SwitchJoyconLeftMapping.hx",53,0x5fc4481d)
HX_LOCAL_STACK_FRAME(_hx_pos_ff520b897dd7c849_79_getInputLabel,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping","getInputLabel",0x35781971,"flixel.input.gamepad.mappings.SwitchJoyconLeftMapping.getInputLabel","flixel/input/gamepad/mappings/SwitchJoyconLeftMapping.hx",79,0x5fc4481d)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void SwitchJoyconLeftMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_ff520b897dd7c849_9_new)
HXDLIN(   9)		super::__construct(attachment);
            	}

Dynamic SwitchJoyconLeftMapping_obj::__CreateEmpty() { return new SwitchJoyconLeftMapping_obj; }

void *SwitchJoyconLeftMapping_obj::_hx_vtable = 0;

Dynamic SwitchJoyconLeftMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchJoyconLeftMapping_obj > _hx_result = new SwitchJoyconLeftMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SwitchJoyconLeftMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21e2b607) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
	} else {
		return inClassId==(int)0x5e77eaad;
	}
}

void SwitchJoyconLeftMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_ff520b897dd7c849_23_initValues)
HXLINE(  24)		this->leftStick = ::flixel::input::gamepad::id::SwitchJoyconLeftID_obj::LEFT_ANALOG_STICK;
HXLINE(  25)		this->supportsMotion = true;
HXLINE(  26)		this->supportsPointer = false;
            	}


int SwitchJoyconLeftMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_ff520b897dd7c849_31_getID)
HXDLIN(  31)		switch((int)(rawID)){
            			case (int)4: {
HXLINE(  42)				return 17;
            			}
            			break;
            			case (int)6: {
HXLINE(  33)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  34)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  35)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  36)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  41)				return 30;
            			}
            			break;
            			case (int)12: {
HXLINE(  37)				return 7;
            			}
            			break;
            			case (int)13: {
HXLINE(  38)				return 8;
            			}
            			break;
            			case (int)15: {
HXLINE(  39)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  40)				return 5;
            			}
            			break;
            			default:{
HXLINE(  43)				int id = rawID;
HXDLIN(  43)				if ((id == this->leftStick->rawUp)) {
HXLINE(  43)					return 34;
            				}
            				else {
HXLINE(  44)					int id = rawID;
HXDLIN(  44)					if ((id == this->leftStick->rawDown)) {
HXLINE(  44)						return 36;
            					}
            					else {
HXLINE(  45)						int id = rawID;
HXDLIN(  45)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  45)							return 37;
            						}
            						else {
HXLINE(  46)							int id = rawID;
HXDLIN(  46)							if ((id == this->leftStick->rawRight)) {
HXLINE(  46)								return 35;
            							}
            							else {
HXLINE(  47)								return -1;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  31)		return null();
            	}


int SwitchJoyconLeftMapping_obj::getRawID(int id){
            	HX_STACKFRAME(&_hx_pos_ff520b897dd7c849_53_getRawID)
HXDLIN(  53)		switch((int)(id)){
            			case (int)0: {
HXLINE(  55)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  56)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  57)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  58)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  61)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  62)				return 16;
            			}
            			break;
            			case (int)7: {
HXLINE(  59)				return 12;
            			}
            			break;
            			case (int)8: {
HXLINE(  60)				return 13;
            			}
            			break;
            			case (int)17: {
HXLINE(  63)				return 4;
            			}
            			break;
            			case (int)30: {
HXLINE(  64)				return 10;
            			}
            			break;
            			case (int)34: {
HXLINE(  65)				return ::flixel::input::gamepad::id::SwitchJoyconLeftID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  68)				return ::flixel::input::gamepad::id::SwitchJoyconLeftID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  66)				return ::flixel::input::gamepad::id::SwitchJoyconLeftID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  67)				return ::flixel::input::gamepad::id::SwitchJoyconLeftID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  73)				return -1;
            			}
            		}
HXLINE(  53)		return 0;
            	}


::String SwitchJoyconLeftMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_ff520b897dd7c849_79_getInputLabel)
HXDLIN(  79)		switch((int)(id)){
            			case (int)0: {
HXLINE(  81)				return HX_("down",62,f8,6d,42);
            			}
            			break;
            			case (int)1: {
HXLINE(  82)				return HX_("right",dc,0b,64,e9);
            			}
            			break;
            			case (int)2: {
HXLINE(  83)				return HX_("left",07,08,b0,47);
            			}
            			break;
            			case (int)3: {
HXLINE(  84)				return HX_("up",5b,66,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE(  87)				return HX_("sl",99,64,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  88)				return HX_("sr",9f,64,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(  85)				return HX_("minus",70,80,68,08);
            			}
            			break;
            			case (int)17: {
HXLINE(  89)				return HX_("zl",b2,6a,00,00);
            			}
            			break;
            			case (int)30: {
HXLINE(  86)				return HX_("l",6c,00,00,00);
            			}
            			break;
            			default:{
HXLINE(  90)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE(  79)		return null();
            	}



::hx::ObjectPtr< SwitchJoyconLeftMapping_obj > SwitchJoyconLeftMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< SwitchJoyconLeftMapping_obj > __this = new SwitchJoyconLeftMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< SwitchJoyconLeftMapping_obj > SwitchJoyconLeftMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	SwitchJoyconLeftMapping_obj *__this = (SwitchJoyconLeftMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchJoyconLeftMapping_obj), true, "flixel.input.gamepad.mappings.SwitchJoyconLeftMapping"));
	*(void **)__this = SwitchJoyconLeftMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

SwitchJoyconLeftMapping_obj::SwitchJoyconLeftMapping_obj()
{
}

::hx::Val SwitchJoyconLeftMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SwitchJoyconLeftMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SwitchJoyconLeftMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchJoyconLeftMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	::String(null()) };

::hx::Class SwitchJoyconLeftMapping_obj::__mClass;

void SwitchJoyconLeftMapping_obj::__register()
{
	SwitchJoyconLeftMapping_obj _hx_dummy;
	SwitchJoyconLeftMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.SwitchJoyconLeftMapping",5f,a4,ff,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchJoyconLeftMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchJoyconLeftMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchJoyconLeftMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchJoyconLeftMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
