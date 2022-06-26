#include <hxcpp.h>

#ifndef INCLUDED_GameJoltState
#include <GameJoltState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_api_FlxGameJolt
#include <flixel/addons/api/FlxGameJolt.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0140c964fdf7c83d_48_new,"GameJoltState","new",0xebf8efc4,"GameJoltState.new","GameJoltState.hx",48,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_99_create,"GameJoltState","create",0x6540fe18,"GameJoltState.create","GameJoltState.hx",99,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_116_create,"GameJoltState","create",0x6540fe18,"GameJoltState.create","GameJoltState.hx",116,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_131_create,"GameJoltState","create",0x6540fe18,"GameJoltState.create","GameJoltState.hx",131,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_146_create,"GameJoltState","create",0x6540fe18,"GameJoltState.create","GameJoltState.hx",146,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_58_create,"GameJoltState","create",0x6540fe18,"GameJoltState.create","GameJoltState.hx",58,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_63_create,"GameJoltState","create",0x6540fe18,"GameJoltState.create","GameJoltState.hx",63,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_76_create,"GameJoltState","create",0x6540fe18,"GameJoltState.create","GameJoltState.hx",76,0xea19342c)
HX_LOCAL_STACK_FRAME(_hx_pos_0140c964fdf7c83d_154_update,"GameJoltState","update",0x70371d25,"GameJoltState.update","GameJoltState.hx",154,0xea19342c)

void GameJoltState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_0140c964fdf7c83d_48_new)
HXDLIN(  48)		super::__construct(TransIn,TransOut);
            	}

Dynamic GameJoltState_obj::__CreateEmpty() { return new GameJoltState_obj; }

void *GameJoltState_obj::_hx_vtable = 0;

Dynamic GameJoltState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameJoltState_obj > _hx_result = new GameJoltState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameJoltState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x736c232e || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void GameJoltState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::GameJoltState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::GameJoltState,_gthis) HXARGC(1)
            			void _hx_run(bool authresult){
            				HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_99_create)
HXLINE( 100)				::haxe::Log_obj::trace(authresult,::hx::SourceInfo(HX_("source/GameJoltState.hx",20,6b,42,ab),100,HX_("GameJoltState",d2,fd,54,c8),HX_("create",fc,66,0f,7c)));
HXLINE( 101)				if (authresult) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer lol){
            						HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_116_create)
HXLINE( 116)						 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 116)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 116)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 102)					::MainMenuState_obj::gamejoltthings = ::Array_obj< ::String >::__new(2)->init(0,_gthis->email->text)->init(1,_gthis->password->text);
HXLINE( 105)					::flixel::FlxG_obj::save->data->__SetField(HX_("logged",82,d6,68,5c),true,::hx::paccDynamic);
HXLINE( 106)					::MainMenuState_obj::gamejolto = true;
HXLINE( 107)					::flixel::addons::api::FlxGameJolt_obj::addTrophy(160928,null());
HXLINE( 108)					_gthis->remove(_gthis->email,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 109)					_gthis->remove(_gthis->password,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 110)					_gthis->remove(_gthis->login,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 111)					_gthis->remove(_gthis->gamejolt,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 112)					_gthis->remove(_gthis->nologin,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 113)					_gthis->remove(_gthis->passenabled,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 114)					 ::GameJoltState _gthis1 = _gthis;
HXDLIN( 114)					_gthis1->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,null(),((HX_("Welcome, ",76,f7,27,93) + ::flixel::addons::api::FlxGameJolt_obj::get_username()) + HX_("!\nYour credentials are saved in savedata for future use.",82,72,1e,cd)),null(),null())->screenCenter(null())).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 115)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_2()),null());
            				}
            				else {
HXLINE( 120)					_gthis->remove(_gthis->gamejolt,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 121)					_gthis->gamejolt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,(_gthis->email->y - ( (Float)(200) )),null(),HX_("An error occurred. Try again.",d5,de,dc,00),null(),null());
HXLINE( 122)					_gthis->gamejolt->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 123)					_gthis->add(_gthis->gamejolt).StaticCast<  ::flixel::FlxBasic >();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_99_create)
HXLINE(  99)			::flixel::addons::api::FlxGameJolt_obj::authUser(_gthis->email->text,_gthis->password->text, ::Dynamic(new _hx_Closure_3(_gthis)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::GameJoltState,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_131_create)
HXLINE( 131)			if (_gthis->passenabled->checked) {
HXLINE( 133)				::flixel::tweens::FlxTween_obj::tween(_gthis->password, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),null(), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            			}
            			else {
HXLINE( 137)				::flixel::tweens::FlxTween_obj::tween(_gthis->password, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),null(), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_6) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_146_create)
HXLINE( 146)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 146)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 146)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_58_create)
HXDLIN(  58)		 ::GameJoltState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  59)		::flixel::addons::api::FlxGameJolt_obj::init(696680,HX_("8e57545ea1499e7f17d5c11fda29dddf",ce,ee,34,43),null(),null(),null(),null());
HXLINE(  60)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  62)		try {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::GameJoltState,_gthis) HXARGC(1)
            			void _hx_run(bool authresult){
            				HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_63_create)
HXLINE(  64)				::haxe::Log_obj::trace(authresult,::hx::SourceInfo(HX_("source/GameJoltState.hx",20,6b,42,ab),64,HX_("GameJoltState",d2,fd,54,c8),HX_("create",fc,66,0f,7c)));
HXLINE(  65)				if (authresult) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            					void _hx_run( ::flixel::util::FlxTimer lol){
            						HX_GC_STACKFRAME(&_hx_pos_0140c964fdf7c83d_76_create)
HXLINE(  76)						 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  76)						if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  76)							::flixel::FlxG_obj::game->_requestedState = nextState;
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  66)					::MainMenuState_obj::gamejoltthings = ::Array_obj< ::String >::__new(2)->init(0,_gthis->email->text)->init(1,_gthis->password->text);
HXLINE(  67)					::MainMenuState_obj::gamejolto = true;
HXLINE(  68)					_gthis->remove(_gthis->email,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  69)					_gthis->remove(_gthis->password,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  70)					_gthis->remove(_gthis->login,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  71)					_gthis->remove(_gthis->gamejolt,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  72)					_gthis->remove(_gthis->nologin,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  73)					_gthis->remove(_gthis->passenabled,null()).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  74)					 ::GameJoltState _gthis1 = _gthis;
HXDLIN(  74)					_gthis1->add( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,null(),((HX_("Welcome, ",76,f7,27,93) + ::flixel::addons::api::FlxGameJolt_obj::get_username()) + HX_("!",21,00,00,00)),null(),null())->screenCenter(null())).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  75)					 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0()),null());
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  63)			::flixel::addons::api::FlxGameJolt_obj::authUser(( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("joltEmail",4f,29,45,14),::hx::paccDynamic)) ),( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("joltPass",fe,11,e3,e4),::hx::paccDynamic)) ), ::Dynamic(new _hx_Closure_1(_gthis)));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  81)				 ::haxe::Exception e = ::haxe::Exception_obj::caught(_g);
HXLINE(  82)				{
HXLINE(  82)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  82)					::String _hx_tmp1 = (HX_("save data error: ",3b,77,d1,21) + ::Std_obj::string(e));
HXDLIN(  82)					_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/GameJoltState.hx",20,6b,42,ab),82,HX_("GameJoltState",d2,fd,54,c8),HX_("create",fc,66,0f,7c)));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  85)		this->email =  ::flixel::addons::ui::FlxInputText_obj::__alloc( HX_CTX ,0,0,500,null(),null(),null(),null(),null());
HXLINE(  86)		this->email->screenCenter(null());
HXLINE(  87)		this->add(this->email);
HXLINE(  89)		this->password =  ::flixel::addons::ui::FlxInputText_obj::__alloc( HX_CTX ,0,(this->email->y + 20),500,null(),null(),null(),null(),null());
HXLINE(  90)		this->password->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  91)		this->password->set_passwordMode(true);
HXLINE(  92)		this->add(this->password);
HXLINE(  94)		this->gamejolt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,(this->email->y - ( (Float)(200) )),null(),HX_("ENTER GAMEJOLT USERNAME AND TOKEN",ff,9e,30,a8),null(),null());
HXLINE(  95)		this->gamejolt->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  96)		this->add(this->gamejolt);
HXLINE(  98)		this->login =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,(this->email->y + 100),HX_("Login",49,49,21,0c), ::Dynamic(new _hx_Closure_4(_gthis)));
HXLINE( 127)		this->passenabled =  ::flixel::addons::ui::FlxUICheckBox_obj::__alloc( HX_CTX ,0,(this->login->y - ( (Float)(30) )),null(),null(),HX_("Hide Password Box",84,cc,6a,a0),100,null(),null());
HXLINE( 128)		this->passenabled->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 129)		this->passenabled->callback =  ::Dynamic(new _hx_Closure_5(_gthis));
HXLINE( 140)		this->add(this->passenabled);
HXLINE( 142)		this->login->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 143)		this->add(this->login);
HXLINE( 145)		this->nologin =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,(this->email->y + 180),HX_("Not now",69,33,1d,ed), ::Dynamic(new _hx_Closure_6()));
HXLINE( 148)		this->nologin->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 149)		this->add(this->nologin);
            	}


void GameJoltState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0140c964fdf7c83d_154_update)
HXDLIN( 154)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< GameJoltState_obj > GameJoltState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< GameJoltState_obj > __this = new GameJoltState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< GameJoltState_obj > GameJoltState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	GameJoltState_obj *__this = (GameJoltState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameJoltState_obj), true, "GameJoltState"));
	*(void **)__this = GameJoltState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

GameJoltState_obj::GameJoltState_obj()
{
}

void GameJoltState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameJoltState);
	HX_MARK_MEMBER_NAME(email,"email");
	HX_MARK_MEMBER_NAME(password,"password");
	HX_MARK_MEMBER_NAME(gamejolt,"gamejolt");
	HX_MARK_MEMBER_NAME(login,"login");
	HX_MARK_MEMBER_NAME(nologin,"nologin");
	HX_MARK_MEMBER_NAME(passenabled,"passenabled");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameJoltState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(email,"email");
	HX_VISIT_MEMBER_NAME(password,"password");
	HX_VISIT_MEMBER_NAME(gamejolt,"gamejolt");
	HX_VISIT_MEMBER_NAME(login,"login");
	HX_VISIT_MEMBER_NAME(nologin,"nologin");
	HX_VISIT_MEMBER_NAME(passenabled,"passenabled");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameJoltState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"email") ) { return ::hx::Val( email ); }
		if (HX_FIELD_EQ(inName,"login") ) { return ::hx::Val( login ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nologin") ) { return ::hx::Val( nologin ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { return ::hx::Val( password ); }
		if (HX_FIELD_EQ(inName,"gamejolt") ) { return ::hx::Val( gamejolt ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"passenabled") ) { return ::hx::Val( passenabled ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameJoltState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"email") ) { email=inValue.Cast<  ::flixel::addons::ui::FlxInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"login") ) { login=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nologin") ) { nologin=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"password") ) { password=inValue.Cast<  ::flixel::addons::ui::FlxInputText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gamejolt") ) { gamejolt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"passenabled") ) { passenabled=inValue.Cast<  ::flixel::addons::ui::FlxUICheckBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameJoltState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("email",1c,cf,ce,6f));
	outFields->push(HX_("password",1b,23,d0,48));
	outFields->push(HX_("gamejolt",7f,0b,b2,c7));
	outFields->push(HX_("login",69,d9,f3,78));
	outFields->push(HX_("nologin",88,ed,c9,b8));
	outFields->push(HX_("passenabled",d0,cb,d2,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameJoltState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::ui::FlxInputText */ ,(int)offsetof(GameJoltState_obj,email),HX_("email",1c,cf,ce,6f)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxInputText */ ,(int)offsetof(GameJoltState_obj,password),HX_("password",1b,23,d0,48)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GameJoltState_obj,gamejolt),HX_("gamejolt",7f,0b,b2,c7)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(GameJoltState_obj,login),HX_("login",69,d9,f3,78)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(GameJoltState_obj,nologin),HX_("nologin",88,ed,c9,b8)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICheckBox */ ,(int)offsetof(GameJoltState_obj,passenabled),HX_("passenabled",d0,cb,d2,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameJoltState_obj_sStaticStorageInfo = 0;
#endif

static ::String GameJoltState_obj_sMemberFields[] = {
	HX_("email",1c,cf,ce,6f),
	HX_("password",1b,23,d0,48),
	HX_("gamejolt",7f,0b,b2,c7),
	HX_("login",69,d9,f3,78),
	HX_("nologin",88,ed,c9,b8),
	HX_("passenabled",d0,cb,d2,2f),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class GameJoltState_obj::__mClass;

void GameJoltState_obj::__register()
{
	GameJoltState_obj _hx_dummy;
	GameJoltState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameJoltState",d2,fd,54,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameJoltState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameJoltState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameJoltState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameJoltState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

