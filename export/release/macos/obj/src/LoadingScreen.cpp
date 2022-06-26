#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_LoadingScreen
#include <LoadingScreen.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_63608349210c4a3d_5_new,"LoadingScreen","new",0x15cc07da,"LoadingScreen.new","LoadingScreen.hx",5,0x4d0330d6)
HX_LOCAL_STACK_FRAME(_hx_pos_63608349210c4a3d_8_create,"LoadingScreen","create",0xccf797c2,"LoadingScreen.create","LoadingScreen.hx",8,0x4d0330d6)
HX_LOCAL_STACK_FRAME(_hx_pos_63608349210c4a3d_18_update,"LoadingScreen","update",0xd7edb6cf,"LoadingScreen.update","LoadingScreen.hx",18,0x4d0330d6)

void LoadingScreen_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_63608349210c4a3d_5_new)
HXDLIN(   5)		super::__construct(TransIn,TransOut);
            	}

Dynamic LoadingScreen_obj::__CreateEmpty() { return new LoadingScreen_obj; }

void *LoadingScreen_obj::_hx_vtable = 0;

Dynamic LoadingScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingScreen_obj > _hx_result = new LoadingScreen_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LoadingScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548fe828) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x548fe828;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void LoadingScreen_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_63608349210c4a3d_8_create)
HXLINE(   9)		this->add( ::Character_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("military",cd,eb,5c,59),null())->screenCenter(::flixel::util::FlxAxes_obj::Y_dyn()));
HXLINE(  10)		this->add( ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("LOADING..",9c,19,79,41),true,null(),null(),null())->screenCenter(null()));
HXLINE(  11)		::flixel::FlxG_obj::sound->cacheAll();
HXLINE(  13)		{
HXLINE(  13)			 ::flixel::FlxState nextState = ::LoadingState_obj::getNextState( ::PlayState_obj::__alloc( HX_CTX ,null(),null()),true);
HXDLIN(  13)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  13)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}


void LoadingScreen_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_63608349210c4a3d_18_update)
HXDLIN(  18)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< LoadingScreen_obj > LoadingScreen_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< LoadingScreen_obj > __this = new LoadingScreen_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< LoadingScreen_obj > LoadingScreen_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	LoadingScreen_obj *__this = (LoadingScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingScreen_obj), true, "LoadingScreen"));
	*(void **)__this = LoadingScreen_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

LoadingScreen_obj::LoadingScreen_obj()
{
}

::hx::Val LoadingScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LoadingScreen_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LoadingScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String LoadingScreen_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class LoadingScreen_obj::__mClass;

void LoadingScreen_obj::__register()
{
	LoadingScreen_obj _hx_dummy;
	LoadingScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadingScreen",e8,d2,48,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingScreen_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

