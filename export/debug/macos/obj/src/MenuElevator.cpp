#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MenuElevator
#include <MenuElevator.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5817b7496e2cc546_14_new,"MenuElevator","new",0x0f28edbf,"MenuElevator.new","MenuElevator.hx",14,0x6d204e91)
HX_LOCAL_STACK_FRAME(_hx_pos_5817b7496e2cc546_29_create,"MenuElevator","create",0x0a55aefd,"MenuElevator.create","MenuElevator.hx",29,0x6d204e91)
HX_LOCAL_STACK_FRAME(_hx_pos_5817b7496e2cc546_47_update,"MenuElevator","update",0x154bce0a,"MenuElevator.update","MenuElevator.hx",47,0x6d204e91)
HX_LOCAL_STACK_FRAME(_hx_pos_5817b7496e2cc546_118_doDef,"MenuElevator","doDef",0x22031619,"MenuElevator.doDef","MenuElevator.hx",118,0x6d204e91)
HX_LOCAL_STACK_FRAME(_hx_pos_5817b7496e2cc546_114_doDef,"MenuElevator","doDef",0x22031619,"MenuElevator.doDef","MenuElevator.hx",114,0x6d204e91)

void MenuElevator_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_GC_STACKFRAME(&_hx_pos_5817b7496e2cc546_14_new)
HXLINE(  27)		this->nextEnd = false;
HXLINE(  26)		this->specialDial = false;
HXLINE(  25)		this->complaintcode = 0;
HXLINE(  24)		this->curdial = 0;
HXLINE(  23)		this->dials = 3;
HXLINE(  21)		this->selected = false;
HXLINE(  20)		this->opt = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE(  19)		this->to = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  16)		this->plan = 0;
HXLINE(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic MenuElevator_obj::__CreateEmpty() { return new MenuElevator_obj; }

void *MenuElevator_obj::_hx_vtable = 0;

Dynamic MenuElevator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuElevator_obj > _hx_result = new MenuElevator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuElevator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x18faf50d) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x18faf50d;
			} else {
				return inClassId==(int)0x23a57bae;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MenuElevator_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_5817b7496e2cc546_29_create)
HXLINE(  30)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  30)		int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN(  30)		int _hx_tmp2 = ::flixel::FlxG_obj::height;
HXDLIN(  30)		this->add(_hx_tmp->makeGraphic(_hx_tmp1,_hx_tmp2,::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(HX_("#575656",c7,ba,94,ae)),null(),null())->screenCenter(null()));
HXLINE(  32)		this->thething =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,150,-16777216,null(),null());
HXLINE(  33)		this->thething->screenCenter(null());
HXLINE(  34)		this->thething->set_alpha(((Float)0.5));
HXLINE(  35)		this->add(this->thething);
HXLINE(  37)		this->alp =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),((HX_("< ",64,34,00,00) + this->plan) + HX_(" >",1e,1c,00,00)),true,null(),null(),null());
HXLINE(  38)		this->alp->screenCenter(null());
HXLINE(  39)		this->add(this->alp);
HXLINE(  41)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,-1000,null());
HXDLIN(  41)		::String library = null();
HXDLIN(  41)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("sealPNG/0",cd,3e,59,87));
HXDLIN(  41)		 ::Dynamic _hx_tmp4;
HXDLIN(  41)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  41)			_hx_tmp4 = imageToReturn;
            		}
            		else {
HXLINE(  41)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("sealPNG/0",cd,3e,59,87)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  41)		this->dial = _hx_tmp3->loadGraphic(_hx_tmp4,null(),null(),null(),null(),null());
HXLINE(  42)		this->dial->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  43)		this->add(this->dial);
            	}


void MenuElevator_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_5817b7496e2cc546_47_update)
HXLINE(  48)		this->super::update(elapsed);
HXLINE(  49)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  49)		bool keys_0 = _this->keyManager->checkStatus(37,_this->status);
HXDLIN(  49)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  49)		bool keys_1 = _this1->keyManager->checkStatus(39,_this1->status);
HXDLIN(  49)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  49)		bool keys_2 = _this2->keyManager->checkStatus(13,_this2->status);
HXDLIN(  49)		 ::flixel::input::keyboard::FlxKeyList _this3 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  49)		bool keys_3 = _this3->keyManager->checkStatus(38,_this3->status);
HXDLIN(  49)		 ::flixel::input::keyboard::FlxKeyList _this4 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  49)		bool keys_4 = _this4->keyManager->checkStatus(40,_this4->status);
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (keys_0) {
HXLINE(  50)			_hx_tmp = !(this->selected);
            		}
            		else {
HXLINE(  50)			_hx_tmp = false;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  50)			 ::MenuElevator _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  50)			_hx_tmp->plan = (_hx_tmp->plan - 1);
            		}
            		else {
HXLINE(  51)			bool _hx_tmp;
HXDLIN(  51)			if (keys_1) {
HXLINE(  51)				_hx_tmp = !(this->selected);
            			}
            			else {
HXLINE(  51)				_hx_tmp = false;
            			}
HXDLIN(  51)			if (_hx_tmp) {
HXLINE(  51)				 ::MenuElevator _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  51)				_hx_tmp->plan = (_hx_tmp->plan + 1);
            			}
            		}
HXLINE(  53)		if (keys_3) {
HXLINE(  53)			 ::MenuElevator _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  53)			_hx_tmp->complaintcode = (_hx_tmp->complaintcode + 1);
            		}
            		else {
HXLINE(  54)			if (keys_4) {
HXLINE(  54)				 ::MenuElevator _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  54)				_hx_tmp->complaintcode = (_hx_tmp->complaintcode - 1);
            			}
            		}
HXLINE(  56)		this->remove(this->alp,null());
HXLINE(  57)		this->alp =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),((HX_("< ",64,34,00,00) + this->plan) + HX_(" >",1e,1c,00,00)),true,null(),null(),null());
HXLINE(  58)		this->alp->screenCenter(null());
HXLINE(  59)		this->add(this->alp);
HXLINE(  61)		bool _hx_tmp1;
HXDLIN(  61)		if (keys_2) {
HXLINE(  61)			_hx_tmp1 = !(this->selected);
            		}
            		else {
HXLINE(  61)			_hx_tmp1 = false;
            		}
HXDLIN(  61)		if (_hx_tmp1) {
HXLINE(  63)			switch((int)(this->plan)){
            				case (int)0: {
HXLINE(  66)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  66)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  66)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  68)					::Sys_obj::command(((HX_("open file://",88,b4,f5,89) + ::Sys_obj::getCwd()) + HX_("assets/images/bonus/damememan.png",4d,4a,81,b3)),null());
            				}
            				break;
            				case (int)2: {
HXLINE(  70)					::Sys_obj::command(((HX_("open file://",88,b4,f5,89) + ::Sys_obj::getCwd()) + HX_("assets/images/bonus/sens.jpg",e5,f7,9b,4b)),null());
            				}
            				break;
            				case (int)3: {
            				}
            				break;
            				case (int)44: {
HXLINE(  74)					if ((this->complaintcode == 4)) {
HXLINE(  76)						::Sys_obj::command(((HX_("open file://",88,b4,f5,89) + ::Sys_obj::getCwd()) + HX_("assets/images/fakecomplaint.png",26,e8,3e,bd)),null());
            					}
            					else {
HXLINE(  80)						this->doDef(true);
            					}
            				}
            				break;
            				default:{
HXLINE(  83)					this->doDef(false);
            				}
            			}
            		}
HXLINE(  87)		bool _hx_tmp2;
HXDLIN(  87)		if (keys_2) {
HXLINE(  87)			_hx_tmp2 = this->selected;
            		}
            		else {
HXLINE(  87)			_hx_tmp2 = false;
            		}
HXDLIN(  87)		if (_hx_tmp2) {
HXLINE(  89)			 ::MenuElevator _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  89)			_hx_tmp->curdial = (_hx_tmp->curdial + 1);
HXLINE(  90)			bool _hx_tmp1;
HXDLIN(  90)			if ((this->curdial != 4)) {
HXLINE(  90)				_hx_tmp1 = !(this->nextEnd);
            			}
            			else {
HXLINE(  90)				_hx_tmp1 = false;
            			}
HXDLIN(  90)			if (_hx_tmp1) {
HXLINE(  92)				this->remove(this->dial,null());
HXLINE(  93)				 ::flixel::FlxSprite _hx_tmp = this->dial;
HXDLIN(  93)				::String key;
HXDLIN(  93)				bool key1;
HXDLIN(  93)				if (this->specialDial) {
HXLINE(  93)					key1 = (this->curdial == 1);
            				}
            				else {
HXLINE(  93)					key1 = false;
            				}
HXDLIN(  93)				if (key1) {
HXLINE(  93)					key = HX_("-special",ac,89,33,ed);
            				}
            				else {
HXLINE(  93)					key = HX_("",00,00,00,00);
            				}
HXDLIN(  93)				::String key2 = ((HX_("sealPNG/",03,44,a2,46) + this->curdial) + key);
HXDLIN(  93)				::String library = null();
HXDLIN(  93)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key2);
HXDLIN(  93)				 ::Dynamic _hx_tmp1;
HXDLIN(  93)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  93)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE(  93)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key2) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN(  93)				_hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE(  94)				this->add(this->dial);
HXLINE(  95)				bool _hx_tmp2;
HXDLIN(  95)				if ((this->curdial == 1)) {
HXLINE(  95)					_hx_tmp2 = this->specialDial;
            				}
            				else {
HXLINE(  95)					_hx_tmp2 = false;
            				}
HXDLIN(  95)				if (_hx_tmp2) {
HXLINE(  95)					this->nextEnd = true;
            				}
            			}
            			else {
HXLINE(  99)				this->specialDial = false;
HXLINE( 100)				this->nextEnd = false;
HXLINE( 101)				this->curdial = 0;
HXLINE( 102)				this->remove(this->dial,null());
HXLINE( 103)				 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN( 103)				::String library = null();
HXDLIN( 103)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("sealPNG/0",cd,3e,59,87));
HXDLIN( 103)				 ::Dynamic _hx_tmp1;
HXDLIN( 103)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 103)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE( 103)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("sealPNG/0",cd,3e,59,87)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
HXDLIN( 103)				this->dial = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE( 104)				this->dial->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 105)				this->add(this->dial);
HXLINE( 106)				::flixel::tweens::FlxTween_obj::tween(this->dial, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("y",79,00,00,00),-1000)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
HXLINE( 108)				this->selected = false;
            			}
            		}
            	}


void MenuElevator_obj::doDef(bool isSpecial){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MenuElevator,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer lele){
            			HX_GC_STACKFRAME(&_hx_pos_5817b7496e2cc546_118_doDef)
HXLINE( 120)			::flixel::tweens::FlxTween_obj::tween(_gthis->dial, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())));
HXLINE( 121)			_gthis->selected = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_5817b7496e2cc546_114_doDef)
HXDLIN( 114)		 ::MenuElevator _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 116)		::flixel::FlxG_obj::camera->flash(-1,((Float)0.1),null(),null());
HXLINE( 117)		::flixel::FlxG_obj::camera->shake(((Float)0.03),((Float)0.1),null(),null(),null());
HXLINE( 118)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuElevator_obj,doDef,(void))


::hx::ObjectPtr< MenuElevator_obj > MenuElevator_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MenuElevator_obj > __this = new MenuElevator_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MenuElevator_obj > MenuElevator_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MenuElevator_obj *__this = (MenuElevator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuElevator_obj), true, "MenuElevator"));
	*(void **)__this = MenuElevator_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MenuElevator_obj::MenuElevator_obj()
{
}

void MenuElevator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuElevator);
	HX_MARK_MEMBER_NAME(plan,"plan");
	HX_MARK_MEMBER_NAME(alp,"alp");
	HX_MARK_MEMBER_NAME(thething,"thething");
	HX_MARK_MEMBER_NAME(to,"to");
	HX_MARK_MEMBER_NAME(opt,"opt");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(dial,"dial");
	HX_MARK_MEMBER_NAME(dials,"dials");
	HX_MARK_MEMBER_NAME(curdial,"curdial");
	HX_MARK_MEMBER_NAME(complaintcode,"complaintcode");
	HX_MARK_MEMBER_NAME(specialDial,"specialDial");
	HX_MARK_MEMBER_NAME(nextEnd,"nextEnd");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuElevator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(plan,"plan");
	HX_VISIT_MEMBER_NAME(alp,"alp");
	HX_VISIT_MEMBER_NAME(thething,"thething");
	HX_VISIT_MEMBER_NAME(to,"to");
	HX_VISIT_MEMBER_NAME(opt,"opt");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(dial,"dial");
	HX_VISIT_MEMBER_NAME(dials,"dials");
	HX_VISIT_MEMBER_NAME(curdial,"curdial");
	HX_VISIT_MEMBER_NAME(complaintcode,"complaintcode");
	HX_VISIT_MEMBER_NAME(specialDial,"specialDial");
	HX_VISIT_MEMBER_NAME(nextEnd,"nextEnd");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuElevator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return ::hx::Val( to ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"alp") ) { return ::hx::Val( alp ); }
		if (HX_FIELD_EQ(inName,"opt") ) { return ::hx::Val( opt ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"plan") ) { return ::hx::Val( plan ); }
		if (HX_FIELD_EQ(inName,"dial") ) { return ::hx::Val( dial ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dials") ) { return ::hx::Val( dials ); }
		if (HX_FIELD_EQ(inName,"doDef") ) { return ::hx::Val( doDef_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curdial") ) { return ::hx::Val( curdial ); }
		if (HX_FIELD_EQ(inName,"nextEnd") ) { return ::hx::Val( nextEnd ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"thething") ) { return ::hx::Val( thething ); }
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"specialDial") ) { return ::hx::Val( specialDial ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"complaintcode") ) { return ::hx::Val( complaintcode ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuElevator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { to=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"alp") ) { alp=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opt") ) { opt=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"plan") ) { plan=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dial") ) { dial=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dials") ) { dials=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curdial") ) { curdial=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextEnd") ) { nextEnd=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"thething") ) { thething=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"specialDial") ) { specialDial=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"complaintcode") ) { complaintcode=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuElevator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("plan",e9,2d,5a,4a));
	outFields->push(HX_("alp",25,f9,49,00));
	outFields->push(HX_("thething",dd,ed,28,41));
	outFields->push(HX_("to",7b,65,00,00));
	outFields->push(HX_("opt",33,9c,54,00));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("dial",b0,57,69,42));
	outFields->push(HX_("dials",c3,62,c3,d9));
	outFields->push(HX_("curdial",30,9d,a5,c2));
	outFields->push(HX_("complaintcode",d8,18,7e,3a));
	outFields->push(HX_("specialDial",89,0e,b4,8f));
	outFields->push(HX_("nextEnd",a8,90,3b,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuElevator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(MenuElevator_obj,plan),HX_("plan",e9,2d,5a,4a)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(MenuElevator_obj,alp),HX_("alp",25,f9,49,00)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MenuElevator_obj,thething),HX_("thething",dd,ed,28,41)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(MenuElevator_obj,to),HX_("to",7b,65,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MenuElevator_obj,opt),HX_("opt",33,9c,54,00)},
	{::hx::fsBool,(int)offsetof(MenuElevator_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MenuElevator_obj,dial),HX_("dial",b0,57,69,42)},
	{::hx::fsInt,(int)offsetof(MenuElevator_obj,dials),HX_("dials",c3,62,c3,d9)},
	{::hx::fsInt,(int)offsetof(MenuElevator_obj,curdial),HX_("curdial",30,9d,a5,c2)},
	{::hx::fsInt,(int)offsetof(MenuElevator_obj,complaintcode),HX_("complaintcode",d8,18,7e,3a)},
	{::hx::fsBool,(int)offsetof(MenuElevator_obj,specialDial),HX_("specialDial",89,0e,b4,8f)},
	{::hx::fsBool,(int)offsetof(MenuElevator_obj,nextEnd),HX_("nextEnd",a8,90,3b,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuElevator_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuElevator_obj_sMemberFields[] = {
	HX_("plan",e9,2d,5a,4a),
	HX_("alp",25,f9,49,00),
	HX_("thething",dd,ed,28,41),
	HX_("to",7b,65,00,00),
	HX_("opt",33,9c,54,00),
	HX_("selected",5b,2a,6d,b1),
	HX_("dial",b0,57,69,42),
	HX_("dials",c3,62,c3,d9),
	HX_("curdial",30,9d,a5,c2),
	HX_("complaintcode",d8,18,7e,3a),
	HX_("specialDial",89,0e,b4,8f),
	HX_("nextEnd",a8,90,3b,a5),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("doDef",fa,a2,a4,dd),
	::String(null()) };

::hx::Class MenuElevator_obj::__mClass;

void MenuElevator_obj::__register()
{
	MenuElevator_obj _hx_dummy;
	MenuElevator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuElevator",4d,a2,19,30);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuElevator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuElevator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuElevator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuElevator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

