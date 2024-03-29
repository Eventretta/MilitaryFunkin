#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DialogueBox
#include <DialogueBox.h>
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
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_59_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",59,0x0149b4eb)
HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_15_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",15,0x0149b4eb)
static const int _hx_array_data_ffc81fb3_4[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_5[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_6[] = {
	(int)11,
};
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_159_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",159,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_203_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",203,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_214_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",214,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_253_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",253,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_244_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",244,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_283_cleanDialog,"DialogueBox","cleanDialog",0x0fc249f6,"DialogueBox.cleanDialog","DialogueBox.hx",283,0x0149b4eb)

void DialogueBox_obj::__construct(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_59_new)
HXLINE(  60)			 ::flixel::FlxSprite fh = _gthis->bgFade;
HXDLIN(  60)			fh->set_alpha((fh->alpha + ((Float)0.139999999999999986)));
HXLINE(  61)			if ((_gthis->bgFade->alpha > ((Float)0.7))) {
HXLINE(  62)				_gthis->bgFade->set_alpha(((Float)0.7));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool talkingRight = __o_talkingRight.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_15_new)
HXLINE( 241)		this->isEnding = false;
HXLINE( 156)		this->dialogueEnded = false;
HXLINE( 155)		this->dialogueStarted = false;
HXLINE( 154)		this->dialogueOpened = false;
HXLINE(  31)		this->skipDialogueThing = null();
HXLINE(  30)		this->nextDialogueThing = null();
HXLINE(  22)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(  19)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  40)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  41)		super::__construct(null(),null(),null());
HXLINE(  43)		::String _hx_switch_0 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  46)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  46)			::String library = null();
HXDLIN(  46)			::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("Lunchbox",c1,34,3f,3d)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN(  46)			 ::Dynamic _hx_tmp1;
HXDLIN(  46)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  46)				if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE(  46)					::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN(  46)					( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            				}
HXDLIN(  46)				_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            			}
            			else {
HXLINE(  46)				_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("Lunchbox",c1,34,3f,3d)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            			}
HXDLIN(  46)			_hx_tmp->playMusic(_hx_tmp1,0,null(),null());
HXLINE(  47)			{
HXLINE(  47)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  47)				 ::Dynamic onComplete = null();
HXDLIN(  47)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  47)					_this->play(null(),null(),null());
            				}
HXDLIN(  47)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  47)					_this->fadeTween->cancel();
            				}
HXDLIN(  47)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  45)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  49)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  49)			::String library = null();
HXDLIN(  49)			::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("LunchboxScary",57,33,01,24)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN(  49)			 ::Dynamic _hx_tmp1;
HXDLIN(  49)			if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  49)				if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE(  49)					::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN(  49)					( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            				}
HXDLIN(  49)				_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            			}
            			else {
HXLINE(  49)				_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("LunchboxScary",57,33,01,24)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            			}
HXDLIN(  49)			_hx_tmp->playMusic(_hx_tmp1,0,null(),null());
HXLINE(  50)			{
HXLINE(  50)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  50)				 ::Dynamic onComplete = null();
HXDLIN(  50)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  50)					_this->play(null(),null(),null());
            				}
HXDLIN(  50)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  50)					_this->fadeTween->cancel();
            				}
HXDLIN(  50)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  48)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  53)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-200,-200,null());
HXDLIN(  53)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN(  53)		this->bgFade = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-4988968,null(),null());
HXLINE(  54)		this->bgFade->scrollFactor->set(null(),null());
HXLINE(  55)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  56)		this->add(this->bgFade);
HXLINE(  58)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.83), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE(  65)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,45,null());
HXLINE(  68)		bool hasDialog = false;
HXLINE(  69)		::String _hx_switch_1 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_1==HX_("roses",04,6c,64,ed)) ){
HXLINE(  77)			hasDialog = true;
HXLINE(  78)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  78)			_hx_tmp->play(::Paths_obj::sound(HX_("ANGRY_TEXT_BOX",57,5c,5c,19),null()),null(),null(),null(),null(),null());
HXLINE(  80)			 ::flixel::FlxSprite _hx_tmp1 = this->box;
HXDLIN(  80)			::String library = null();
HXDLIN(  80)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84));
HXDLIN(  80)			bool xmlExists = false;
HXDLIN(  80)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  80)				xmlExists = true;
            			}
HXDLIN(  80)			 ::Dynamic _hx_tmp2;
HXDLIN(  80)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  80)				_hx_tmp2 = imageLoaded;
            			}
            			else {
HXLINE(  80)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84));
HXDLIN(  80)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  80)					_hx_tmp2 = imageToReturn;
            				}
            				else {
HXLINE(  80)					_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  80)			::String _hx_tmp3;
HXDLIN(  80)			if (xmlExists) {
HXLINE(  80)				_hx_tmp3 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  80)				_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  80)			_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,_hx_tmp3));
HXLINE(  81)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("SENPAI ANGRY IMPACT SPEECH",f9,17,39,87),24,false,null(),null());
HXLINE(  82)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("SENPAI ANGRY IMPACT SPEECH instance 1",ad,5b,57,ef),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_4,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  76)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  72)			hasDialog = true;
HXLINE(  73)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  73)			::String library = null();
HXDLIN(  73)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da));
HXDLIN(  73)			bool xmlExists = false;
HXDLIN(  73)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  73)				xmlExists = true;
            			}
HXDLIN(  73)			 ::Dynamic _hx_tmp1;
HXDLIN(  73)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  73)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE(  73)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da));
HXDLIN(  73)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  73)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE(  73)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  73)			::String _hx_tmp2;
HXDLIN(  73)			if (xmlExists) {
HXLINE(  73)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  73)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  73)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  74)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Text Box Appear",bd,48,54,1a),24,false,null(),null());
HXLINE(  75)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Text Box Appear instance 1",69,19,3a,07),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_5,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  71)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  85)			hasDialog = true;
HXLINE(  86)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  86)			::String library = null();
HXDLIN(  86)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc));
HXDLIN(  86)			bool xmlExists = false;
HXDLIN(  86)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  86)				xmlExists = true;
            			}
HXDLIN(  86)			 ::Dynamic _hx_tmp1;
HXDLIN(  86)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  86)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE(  86)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc));
HXDLIN(  86)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  86)					_hx_tmp1 = imageToReturn;
            				}
            				else {
HXLINE(  86)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  86)			::String _hx_tmp2;
HXDLIN(  86)			if (xmlExists) {
HXLINE(  86)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  86)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  86)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  87)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Spirit Textbox spawn",ea,ee,35,84),24,false,null(),null());
HXLINE(  88)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Spirit Textbox spawn instance 1",5c,78,b4,46),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_6,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  90)			 ::flixel::FlxSprite face =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,320,170,null());
HXDLIN(  90)			::String library1 = null();
HXDLIN(  90)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/spiritFaceForward",93,1c,29,2a));
HXDLIN(  90)			 ::Dynamic face1;
HXDLIN(  90)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  90)				face1 = imageToReturn;
            			}
            			else {
HXLINE(  90)				face1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/spiritFaceForward",93,1c,29,2a)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            			}
HXDLIN(  90)			 ::flixel::FlxSprite face2 = face->loadGraphic(face1,null(),null(),null(),null(),null());
HXLINE(  91)			face2->setGraphicSize(::Std_obj::_hx_int((face2->get_width() * ( (Float)(6) ))),null());
HXLINE(  92)			this->add(face2);
HXLINE(  84)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  95)		this->dialogueList = dialogueList;
HXLINE(  97)		if (!(hasDialog)) {
HXLINE(  98)			return;
            		}
HXLINE( 100)		this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE( 101)		 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN( 101)		::String library = null();
HXDLIN( 101)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("weeb/senpaiPortrait",9b,ed,4f,6d));
HXDLIN( 101)		bool xmlExists = false;
HXDLIN( 101)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 101)			xmlExists = true;
            		}
HXDLIN( 101)		 ::Dynamic _hx_tmp3;
HXDLIN( 101)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 101)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE( 101)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/senpaiPortrait",9b,ed,4f,6d));
HXDLIN( 101)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 101)				_hx_tmp3 = imageToReturn;
            			}
            			else {
HXLINE( 101)				_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN( 101)		::String _hx_tmp4;
HXDLIN( 101)		if (xmlExists) {
HXLINE( 101)			_hx_tmp4 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 101)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 101)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 102)		this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Senpai Portrait Enter",d7,e0,09,14),24,false,null(),null());
HXLINE( 103)		 ::flixel::FlxSprite _hx_tmp5 = this->portraitLeft;
HXDLIN( 103)		Float _hx_tmp6 = this->portraitLeft->get_width();
HXDLIN( 103)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp6 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 104)		this->portraitLeft->updateHitbox();
HXLINE( 105)		this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 106)		this->add(this->portraitLeft);
HXLINE( 107)		this->portraitLeft->set_visible(false);
HXLINE( 109)		this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,40,null());
HXLINE( 110)		 ::flixel::FlxSprite _hx_tmp7 = this->portraitRight;
HXDLIN( 110)		::String library1 = null();
HXDLIN( 110)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::Paths_obj::addCustomGraphic(HX_("weeb/bfPortrait",23,ea,7a,a3));
HXDLIN( 110)		bool xmlExists1 = false;
HXDLIN( 110)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 110)			xmlExists1 = true;
            		}
HXDLIN( 110)		 ::Dynamic _hx_tmp8;
HXDLIN( 110)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 110)			_hx_tmp8 = imageLoaded1;
            		}
            		else {
HXLINE( 110)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("weeb/bfPortrait",23,ea,7a,a3));
HXDLIN( 110)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 110)				_hx_tmp8 = imageToReturn;
            			}
            			else {
HXLINE( 110)				_hx_tmp8 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            			}
            		}
HXDLIN( 110)		::String _hx_tmp9;
HXDLIN( 110)		if (xmlExists1) {
HXLINE( 110)			_hx_tmp9 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 110)			_hx_tmp9 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1);
            		}
HXDLIN( 110)		_hx_tmp7->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp8,_hx_tmp9));
HXLINE( 111)		this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Boyfriend portrait enter",a9,02,f8,de),24,false,null(),null());
HXLINE( 112)		 ::flixel::FlxSprite _hx_tmp10 = this->portraitRight;
HXDLIN( 112)		Float _hx_tmp11 = this->portraitRight->get_width();
HXDLIN( 112)		_hx_tmp10->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp11 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 113)		this->portraitRight->updateHitbox();
HXLINE( 114)		this->portraitRight->scrollFactor->set(null(),null());
HXLINE( 115)		this->add(this->portraitRight);
HXLINE( 116)		this->portraitRight->set_visible(false);
HXLINE( 118)		this->box->animation->play(HX_("normalOpen",91,41,38,70),null(),null(),null());
HXLINE( 119)		 ::flixel::FlxSprite _hx_tmp12 = this->box;
HXDLIN( 119)		Float _hx_tmp13 = this->box->get_width();
HXDLIN( 119)		_hx_tmp12->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp13 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 120)		this->box->updateHitbox();
HXLINE( 121)		this->add(this->box);
HXLINE( 123)		this->box->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 124)		this->portraitLeft->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 126)		 ::flixel::FlxSprite _hx_tmp14 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,1042,590,null());
HXDLIN( 126)		this->handSelect = _hx_tmp14->loadGraphic(::Paths_obj::getPath(HX_("images/weeb/pixelUI/hand_textbox.png",4b,9b,63,77),HX_("IMAGE",3b,57,57,3b),null()),null(),null(),null(),null(),null());
HXLINE( 127)		 ::flixel::FlxSprite _hx_tmp15 = this->handSelect;
HXDLIN( 127)		Float _hx_tmp16 = this->handSelect->get_width();
HXDLIN( 127)		_hx_tmp15->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp16 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 128)		this->handSelect->updateHitbox();
HXLINE( 129)		this->handSelect->set_visible(false);
HXLINE( 130)		this->add(this->handSelect);
HXLINE( 133)		bool _hx_tmp17 = !(talkingRight);
HXLINE( 138)		this->dropText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,242,502,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 139)		this->dropText->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 140)		this->dropText->set_color(-2583404);
HXLINE( 141)		this->add(this->dropText);
HXLINE( 143)		this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(240) ),( (Float)(500) ),::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 144)		this->swagDialogue->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 145)		this->swagDialogue->set_color(-12640223);
HXLINE( 146)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp18 = ::flixel::FlxG_obj::sound;
HXDLIN( 146)		 ::flixel::_hx_system::FlxSound _hx_tmp19 = _hx_tmp18->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.6),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 146)		this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp19);
HXLINE( 147)		this->add(this->swagDialogue);
HXLINE( 149)		this->dialogue =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(80) ),HX_("",00,00,00,00),false,true,null(),null());
            	}

Dynamic DialogueBox_obj::__CreateEmpty() { return new DialogueBox_obj; }

void *DialogueBox_obj::_hx_vtable = 0;

Dynamic DialogueBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBox_obj > _hx_result = new DialogueBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x04b35cb7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x04b35cb7;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBox_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_159_update)
HXDLIN( 159)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 161)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("roses",04,6c,64,ed))) {
HXLINE( 162)			this->portraitLeft->set_visible(false);
            		}
HXLINE( 163)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c))) {
HXLINE( 165)			this->portraitLeft->set_visible(false);
HXLINE( 166)			this->swagDialogue->set_color(-1);
HXLINE( 167)			this->dropText->set_color(-16777216);
            		}
HXLINE( 170)		this->dropText->set_text(this->swagDialogue->text);
HXLINE( 172)		if (::hx::IsNotNull( this->box->animation->_curAnim )) {
HXLINE( 174)			bool _hx_tmp;
HXDLIN( 174)			if ((this->box->animation->_curAnim->name == HX_("normalOpen",91,41,38,70))) {
HXLINE( 174)				_hx_tmp = this->box->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 174)				_hx_tmp = false;
            			}
HXDLIN( 174)			if (_hx_tmp) {
HXLINE( 176)				this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 177)				this->dialogueOpened = true;
            			}
            		}
HXLINE( 181)		bool _hx_tmp;
HXDLIN( 181)		if (this->dialogueOpened) {
HXLINE( 181)			_hx_tmp = !(this->dialogueStarted);
            		}
            		else {
HXLINE( 181)			_hx_tmp = false;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 183)			this->startDialogue();
HXLINE( 184)			this->dialogueStarted = true;
            		}
HXLINE( 187)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 189)			if (this->dialogueEnded) {
HXLINE( 191)				this->remove(this->dialogue,null());
HXLINE( 192)				bool _hx_tmp;
HXDLIN( 192)				if (::hx::IsNull( this->dialogueList->__get(1) )) {
HXLINE( 192)					_hx_tmp = ::hx::IsNotNull( this->dialogueList->__get(0) );
            				}
            				else {
HXLINE( 192)					_hx_tmp = false;
            				}
HXDLIN( 192)				if (_hx_tmp) {
HXLINE( 194)					if (!(this->isEnding)) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_203_update)
HXLINE( 204)							 ::flixel::FlxSprite fh = _gthis->box;
HXDLIN( 204)							fh->set_alpha((fh->alpha - ((Float)0.2)));
HXLINE( 205)							 ::flixel::FlxSprite fh1 = _gthis->bgFade;
HXDLIN( 205)							fh1->set_alpha((fh1->alpha - ((Float)0.139999999999999986)));
HXLINE( 206)							_gthis->portraitLeft->set_visible(false);
HXLINE( 207)							_gthis->portraitRight->set_visible(false);
HXLINE( 208)							 ::flixel::addons::text::FlxTypeText fh2 = _gthis->swagDialogue;
HXDLIN( 208)							fh2->set_alpha((fh2->alpha - ((Float)0.2)));
HXLINE( 209)							 ::flixel::FlxSprite fh3 = _gthis->handSelect;
HXDLIN( 209)							fh3->set_alpha((fh3->alpha - ((Float)0.2)));
HXLINE( 210)							_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_214_update)
HXLINE( 215)							_gthis->finishThing();
HXLINE( 216)							_gthis->kill();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 196)						this->isEnding = true;
HXLINE( 197)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 197)						_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 199)						bool _hx_tmp1;
HXDLIN( 199)						if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("senpai",3c,df,8d,6b))) {
HXLINE( 199)							_hx_tmp1 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c));
            						}
            						else {
HXLINE( 199)							_hx_tmp1 = true;
            						}
HXDLIN( 199)						if (_hx_tmp1) {
HXLINE( 200)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 200)							 ::Dynamic To = 0;
HXDLIN( 200)							 ::Dynamic onComplete = null();
HXDLIN( 200)							if (::hx::IsNull( To )) {
HXLINE( 200)								To = 0;
            							}
HXDLIN( 200)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 200)								_this->fadeTween->cancel();
            							}
HXDLIN( 200)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
HXLINE( 202)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE( 213)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.5), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            					}
            				}
            				else {
HXLINE( 222)					this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 223)					this->startDialogue();
HXLINE( 224)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 224)					_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 227)				if (this->dialogueStarted) {
HXLINE( 229)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 229)					_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 230)					this->swagDialogue->skip();
HXLINE( 232)					if (::hx::IsNotNull( this->skipDialogueThing )) {
HXLINE( 233)						this->skipDialogueThing();
            					}
            				}
            			}
            		}
HXLINE( 238)		this->super::update(elapsed);
            	}


void DialogueBox_obj::startDialogue(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_253_startDialogue)
HXLINE( 254)			_gthis->handSelect->set_visible(true);
HXLINE( 255)			_gthis->dialogueEnded = true;
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_244_startDialogue)
HXDLIN( 244)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 245)		this->cleanDialog();
HXLINE( 251)		this->swagDialogue->resetText(this->dialogueList->__get(0));
HXLINE( 252)		this->swagDialogue->start(((Float)0.04),true,null(),null(),null());
HXLINE( 253)		this->swagDialogue->completeCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 258)		this->handSelect->set_visible(false);
HXLINE( 259)		this->dialogueEnded = false;
HXLINE( 260)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 270)			this->portraitLeft->set_visible(false);
HXLINE( 271)			if (!(this->portraitRight->visible)) {
HXLINE( 273)				this->portraitRight->set_visible(true);
HXLINE( 274)				this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 269)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 263)			this->portraitRight->set_visible(false);
HXLINE( 264)			if (!(this->portraitLeft->visible)) {
HXLINE( 266)				if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("senpai",3c,df,8d,6b))) {
HXLINE( 266)					this->portraitLeft->set_visible(true);
            				}
HXLINE( 267)				this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 262)			goto _hx_goto_10;
            		}
            		_hx_goto_10:;
HXLINE( 277)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 278)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,startDialogue,(void))

void DialogueBox_obj::cleanDialog(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_283_cleanDialog)
HXLINE( 284)		::Array< ::String > splitName = this->dialogueList->__get(0).split(HX_(":",3a,00,00,00));
HXLINE( 285)		this->curCharacter = splitName->__get(1);
HXLINE( 286)		this->dialogueList[0] = ::StringTools_obj::trim(this->dialogueList->__get(0).substr((splitName->__get(1).length + 2),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,cleanDialog,(void))


::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__new(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	::hx::ObjectPtr< DialogueBox_obj > __this = new DialogueBox_obj();
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	DialogueBox_obj *__this = (DialogueBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBox_obj), true, "DialogueBox"));
	*(void **)__this = DialogueBox_obj::_hx_vtable;
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

DialogueBox_obj::DialogueBox_obj()
{
}

void DialogueBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_MARK_MEMBER_NAME(dropText,"dropText");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_MARK_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_MARK_MEMBER_NAME(portraitRight,"portraitRight");
	HX_MARK_MEMBER_NAME(handSelect,"handSelect");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_VISIT_MEMBER_NAME(dropText,"dropText");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_VISIT_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_VISIT_MEMBER_NAME(portraitRight,"portraitRight");
	HX_VISIT_MEMBER_NAME(handSelect,"handSelect");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		if (HX_FIELD_EQ(inName,"dropText") ) { return ::hx::Val( dropText ); }
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { return ::hx::Val( handSelect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"cleanDialog") ) { return ::hx::Val( cleanDialog_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { return ::hx::Val( swagDialogue ); }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { return ::hx::Val( portraitLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { return ::hx::Val( portraitRight ); }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"startDialogue") ) { return ::hx::Val( startDialogue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { return ::hx::Val( dialogueOpened ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { return ::hx::Val( skipDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dropText") ) { dropText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { handSelect=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { swagDialogue=inValue.Cast<  ::flixel::addons::text::FlxTypeText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { portraitLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { portraitRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { dialogueOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { skipDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("swagDialogue",c2,ad,00,ad));
	outFields->push(HX_("dropText",7c,74,94,f2));
	outFields->push(HX_("portraitLeft",02,9f,53,0d));
	outFields->push(HX_("portraitRight",81,90,e4,12));
	outFields->push(HX_("handSelect",cb,77,90,7c));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("dialogueOpened",e1,e5,9f,10));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBox_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBox_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::flixel::addons::text::FlxTypeText */ ,(int)offsetof(DialogueBox_obj,swagDialogue),HX_("swagDialogue",c2,ad,00,ad)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,dropText),HX_("dropText",7c,74,94,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,skipDialogueThing),HX_("skipDialogueThing",b7,29,12,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitLeft),HX_("portraitLeft",02,9f,53,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitRight),HX_("portraitRight",81,90,e4,12)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,handSelect),HX_("handSelect",cb,77,90,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueOpened),HX_("dialogueOpened",e1,e5,9f,10)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBox_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("swagDialogue",c2,ad,00,ad),
	HX_("dropText",7c,74,94,f2),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("skipDialogueThing",b7,29,12,4e),
	HX_("portraitLeft",02,9f,53,0d),
	HX_("portraitRight",81,90,e4,12),
	HX_("handSelect",cb,77,90,7c),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("dialogueOpened",e1,e5,9f,10),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("update",09,86,05,87),
	HX_("isEnding",71,3f,f2,52),
	HX_("startDialogue",9a,8f,4f,ac),
	HX_("cleanDialog",31,37,ca,9e),
	::String(null()) };

::hx::Class DialogueBox_obj::__mClass;

void DialogueBox_obj::__register()
{
	DialogueBox_obj _hx_dummy;
	DialogueBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBox",b3,1f,c8,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

