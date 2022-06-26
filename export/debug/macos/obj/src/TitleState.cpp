#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_GameJoltState
#include <GameJoltState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
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
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
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
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a55214e0452daa02_51_new,"TitleState","new",0x3b23deeb,"TitleState.new","TitleState.hx",51,0xd132a6e5)
static const int _hx_array_data_8ca18d79_1[] = {
	(int)66,(int)66,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_82_create,"TitleState","create",0x801cc151,"TitleState.create","TitleState.hx",82,0xd132a6e5)
static const int _hx_array_data_8ca18d79_4[] = {
	(int)9,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_200_bop,"TitleState","bop",0x3b1acc8e,"TitleState.bop","TitleState.hx",200,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_217_startIntro,"TitleState","startIntro",0x6a094b7f,"TitleState.startIntro","TitleState.hx",217,0xd132a6e5)
static const int _hx_array_data_8ca18d79_8[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_8ca18d79_9[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_389_getIntroTextShit,"TitleState","getIntroTextShit",0x5dcf15b8,"TitleState.getIntroTextShit","TitleState.hx",389,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_406_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",406,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_456_update,"TitleState","update",0x8b12e05e,"TitleState.update","TitleState.hx",456,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_521_createCoolText,"TitleState","createCoolText",0x83610287,"TitleState.createCoolText","TitleState.hx",521,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_535_addMoreText,"TitleState","addMoreText",0xcf420fae,"TitleState.addMoreText","TitleState.hx",535,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_546_deleteCoolText,"TitleState","deleteCoolText",0x8afda2b6,"TitleState.deleteCoolText","TitleState.hx",546,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_556_beatHit,"TitleState","beatHit",0xfba69a88,"TitleState.beatHit","TitleState.hx",556,0xd132a6e5)
static const ::String _hx_array_data_8ca18d79_21[] = {
	HX_("Psych Engine by",10,a0,74,89),
};
static const ::String _hx_array_data_8ca18d79_22[] = {
	HX_("Not associated",53,f0,cf,18),HX_("with",06,76,f8,4e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_644_skipIntro,"TitleState","skipIntro",0xc9924038,"TitleState.skipIntro","TitleState.hx",644,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_53_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",53,0xd132a6e5)
static const int _hx_array_data_8ca18d79_25[] = {
	(int)48,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_54_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",54,0xd132a6e5)
static const int _hx_array_data_8ca18d79_27[] = {
	(int)109,(int)189,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_55_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",55,0xd132a6e5)
static const int _hx_array_data_8ca18d79_29[] = {
	(int)107,(int)187,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_57_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",57,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_75_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",75,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_79_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",79,0xd132a6e5)
HX_LOCAL_STACK_FRAME(_hx_pos_a55214e0452daa02_554_boot,"TitleState","boot",0x7c582f47,"TitleState.boot","TitleState.hx",554,0xd132a6e5)

void TitleState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_51_new)
HXLINE( 640)		this->skippedIntro = false;
HXLINE( 553)		this->sickBeats = 0;
HXLINE( 403)		this->transitioning = false;
HXLINE( 197)		this->swagShader = null();
HXLINE( 195)		this->danceLeft = false;
HXLINE(  73)		this->mustUpdate = false;
HXLINE(  71)		this->lastKeysPressed = ::Array_obj< int >::__new(0);
HXLINE(  70)		this->easterEggKeyCombination = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_1,2);
HXLINE(  69)		this->easterEggEnabled = true;
HXLINE(  65)		this->curWacky = ::Array_obj< ::String >::__new(0);
HXLINE(  51)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleState_obj::__CreateEmpty() { return new TitleState_obj; }

void *TitleState_obj::_hx_vtable = 0;

Dynamic TitleState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleState_obj > _hx_result = new TitleState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x22c6bd01) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x22c6bd01;
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

void TitleState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_82_create)
HXLINE(  85)		if (::sys::FileSystem_obj::exists(HX_("modsList.txt",f1,ca,08,ac))) {
HXLINE(  87)			::Array< ::String > list = ::CoolUtil_obj::listFromString(::sys::io::File_obj::getContent(HX_("modsList.txt",f1,ca,08,ac)));
HXLINE(  88)			bool foundTheTop = false;
HXLINE(  89)			{
HXLINE(  89)				int _g = 0;
HXDLIN(  89)				while((_g < list->length)){
HXLINE(  89)					::String i = list->__get(_g);
HXDLIN(  89)					_g = (_g + 1);
HXLINE(  90)					::Array< ::String > dat = i.split(HX_("|",7c,00,00,00));
HXLINE(  91)					bool _hx_tmp;
HXDLIN(  91)					if ((dat->__get(1) == HX_("1",31,00,00,00))) {
HXLINE(  91)						_hx_tmp = !(foundTheTop);
            					}
            					else {
HXLINE(  91)						_hx_tmp = false;
            					}
HXDLIN(  91)					if (_hx_tmp) {
HXLINE(  92)						foundTheTop = true;
HXLINE(  93)						::Paths_obj::currentModDirectory = dat->__get(0);
            					}
            				}
            			}
            		}
HXLINE( 100)		::flixel::FlxG_obj::autoPause = false;
HXLINE( 103)		::String path = ((HX_("mods/",9e,2f,58,0c) + ::Paths_obj::currentModDirectory) + HX_("/images/gfDanceTitle.json",4a,b1,03,a5));
HXLINE( 105)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 106)			path = HX_("mods/images/gfDanceTitle.json",b9,75,53,37);
            		}
HXLINE( 109)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 110)			path = HX_("assets/images/gfDanceTitle.json",67,8a,5f,c5);
            		}
HXLINE( 113)		this->titleJSON =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::sys::io::File_obj::getContent(path))->doParse();
HXLINE( 158)		::flixel::FlxG_obj::game->focusLostFramerate = 60;
HXLINE( 159)		::flixel::FlxG_obj::sound->muteKeys = ::TitleState_obj::muteKeys;
HXLINE( 160)		::flixel::FlxG_obj::sound->volumeDownKeys = ::TitleState_obj::volumeDownKeys;
HXLINE( 161)		::flixel::FlxG_obj::sound->volumeUpKeys = ::TitleState_obj::volumeUpKeys;
HXLINE( 162)		::flixel::FlxG_obj::keys->preventDefaultKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_4,1);
HXLINE( 164)		::PlayerSettings_obj::init();
HXLINE( 166)		 ::flixel::math::FlxRandom _hx_tmp = ::flixel::FlxG_obj::random;
HXDLIN( 166)		this->curWacky = _hx_tmp->getObject_Array_String(this->getIntroTextShit(),null(),null(),null());
HXLINE( 170)		this->swagShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 171)		this->super::create();
HXLINE( 173)		::flixel::FlxG_obj::save->bind(HX_("funkin",31,b2,4f,6f),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 174)		::ClientPrefs_obj::loadPrefs();
HXLINE( 176)		::Highscore_obj::load();
HXLINE( 178)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic) )) {
HXLINE( 180)			::StoryMenuState_obj::weekCompleted = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("weekCompleted",f7,82,ec,84),::hx::paccDynamic)) );
            		}
HXLINE( 183)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE( 189)		if (!(::TitleState_obj::initialized)) {
HXLINE( 189)			this->bop();
            		}
            		else {
HXLINE( 189)			this->startIntro();
            		}
            	}


void TitleState_obj::bop(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_200_bop)
HXLINE( 201)		::Sys_obj::command(HX_("echo Wait until your game loades...",87,1f,24,b5),null());
HXLINE( 202)		{
HXLINE( 202)			int _g = 0;
HXDLIN( 202)			::Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory((::Sys_obj::getCwd() + HX_("assets/characters",f6,d9,4a,f7)));
HXDLIN( 202)			while((_g < _g1->length)){
HXLINE( 202)				::String koo = _g1->__get(_g);
HXDLIN( 202)				_g = (_g + 1);
HXLINE( 204)				::haxe::Log_obj::trace((HX_("loading ",24,de,81,cb) + koo),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),204,HX_("TitleState",79,8d,a1,8c),HX_("bop",03,be,4a,00)));
HXLINE( 205)				 ::Character pu =  ::Character_obj::__alloc( HX_CTX ,( (Float)(-1000) ),( (Float)(-1000) ),koo.split(HX_(".",2e,00,00,00))->__get(0),null());
HXLINE( 206)				this->add(pu);
HXLINE( 207)				pu->setPosition(0,0);
HXLINE( 208)				::TitleState_obj::cachedChars->push(pu);
HXLINE( 209)				pu->setPosition(-1000,-1000);
            			}
            		}
HXLINE( 211)		::flixel::FlxG_obj::sound->cacheAll();
HXLINE( 212)		::haxe::Log_obj::trace(HX_("loaded!",7c,bc,ef,08),::hx::SourceInfo(HX_("source/TitleState.hx",71,4f,0c,46),212,HX_("TitleState",79,8d,a1,8c),HX_("bop",03,be,4a,00)));
HXLINE( 213)		this->startIntro();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,bop,(void))

void TitleState_obj::startIntro(){
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_217_startIntro)
HXLINE( 218)		if (!(::TitleState_obj::initialized)) {
HXLINE( 241)			if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 242)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 242)				::String library = null();
HXDLIN( 242)				::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 242)				 ::Dynamic _hx_tmp1;
HXDLIN( 242)				if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 242)					if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 242)						::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 242)						( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            					}
HXDLIN( 242)					_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            				}
            				else {
HXLINE( 242)					_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            				}
HXDLIN( 242)				_hx_tmp->playMusic(_hx_tmp1,0,null(),null());
HXLINE( 244)				{
HXLINE( 244)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 244)					 ::Dynamic onComplete = null();
HXDLIN( 244)					if (::hx::IsNull( _this->_channel )) {
HXLINE( 244)						_this->play(null(),null(),null());
            					}
HXDLIN( 244)					if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 244)						_this->fadeTween->cancel();
            					}
HXDLIN( 244)					_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.7),4, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            				}
            			}
            		}
HXLINE( 248)		::Conductor_obj::changeBPM(( (Float)(this->titleJSON->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ));
HXLINE( 249)		this->persistentUpdate = true;
HXLINE( 251)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 253)		bool _hx_tmp;
HXDLIN( 253)		bool _hx_tmp1;
HXDLIN( 253)		if (::hx::IsNotNull( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic) )) {
HXLINE( 253)			_hx_tmp1 = (( (::String)(this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic)) ).length > 0);
            		}
            		else {
HXLINE( 253)			_hx_tmp1 = false;
            		}
HXDLIN( 253)		if (_hx_tmp1) {
HXLINE( 253)			_hx_tmp = ::hx::IsNotEq( this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic),HX_("none",b8,12,0a,49) );
            		}
            		else {
HXLINE( 253)			_hx_tmp = false;
            		}
HXDLIN( 253)		if (_hx_tmp) {
HXLINE( 254)			::String key = ( (::String)(this->titleJSON->__Field(HX_("backgroundSprite",93,8a,2c,8e),::hx::paccDynamic)) );
HXDLIN( 254)			::String library = null();
HXDLIN( 254)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN( 254)			 ::Dynamic _hx_tmp;
HXDLIN( 254)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 254)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE( 254)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXDLIN( 254)			bg->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 256)			bg->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
            		}
HXLINE( 266)		this->add(bg);
HXLINE( 268)		this->logoBl =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("titlex",e0,cf,77,23),::hx::paccDynamic),this->titleJSON->__Field(HX_("titley",e1,cf,77,23),::hx::paccDynamic),null());
HXLINE( 272)		::String path = ((HX_("mods/",9e,2f,58,0c) + ::Paths_obj::currentModDirectory) + HX_("/images/logoBumpin.png",89,bd,72,fd));
HXLINE( 274)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 275)			path = HX_("mods/images/logoBumpin.png",ba,6d,b4,ff);
            		}
HXLINE( 278)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 279)			path = HX_("assets/images/logoBumpin.png",4c,c0,28,86);
            		}
HXLINE( 282)		 ::flixel::FlxSprite _hx_tmp2 = this->logoBl;
HXDLIN( 282)		 ::openfl::display::BitmapData _hx_tmp3 = ::openfl::display::BitmapData_obj::fromFile(path);
HXDLIN( 282)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,::sys::io::File_obj::getContent(::StringTools_obj::replace(path,HX_(".png",3b,2d,bd,1e),HX_(".xml",69,3e,c3,1e)))));
HXLINE( 288)		this->logoBl->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 289)		this->logoBl->animation->addByPrefix(HX_("bump",f6,0f,20,41),HX_("logo bumpin",70,a1,0b,72),24,false,null(),null());
HXLINE( 290)		this->logoBl->animation->play(HX_("bump",f6,0f,20,41),null(),null(),null());
HXLINE( 291)		this->logoBl->updateHitbox();
HXLINE( 295)		this->swagShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 296)		this->gfDance =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("gfx",79,81,4e,00),::hx::paccDynamic),this->titleJSON->__Field(HX_("gfy",7a,81,4e,00),::hx::paccDynamic),null());
HXLINE( 299)		::String path1 = ((HX_("mods/",9e,2f,58,0c) + ::Paths_obj::currentModDirectory) + HX_("/images/gfDanceTitle.png",c7,a7,3b,2b));
HXLINE( 301)		if (!(::sys::FileSystem_obj::exists(path1))) {
HXLINE( 302)			path1 = HX_("mods/images/gfDanceTitle.png",38,86,6e,85);
            		}
HXLINE( 305)		if (!(::sys::FileSystem_obj::exists(path1))) {
HXLINE( 306)			path1 = HX_("assets/images/gfDanceTitle.png",4a,21,8a,cf);
            		}
HXLINE( 309)		 ::flixel::FlxSprite _hx_tmp4 = this->gfDance;
HXDLIN( 309)		 ::openfl::display::BitmapData _hx_tmp5 = ::openfl::display::BitmapData_obj::fromFile(path1);
HXDLIN( 309)		_hx_tmp4->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp5,::sys::io::File_obj::getContent(::StringTools_obj::replace(path1,HX_(".png",3b,2d,bd,1e),HX_(".xml",69,3e,c3,1e)))));
HXLINE( 314)		this->gfDance->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_8,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 315)		this->gfDance->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("gfDance",94,88,3a,eb),::Array_obj< int >::fromData( _hx_array_data_8ca18d79_9,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 317)		this->gfDance->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 318)		this->add(this->gfDance);
HXLINE( 319)		this->gfDance->shader = this->swagShader->shader;
HXLINE( 320)		this->add(this->logoBl);
HXLINE( 323)		this->titleText =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->titleJSON->__Field(HX_("startx",d6,61,fa,05),::hx::paccDynamic),this->titleJSON->__Field(HX_("starty",d7,61,fa,05),::hx::paccDynamic),null());
HXLINE( 325)		::String path2 = ((HX_("mods/",9e,2f,58,0c) + ::Paths_obj::currentModDirectory) + HX_("/images/titleEnter.png",c3,97,17,95));
HXLINE( 327)		if (!(::sys::FileSystem_obj::exists(path2))) {
HXLINE( 328)			path2 = HX_("mods/images/titleEnter.png",f4,47,59,97);
            		}
HXLINE( 331)		if (!(::sys::FileSystem_obj::exists(path2))) {
HXLINE( 332)			path2 = HX_("assets/images/titleEnter.png",86,9a,cd,1d);
            		}
HXLINE( 335)		 ::flixel::FlxSprite _hx_tmp6 = this->titleText;
HXDLIN( 335)		 ::openfl::display::BitmapData _hx_tmp7 = ::openfl::display::BitmapData_obj::fromFile(path2);
HXDLIN( 335)		_hx_tmp6->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp7,::sys::io::File_obj::getContent(::StringTools_obj::replace(path2,HX_(".png",3b,2d,bd,1e),HX_(".xml",69,3e,c3,1e)))));
HXLINE( 340)		this->titleText->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Press Enter to Begin",e9,79,2c,83),24,null(),null(),null());
HXLINE( 341)		this->titleText->animation->addByPrefix(HX_("press",83,53,88,c8),HX_("ENTER PRESSED",5a,47,9f,63),24,null(),null(),null());
HXLINE( 342)		this->titleText->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 343)		this->titleText->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 344)		this->titleText->updateHitbox();
HXLINE( 346)		this->add(this->titleText);
HXLINE( 348)		 ::flixel::FlxSprite logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN( 348)		::String library = null();
HXDLIN( 348)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("logo",6b,9f,b7,47));
HXDLIN( 348)		 ::Dynamic logo1;
HXDLIN( 348)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 348)			logo1 = imageToReturn;
            		}
            		else {
HXLINE( 348)			logo1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("logo",6b,9f,b7,47)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN( 348)		 ::flixel::FlxSprite logo2 = logo->loadGraphic(logo1,null(),null(),null(),null(),null());
HXLINE( 349)		logo2->screenCenter(null());
HXLINE( 350)		logo2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 356)		this->credGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 357)		this->add(this->credGroup);
HXLINE( 358)		this->textGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 360)		this->blackScreen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 361)		this->credGroup->add(this->blackScreen).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 363)		this->credTextShit =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("",00,00,00,00),true,null(),null(),null());
HXLINE( 364)		this->credTextShit->screenCenter(null());
HXLINE( 368)		this->credTextShit->set_visible(false);
HXLINE( 370)		 ::flixel::FlxSprite _hx_tmp8 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.52)),null());
HXDLIN( 370)		::String library1 = null();
HXDLIN( 370)		 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(HX_("newgrounds_logo",1e,5c,8d,a6));
HXDLIN( 370)		 ::Dynamic _hx_tmp9;
HXDLIN( 370)		if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE( 370)			_hx_tmp9 = imageToReturn1;
            		}
            		else {
HXLINE( 370)			_hx_tmp9 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("newgrounds_logo",1e,5c,8d,a6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            		}
HXDLIN( 370)		this->ngSpr = _hx_tmp8->loadGraphic(_hx_tmp9,null(),null(),null(),null(),null());
HXLINE( 371)		this->add(this->ngSpr);
HXLINE( 372)		this->ngSpr->set_visible(false);
HXLINE( 373)		 ::flixel::FlxSprite _hx_tmp10 = this->ngSpr;
HXDLIN( 373)		_hx_tmp10->setGraphicSize(::Std_obj::_hx_int((this->ngSpr->get_width() * ((Float)0.8))),null());
HXLINE( 374)		this->ngSpr->updateHitbox();
HXLINE( 375)		this->ngSpr->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 376)		this->ngSpr->set_antialiasing(true);
HXLINE( 378)		::flixel::tweens::FlxTween_obj::tween(this->credTextShit, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(this->credTextShit->y + 20))),((Float)2.9), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE( 380)		if (::TitleState_obj::initialized) {
HXLINE( 381)			this->skipIntro();
            		}
            		else {
HXLINE( 383)			::TitleState_obj::initialized = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,startIntro,(void))

::Array< ::Dynamic> TitleState_obj::getIntroTextShit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_389_getIntroTextShit)
HXLINE( 390)		::String library = null();
HXDLIN( 390)		::String fullText = ::openfl::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("introText",39,69,67,a6)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 392)		::Array< ::String > firstArray = fullText.split(HX_("\n",0a,00,00,00));
HXLINE( 393)		::Array< ::Dynamic> swagGoodArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 395)		{
HXLINE( 395)			int _g = 0;
HXDLIN( 395)			while((_g < firstArray->length)){
HXLINE( 395)				::String i = firstArray->__get(_g);
HXDLIN( 395)				_g = (_g + 1);
HXLINE( 397)				swagGoodArray->push(i.split(HX_("--",60,27,00,00)));
            			}
            		}
HXLINE( 400)		return swagGoodArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,getIntroTextShit,return )

void TitleState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_406_update)
HXLINE( 407)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 408)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 411)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 411)		if (_this->keyManager->checkStatus(70,_this->status)) {
HXLINE( 413)			::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
            		}
HXLINE( 416)		bool pressedEnter;
HXDLIN( 416)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 416)		if (!(_this1->keyManager->checkStatus(13,_this1->status))) {
HXLINE( 416)			pressedEnter = ::PlayerSettings_obj::player1->controls->_accept->check();
            		}
            		else {
HXLINE( 416)			pressedEnter = true;
            		}
HXLINE( 428)		 ::flixel::input::gamepad::FlxGamepad gamepad = ::flixel::FlxG_obj::gamepads->lastActive;
HXLINE( 430)		if (::hx::IsNotNull( gamepad )) {
HXLINE( 432)			 ::flixel::input::gamepad::lists::FlxGamepadButtonList _this = gamepad->justPressed;
HXDLIN( 432)			int id = 7;
HXDLIN( 432)			 ::flixel::input::gamepad::FlxGamepad _this1 = _this->gamepad;
HXDLIN( 432)			int Status = _this->status;
HXDLIN( 432)			bool _hx_tmp;
HXDLIN( 432)			switch((int)(id)){
            				case (int)-2: {
HXLINE( 432)					_hx_tmp = _this1->anyButton(Status);
            				}
            				break;
            				case (int)-1: {
HXLINE( 432)					_hx_tmp = !(_this1->anyButton(Status));
            				}
            				break;
            				default:{
HXLINE( 432)					int RawID = _this1->mapping->getRawID(id);
HXDLIN( 432)					 ::flixel::input::gamepad::FlxGamepadButton button = _this1->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 432)					if (::hx::IsNotNull( button )) {
HXLINE( 432)						_hx_tmp = button->hasState(Status);
            					}
            					else {
HXLINE( 432)						_hx_tmp = false;
            					}
            				}
            			}
HXDLIN( 432)			if (_hx_tmp) {
HXLINE( 433)				pressedEnter = true;
            			}
            		}
HXLINE( 443)		bool _hx_tmp;
HXDLIN( 443)		if (!(this->transitioning)) {
HXLINE( 443)			_hx_tmp = this->skippedIntro;
            		}
            		else {
HXLINE( 443)			_hx_tmp = false;
            		}
HXDLIN( 443)		if (_hx_tmp) {
HXLINE( 445)			if (pressedEnter) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween haha){
            					HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_456_update)
HXLINE( 456)					::MusicBeatState_obj::switchState( ::GameJoltState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 447)				if (::hx::IsNotNull( this->titleText )) {
HXLINE( 447)					this->titleText->animation->play(HX_("press",83,53,88,c8),null(),null(),null());
            				}
HXLINE( 449)				::flixel::FlxG_obj::camera->flash(-1,1,null(),null());
HXLINE( 450)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 450)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),((Float)0.7),null(),null(),null(),null());
HXLINE( 452)				this->transitioning = true;
HXLINE( 455)				::flixel::tweens::FlxTween_obj::tween(::flixel::FlxG_obj::camera, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("y",79,00,00,00),1000)),null(), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quadInOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0()))));
            			}
            			else {
HXLINE( 460)				if (this->easterEggEnabled) {
HXLINE( 462)					int finalKey = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 463)					if ((finalKey != -1)) {
HXLINE( 464)						this->lastKeysPressed->push(finalKey);
HXLINE( 465)						if ((this->lastKeysPressed->length > this->easterEggKeyCombination->length)) {
HXLINE( 467)							this->lastKeysPressed->shift();
            						}
HXLINE( 470)						if ((this->lastKeysPressed->length == this->easterEggKeyCombination->length)) {
HXLINE( 472)							bool isDifferent = false;
HXLINE( 473)							{
HXLINE( 473)								int _g = 0;
HXDLIN( 473)								int _g1 = this->lastKeysPressed->length;
HXDLIN( 473)								while((_g < _g1)){
HXLINE( 473)									_g = (_g + 1);
HXDLIN( 473)									int i = (_g - 1);
HXLINE( 474)									if ((this->lastKeysPressed->__get(i) != this->easterEggKeyCombination->__get(i))) {
HXLINE( 475)										isDifferent = true;
HXLINE( 476)										goto _hx_goto_12;
            									}
            								}
            								_hx_goto_12:;
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 505)		bool _hx_tmp1;
HXDLIN( 505)		if (pressedEnter) {
HXLINE( 505)			_hx_tmp1 = !(this->skippedIntro);
            		}
            		else {
HXLINE( 505)			_hx_tmp1 = false;
            		}
HXDLIN( 505)		if (_hx_tmp1) {
HXLINE( 507)			this->skipIntro();
            		}
HXLINE( 510)		if (::hx::IsNotNull( this->swagShader )) {
HXLINE( 512)			if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 512)				 ::ColorSwap fh = this->swagShader;
HXDLIN( 512)				fh->set_hue((fh->hue - (elapsed * ((Float)0.1))));
            			}
HXLINE( 513)			if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 513)				 ::ColorSwap fh = this->swagShader;
HXDLIN( 513)				fh->set_hue((fh->hue + (elapsed * ((Float)0.1))));
            			}
            		}
HXLINE( 516)		this->super::update(elapsed);
            	}


void TitleState_obj::createCoolText(::Array< ::String > textArray, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_521_createCoolText)
HXDLIN( 521)		int _g = 0;
HXDLIN( 521)		int _g1 = textArray->length;
HXDLIN( 521)		while((_g < _g1)){
HXDLIN( 521)			_g = (_g + 1);
HXDLIN( 521)			int i = (_g - 1);
HXLINE( 523)			 ::Alphabet money =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),textArray->__get(i),true,false,null(),null());
HXLINE( 524)			money->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 525)			money->set_y((money->y + (((i * 60) + 200) + offset)));
HXLINE( 526)			bool _hx_tmp;
HXDLIN( 526)			if (::hx::IsNotNull( this->credGroup )) {
HXLINE( 526)				_hx_tmp = ::hx::IsNotNull( this->textGroup );
            			}
            			else {
HXLINE( 526)				_hx_tmp = false;
            			}
HXDLIN( 526)			if (_hx_tmp) {
HXLINE( 527)				this->credGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 528)				this->textGroup->add(money).StaticCast<  ::flixel::FlxBasic >();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,createCoolText,(void))

void TitleState_obj::addMoreText(::String text, ::Dynamic __o_offset){
            		 ::Dynamic offset = __o_offset;
            		if (::hx::IsNull(__o_offset)) offset = 0;
            	HX_GC_STACKFRAME(&_hx_pos_a55214e0452daa02_535_addMoreText)
HXDLIN( 535)		bool _hx_tmp;
HXDLIN( 535)		if (::hx::IsNotNull( this->textGroup )) {
HXDLIN( 535)			_hx_tmp = ::hx::IsNotNull( this->credGroup );
            		}
            		else {
HXDLIN( 535)			_hx_tmp = false;
            		}
HXDLIN( 535)		if (_hx_tmp) {
HXLINE( 536)			 ::Alphabet coolText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),text,true,false,null(),null());
HXLINE( 537)			coolText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 538)			coolText->set_y((coolText->y + (((this->textGroup->length * 60) + 200) + offset)));
HXLINE( 539)			this->credGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 540)			this->textGroup->add(coolText).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TitleState_obj,addMoreText,(void))

void TitleState_obj::deleteCoolText(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_546_deleteCoolText)
HXDLIN( 546)		while((this->textGroup->members->get_length() > 0)){
HXLINE( 548)			this->credGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 549)			this->textGroup->remove(Dynamic( this->textGroup->members->__get(0)).StaticCast<  ::flixel::FlxBasic >(),true).StaticCast<  ::flixel::FlxBasic >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,deleteCoolText,(void))

void TitleState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_556_beatHit)
HXLINE( 557)		this->super::beatHit();
HXLINE( 559)		if (::hx::IsNotNull( this->logoBl )) {
HXLINE( 560)			this->logoBl->animation->play(HX_("bump",f6,0f,20,41),true,null(),null());
            		}
HXLINE( 562)		if (::hx::IsNotNull( this->gfDance )) {
HXLINE( 563)			this->danceLeft = !(this->danceLeft);
HXLINE( 565)			if (this->danceLeft) {
HXLINE( 566)				this->gfDance->animation->play(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            			else {
HXLINE( 568)				this->gfDance->animation->play(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            			}
            		}
HXLINE( 571)		if (!(::TitleState_obj::closedState)) {
HXLINE( 572)			this->sickBeats++;
HXLINE( 573)			switch((int)(this->sickBeats)){
            				case (int)1: {
HXLINE( 577)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_21,1),15);
            				}
            				break;
            				case (int)3: {
HXLINE( 584)					this->addMoreText(HX_("Shadow Mario",c4,01,05,71),15);
HXLINE( 585)					this->addMoreText(HX_("RiverOaken",36,1d,dd,33),15);
HXLINE( 586)					this->addMoreText(HX_("bb-panzu",cb,ef,e8,8b),15);
            				}
            				break;
            				case (int)4: {
HXLINE( 593)					this->deleteCoolText();
            				}
            				break;
            				case (int)5: {
HXLINE( 599)					this->createCoolText(::Array_obj< ::String >::fromData( _hx_array_data_8ca18d79_22,2),-40);
            				}
            				break;
            				case (int)7: {
HXLINE( 604)					this->addMoreText(HX_("newgrounds",ac,0f,a7,f6),-40);
HXLINE( 605)					this->ngSpr->set_visible(true);
            				}
            				break;
            				case (int)8: {
HXLINE( 608)					this->deleteCoolText();
HXLINE( 609)					this->ngSpr->set_visible(false);
            				}
            				break;
            				case (int)9: {
HXLINE( 615)					this->createCoolText(::Array_obj< ::String >::__new(1)->init(0,this->curWacky->__get(0)),null());
            				}
            				break;
            				case (int)11: {
HXLINE( 618)					this->addMoreText(this->curWacky->__get(1),null());
            				}
            				break;
            				case (int)12: {
HXLINE( 621)					this->deleteCoolText();
            				}
            				break;
            				case (int)13: {
HXLINE( 626)					this->addMoreText(HX_("Friday",ff,00,5d,e6),null());
            				}
            				break;
            				case (int)14: {
HXLINE( 629)					this->addMoreText(HX_("Night",b8,29,f7,2e),null());
            				}
            				break;
            				case (int)15: {
HXLINE( 632)					this->addMoreText(HX_("Funkin",51,26,e4,a3),null());
            				}
            				break;
            				case (int)16: {
HXLINE( 635)					this->skipIntro();
            				}
            				break;
            			}
            		}
            	}


void TitleState_obj::skipIntro(){
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_644_skipIntro)
HXDLIN( 644)		if (!(this->skippedIntro)) {
HXLINE( 646)			this->remove(this->ngSpr,null());
HXLINE( 648)			::flixel::FlxG_obj::camera->flash(-1,4,null(),null());
HXLINE( 649)			this->remove(this->credGroup,null());
HXLINE( 650)			this->skippedIntro = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleState_obj,skipIntro,(void))

::Array< int > TitleState_obj::muteKeys;

::Array< int > TitleState_obj::volumeDownKeys;

::Array< int > TitleState_obj::volumeUpKeys;

bool TitleState_obj::initialized;

::Array< ::Dynamic> TitleState_obj::cachedChars;

::String TitleState_obj::updateVersion;

bool TitleState_obj::closedState;


::hx::ObjectPtr< TitleState_obj > TitleState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleState_obj > __this = new TitleState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleState_obj > TitleState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleState_obj *__this = (TitleState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleState_obj), true, "TitleState"));
	*(void **)__this = TitleState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleState_obj::TitleState_obj()
{
}

void TitleState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleState);
	HX_MARK_MEMBER_NAME(blackScreen,"blackScreen");
	HX_MARK_MEMBER_NAME(credGroup,"credGroup");
	HX_MARK_MEMBER_NAME(credTextShit,"credTextShit");
	HX_MARK_MEMBER_NAME(textGroup,"textGroup");
	HX_MARK_MEMBER_NAME(ngSpr,"ngSpr");
	HX_MARK_MEMBER_NAME(curWacky,"curWacky");
	HX_MARK_MEMBER_NAME(wackyImage,"wackyImage");
	HX_MARK_MEMBER_NAME(easterEggEnabled,"easterEggEnabled");
	HX_MARK_MEMBER_NAME(easterEggKeyCombination,"easterEggKeyCombination");
	HX_MARK_MEMBER_NAME(lastKeysPressed,"lastKeysPressed");
	HX_MARK_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_MARK_MEMBER_NAME(titleJSON,"titleJSON");
	HX_MARK_MEMBER_NAME(logoBl,"logoBl");
	HX_MARK_MEMBER_NAME(gfDance,"gfDance");
	HX_MARK_MEMBER_NAME(danceLeft,"danceLeft");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(swagShader,"swagShader");
	HX_MARK_MEMBER_NAME(transitioning,"transitioning");
	HX_MARK_MEMBER_NAME(sickBeats,"sickBeats");
	HX_MARK_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(blackScreen,"blackScreen");
	HX_VISIT_MEMBER_NAME(credGroup,"credGroup");
	HX_VISIT_MEMBER_NAME(credTextShit,"credTextShit");
	HX_VISIT_MEMBER_NAME(textGroup,"textGroup");
	HX_VISIT_MEMBER_NAME(ngSpr,"ngSpr");
	HX_VISIT_MEMBER_NAME(curWacky,"curWacky");
	HX_VISIT_MEMBER_NAME(wackyImage,"wackyImage");
	HX_VISIT_MEMBER_NAME(easterEggEnabled,"easterEggEnabled");
	HX_VISIT_MEMBER_NAME(easterEggKeyCombination,"easterEggKeyCombination");
	HX_VISIT_MEMBER_NAME(lastKeysPressed,"lastKeysPressed");
	HX_VISIT_MEMBER_NAME(mustUpdate,"mustUpdate");
	HX_VISIT_MEMBER_NAME(titleJSON,"titleJSON");
	HX_VISIT_MEMBER_NAME(logoBl,"logoBl");
	HX_VISIT_MEMBER_NAME(gfDance,"gfDance");
	HX_VISIT_MEMBER_NAME(danceLeft,"danceLeft");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(swagShader,"swagShader");
	HX_VISIT_MEMBER_NAME(transitioning,"transitioning");
	HX_VISIT_MEMBER_NAME(sickBeats,"sickBeats");
	HX_VISIT_MEMBER_NAME(skippedIntro,"skippedIntro");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bop") ) { return ::hx::Val( bop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { return ::hx::Val( ngSpr ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"logoBl") ) { return ::hx::Val( logoBl ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { return ::hx::Val( gfDance ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { return ::hx::Val( curWacky ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { return ::hx::Val( credGroup ); }
		if (HX_FIELD_EQ(inName,"textGroup") ) { return ::hx::Val( textGroup ); }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { return ::hx::Val( titleJSON ); }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { return ::hx::Val( danceLeft ); }
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { return ::hx::Val( sickBeats ); }
		if (HX_FIELD_EQ(inName,"skipIntro") ) { return ::hx::Val( skipIntro_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { return ::hx::Val( wackyImage ); }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { return ::hx::Val( mustUpdate ); }
		if (HX_FIELD_EQ(inName,"swagShader") ) { return ::hx::Val( swagShader ); }
		if (HX_FIELD_EQ(inName,"startIntro") ) { return ::hx::Val( startIntro_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { return ::hx::Val( blackScreen ); }
		if (HX_FIELD_EQ(inName,"addMoreText") ) { return ::hx::Val( addMoreText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { return ::hx::Val( credTextShit ); }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { return ::hx::Val( skippedIntro ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { return ::hx::Val( transitioning ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createCoolText") ) { return ::hx::Val( createCoolText_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteCoolText") ) { return ::hx::Val( deleteCoolText_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastKeysPressed") ) { return ::hx::Val( lastKeysPressed ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"easterEggEnabled") ) { return ::hx::Val( easterEggEnabled ); }
		if (HX_FIELD_EQ(inName,"getIntroTextShit") ) { return ::hx::Val( getIntroTextShit_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"easterEggKeyCombination") ) { return ::hx::Val( easterEggKeyCombination ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { outValue = ( muteKeys ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		if (HX_FIELD_EQ(inName,"cachedChars") ) { outValue = ( cachedChars ); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { outValue = ( closedState ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { outValue = ( volumeUpKeys ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { outValue = ( updateVersion ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { outValue = ( volumeDownKeys ); return true; }
	}
	return false;
}

::hx::Val TitleState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ngSpr") ) { ngSpr=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"logoBl") ) { logoBl=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gfDance") ) { gfDance=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curWacky") ) { curWacky=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"credGroup") ) { credGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textGroup") ) { textGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleJSON") ) { titleJSON=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft") ) { danceLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sickBeats") ) { sickBeats=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wackyImage") ) { wackyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustUpdate") ) { mustUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagShader") ) { swagShader=inValue.Cast<  ::ColorSwap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blackScreen") ) { blackScreen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"credTextShit") ) { credTextShit=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skippedIntro") ) { skippedIntro=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitioning") ) { transitioning=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lastKeysPressed") ) { lastKeysPressed=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"easterEggEnabled") ) { easterEggEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"easterEggKeyCombination") ) { easterEggKeyCombination=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"cachedChars") ) { cachedChars=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"closedState") ) { closedState=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateVersion") ) { updateVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void TitleState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("blackScreen",8b,de,f4,5d));
	outFields->push(HX_("credGroup",91,7f,9c,9c));
	outFields->push(HX_("credTextShit",fb,55,c1,3c));
	outFields->push(HX_("textGroup",52,43,e2,32));
	outFields->push(HX_("ngSpr",7c,26,68,9a));
	outFields->push(HX_("curWacky",67,31,c6,0c));
	outFields->push(HX_("wackyImage",d4,7e,d6,81));
	outFields->push(HX_("easterEggEnabled",86,bb,00,6e));
	outFields->push(HX_("easterEggKeyCombination",0b,7a,83,5d));
	outFields->push(HX_("lastKeysPressed",58,a0,90,c9));
	outFields->push(HX_("mustUpdate",f2,14,07,8d));
	outFields->push(HX_("titleJSON",c0,cb,fa,69));
	outFields->push(HX_("logoBl",15,ca,6e,5c));
	outFields->push(HX_("gfDance",94,88,3a,eb));
	outFields->push(HX_("danceLeft",da,cc,f9,df));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("swagShader",4f,e1,a0,28));
	outFields->push(HX_("transitioning",6d,6a,93,94));
	outFields->push(HX_("sickBeats",9f,58,9e,58));
	outFields->push(HX_("skippedIntro",9c,44,26,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,blackScreen),HX_("blackScreen",8b,de,f4,5d)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,credGroup),HX_("credGroup",91,7f,9c,9c)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(TitleState_obj,credTextShit),HX_("credTextShit",fb,55,c1,3c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(TitleState_obj,textGroup),HX_("textGroup",52,43,e2,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,ngSpr),HX_("ngSpr",7c,26,68,9a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleState_obj,curWacky),HX_("curWacky",67,31,c6,0c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,wackyImage),HX_("wackyImage",d4,7e,d6,81)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,easterEggEnabled),HX_("easterEggEnabled",86,bb,00,6e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TitleState_obj,easterEggKeyCombination),HX_("easterEggKeyCombination",0b,7a,83,5d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TitleState_obj,lastKeysPressed),HX_("lastKeysPressed",58,a0,90,c9)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,mustUpdate),HX_("mustUpdate",f2,14,07,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TitleState_obj,titleJSON),HX_("titleJSON",c0,cb,fa,69)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,logoBl),HX_("logoBl",15,ca,6e,5c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,gfDance),HX_("gfDance",94,88,3a,eb)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,danceLeft),HX_("danceLeft",da,cc,f9,df)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(TitleState_obj,swagShader),HX_("swagShader",4f,e1,a0,28)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,transitioning),HX_("transitioning",6d,6a,93,94)},
	{::hx::fsInt,(int)offsetof(TitleState_obj,sickBeats),HX_("sickBeats",9f,58,9e,58)},
	{::hx::fsBool,(int)offsetof(TitleState_obj,skippedIntro),HX_("skippedIntro",9c,44,26,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::muteKeys,HX_("muteKeys",6d,5d,88,16)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeDownKeys,HX_("volumeDownKeys",70,2f,58,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &TitleState_obj::volumeUpKeys,HX_("volumeUpKeys",69,bb,f5,23)},
	{::hx::fsBool,(void *) &TitleState_obj::initialized,HX_("initialized",14,f5,0f,37)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &TitleState_obj::cachedChars,HX_("cachedChars",9b,d9,9d,be)},
	{::hx::fsString,(void *) &TitleState_obj::updateVersion,HX_("updateVersion",0f,4c,60,48)},
	{::hx::fsBool,(void *) &TitleState_obj::closedState,HX_("closedState",c5,ac,a4,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleState_obj_sMemberFields[] = {
	HX_("blackScreen",8b,de,f4,5d),
	HX_("credGroup",91,7f,9c,9c),
	HX_("credTextShit",fb,55,c1,3c),
	HX_("textGroup",52,43,e2,32),
	HX_("ngSpr",7c,26,68,9a),
	HX_("curWacky",67,31,c6,0c),
	HX_("wackyImage",d4,7e,d6,81),
	HX_("easterEggEnabled",86,bb,00,6e),
	HX_("easterEggKeyCombination",0b,7a,83,5d),
	HX_("lastKeysPressed",58,a0,90,c9),
	HX_("mustUpdate",f2,14,07,8d),
	HX_("titleJSON",c0,cb,fa,69),
	HX_("create",fc,66,0f,7c),
	HX_("logoBl",15,ca,6e,5c),
	HX_("gfDance",94,88,3a,eb),
	HX_("danceLeft",da,cc,f9,df),
	HX_("titleText",65,ba,a4,70),
	HX_("swagShader",4f,e1,a0,28),
	HX_("bop",03,be,4a,00),
	HX_("startIntro",aa,a2,37,da),
	HX_("getIntroTextShit",23,9f,f3,eb),
	HX_("transitioning",6d,6a,93,94),
	HX_("update",09,86,05,87),
	HX_("createCoolText",32,cb,41,41),
	HX_("addMoreText",23,fe,9f,87),
	HX_("deleteCoolText",61,6b,de,48),
	HX_("sickBeats",9f,58,9e,58),
	HX_("beatHit",7d,ea,04,74),
	HX_("skippedIntro",9c,44,26,49),
	HX_("skipIntro",6d,37,1c,d2),
	::String(null()) };

static void TitleState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(TitleState_obj::cachedChars,"cachedChars");
	HX_MARK_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_MARK_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleState_obj::muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(TitleState_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(TitleState_obj::cachedChars,"cachedChars");
	HX_VISIT_MEMBER_NAME(TitleState_obj::updateVersion,"updateVersion");
	HX_VISIT_MEMBER_NAME(TitleState_obj::closedState,"closedState");
};

#endif

::hx::Class TitleState_obj::__mClass;

static ::String TitleState_obj_sStaticFields[] = {
	HX_("muteKeys",6d,5d,88,16),
	HX_("volumeDownKeys",70,2f,58,0b),
	HX_("volumeUpKeys",69,bb,f5,23),
	HX_("initialized",14,f5,0f,37),
	HX_("cachedChars",9b,d9,9d,be),
	HX_("updateVersion",0f,4c,60,48),
	HX_("closedState",c5,ac,a4,98),
	::String(null())
};

void TitleState_obj::__register()
{
	TitleState_obj _hx_dummy;
	TitleState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleState",79,8d,a1,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_53_boot)
HXDLIN(  53)		muteKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_25,1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_54_boot)
HXDLIN(  54)		volumeDownKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_27,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_55_boot)
HXDLIN(  55)		volumeUpKeys = ::Array_obj< int >::fromData( _hx_array_data_8ca18d79_29,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_57_boot)
HXDLIN(  57)		initialized = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_75_boot)
HXDLIN(  75)		cachedChars = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_79_boot)
HXDLIN(  79)		updateVersion = HX_("",00,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a55214e0452daa02_554_boot)
HXDLIN( 554)		closedState = false;
            	}
}

