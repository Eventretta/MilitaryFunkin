#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_CheckboxThingie
#include <CheckboxThingie.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_GameplayChangersSubstate
#include <GameplayChangersSubstate.h>
#endif
#ifndef INCLUDED_GameplayOption
#include <GameplayOption.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_96606cf9b666a443_30_new,"GameplayChangersSubstate","new",0x5f312efa,"GameplayChangersSubstate.new","GameplayChangersSubstate.hx",30,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_41_getOptions,"GameplayChangersSubstate","getOptions",0x0462c20e,"GameplayChangersSubstate.getOptions","GameplayChangersSubstate.hx",41,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_153_update,"GameplayChangersSubstate","update",0x9821c3af,"GameplayChangersSubstate.update","GameplayChangersSubstate.hx",153,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_285_updateTextFrom,"GameplayChangersSubstate","updateTextFrom",0x57933f86,"GameplayChangersSubstate.updateTextFrom","GameplayChangersSubstate.hx",285,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_294_clearHold,"GameplayChangersSubstate","clearHold",0x00f4ff86,"GameplayChangersSubstate.clearHold","GameplayChangersSubstate.hx",294,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_302_changeSelection,"GameplayChangersSubstate","changeSelection",0xa2f37656,"GameplayChangersSubstate.changeSelection","GameplayChangersSubstate.hx",302,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_331_reloadCheckboxes,"GameplayChangersSubstate","reloadCheckboxes",0xe10eeb50,"GameplayChangersSubstate.reloadCheckboxes","GameplayChangersSubstate.hx",331,0xb1374db6)

void GameplayChangersSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_30_new)
HXLINE( 151)		this->holdValue = ((Float)0);
HXLINE( 150)		this->holdTime = ((Float)0);
HXLINE( 149)		this->nextAccept = 5;
HXLINE(  34)		this->optionsArray = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  33)		this->curSelected = 0;
HXLINE(  32)		this->curOption = null();
HXLINE(  98)		super::__construct();
HXLINE( 100)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 101)		bg->set_alpha(((Float)0.6));
HXLINE( 102)		this->add(bg);
HXLINE( 105)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 106)		this->add(this->grpOptions);
HXLINE( 108)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 109)		this->add(this->grpTexts);
HXLINE( 111)		this->checkboxGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 112)		this->add(this->checkboxGroup);
HXLINE( 114)		this->getOptions();
HXLINE( 116)		{
HXLINE( 116)			int _g = 0;
HXDLIN( 116)			int _g1 = this->optionsArray->get_length();
HXDLIN( 116)			while((_g < _g1)){
HXLINE( 116)				_g = (_g + 1);
HXDLIN( 116)				int i = (_g - 1);
HXLINE( 118)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((70 * i)) ),( (::String)(this->optionsArray->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),true,false,((Float)0.05),((Float)0.8));
HXLINE( 119)				optionText->isMenuItem = true;
HXLINE( 120)				optionText->set_x((optionText->x + 300));
HXLINE( 123)				optionText->xAdd = ( (Float)(120) );
HXLINE( 124)				optionText->targetY = ( (Float)(i) );
HXLINE( 125)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 127)				if (::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),HX_("bool",2a,84,1b,41) )) {
HXLINE( 128)					Float checkbox = (optionText->x - ( (Float)(105) ));
HXDLIN( 128)					Float optionText1 = optionText->y;
HXDLIN( 128)					 ::CheckboxThingie checkbox1 =  ::CheckboxThingie_obj::__alloc( HX_CTX ,checkbox,optionText1,::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
HXLINE( 129)					checkbox1->sprTracker = optionText;
HXLINE( 130)					checkbox1->offsetY = ( (Float)(-60) );
HXLINE( 131)					checkbox1->ID = i;
HXLINE( 132)					this->checkboxGroup->add(checkbox1).StaticCast<  ::CheckboxThingie >();
HXLINE( 133)					 ::Alphabet optionText2 = optionText;
HXDLIN( 133)					optionText2->xAdd = (optionText2->xAdd + 80);
            				}
            				else {
HXLINE( 135)					::String valueText = (HX_("",00,00,00,00) + ::Std_obj::string(this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)()));
HXDLIN( 135)					 ::AttachedText valueText1 =  ::AttachedText_obj::__alloc( HX_CTX ,valueText,(optionText->get_width() + 80),null(),true,((Float)0.8));
HXLINE( 136)					valueText1->sprTracker = optionText;
HXLINE( 137)					valueText1->copyAlpha = true;
HXLINE( 138)					valueText1->ID = i;
HXLINE( 139)					this->grpTexts->add(valueText1).StaticCast<  ::AttachedText >();
HXLINE( 140)					this->optionsArray->__get(i)->__Field(HX_("setChild",9a,12,ee,53),::hx::paccDynamic)(valueText1);
            				}
HXLINE( 142)				this->updateTextFrom(( ( ::GameplayOption)(this->optionsArray->__get(i)) ));
            			}
            		}
HXLINE( 145)		this->changeSelection(null());
HXLINE( 146)		this->reloadCheckboxes();
            	}

Dynamic GameplayChangersSubstate_obj::__CreateEmpty() { return new GameplayChangersSubstate_obj; }

void *GameplayChangersSubstate_obj::_hx_vtable = 0;

Dynamic GameplayChangersSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplayChangersSubstate_obj > _hx_result = new GameplayChangersSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameplayChangersSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x52f65cc8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x52f65cc8;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void GameplayChangersSubstate_obj::getOptions(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_41_getOptions)
HXLINE(  42)		 ::GameplayOption option =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Scroll Speed",34,bf,42,cb),HX_("scrollspeed",5a,70,19,38),HX_("float",9c,c5,96,02),1,null());
HXLINE(  43)		option->scrollSpeed = ((Float)1.5);
HXLINE(  44)		option->minValue = ((Float)0.5);
HXLINE(  45)		option->maxValue = 3;
HXLINE(  46)		option->changeValue = ((Float)0.1);
HXLINE(  47)		option->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  48)		this->optionsArray->push(option);
HXLINE(  58)		 ::GameplayOption option1 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Gain Multiplier",1e,c6,e7,2f),HX_("healthgain",1b,97,1b,16),HX_("float",9c,c5,96,02),1,null());
HXLINE(  59)		option1->scrollSpeed = ((Float)2.5);
HXLINE(  60)		option1->minValue = 0;
HXLINE(  61)		option1->maxValue = 5;
HXLINE(  62)		option1->changeValue = ((Float)0.1);
HXLINE(  63)		option1->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  64)		this->optionsArray->push(option1);
HXLINE(  66)		 ::GameplayOption option2 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Loss Multiplier",3a,7f,8e,c0),HX_("healthloss",7f,50,74,19),HX_("float",9c,c5,96,02),1,null());
HXLINE(  67)		option2->scrollSpeed = ((Float)2.5);
HXLINE(  68)		option2->minValue = ((Float)0.5);
HXLINE(  69)		option2->maxValue = 5;
HXLINE(  70)		option2->changeValue = ((Float)0.1);
HXLINE(  71)		option2->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  72)		this->optionsArray->push(option2);
HXLINE(  74)		 ::GameplayOption option3 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Instakill on Miss",76,d5,a0,bc),HX_("instakill",f9,72,23,49),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  75)		this->optionsArray->push(option3);
HXLINE(  77)		 ::GameplayOption option4 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Practice Mode",e8,58,72,66),HX_("practice",bb,00,e7,a0),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  78)		this->optionsArray->push(option4);
HXLINE(  80)		 ::GameplayOption option5 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Botplay",5b,23,fb,2e),HX_("botplay",7b,fb,a9,61),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  81)		this->optionsArray->push(option5);
HXLINE(  83)		 ::GameplayOption option6 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Challenge mode",60,3c,a5,4f),HX_("challenge",63,f4,63,32),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  84)		this->optionsArray->push(option6);
HXLINE(  86)		 ::GameplayOption option7 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Opponent play",37,5b,2d,37),HX_("opponentPlay",31,a6,25,71),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  87)		this->optionsArray->push(option7);
HXLINE(  89)		if (::Main_obj::exes) {
HXLINE(  91)			 ::GameplayOption option =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("The EXES will take over.",bf,0b,d6,28),HX_("takeover",1b,79,de,e5),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  92)			this->optionsArray->push(option);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,getOptions,(void))

void GameplayChangersSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_153_update)
HXLINE( 154)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 156)			this->changeSelection(-1);
            		}
HXLINE( 158)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 160)			this->changeSelection(1);
            		}
HXLINE( 163)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 164)			this->close();
HXLINE( 165)			::ClientPrefs_obj::saveSettings();
HXLINE( 166)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 166)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 169)		if ((this->nextAccept <= 0)) {
HXLINE( 171)			bool usesCheckbox = true;
HXLINE( 172)			if ((this->curOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 174)				usesCheckbox = false;
            			}
HXLINE( 177)			if (usesCheckbox) {
HXLINE( 179)				if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 181)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 181)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 182)					 ::GameplayOption _hx_tmp1 = this->curOption;
HXDLIN( 182)					 ::Dynamic _hx_tmp2;
HXDLIN( 182)					if (::hx::IsEq( this->curOption->getValue(),true )) {
HXLINE( 182)						_hx_tmp2 = false;
            					}
            					else {
HXLINE( 182)						_hx_tmp2 = true;
            					}
HXDLIN( 182)					_hx_tmp1->setValue(_hx_tmp2);
HXLINE( 183)					this->curOption->change();
HXLINE( 184)					this->reloadCheckboxes();
            				}
            			}
            			else {
HXLINE( 187)				bool _hx_tmp;
HXDLIN( 187)				if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 187)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            				}
            				else {
HXLINE( 187)					_hx_tmp = true;
            				}
HXDLIN( 187)				if (_hx_tmp) {
HXLINE( 188)					bool pressed;
HXDLIN( 188)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 188)						pressed = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            					}
            					else {
HXLINE( 188)						pressed = true;
            					}
HXLINE( 189)					bool _hx_tmp;
HXDLIN( 189)					if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 189)						_hx_tmp = pressed;
            					}
            					else {
HXLINE( 189)						_hx_tmp = true;
            					}
HXDLIN( 189)					if (_hx_tmp) {
HXLINE( 190)						if (pressed) {
HXLINE( 191)							 ::Dynamic add = null();
HXLINE( 192)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 193)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 193)									add = -(this->curOption->changeValue);
            								}
            								else {
HXLINE( 193)									add = this->curOption->changeValue;
            								}
            							}
HXLINE( 196)							::String _hx_switch_0 = this->curOption->get_type();
            							if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 199)								this->holdValue = ( (Float)((this->curOption->getValue() + add)) );
HXLINE( 200)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 200)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 201)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 201)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 203)								::String _hx_switch_1 = this->curOption->get_type();
            								if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ){
HXLINE( 206)									this->holdValue = ( (Float)(::Math_obj::round(this->holdValue)) );
HXLINE( 207)									this->curOption->setValue(this->holdValue);
HXLINE( 205)									goto _hx_goto_4;
            								}
            								if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ||  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 210)									this->holdValue = ::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals);
HXLINE( 211)									this->curOption->setValue(this->holdValue);
HXLINE( 209)									goto _hx_goto_4;
            								}
            								_hx_goto_4:;
HXLINE( 198)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 215)								int num = this->curOption->curOption;
HXLINE( 216)								if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 216)									num = (num - 1);
            								}
            								else {
HXLINE( 217)									num = (num + 1);
            								}
HXLINE( 219)								if ((num < 0)) {
HXLINE( 220)									num = (this->curOption->options->length - 1);
            								}
            								else {
HXLINE( 221)									if ((num >= this->curOption->options->length)) {
HXLINE( 222)										num = 0;
            									}
            								}
HXLINE( 225)								this->curOption->curOption = num;
HXLINE( 226)								this->curOption->setValue(this->curOption->options->__get(num));
HXLINE( 214)								goto _hx_goto_3;
            							}
            							_hx_goto_3:;
HXLINE( 229)							this->updateTextFrom(this->curOption);
HXLINE( 230)							this->curOption->change();
HXLINE( 231)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 231)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            						else {
HXLINE( 232)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 233)								 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 233)								Float _hx_tmp1 = _hx_tmp->holdValue;
HXDLIN( 233)								Float _hx_tmp2 = (this->curOption->scrollSpeed * elapsed);
HXDLIN( 233)								int _hx_tmp3;
HXDLIN( 233)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 233)									_hx_tmp3 = -1;
            								}
            								else {
HXLINE( 233)									_hx_tmp3 = 1;
            								}
HXDLIN( 233)								_hx_tmp->holdValue = (_hx_tmp1 + (_hx_tmp2 * ( (Float)(_hx_tmp3) )));
HXLINE( 234)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 234)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 235)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 235)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 237)								::String _hx_switch_2 = this->curOption->get_type();
            								if (  (_hx_switch_2==HX_("int",ef,0c,50,00)) ){
HXLINE( 240)									this->curOption->setValue(::Math_obj::round(this->holdValue));
HXDLIN( 240)									goto _hx_goto_5;
            								}
            								if (  (_hx_switch_2==HX_("float",9c,c5,96,02)) ||  (_hx_switch_2==HX_("percent",c5,aa,da,78)) ){
HXLINE( 243)									 ::GameplayOption _hx_tmp = this->curOption;
HXDLIN( 243)									_hx_tmp->setValue(::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals));
HXDLIN( 243)									goto _hx_goto_5;
            								}
            								_hx_goto_5:;
HXLINE( 245)								this->updateTextFrom(this->curOption);
HXLINE( 246)								this->curOption->change();
            							}
            						}
            					}
HXLINE( 250)					if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 251)						 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 251)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            				else {
HXLINE( 253)					bool _hx_tmp;
HXDLIN( 253)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 253)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            					}
            					else {
HXLINE( 253)						_hx_tmp = true;
            					}
HXDLIN( 253)					if (_hx_tmp) {
HXLINE( 254)						this->clearHold();
            					}
            				}
            			}
HXLINE( 258)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 260)				{
HXLINE( 260)					int _g = 0;
HXDLIN( 260)					int _g1 = this->optionsArray->get_length();
HXDLIN( 260)					while((_g < _g1)){
HXLINE( 260)						_g = (_g + 1);
HXDLIN( 260)						int i = (_g - 1);
HXLINE( 262)						 ::GameplayOption leOption = ( ( ::GameplayOption)(this->optionsArray->__get(i)) );
HXLINE( 263)						leOption->setValue(leOption->defaultValue);
HXLINE( 264)						if ((leOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 266)							if ((leOption->get_type() == HX_("string",d1,28,30,11))) {
HXLINE( 268)								::Array< ::String > leOption1 = leOption->options;
HXDLIN( 268)								leOption->curOption = leOption1->indexOf(leOption->getValue(),null());
            							}
HXLINE( 270)							this->updateTextFrom(leOption);
            						}
HXLINE( 272)						leOption->change();
            					}
            				}
HXLINE( 274)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 274)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 275)				this->reloadCheckboxes();
            			}
            		}
HXLINE( 279)		if ((this->nextAccept > 0)) {
HXLINE( 280)			 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 280)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 282)		this->super::update(elapsed);
            	}


void GameplayChangersSubstate_obj::updateTextFrom( ::GameplayOption option){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_285_updateTextFrom)
HXLINE( 286)		::String text = option->displayFormat;
HXLINE( 287)		 ::Dynamic val = option->getValue();
HXLINE( 288)		if ((option->get_type() == HX_("percent",c5,aa,da,78))) {
HXLINE( 288)			val = (val * 100);
            		}
HXLINE( 289)		 ::Dynamic def = option->defaultValue;
HXLINE( 290)		option->set_text(::StringTools_obj::replace(::StringTools_obj::replace(text,HX_("%v",b1,20,00,00),( (::String)(val) )),HX_("%d",9f,20,00,00),( (::String)(def) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,updateTextFrom,(void))

void GameplayChangersSubstate_obj::clearHold(){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_294_clearHold)
HXLINE( 295)		if ((this->holdTime > ((Float)0.5))) {
HXLINE( 296)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 296)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 298)		this->holdTime = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,clearHold,(void))

void GameplayChangersSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_302_changeSelection)
HXLINE( 303)		 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 303)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 304)		if ((this->curSelected < 0)) {
HXLINE( 305)			this->curSelected = (this->optionsArray->get_length() - 1);
            		}
HXLINE( 306)		if ((this->curSelected >= this->optionsArray->get_length())) {
HXLINE( 307)			this->curSelected = 0;
            		}
HXLINE( 309)		int bullShit = 0;
HXLINE( 311)		{
HXLINE( 311)			int _g = 0;
HXDLIN( 311)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 311)			while((_g < _g1->length)){
HXLINE( 311)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 311)				_g = (_g + 1);
HXLINE( 312)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 313)				bullShit = (bullShit + 1);
HXLINE( 315)				item->set_alpha(((Float)0.6));
HXLINE( 316)				if ((item->targetY == 0)) {
HXLINE( 317)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 320)		{
HXLINE( 320)			 ::Dynamic filter = null();
HXDLIN( 320)			 ::flixel::group::FlxTypedGroupIterator text =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpTexts->members,filter);
HXDLIN( 320)			while(text->hasNext()){
HXLINE( 320)				 ::AttachedText text1 = text->next().StaticCast<  ::AttachedText >();
HXLINE( 321)				text1->set_alpha(((Float)0.6));
HXLINE( 322)				if ((text1->ID == this->curSelected)) {
HXLINE( 323)					text1->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 326)		this->curOption = ( ( ::GameplayOption)(this->optionsArray->__get(this->curSelected)) );
HXLINE( 327)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 327)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,changeSelection,(void))

void GameplayChangersSubstate_obj::reloadCheckboxes(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_331_reloadCheckboxes)
HXDLIN( 331)		 ::Dynamic filter = null();
HXDLIN( 331)		 ::flixel::group::FlxTypedGroupIterator checkbox =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 331)		while(checkbox->hasNext()){
HXDLIN( 331)			 ::CheckboxThingie checkbox1 = checkbox->next().StaticCast<  ::CheckboxThingie >();
HXLINE( 332)			checkbox1->set_daValue(::hx::IsEq( this->optionsArray->__get(checkbox1->ID)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,reloadCheckboxes,(void))


::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__new() {
	::hx::ObjectPtr< GameplayChangersSubstate_obj > __this = new GameplayChangersSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameplayChangersSubstate_obj *__this = (GameplayChangersSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplayChangersSubstate_obj), true, "GameplayChangersSubstate"));
	*(void **)__this = GameplayChangersSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameplayChangersSubstate_obj::GameplayChangersSubstate_obj()
{
}

void GameplayChangersSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameplayChangersSubstate);
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(optionsArray,"optionsArray");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameplayChangersSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(optionsArray,"optionsArray");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameplayChangersSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		if (HX_FIELD_EQ(inName,"holdValue") ) { return ::hx::Val( holdValue ); }
		if (HX_FIELD_EQ(inName,"clearHold") ) { return ::hx::Val( clearHold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"getOptions") ) { return ::hx::Val( getOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { return ::hx::Val( optionsArray ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { return ::hx::Val( checkboxGroup ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateTextFrom") ) { return ::hx::Val( updateTextFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadCheckboxes") ) { return ::hx::Val( reloadCheckboxes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameplayChangersSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast<  ::GameplayOption >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdValue") ) { holdValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { optionsArray=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { checkboxGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayChangersSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("optionsArray",5b,b5,f1,e8));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxGroup",fc,3d,bc,23));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("holdValue",b2,41,96,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameplayChangersSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::GameplayOption */ ,(int)offsetof(GameplayChangersSubstate_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GameplayChangersSubstate_obj,optionsArray),HX_("optionsArray",5b,b5,f1,e8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,checkboxGroup),HX_("checkboxGroup",fc,3d,bc,23)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdValue),HX_("holdValue",b2,41,96,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameplayChangersSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplayChangersSubstate_obj_sMemberFields[] = {
	HX_("curOption",15,ed,07,9c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("optionsArray",5b,b5,f1,e8),
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxGroup",fc,3d,bc,23),
	HX_("grpTexts",01,f1,99,f0),
	HX_("getOptions",68,b9,5f,2f),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("holdValue",b2,41,96,ca),
	HX_("update",09,86,05,87),
	HX_("updateTextFrom",e0,eb,e7,7b),
	HX_("clearHold",6c,b1,d3,b8),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadCheckboxes",2a,e2,2a,45),
	::String(null()) };

::hx::Class GameplayChangersSubstate_obj::__mClass;

void GameplayChangersSubstate_obj::__register()
{
	GameplayChangersSubstate_obj _hx_dummy;
	GameplayChangersSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameplayChangersSubstate",08,ea,03,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplayChangersSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplayChangersSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplayChangersSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplayChangersSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

