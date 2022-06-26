#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
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
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif
#ifndef INCLUDED_options_GameplaySettingsSubState
#include <options/GameplaySettingsSubState.h>
#endif
#ifndef INCLUDED_options_GraphicsSettingsSubState
#include <options/GraphicsSettingsSubState.h>
#endif
#ifndef INCLUDED_options_NoteOffsetState
#include <options/NoteOffsetState.h>
#endif
#ifndef INCLUDED_options_NotesSubState
#include <options/NotesSubState.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_options_VisualsUISubState
#include <options/VisualsUISubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bddb8806f8971119_30_new,"options.OptionsState","new",0xe72cff75,"options.OptionsState.new","options/OptionsState.hx",30,0xaa608eba)
static const ::String _hx_array_data_14992103_1[] = {
	HX_("Note Colors",1e,54,23,f8),HX_("Controls",96,42,6e,11),HX_("Adjust Delay and Combo",b7,c9,c3,05),HX_("Graphics",eb,b4,19,ec),HX_("Visuals and UI",ea,4a,1e,90),HX_("Gameplay",06,bf,58,a5),HX_("Audio & Video",77,83,89,56),
};
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_40_openSelectedSubstate,"options.OptionsState","openSelectedSubstate",0x28c3b341,"options.OptionsState.openSelectedSubstate","options/OptionsState.hx",40,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_59_create,"options.OptionsState","create",0xc1bf1307,"options.OptionsState.create","options/OptionsState.hx",59,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_101_closeSubState,"options.OptionsState","closeSubState",0xbc3ad39e,"options.OptionsState.closeSubState","options/OptionsState.hx",101,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_106_update,"options.OptionsState","update",0xccb53214,"options.OptionsState.update","options/OptionsState.hx",106,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_134_changeSelection,"options.OptionsState","changeSelection",0xa0e39351,"options.OptionsState.changeSelection","options/OptionsState.hx",134,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_32_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",32,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_35_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",35,0xaa608eba)
namespace options{

void OptionsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_30_new)
HXLINE(  33)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_14992103_1,7);
HXLINE(  30)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3b1d59ed || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OptionsState_obj::openSelectedSubstate(::String label){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_40_openSelectedSubstate)
HXDLIN(  40)		::String _hx_switch_0 = label;
            		if (  (_hx_switch_0==HX_("Adjust Delay and Combo",b7,c9,c3,05)) ){
HXLINE(  52)			::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::options::NoteOffsetState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN(  52)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Controls",96,42,6e,11)) ){
HXLINE(  44)			this->openSubState( ::options::ControlsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  44)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Gameplay",06,bf,58,a5)) ){
HXLINE(  50)			this->openSubState( ::options::GameplaySettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  50)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Graphics",eb,b4,19,ec)) ){
HXLINE(  46)			this->openSubState( ::options::GraphicsSettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  46)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Note Colors",1e,54,23,f8)) ){
HXLINE(  42)			this->openSubState( ::options::NotesSubState_obj::__alloc( HX_CTX ));
HXDLIN(  42)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Visuals and UI",ea,4a,1e,90)) ){
HXLINE(  48)			this->openSubState( ::options::VisualsUISubState_obj::__alloc( HX_CTX ));
HXDLIN(  48)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,openSelectedSubstate,(void))

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_59_create)
HXLINE(  61)		::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null());
HXLINE(  64)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  64)		::String library = null();
HXDLIN(  64)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  64)		 ::Dynamic bg1;
HXDLIN(  64)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  64)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  64)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  64)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  65)		bg2->set_color(-1412611);
HXLINE(  66)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.1))),null());
HXLINE(  67)		bg2->updateHitbox();
HXLINE(  68)		bg2->screenCenter(null());
HXLINE(  69)		bg2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  70)		this->add(bg2);
HXLINE(  72)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  73)		this->add(this->grpOptions);
HXLINE(  75)		{
HXLINE(  75)			int _g = 0;
HXDLIN(  75)			int _g1 = this->options->length;
HXDLIN(  75)			while((_g < _g1)){
HXLINE(  75)				_g = (_g + 1);
HXDLIN(  75)				int i = (_g - 1);
HXLINE(  77)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->options->__get(i),true,false,null(),null());
HXLINE(  78)				optionText->screenCenter(null());
HXLINE(  79)				optionText->set_y((optionText->y + ((( (Float)(100) ) * (( (Float)(i) ) - (( (Float)(this->options->length) ) / ( (Float)(2) )))) + 50)));
HXLINE(  80)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  83)		this->selectorLeft =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_(">",3e,00,00,00),true,false,null(),null());
HXLINE(  84)		this->add(this->selectorLeft);
HXLINE(  85)		this->selectorRight =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("<",3c,00,00,00),true,false,null(),null());
HXLINE(  86)		this->add(this->selectorRight);
HXLINE(  88)		this->changeSelection(null());
HXLINE(  89)		::ClientPrefs_obj::saveSettings();
HXLINE(  91)		this->versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 24),0,HX_("USE LEFT AND RIGHT FOR ADJUSTING VOLUME AND PRESS ENTER FOR VIDEO OPTIONS",9f,38,71,47),12,null());
HXLINE(  92)		this->versionShit->scrollFactor->set(null(),null());
HXLINE(  93)		this->versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  94)		this->add(this->versionShit);
HXLINE(  96)		this->versionShit->set_visible((::options::OptionsState_obj::curSelected == 6));
HXLINE(  98)		this->super::create();
            	}


void OptionsState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_101_closeSubState)
HXLINE( 102)		this->super::closeSubState();
HXLINE( 103)		::ClientPrefs_obj::saveSettings();
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_106_update)
HXLINE( 107)		this->versionShit->set_visible((::options::OptionsState_obj::curSelected == 6));
HXLINE( 108)		if ((::options::OptionsState_obj::curSelected == 6)) {
HXLINE( 110)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 110)			bool keys_0 = _this->keyManager->checkStatus(37,_this->status);
HXDLIN( 110)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 110)			bool keys_1 = _this1->keyManager->checkStatus(39,_this1->status);
HXLINE( 111)			if (keys_0) {
HXLINE( 111)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd fh = ::flixel::FlxG_obj::sound;
HXDLIN( 111)				fh->set_volume((fh->volume - ((Float)0.1)));
            			}
            			else {
HXLINE( 112)				if (keys_1) {
HXLINE( 112)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd fh = ::flixel::FlxG_obj::sound;
HXDLIN( 112)					fh->set_volume((fh->volume + ((Float)0.1)));
            				}
            			}
            		}
HXLINE( 114)		this->super::update(elapsed);
HXLINE( 116)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 117)			this->changeSelection(-1);
            		}
HXLINE( 119)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 120)			this->changeSelection(1);
            		}
HXLINE( 123)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 124)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 124)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 125)			if (!(::options::OptionsState_obj::isFromPause)) {
HXLINE( 125)				::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            			else {
HXLINE( 126)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),true));
            			}
            		}
HXLINE( 129)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 130)			this->openSelectedSubstate(this->options->__get(::options::OptionsState_obj::curSelected));
            		}
            	}


void OptionsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_134_changeSelection)
HXLINE( 135)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::OptionsState >();
HXDLIN( 135)		::options::OptionsState_obj::curSelected = (::options::OptionsState_obj::curSelected + change);
HXLINE( 136)		if ((::options::OptionsState_obj::curSelected < 0)) {
HXLINE( 137)			::options::OptionsState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE( 138)		if ((::options::OptionsState_obj::curSelected >= this->options->length)) {
HXLINE( 139)			::options::OptionsState_obj::curSelected = 0;
            		}
HXLINE( 141)		int bullShit = 0;
HXLINE( 143)		{
HXLINE( 143)			int _g = 0;
HXDLIN( 143)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 143)			while((_g < _g1->length)){
HXLINE( 143)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 143)				_g = (_g + 1);
HXLINE( 144)				item->targetY = ( (Float)((bullShit - ::options::OptionsState_obj::curSelected)) );
HXLINE( 145)				bullShit = (bullShit + 1);
HXLINE( 147)				item->set_alpha(((Float)0.6));
HXLINE( 148)				if ((item->targetY == 0)) {
HXLINE( 149)					item->set_alpha(( (Float)(1) ));
HXLINE( 150)					this->selectorLeft->set_x((item->x - ( (Float)(63) )));
HXLINE( 151)					this->selectorLeft->set_y(item->y);
HXLINE( 152)					 ::Alphabet _hx_tmp = this->selectorRight;
HXDLIN( 152)					Float item1 = item->x;
HXDLIN( 152)					_hx_tmp->set_x(((item1 + item->get_width()) + 15));
HXLINE( 153)					this->selectorRight->set_y(item->y);
            				}
            			}
            		}
HXLINE( 156)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 156)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,changeSelection,(void))

bool OptionsState_obj::isFromPause;

int OptionsState_obj::curSelected;

 ::flixel::FlxSprite OptionsState_obj::menuBG;


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "options.OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(versionShit,"versionShit");
	HX_MARK_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_MARK_MEMBER_NAME(selectorRight,"selectorRight");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(versionShit,"versionShit");
	HX_VISIT_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_VISIT_MEMBER_NAME(selectorRight,"selectorRight");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { return ::hx::Val( versionShit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { return ::hx::Val( selectorLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { return ::hx::Val( selectorRight ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"openSelectedSubstate") ) { return ::hx::Val( openSelectedSubstate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isFromPause") ) { outValue = ( isFromPause ); return true; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"versionShit") ) { versionShit=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { selectorLeft=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { selectorRight=inValue.Cast<  ::Alphabet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isFromPause") ) { isFromPause=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("versionShit",f8,4e,3b,e2));
	outFields->push(HX_("selectorLeft",c6,e2,77,e7));
	outFields->push(HX_("selectorRight",3d,98,7b,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,versionShit),HX_("versionShit",f8,4e,3b,e2)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorLeft),HX_("selectorLeft",c6,e2,77,e7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorRight),HX_("selectorRight",3d,98,7b,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &OptionsState_obj::isFromPause,HX_("isFromPause",e2,77,61,50)},
	{::hx::fsInt,(void *) &OptionsState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("versionShit",f8,4e,3b,e2),
	HX_("openSelectedSubstate",f6,29,af,78),
	HX_("selectorLeft",c6,e2,77,e7),
	HX_("selectorRight",3d,98,7b,18),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void OptionsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::isFromPause,"isFromPause");
	HX_MARK_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::isFromPause,"isFromPause");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#endif

::hx::Class OptionsState_obj::__mClass;

static ::String OptionsState_obj_sStaticFields[] = {
	HX_("isFromPause",e2,77,61,50),
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	::String(null())
};

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.OptionsState",03,21,99,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_32_boot)
HXDLIN(  32)		isFromPause = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_35_boot)
HXDLIN(  35)		curSelected = 0;
            	}
}

} // end namespace options
