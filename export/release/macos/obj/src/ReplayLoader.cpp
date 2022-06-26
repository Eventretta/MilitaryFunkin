#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_ReplayLoader
#include <ReplayLoader.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_editors_MasterEditorMenu
#include <editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a7ab578028843a4f_28_new,"ReplayLoader","new",0x9c22ccac,"ReplayLoader.new","ReplayLoader.hx",28,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_44_create,"ReplayLoader","create",0x79022230,"ReplayLoader.create","ReplayLoader.hx",44,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_249_update,"ReplayLoader","update",0x83f8413d,"ReplayLoader.update","ReplayLoader.hx",249,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_170_update,"ReplayLoader","update",0x83f8413d,"ReplayLoader.update","ReplayLoader.hx",170,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_215_update,"ReplayLoader","update",0x83f8413d,"ReplayLoader.update","ReplayLoader.hx",215,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_221_update,"ReplayLoader","update",0x83f8413d,"ReplayLoader.update","ReplayLoader.hx",221,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_228_update,"ReplayLoader","update",0x83f8413d,"ReplayLoader.update","ReplayLoader.hx",228,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_264_changeItem,"ReplayLoader","changeItem",0x5d4b5fd7,"ReplayLoader.changeItem","ReplayLoader.hx",264,0x1c406c44)
HX_LOCAL_STACK_FRAME(_hx_pos_a7ab578028843a4f_254_changeItem,"ReplayLoader","changeItem",0x5d4b5fd7,"ReplayLoader.changeItem","ReplayLoader.hx",254,0x1c406c44)

void ReplayLoader_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a7ab578028843a4f_28_new)
HXLINE( 167)		this->selectedSomethin = false;
HXLINE(  36)		this->optionShit = ::Array_obj< ::String >::__new(0);
HXLINE(  30)		this->curSelected = 0;
HXLINE(  28)		super::__construct(TransIn,TransOut);
            	}

Dynamic ReplayLoader_obj::__CreateEmpty() { return new ReplayLoader_obj; }

void *ReplayLoader_obj::_hx_vtable = 0;

Dynamic ReplayLoader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ReplayLoader_obj > _hx_result = new ReplayLoader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ReplayLoader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x017000de) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x017000de;
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

void ReplayLoader_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_a7ab578028843a4f_44_create)
HXLINE(  47)		::DiscordClient_obj::changePresence(HX_("Replay Loader",ec,3f,eb,7e),null(),null(),null(),null());
HXLINE(  50)		this->debugKeys = ::ClientPrefs_obj::copyKey(( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(HX_("debug_1",05,20,57,5b))) ));
HXLINE(  52)		this->camGame =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  53)		this->camAchievement =  ::flixel::FlxCamera_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
HXLINE(  54)		{
HXLINE(  54)			 ::flixel::FlxCamera _hx_tmp = this->camAchievement;
HXDLIN(  54)			_hx_tmp->bgColor = (_hx_tmp->bgColor & 16777215);
HXDLIN(  54)			 ::flixel::FlxCamera _hx_tmp1 = this->camAchievement;
HXDLIN(  54)			_hx_tmp1->bgColor = (_hx_tmp1->bgColor | 0);
            		}
HXLINE(  56)		::flixel::FlxG_obj::cameras->reset(this->camGame);
HXLINE(  57)		::flixel::FlxG_obj::cameras->add(this->camAchievement,null()).StaticCast<  ::flixel::FlxCamera >();
HXLINE(  58)		::flixel::FlxCamera_obj::_defaultCameras = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->camGame);
HXLINE(  60)		this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE(  61)		this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE(  63)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  65)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  65)		::String library = null();
HXDLIN(  65)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuBG",24,65,6d,05));
HXDLIN(  65)		 ::Dynamic bg1;
HXDLIN(  65)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  65)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  65)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuBG",24,65,6d,05)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  65)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  66)		bg2->scrollFactor->set(0,0);
HXLINE(  67)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.175))),null());
HXLINE(  68)		bg2->updateHitbox();
HXLINE(  69)		bg2->screenCenter(null());
HXLINE(  70)		bg2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  71)		this->add(bg2);
HXLINE(  73)		this->camFollow =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  74)		this->camFollowPos =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  75)		this->add(this->camFollow);
HXLINE(  76)		this->add(this->camFollowPos);
HXLINE(  78)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  78)		::String library1 = null();
HXDLIN(  78)		 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  78)		 ::Dynamic _hx_tmp3;
HXDLIN(  78)		if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE(  78)			_hx_tmp3 = imageToReturn1;
            		}
            		else {
HXLINE(  78)			_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            		}
HXDLIN(  78)		this->magenta = _hx_tmp2->loadGraphic(_hx_tmp3,null(),null(),null(),null(),null());
HXLINE(  79)		this->magenta->scrollFactor->set(0,0);
HXLINE(  80)		 ::flixel::FlxSprite _hx_tmp4 = this->magenta;
HXDLIN(  80)		_hx_tmp4->setGraphicSize(::Std_obj::_hx_int((this->magenta->get_width() * ((Float)1.175))),null());
HXLINE(  81)		this->magenta->updateHitbox();
HXLINE(  82)		this->magenta->screenCenter(null());
HXLINE(  83)		this->magenta->set_visible(false);
HXLINE(  84)		this->magenta->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  85)		this->magenta->set_color(-167525);
HXLINE(  86)		this->add(this->magenta);
HXLINE(  89)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  90)		this->add(this->menuItems);
HXLINE(  92)		Float scale = ( (Float)(1) );
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(::Sys_obj::getCwd());
HXDLIN( 102)			while((_g < _g1->length)){
HXLINE( 102)				::String folders = _g1->__get(_g);
HXDLIN( 102)				_g = (_g + 1);
HXLINE( 104)				if (::StringTools_obj::endsWith(folders,HX_("-replay",14,c7,c7,55))) {
HXLINE( 106)					this->optionShit->push(folders);
            				}
            			}
            		}
HXLINE( 110)		{
HXLINE( 110)			int _g2 = 0;
HXDLIN( 110)			int _g3 = this->optionShit->length;
HXDLIN( 110)			while((_g2 < _g3)){
HXLINE( 110)				_g2 = (_g2 + 1);
HXDLIN( 110)				int i = (_g2 - 1);
HXLINE( 112)				Float offset = (( (Float)(108) ) - ((::Math_obj::max(( (Float)(this->optionShit->length) ),( (Float)(4) )) - ( (Float)(4) )) * ( (Float)(80) )));
HXLINE( 113)				 ::Alphabet menuItem =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),((i * 140) + offset),this->optionShit->__get(i),true,null(),null(),null());
HXLINE( 114)				menuItem->scale->set_x(scale);
HXLINE( 115)				menuItem->scale->set_y(scale);
HXLINE( 116)				menuItem->ID = i;
HXLINE( 117)				menuItem->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 118)				menuItem->set_x((menuItem->x + 190));
HXLINE( 119)				this->menuItems->add(menuItem).StaticCast<  ::Alphabet >();
HXLINE( 120)				Float scr = (( (Float)((this->optionShit->length - 4)) ) * ((Float)0.135));
HXLINE( 121)				if ((this->optionShit->length < 6)) {
HXLINE( 121)					scr = ( (Float)(0) );
            				}
HXLINE( 122)				menuItem->scrollFactor->set(0,scr);
HXLINE( 123)				menuItem->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 125)				menuItem->updateHitbox();
            			}
            		}
HXLINE( 128)		::flixel::FlxG_obj::camera->follow(this->camFollowPos,null(),1);
HXLINE( 130)		 ::flixel::text::FlxText versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 24),0,HX_("REPLAY LOADER (BETA)",c5,d8,b5,d4),12,null());
HXLINE( 131)		versionShit->scrollFactor->set(null(),null());
HXLINE( 132)		versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 133)		this->add(versionShit);
HXLINE( 134)		 ::flixel::text::FlxText versionShit1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 48),0,HX_("THIS IS NOT 100% ACCURATE!",e2,b7,6f,78),12,null());
HXLINE( 135)		versionShit1->scrollFactor->set(null(),null());
HXLINE( 136)		versionShit1->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 137)		this->add(versionShit1);
HXLINE( 140)		this->changeItem(null());
HXLINE( 155)		this->super::create();
            	}


void ReplayLoader_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_GC_STACKFRAME(&_hx_pos_a7ab578028843a4f_249_update)
HXLINE( 249)			spr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_a7ab578028843a4f_170_update)
HXDLIN( 170)		 ::ReplayLoader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 171)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 173)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 173)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 176)		Float lerpVal = ::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(elapsed * ((Float)7.5))));
HXLINE( 177)		Float a = this->camFollowPos->x;
HXDLIN( 177)		Float a1 = this->camFollowPos->y;
HXDLIN( 177)		this->camFollowPos->setPosition((a + (lerpVal * (this->camFollow->x - a))),(a1 + (lerpVal * (this->camFollow->y - a1))));
HXLINE( 179)		if (!(this->selectedSomethin)) {
HXLINE( 181)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 183)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 183)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 184)				this->changeItem(-1);
            			}
HXLINE( 187)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 189)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 189)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 190)				this->changeItem(1);
            			}
HXLINE( 193)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 195)				this->selectedSomethin = true;
HXLINE( 196)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 196)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 197)				::MusicBeatState_obj::switchState( ::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE( 200)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 202)				if ((this->optionShit->__get(this->curSelected) == HX_("donate",6f,f1,29,2e))) {
HXLINE( 204)					::CoolUtil_obj::browserLoad(HX_("https://ninja-muffin24.itch.io/funkin",69,b0,72,92));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::ReplayLoader,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::FlxSprite spr){
            						HX_GC_STACKFRAME(&_hx_pos_a7ab578028843a4f_215_update)
HXLINE( 215)						if ((_gthis->curSelected != spr->ID)) {
            							HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,spr) HXARGC(1)
            							void _hx_run( ::flixel::tweens::FlxTween twn){
            								HX_GC_STACKFRAME(&_hx_pos_a7ab578028843a4f_221_update)
HXLINE( 221)								spr->kill();
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 217)							::flixel::tweens::FlxTween_obj::tween(spr, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("alpha",5e,a7,96,21),0)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadOut_dyn())
            								->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(spr)))));
            						}
            						else {
            							HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            							void _hx_run( ::flixel::effects::FlxFlicker flick){
            								HX_GC_STACKFRAME(&_hx_pos_a7ab578028843a4f_228_update)
HXLINE( 229)								::PlayState_obj::isReplay = true;
HXLINE( 230)								::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true));
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 227)							::flixel::effects::FlxFlicker_obj::flicker(spr,1,((Float)0.06),false,false, ::Dynamic(new _hx_Closure_1()),null());
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 208)					this->selectedSomethin = true;
HXLINE( 209)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 209)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 211)					if (::ClientPrefs_obj::flashing) {
HXLINE( 211)						::flixel::effects::FlxFlicker_obj::flicker(this->magenta,((Float)1.1),((Float)0.15),false,null(),null(),null());
            					}
HXLINE( 213)					this->menuItems->forEach( ::Dynamic(new _hx_Closure_2(_gthis)),null());
            				}
            			}
            			else {
HXLINE( 237)				if (::flixel::FlxG_obj::keys->checkKeyArrayState(this->debugKeys,2)) {
HXLINE( 239)					this->selectedSomethin = true;
HXLINE( 240)					::MusicBeatState_obj::switchState( ::editors::MasterEditorMenu_obj::__alloc( HX_CTX ,null(),null()));
            				}
            			}
            		}
HXLINE( 245)		this->super::update(elapsed);
HXLINE( 247)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_3()),null());
            	}


void ReplayLoader_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::ReplayLoader,_gthis) HXARGC(1)
            		void _hx_run( ::Alphabet item){
            			HX_STACKFRAME(&_hx_pos_a7ab578028843a4f_264_changeItem)
HXLINE( 264)			if ((item->ID == _gthis->curSelected)) {
HXLINE( 266)				item->set_alpha(( (Float)(1) ));
            			}
            			else {
HXLINE( 270)				item->set_alpha(((Float)0.6));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_a7ab578028843a4f_254_changeItem)
HXDLIN( 254)		 ::ReplayLoader _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 255)		 ::ReplayLoader _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 255)		_hx_tmp->curSelected = (_hx_tmp->curSelected + huh);
HXLINE( 257)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 258)			this->curSelected = 0;
            		}
HXLINE( 259)		if ((this->curSelected < 0)) {
HXLINE( 260)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 262)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ReplayLoader_obj,changeItem,(void))


::hx::ObjectPtr< ReplayLoader_obj > ReplayLoader_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< ReplayLoader_obj > __this = new ReplayLoader_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< ReplayLoader_obj > ReplayLoader_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	ReplayLoader_obj *__this = (ReplayLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ReplayLoader_obj), true, "ReplayLoader"));
	*(void **)__this = ReplayLoader_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

ReplayLoader_obj::ReplayLoader_obj()
{
}

void ReplayLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReplayLoader);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(camGame,"camGame");
	HX_MARK_MEMBER_NAME(camAchievement,"camAchievement");
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(magenta,"magenta");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_MARK_MEMBER_NAME(debugKeys,"debugKeys");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ReplayLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(camGame,"camGame");
	HX_VISIT_MEMBER_NAME(camAchievement,"camAchievement");
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(magenta,"magenta");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_VISIT_MEMBER_NAME(debugKeys,"debugKeys");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ReplayLoader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camGame") ) { return ::hx::Val( camGame ); }
		if (HX_FIELD_EQ(inName,"magenta") ) { return ::hx::Val( magenta ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		if (HX_FIELD_EQ(inName,"debugKeys") ) { return ::hx::Val( debugKeys ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { return ::hx::Val( camFollowPos ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"camAchievement") ) { return ::hx::Val( camAchievement ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ReplayLoader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"camGame") ) { camGame=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugKeys") ) { debugKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { camFollowPos=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"camAchievement") ) { camAchievement=inValue.Cast<  ::flixel::FlxCamera >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ReplayLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("last",56,0a,ad,47));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("camGame",a1,47,50,cf));
	outFields->push(HX_("camAchievement",a0,d0,67,f8));
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("camFollowPos",94,32,de,8d));
	outFields->push(HX_("debugKeys",e7,85,52,2a));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ReplayLoader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ReplayLoader_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(ReplayLoader_obj,last),HX_("last",56,0a,ad,47)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ReplayLoader_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(ReplayLoader_obj,camGame),HX_("camGame",a1,47,50,cf)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(int)offsetof(ReplayLoader_obj,camAchievement),HX_("camAchievement",a0,d0,67,f8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ReplayLoader_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(ReplayLoader_obj,magenta),HX_("magenta",29,ba,9d,0e)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(ReplayLoader_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(ReplayLoader_obj,camFollowPos),HX_("camFollowPos",94,32,de,8d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ReplayLoader_obj,debugKeys),HX_("debugKeys",e7,85,52,2a)},
	{::hx::fsBool,(int)offsetof(ReplayLoader_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ReplayLoader_obj_sStaticStorageInfo = 0;
#endif

static ::String ReplayLoader_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("last",56,0a,ad,47),
	HX_("menuItems",e1,15,e5,5c),
	HX_("camGame",a1,47,50,cf),
	HX_("camAchievement",a0,d0,67,f8),
	HX_("optionShit",d5,2d,ee,91),
	HX_("magenta",29,ba,9d,0e),
	HX_("camFollow",e0,6e,47,22),
	HX_("camFollowPos",94,32,de,8d),
	HX_("debugKeys",e7,85,52,2a),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

::hx::Class ReplayLoader_obj::__mClass;

void ReplayLoader_obj::__register()
{
	ReplayLoader_obj _hx_dummy;
	ReplayLoader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ReplayLoader",ba,46,44,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ReplayLoader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ReplayLoader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ReplayLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ReplayLoader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

