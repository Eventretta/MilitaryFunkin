#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_ModsMenuState
#include <ModsMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_options_OptionsSubState
#include <options/OptionsSubState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_18_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",18,0x953dc7b7)
static const ::String _hx_array_data_08e59567_3[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Change Difficulty",eb,7e,37,a6),HX_("Exit to menu",82,87,9a,a9),HX_("Options",3e,5b,4f,ad),HX_("Install a mod",9e,26,60,7e),HX_("Fast Checkpoint",8c,05,81,f6),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_133_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",133,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_182_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",182,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_255_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",255,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_262_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",262,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_290_regenMenu,"PauseSubState","regenMenu",0xfb4cc935,"PauseSubState.regenMenu","PauseSubState.hx",290,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_238_restartSong,"PauseSubState","restartSong",0x7c01f1bd,"PauseSubState.restartSong","PauseSubState.hx",238,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_21_boot,"PauseSubState","boot",0xb20aa899,"PauseSubState.boot","PauseSubState.hx",21,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_18_new)
HXLINE(  26)		this->curSelected = 0;
HXLINE(  25)		this->difficultyChoices = ::Array_obj< ::String >::__new(0);
HXLINE(  24)		this->menuItemsOG = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_3,7);
HXLINE(  23)		this->menuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  36)		super::__construct();
HXLINE(  37)		bool _hx_tmp = ::PlayState_obj::isDead;
HXLINE(  38)		if (::PauseSubState_obj::hasGotIntoIt) {
HXLINE(  38)			this->menuItemsOG->shift();
            		}
HXLINE(  39)		if ((::CoolUtil_obj::difficulties->length < 2)) {
HXLINE(  39)			this->menuItemsOG->remove(HX_("Change Difficulty",eb,7e,37,a6));
            		}
HXLINE(  41)		if (::PlayState_obj::chartingMode) {
HXLINE(  43)			this->menuItemsOG->insert(2,HX_("Toggle Practice Mode",7c,8b,b4,6b));
HXLINE(  44)			this->menuItemsOG->insert(3,HX_("Toggle Botplay",ef,6e,ca,1a));
            		}
HXLINE(  46)		this->menuItems = this->menuItemsOG;
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			int _g1 = ::CoolUtil_obj::difficulties->length;
HXDLIN(  48)			while((_g < _g1)){
HXLINE(  48)				_g = (_g + 1);
HXDLIN(  48)				int i = (_g - 1);
HXLINE(  49)				::String diff = (HX_("",00,00,00,00) + ::CoolUtil_obj::difficulties->__get(i));
HXLINE(  50)				this->difficultyChoices->push(diff);
            			}
            		}
HXLINE(  52)		this->difficultyChoices->push(HX_("BACK",27,a2,d1,2b));
HXLINE(  54)		 ::flixel::_hx_system::FlxSound _hx_tmp1 =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  54)		::String library = null();
HXDLIN(  54)		::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN(  54)		 ::Dynamic _hx_tmp2;
HXDLIN(  54)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  54)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE(  54)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN(  54)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXDLIN(  54)			_hx_tmp2 = ::Paths_obj::customSoundsLoaded->get(file);
            		}
            		else {
HXLINE(  54)			_hx_tmp2 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            		}
HXDLIN(  54)		this->pauseMusic = _hx_tmp1->loadEmbedded(_hx_tmp2,true,true,null());
HXLINE(  55)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  56)		 ::flixel::_hx_system::FlxSound _hx_tmp3 = this->pauseMusic;
HXDLIN(  56)		 ::flixel::math::FlxRandom _hx_tmp4 = ::flixel::FlxG_obj::random;
HXDLIN(  56)		_hx_tmp3->play(false,_hx_tmp4->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  58)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  60)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  61)		bg->set_alpha(( (Float)(0) ));
HXLINE(  62)		bg->scrollFactor->set(null(),null());
HXLINE(  63)		this->add(bg);
HXLINE(  65)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  66)		levelInfo->set_text(( (::String)((levelInfo->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
HXLINE(  67)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  68)		::String file1 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  68)		::String _hx_tmp5;
HXDLIN(  68)		if (::sys::FileSystem_obj::exists(file1)) {
HXLINE(  68)			_hx_tmp5 = file1;
            		}
            		else {
HXLINE(  68)			_hx_tmp5 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  68)		levelInfo->setFormat(_hx_tmp5,32,null(),null(),null(),null(),null());
HXLINE(  69)		levelInfo->updateHitbox();
HXLINE(  70)		this->add(levelInfo);
HXLINE(  72)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  73)		::String levelDifficulty1 = levelDifficulty->text;
HXDLIN(  73)		levelDifficulty->set_text((levelDifficulty1 + ::CoolUtil_obj::difficultyString()));
HXLINE(  74)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  75)		::String file2 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  75)		::String _hx_tmp6;
HXDLIN(  75)		if (::sys::FileSystem_obj::exists(file2)) {
HXLINE(  75)			_hx_tmp6 = file2;
            		}
            		else {
HXLINE(  75)			_hx_tmp6 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  75)		levelDifficulty->setFormat(_hx_tmp6,32,null(),null(),null(),null(),null());
HXLINE(  76)		levelDifficulty->updateHitbox();
HXLINE(  77)		this->add(levelDifficulty);
HXLINE(  79)		 ::flixel::text::FlxText blueballedTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,79,0,HX_("",00,00,00,00),32,null());
HXLINE(  80)		blueballedTxt->set_text((HX_("Blueballed: ",fe,a6,48,b4) + ::PlayState_obj::deathCounter));
HXLINE(  81)		blueballedTxt->scrollFactor->set(null(),null());
HXLINE(  82)		::String file3 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  82)		::String _hx_tmp7;
HXDLIN(  82)		if (::sys::FileSystem_obj::exists(file3)) {
HXLINE(  82)			_hx_tmp7 = file3;
            		}
            		else {
HXLINE(  82)			_hx_tmp7 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  82)		blueballedTxt->setFormat(_hx_tmp7,32,null(),null(),null(),null(),null());
HXLINE(  83)		blueballedTxt->updateHitbox();
HXLINE(  84)		this->add(blueballedTxt);
HXLINE(  86)		this->practiceText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("PRACTICE MODE",e8,14,ba,86),32,null());
HXLINE(  87)		this->practiceText->scrollFactor->set(null(),null());
HXLINE(  88)		 ::flixel::text::FlxText _hx_tmp8 = this->practiceText;
HXDLIN(  88)		::String file4 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  88)		::String _hx_tmp9;
HXDLIN(  88)		if (::sys::FileSystem_obj::exists(file4)) {
HXLINE(  88)			_hx_tmp9 = file4;
            		}
            		else {
HXLINE(  88)			_hx_tmp9 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  88)		_hx_tmp8->setFormat(_hx_tmp9,32,null(),null(),null(),null(),null());
HXLINE(  89)		 ::flixel::text::FlxText _hx_tmp10 = this->practiceText;
HXDLIN(  89)		int _hx_tmp11 = ::flixel::FlxG_obj::width;
HXDLIN(  89)		_hx_tmp10->set_x((( (Float)(_hx_tmp11) ) - (this->practiceText->get_width() + 20)));
HXLINE(  90)		this->practiceText->updateHitbox();
HXLINE(  91)		this->practiceText->set_visible(::PlayState_obj::instance->practiceMode);
HXLINE(  92)		this->add(this->practiceText);
HXLINE(  94)		 ::flixel::text::FlxText chartingText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("CHARTING MODE",3f,46,f9,44),32,null());
HXLINE(  95)		chartingText->scrollFactor->set(null(),null());
HXLINE(  96)		::String file5 = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  96)		::String _hx_tmp12;
HXDLIN(  96)		if (::sys::FileSystem_obj::exists(file5)) {
HXLINE(  96)			_hx_tmp12 = file5;
            		}
            		else {
HXLINE(  96)			_hx_tmp12 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  96)		chartingText->setFormat(_hx_tmp12,32,null(),null(),null(),null(),null());
HXLINE(  97)		int _hx_tmp13 = ::flixel::FlxG_obj::width;
HXDLIN(  97)		chartingText->set_x((( (Float)(_hx_tmp13) ) - (chartingText->get_width() + 20)));
HXLINE(  98)		int _hx_tmp14 = ::flixel::FlxG_obj::height;
HXDLIN(  98)		chartingText->set_y((( (Float)(_hx_tmp14) ) - (chartingText->get_height() + 20)));
HXLINE(  99)		chartingText->updateHitbox();
HXLINE( 100)		chartingText->set_visible(::PlayState_obj::chartingMode);
HXLINE( 101)		this->add(chartingText);
HXLINE( 103)		blueballedTxt->set_alpha(( (Float)(0) ));
HXLINE( 104)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE( 105)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE( 107)		int _hx_tmp15 = ::flixel::FlxG_obj::width;
HXDLIN( 107)		levelInfo->set_x((( (Float)(_hx_tmp15) ) - (levelInfo->get_width() + 20)));
HXLINE( 108)		int _hx_tmp16 = ::flixel::FlxG_obj::width;
HXDLIN( 108)		levelDifficulty->set_x((( (Float)(_hx_tmp16) ) - (levelDifficulty->get_width() + 20)));
HXLINE( 109)		int _hx_tmp17 = ::flixel::FlxG_obj::width;
HXDLIN( 109)		blueballedTxt->set_x((( (Float)(_hx_tmp17) ) - (blueballedTxt->get_width() + 20)));
HXLINE( 111)		::flixel::tweens::FlxTween_obj::tween(bg, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("alpha",5e,a7,96,21),((Float)0.6))),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 112)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 113)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 114)		::flixel::tweens::FlxTween_obj::tween(blueballedTxt, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(blueballedTxt->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.7))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 116)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 117)		this->add(this->grpMenuShit);
HXLINE( 119)		{
HXLINE( 119)			int _g2 = 0;
HXDLIN( 119)			int _g3 = this->menuItems->length;
HXDLIN( 119)			while((_g2 < _g3)){
HXLINE( 119)				_g2 = (_g2 + 1);
HXDLIN( 119)				int i = (_g2 - 1);
HXLINE( 121)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 122)				songText->isMenuItem = true;
HXLINE( 123)				songText->targetY = ( (Float)(i) );
HXLINE( 124)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 127)		this->changeSelection(null());
HXLINE( 129)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
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

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_133_update)
HXLINE( 134)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 135)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN( 135)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 137)		this->super::update(elapsed);
HXLINE( 139)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 140)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 141)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 143)		if (upP) {
HXLINE( 145)			this->changeSelection(-1);
            		}
HXLINE( 147)		if (downP) {
HXLINE( 149)			this->changeSelection(1);
            		}
HXLINE( 152)		if (accepted) {
HXLINE( 154)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 155)			bool _hx_tmp;
HXDLIN( 155)			if ((daSelected != HX_("BACK",27,a2,d1,2b))) {
HXLINE( 155)				_hx_tmp = this->difficultyChoices->contains(daSelected);
            			}
            			else {
HXLINE( 155)				_hx_tmp = false;
            			}
HXDLIN( 155)			if (_hx_tmp) {
HXLINE( 156)				::String name = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXLINE( 157)				::String poop = ::Highscore_obj::formatSong(name,this->curSelected);
HXLINE( 158)				::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop,name);
HXLINE( 159)				::PlayState_obj::storyDifficulty = this->curSelected;
HXLINE( 160)				::CustomFadeTransition_obj::nextCamera = ::PauseSubState_obj::transCamera;
HXLINE( 161)				::MusicBeatState_obj::resetState();
HXLINE( 162)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 163)				::PlayState_obj::changedDifficulty = true;
HXLINE( 164)				::PlayState_obj::chartingMode = false;
HXLINE( 165)				return;
            			}
HXLINE( 168)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("BACK",27,a2,d1,2b)) ){
HXLINE( 210)				this->menuItems = this->menuItemsOG;
HXLINE( 211)				this->regenMenu();
HXLINE( 209)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Change Difficulty",eb,7e,37,a6)) ){
HXLINE( 173)				this->menuItems = this->difficultyChoices;
HXLINE( 174)				this->regenMenu();
HXLINE( 172)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 198)				::PlayState_obj::deathCounter = 0;
HXLINE( 199)				::PlayState_obj::seenCutscene = false;
HXLINE( 200)				if (::PlayState_obj::isStoryMode) {
HXLINE( 201)					::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 203)					::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
HXLINE( 205)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 205)				::String library = null();
HXDLIN( 205)				::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 205)				 ::Dynamic _hx_tmp1;
HXDLIN( 205)				if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 205)					if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 205)						::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 205)						( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            					}
HXDLIN( 205)					_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            				}
            				else {
HXLINE( 205)					_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            				}
HXDLIN( 205)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE( 206)				::PlayState_obj::changedDifficulty = false;
HXLINE( 207)				::PlayState_obj::chartingMode = false;
HXLINE( 197)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Fast Checkpoint",8c,05,81,f6)) ){
HXLINE( 227)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 227)				::String library = null();
HXDLIN( 227)				::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN( 227)				 ::Dynamic _hx_tmp1;
HXDLIN( 227)				if (::sys::FileSystem_obj::exists(file)) {
HXLINE( 227)					if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE( 227)						::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN( 227)						( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            					}
HXDLIN( 227)					_hx_tmp1 = ::Paths_obj::customSoundsLoaded->get(file);
            				}
            				else {
HXLINE( 227)					_hx_tmp1 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("freakyMenu",15,c9,93,86)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            				}
HXDLIN( 227)				_hx_tmp->playMusic(_hx_tmp1,null(),null(),null());
HXLINE( 228)				::PlayState_obj::changedDifficulty = false;
HXLINE( 229)				::PlayState_obj::deathCounter = 0;
HXLINE( 230)				::PlayState_obj::seenCutscene = false;
HXLINE( 231)				::PlayState_obj::chartingMode = false;
HXLINE( 232)				{
HXLINE( 232)					 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 232)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 232)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 223)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Install a mod",9e,26,60,7e)) ){
HXLINE( 220)				::ModsMenuState_obj::isFromPause = true;
HXLINE( 221)				{
HXLINE( 221)					 ::flixel::FlxState nextState =  ::ModsMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 221)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 221)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 219)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Options",3e,5b,4f,ad)) ){
HXLINE( 215)				::options::OptionsSubState_obj::isFromPause = true;
HXLINE( 216)				::options::OptionsSubState_obj::blockNextAccept = true;
HXLINE( 217)				this->openSubState( ::options::OptionsSubState_obj::__alloc( HX_CTX ));
HXLINE( 213)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Note bulldo){
            					HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_182_update)
HXLINE( 183)					::PlayState_obj::instance->notes->remove(bulldo,null()).StaticCast<  ::Note >();
HXLINE( 184)					bulldo->kill();
HXLINE( 185)					bulldo->destroy();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 181)				::PlayState_obj::instance->paused = true;
HXLINE( 182)				::PlayState_obj::instance->notes->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 188)				{
HXLINE( 188)					 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 188)					_this->cleanup(_this->autoDestroy,true);
            				}
HXLINE( 189)				{
HXLINE( 189)					 ::flixel::_hx_system::FlxSound _this1 = ::PlayState_obj::instance->vocals;
HXDLIN( 189)					_this1->cleanup(_this1->autoDestroy,true);
            				}
HXLINE( 190)				 ::PlayState _hx_tmp = ::PlayState_obj::instance;
HXDLIN( 190)				_hx_tmp->generateSong(( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase());
HXLINE( 179)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 171)				this->close();
HXDLIN( 171)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Botplay",ef,6e,ca,1a)) ){
HXLINE( 192)				::PlayState_obj::instance->cpuControlled = !(::PlayState_obj::instance->cpuControlled);
HXLINE( 193)				::PlayState_obj::changedDifficulty = true;
HXLINE( 194)				::PlayState_obj::instance->botplayTxt->set_visible(::PlayState_obj::instance->cpuControlled);
HXLINE( 195)				::PlayState_obj::instance->botplayTxt->set_alpha(( (Float)(1) ));
HXLINE( 196)				::PlayState_obj::instance->botplaySine = ( (Float)(0) );
HXLINE( 191)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Practice Mode",7c,8b,b4,6b)) ){
HXLINE( 176)				::PlayState_obj::instance->practiceMode = !(::PlayState_obj::instance->practiceMode);
HXLINE( 177)				::PlayState_obj::changedDifficulty = true;
HXLINE( 178)				this->practiceText->set_visible(::PlayState_obj::instance->practiceMode);
HXLINE( 175)				goto _hx_goto_4;
            			}
            			_hx_goto_4:;
            		}
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_255_destroy)
HXLINE( 256)		this->pauseMusic->destroy();
HXLINE( 258)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_262_changeSelection)
HXLINE( 263)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 263)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 265)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 265)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 267)		if ((this->curSelected < 0)) {
HXLINE( 268)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 269)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 270)			this->curSelected = 0;
            		}
HXLINE( 272)		int bullShit = 0;
HXLINE( 274)		{
HXLINE( 274)			int _g = 0;
HXDLIN( 274)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 274)			while((_g < _g1->length)){
HXLINE( 274)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 274)				_g = (_g + 1);
HXLINE( 276)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 277)				bullShit = (bullShit + 1);
HXLINE( 279)				item->set_alpha(((Float)0.6));
HXLINE( 282)				if ((item->targetY == 0)) {
HXLINE( 284)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))

void PauseSubState_obj::regenMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_290_regenMenu)
HXLINE( 291)		{
HXLINE( 291)			int _g = 0;
HXDLIN( 291)			int _g1 = this->grpMenuShit->members->get_length();
HXDLIN( 291)			while((_g < _g1)){
HXLINE( 291)				_g = (_g + 1);
HXDLIN( 291)				int i = (_g - 1);
HXLINE( 292)				this->grpMenuShit->remove(Dynamic( this->grpMenuShit->members->__get(0)).StaticCast<  ::Alphabet >(),true).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 294)		{
HXLINE( 294)			int _g2 = 0;
HXDLIN( 294)			int _g3 = this->menuItems->length;
HXDLIN( 294)			while((_g2 < _g3)){
HXLINE( 294)				_g2 = (_g2 + 1);
HXDLIN( 294)				int i = (_g2 - 1);
HXLINE( 295)				 ::Alphabet item =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 296)				item->isMenuItem = true;
HXLINE( 297)				item->targetY = ( (Float)(i) );
HXLINE( 298)				this->grpMenuShit->add(item).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 300)		this->curSelected = 0;
HXLINE( 301)		this->changeSelection(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,regenMenu,(void))

bool PauseSubState_obj::hasGotIntoIt;

 ::flixel::FlxCamera PauseSubState_obj::transCamera;

void PauseSubState_obj::restartSong(::hx::Null< bool >  __o_noTrans){
            		bool noTrans = __o_noTrans.Default(false);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_238_restartSong)
HXLINE( 239)		::PlayState_obj::instance->paused = true;
HXLINE( 240)		::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 241)		::PlayState_obj::instance->vocals->set_volume(( (Float)(0) ));
HXLINE( 243)		if (noTrans) {
HXLINE( 245)			::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE( 246)			{
HXLINE( 246)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 246)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 246)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            		else {
HXLINE( 250)			::MusicBeatState_obj::resetState();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,restartSong,(void))


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_MARK_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(practiceText,"practiceText");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_VISIT_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(practiceText,"practiceText");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"regenMenu") ) { return ::hx::Val( regenMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { return ::hx::Val( menuItemsOG ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { return ::hx::Val( practiceText ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { return ::hx::Val( difficultyChoices ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PauseSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { outValue = ( transCamera ); return true; }
		if (HX_FIELD_EQ(inName,"restartSong") ) { outValue = restartSong_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasGotIntoIt") ) { outValue = ( hasGotIntoIt ); return true; }
	}
	return false;
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { menuItemsOG=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { practiceText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { difficultyChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PauseSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { transCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasGotIntoIt") ) { hasGotIntoIt=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemsOG",39,55,bf,30));
	outFields->push(HX_("difficultyChoices",f7,9c,00,1a));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("practiceText",08,73,28,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItemsOG),HX_("menuItemsOG",39,55,bf,30)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,difficultyChoices),HX_("difficultyChoices",f7,9c,00,1a)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,practiceText),HX_("practiceText",08,73,28,84)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PauseSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &PauseSubState_obj::hasGotIntoIt,HX_("hasGotIntoIt",5d,d0,2e,e4)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &PauseSubState_obj::transCamera,HX_("transCamera",ed,e0,5c,21)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemsOG",39,55,bf,30),
	HX_("difficultyChoices",f7,9c,00,1a),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("practiceText",08,73,28,84),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	HX_("regenMenu",fc,42,dc,26),
	::String(null()) };

static void PauseSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseSubState_obj::hasGotIntoIt,"hasGotIntoIt");
	HX_MARK_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseSubState_obj::hasGotIntoIt,"hasGotIntoIt");
	HX_VISIT_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#endif

::hx::Class PauseSubState_obj::__mClass;

static ::String PauseSubState_obj_sStaticFields[] = {
	HX_("hasGotIntoIt",5d,d0,2e,e4),
	HX_("transCamera",ed,e0,5c,21),
	HX_("restartSong",44,ab,b8,45),
	::String(null())
};

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PauseSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &PauseSubState_obj::__SetStatic;
	__mClass->mMarkFunc = PauseSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PauseSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_21_boot)
HXDLIN(  21)		hasGotIntoIt = false;
            	}
}

