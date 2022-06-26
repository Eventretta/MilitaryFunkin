#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_8_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",8,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_29_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",29,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_35_updateMovement,"Player","updateMovement",0xab7266a5,"Player.updateMovement","Player.hx",35,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_3[] = {
	(int)38,(int)87,
};
static const int _hx_array_data_6c4d5f81_4[] = {
	(int)40,(int)83,
};
static const int _hx_array_data_6c4d5f81_5[] = {
	(int)37,(int)65,
};
static const int _hx_array_data_6c4d5f81_6[] = {
	(int)39,(int)68,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_10_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",10,0xa27fc9dd)

void Player_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_8_new)
HXLINE(  14)		this->takingInputs = true;
HXLINE(  18)		super::__construct(x,y,null());
HXLINE(  19)		this->makeGraphic(10,10,-16776961,null(),null());
HXLINE(  21)		 ::flixel::math::FlxPoint _hx_tmp = this->drag;
HXDLIN(  21)		_hx_tmp->set_x(this->drag->set_y(( (Float)(1600) )));
HXLINE(  22)		this->setSize(( (Float)(8) ),( (Float)(8) ));
HXLINE(  23)		this->offset->set(4,4);
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33e526a5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_29_update)
HXLINE(  30)		this->updateMovement();
HXLINE(  31)		this->super::update(elapsed);
            	}


void Player_obj::updateMovement(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_35_updateMovement)
HXLINE(  36)		bool up = false;
HXLINE(  37)		bool down = false;
HXLINE(  38)		bool left = false;
HXLINE(  39)		bool right = false;
HXLINE(  42)		up = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_3,2),1);
HXLINE(  43)		down = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_4,2),1);
HXLINE(  44)		left = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_5,2),1);
HXLINE(  45)		right = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_6,2),1);
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (up) {
HXLINE(  56)			_hx_tmp = down;
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  57)			down = false;
HXDLIN(  57)			up = down;
            		}
HXLINE(  58)		bool _hx_tmp1;
HXDLIN(  58)		if (left) {
HXLINE(  58)			_hx_tmp1 = right;
            		}
            		else {
HXLINE(  58)			_hx_tmp1 = false;
            		}
HXDLIN(  58)		if (_hx_tmp1) {
HXLINE(  59)			right = false;
HXDLIN(  59)			left = right;
            		}
HXLINE(  61)		bool _hx_tmp2;
HXDLIN(  61)		bool _hx_tmp3;
HXDLIN(  61)		bool _hx_tmp4;
HXDLIN(  61)		if (!(up)) {
HXLINE(  61)			_hx_tmp4 = down;
            		}
            		else {
HXLINE(  61)			_hx_tmp4 = true;
            		}
HXDLIN(  61)		if (!(_hx_tmp4)) {
HXLINE(  61)			_hx_tmp3 = left;
            		}
            		else {
HXLINE(  61)			_hx_tmp3 = true;
            		}
HXDLIN(  61)		if (!(_hx_tmp3)) {
HXLINE(  61)			if (right) {
HXLINE(  61)				_hx_tmp2 = this->takingInputs;
            			}
            			else {
HXLINE(  61)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE(  61)			_hx_tmp2 = true;
            		}
HXDLIN(  61)		if (_hx_tmp2) {
HXLINE(  63)			Float newAngle = ( (Float)(0) );
HXLINE(  64)			if (up) {
HXLINE(  66)				newAngle = ( (Float)(-90) );
HXLINE(  67)				if (left) {
HXLINE(  68)					newAngle = (newAngle - ( (Float)(45) ));
            				}
            				else {
HXLINE(  69)					if (right) {
HXLINE(  70)						newAngle = (newAngle + 45);
            					}
            				}
HXLINE(  71)				this->set_facing(256);
            			}
            			else {
HXLINE(  73)				if (down) {
HXLINE(  75)					newAngle = ( (Float)(90) );
HXLINE(  76)					if (left) {
HXLINE(  77)						newAngle = (newAngle + 45);
            					}
            					else {
HXLINE(  78)						if (right) {
HXLINE(  79)							newAngle = (newAngle - ( (Float)(45) ));
            						}
            					}
HXLINE(  80)					this->set_facing(4096);
            				}
            				else {
HXLINE(  82)					if (left) {
HXLINE(  84)						newAngle = ( (Float)(180) );
HXLINE(  85)						this->set_facing(1);
            					}
            					else {
HXLINE(  87)						if (right) {
HXLINE(  89)							newAngle = ( (Float)(0) );
HXLINE(  90)							this->set_facing(16);
            						}
            					}
            				}
            			}
HXLINE(  94)			this->velocity->set(((Float)200),0);
HXLINE(  95)			 ::flixel::math::FlxPoint _hx_tmp = this->velocity;
HXDLIN(  95)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN(  95)			point->_inPool = false;
HXDLIN(  95)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN(  95)			point1->_weak = true;
HXDLIN(  95)			_hx_tmp->rotate(point1,newAngle);
HXLINE(  98)			bool _hx_tmp1;
HXDLIN(  98)			bool _hx_tmp2;
HXDLIN(  98)			if ((this->velocity->x == 0)) {
HXLINE(  98)				_hx_tmp2 = (this->velocity->y != 0);
            			}
            			else {
HXLINE(  98)				_hx_tmp2 = true;
            			}
HXDLIN(  98)			if (_hx_tmp2) {
HXLINE(  98)				_hx_tmp1 = (this->touching == 0);
            			}
            			else {
HXLINE(  98)				_hx_tmp1 = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updateMovement,(void))

Float Player_obj::SPEED;


::hx::ObjectPtr< Player_obj > Player_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(stepSound,"stepSound");
	HX_MARK_MEMBER_NAME(takingInputs,"takingInputs");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepSound,"stepSound");
	HX_VISIT_MEMBER_NAME(takingInputs,"takingInputs");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepSound") ) { return ::hx::Val( stepSound ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"takingInputs") ) { return ::hx::Val( takingInputs ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateMovement") ) { return ::hx::Val( updateMovement_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"stepSound") ) { stepSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"takingInputs") ) { takingInputs=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stepSound",e3,21,38,f1));
	outFields->push(HX_("takingInputs",8d,85,7a,a2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Player_obj,stepSound),HX_("stepSound",e3,21,38,f1)},
	{::hx::fsBool,(int)offsetof(Player_obj,takingInputs),HX_("takingInputs",8d,85,7a,a2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Player_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Player_obj::SPEED,HX_("SPEED",67,cf,57,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("stepSound",e3,21,38,f1),
	HX_("takingInputs",8d,85,7a,a2),
	HX_("update",09,86,05,87),
	HX_("updateMovement",58,78,61,35),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::SPEED,"SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::SPEED,"SPEED");
};

#endif

::hx::Class Player_obj::__mClass;

static ::String Player_obj_sStaticFields[] = {
	HX_("SPEED",67,cf,57,ff),
	::String(null())
};

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Player_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Player_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_10_boot)
HXDLIN(  10)		SPEED = ((Float)200);
            	}
}

