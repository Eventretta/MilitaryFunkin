#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_GameplayChangersSubstate
#include <GameplayChangersSubstate.h>
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
#ifndef INCLUDED_Position
#include <Position.h>
#endif
#ifndef INCLUDED_ReplayLoader
#include <ReplayLoader.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_editors_CharacterEditorState
#include <editors/CharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_ChartingState
#include <editors/ChartingState.h>
#endif
#ifndef INCLUDED_editors_DialogueCharacterEditorState
#include <editors/DialogueCharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_DialogueEditorState
#include <editors/DialogueEditorState.h>
#endif
#ifndef INCLUDED_editors_MasterEditorMenu
#include <editors/MasterEditorMenu.h>
#endif
#ifndef INCLUDED_editors_MenuCharacterEditorState
#include <editors/MenuCharacterEditorState.h>
#endif
#ifndef INCLUDED_editors_WeekEditorState
#include <editors/WeekEditorState.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa1a162bced268b8_21_new,"editors.MasterEditorMenu","new",0xa289ac88,"editors.MasterEditorMenu.new","editors/MasterEditorMenu.hx",21,0x3933e087)
static const ::String _hx_array_data_7d8f0896_1[] = {
	HX_("Week Editor",59,6c,6c,6d),HX_("Menu Character Editor",05,2d,60,f9),HX_("Dialogue Editor",b5,bb,62,71),HX_("Dialogue Portrait Editor",ea,22,45,b5),HX_("Character Editor",84,45,58,b1),HX_("Chart Editor",ef,b4,29,e9),HX_("Replay Loader",ec,3f,eb,7e),HX_("Position Editor",44,4c,93,35),HX_("Gameplay Changers",ab,3d,03,9f),HX_("BACK",27,a2,d1,2b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_44_create,"editors.MasterEditorMenu","create",0xee5b93d4,"editors.MasterEditorMenu.create","editors/MasterEditorMenu.hx",44,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_93_update,"editors.MasterEditorMenu","update",0xf951b2e1,"editors.MasterEditorMenu.update","editors/MasterEditorMenu.hx",93,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_162_changeSelection,"editors.MasterEditorMenu","changeSelection",0x385910e4,"editors.MasterEditorMenu.changeSelection","editors/MasterEditorMenu.hx",162,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_175_changeDirectory,"editors.MasterEditorMenu","changeDirectory",0xba830b05,"editors.MasterEditorMenu.changeDirectory","editors/MasterEditorMenu.hx",175,0x3933e087)
HX_LOCAL_STACK_FRAME(_hx_pos_aa1a162bced268b8_37_boot,"editors.MasterEditorMenu","boot",0x8e064b0a,"editors.MasterEditorMenu.boot","editors/MasterEditorMenu.hx",37,0x3933e087)
namespace editors{

void MasterEditorMenu_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_21_new)
HXLINE(  40)		this->curDirectory = 0;
HXLINE(  39)		this->curSelected = 0;
HXLINE(  36)		this->directories = ::Array_obj< ::String >::__new(1)->init(0,null());
HXLINE(  23)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_7d8f0896_1,10);
HXLINE(  21)		super::__construct(TransIn,TransOut);
            	}

Dynamic MasterEditorMenu_obj::__CreateEmpty() { return new MasterEditorMenu_obj; }

void *MasterEditorMenu_obj::_hx_vtable = 0;

Dynamic MasterEditorMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MasterEditorMenu_obj > _hx_result = new MasterEditorMenu_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MasterEditorMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x01c92cf4) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01c92cf4;
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

void MasterEditorMenu_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_aa1a162bced268b8_44_create)
HXLINE(  45)		::flixel::FlxG_obj::camera->bgColor = -16777216;
HXLINE(  48)		::DiscordClient_obj::changePresence(HX_("Editors Main Menu",4c,98,82,a7),null(),null(),null(),null());
HXLINE(  51)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  51)		::String library = null();
HXDLIN(  51)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  51)		 ::Dynamic bg1;
HXDLIN(  51)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  51)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  51)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  51)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  52)		bg2->scrollFactor->set(null(),null());
HXLINE(  53)		bg2->set_color(-13290187);
HXLINE(  54)		this->add(bg2);
HXLINE(  56)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  57)		this->add(this->grpTexts);
HXLINE(  59)		{
HXLINE(  59)			int _g = 0;
HXDLIN(  59)			int _g1 = this->options->length;
HXDLIN(  59)			while((_g < _g1)){
HXLINE(  59)				_g = (_g + 1);
HXDLIN(  59)				int i = (_g - 1);
HXLINE(  61)				 ::Alphabet leText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->options->__get(i),true,false,null(),null());
HXLINE(  62)				leText->isMenuItem = true;
HXLINE(  63)				leText->targetY = ( (Float)(i) );
HXLINE(  64)				this->grpTexts->add(leText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  68)		 ::flixel::FlxSprite textBG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 42),null())->makeGraphic(::flixel::FlxG_obj::width,42,-16777216,null(),null());
HXLINE(  69)		textBG->set_alpha(((Float)0.6));
HXLINE(  70)		this->add(textBG);
HXLINE(  72)		this->directoryTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,textBG->x,(textBG->y + 4),::flixel::FlxG_obj::width,HX_("",00,00,00,00),32,null());
HXLINE(  73)		 ::flixel::text::FlxText _hx_tmp = this->directoryTxt;
HXDLIN(  73)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  73)		::String _hx_tmp1;
HXDLIN(  73)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  73)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  73)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  73)		_hx_tmp->setFormat(_hx_tmp1,32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  74)		this->directoryTxt->scrollFactor->set(null(),null());
HXLINE(  75)		this->add(this->directoryTxt);
HXLINE(  77)		{
HXLINE(  77)			int _g2 = 0;
HXDLIN(  77)			::Array< ::String > _g3 = ::Paths_obj::getModDirectories();
HXDLIN(  77)			while((_g2 < _g3->length)){
HXLINE(  77)				::String folder = _g3->__get(_g2);
HXDLIN(  77)				_g2 = (_g2 + 1);
HXLINE(  79)				this->directories->push(folder);
            			}
            		}
HXLINE(  82)		int found = this->directories->indexOf(::Paths_obj::currentModDirectory,null());
HXLINE(  83)		if ((found > -1)) {
HXLINE(  83)			this->curDirectory = found;
            		}
HXLINE(  84)		this->changeDirectory(null());
HXLINE(  86)		this->changeSelection(null());
HXLINE(  88)		::flixel::FlxG_obj::mouse->set_visible(false);
HXLINE(  89)		this->super::create();
            	}


void MasterEditorMenu_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_aa1a162bced268b8_93_update)
HXLINE(  94)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE(  96)			this->changeSelection(-1);
            		}
HXLINE(  98)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 100)			this->changeSelection(1);
            		}
HXLINE( 103)		if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 105)			this->changeDirectory(-1);
            		}
HXLINE( 107)		if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 109)			this->changeDirectory(1);
            		}
HXLINE( 113)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 115)			::String _hx_switch_0 = this->options->__get(this->curSelected);
            			if (  (_hx_switch_0==HX_("BACK",27,a2,d1,2b)) ){
HXLINE( 135)				 ::flixel::FlxState _hx_tmp;
HXDLIN( 135)				if (::editors::MasterEditorMenu_obj::fromPlay) {
HXLINE( 135)					_hx_tmp =  ::PlayState_obj::__alloc( HX_CTX ,null(),null());
            				}
            				else {
HXLINE( 135)					_hx_tmp =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 135)				::MusicBeatState_obj::switchState(_hx_tmp);
HXDLIN( 135)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Character Editor",84,45,58,b1)) ){
HXLINE( 117)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::CharacterEditorState_obj::__alloc( HX_CTX ,::Character_obj::DEFAULT_CHARACTER,false)) ),false));
HXDLIN( 117)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Chart Editor",ef,b4,29,e9)) ){
HXLINE( 127)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::ChartingState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 127)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Editor",b5,bb,62,71)) ){
HXLINE( 125)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::DialogueEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 125)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Dialogue Portrait Editor",ea,22,45,b5)) ){
HXLINE( 123)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::editors::DialogueCharacterEditorState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN( 123)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Gameplay Changers",ab,3d,03,9f)) ){
HXLINE( 133)				this->openSubState( ::GameplayChangersSubstate_obj::__alloc( HX_CTX ));
HXDLIN( 133)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Menu Character Editor",05,2d,60,f9)) ){
HXLINE( 121)				::MusicBeatState_obj::switchState( ::editors::MenuCharacterEditorState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 121)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Position Editor",44,4c,93,35)) ){
HXLINE( 131)				::MusicBeatState_obj::switchState( ::Position_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 131)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Replay Loader",ec,3f,eb,7e)) ){
HXLINE( 129)				::MusicBeatState_obj::switchState( ::ReplayLoader_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 129)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_0==HX_("Week Editor",59,6c,6c,6d)) ){
HXLINE( 119)				::MusicBeatState_obj::switchState( ::editors::WeekEditorState_obj::__alloc( HX_CTX ,null()));
HXDLIN( 119)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
HXLINE( 137)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 139)			::FreeplayState_obj::destroyFreeplayVocals();
            		}
HXLINE( 143)		int bullShit = 0;
HXLINE( 144)		{
HXLINE( 144)			int _g = 0;
HXDLIN( 144)			::Array< ::Dynamic> _g1 = this->grpTexts->members;
HXDLIN( 144)			while((_g < _g1->length)){
HXLINE( 144)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 144)				_g = (_g + 1);
HXLINE( 146)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 147)				bullShit = (bullShit + 1);
HXLINE( 149)				item->set_alpha(((Float)0.6));
HXLINE( 152)				if ((item->targetY == 0)) {
HXLINE( 154)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 158)		this->super::update(elapsed);
            	}


void MasterEditorMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_162_changeSelection)
HXLINE( 163)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 163)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 165)		 ::editors::MasterEditorMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 165)		_hx_tmp1->curSelected = (_hx_tmp1->curSelected + change);
HXLINE( 167)		if ((this->curSelected < 0)) {
HXLINE( 168)			this->curSelected = (this->options->length - 1);
            		}
HXLINE( 169)		if ((this->curSelected >= this->options->length)) {
HXLINE( 170)			this->curSelected = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(MasterEditorMenu_obj,changeSelection,(void))

void MasterEditorMenu_obj::changeDirectory(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_175_changeDirectory)
HXLINE( 176)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 176)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 178)		 ::editors::MasterEditorMenu _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 178)		_hx_tmp1->curDirectory = (_hx_tmp1->curDirectory + change);
HXLINE( 180)		if ((this->curDirectory < 0)) {
HXLINE( 181)			this->curDirectory = (this->directories->length - 1);
            		}
HXLINE( 182)		if ((this->curDirectory >= this->directories->length)) {
HXLINE( 183)			this->curDirectory = 0;
            		}
HXLINE( 185)		::WeekData_obj::setDirectoryFromWeek(null());
HXLINE( 186)		bool _hx_tmp2;
HXDLIN( 186)		if (::hx::IsNotNull( this->directories->__get(this->curDirectory) )) {
HXLINE( 186)			_hx_tmp2 = (this->directories->__get(this->curDirectory).length < 1);
            		}
            		else {
HXLINE( 186)			_hx_tmp2 = true;
            		}
HXDLIN( 186)		if (_hx_tmp2) {
HXLINE( 187)			this->directoryTxt->set_text(HX_("< No Mod Directory Loaded >",6f,05,c4,e1));
            		}
            		else {
HXLINE( 190)			::Paths_obj::currentModDirectory = this->directories->__get(this->curDirectory);
HXLINE( 191)			this->directoryTxt->set_text(((HX_("< Loaded Mod Directory: ",1e,b9,7b,3e) + ::Paths_obj::currentModDirectory) + HX_(" >",1e,1c,00,00)));
            		}
HXLINE( 193)		 ::flixel::text::FlxText _hx_tmp3 = this->directoryTxt;
HXDLIN( 193)		_hx_tmp3->set_text(this->directoryTxt->text.toUpperCase());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MasterEditorMenu_obj,changeDirectory,(void))

bool MasterEditorMenu_obj::fromPlay;


::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MasterEditorMenu_obj > __this = new MasterEditorMenu_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MasterEditorMenu_obj > MasterEditorMenu_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MasterEditorMenu_obj *__this = (MasterEditorMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MasterEditorMenu_obj), true, "editors.MasterEditorMenu"));
	*(void **)__this = MasterEditorMenu_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MasterEditorMenu_obj::MasterEditorMenu_obj()
{
}

void MasterEditorMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MasterEditorMenu);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(directories,"directories");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(curDirectory,"curDirectory");
	HX_MARK_MEMBER_NAME(directoryTxt,"directoryTxt");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MasterEditorMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(directories,"directories");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(curDirectory,"curDirectory");
	HX_VISIT_MEMBER_NAME(directoryTxt,"directoryTxt");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MasterEditorMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directories") ) { return ::hx::Val( directories ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curDirectory") ) { return ::hx::Val( curDirectory ); }
		if (HX_FIELD_EQ(inName,"directoryTxt") ) { return ::hx::Val( directoryTxt ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeDirectory") ) { return ::hx::Val( changeDirectory_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MasterEditorMenu_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromPlay") ) { outValue = ( fromPlay ); return true; }
	}
	return false;
}

::hx::Val MasterEditorMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"directories") ) { directories=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curDirectory") ) { curDirectory=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"directoryTxt") ) { directoryTxt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MasterEditorMenu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromPlay") ) { fromPlay=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void MasterEditorMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("directories",0b,5c,2c,61));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("curDirectory",cd,9c,ef,a5));
	outFields->push(HX_("directoryTxt",03,b6,2a,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MasterEditorMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MasterEditorMenu_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MasterEditorMenu_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MasterEditorMenu_obj,directories),HX_("directories",0b,5c,2c,61)},
	{::hx::fsInt,(int)offsetof(MasterEditorMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(int)offsetof(MasterEditorMenu_obj,curDirectory),HX_("curDirectory",cd,9c,ef,a5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MasterEditorMenu_obj,directoryTxt),HX_("directoryTxt",03,b6,2a,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MasterEditorMenu_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &MasterEditorMenu_obj::fromPlay,HX_("fromPlay",7e,fc,25,a8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MasterEditorMenu_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpTexts",01,f1,99,f0),
	HX_("directories",0b,5c,2c,61),
	HX_("curSelected",fb,eb,ab,32),
	HX_("curDirectory",cd,9c,ef,a5),
	HX_("directoryTxt",03,b6,2a,b0),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeDirectory",dd,92,df,ca),
	::String(null()) };

static void MasterEditorMenu_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MasterEditorMenu_obj::fromPlay,"fromPlay");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MasterEditorMenu_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MasterEditorMenu_obj::fromPlay,"fromPlay");
};

#endif

::hx::Class MasterEditorMenu_obj::__mClass;

static ::String MasterEditorMenu_obj_sStaticFields[] = {
	HX_("fromPlay",7e,fc,25,a8),
	::String(null())
};

void MasterEditorMenu_obj::__register()
{
	MasterEditorMenu_obj _hx_dummy;
	MasterEditorMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("editors.MasterEditorMenu",96,08,8f,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MasterEditorMenu_obj::__GetStatic;
	__mClass->mSetStaticField = &MasterEditorMenu_obj::__SetStatic;
	__mClass->mMarkFunc = MasterEditorMenu_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MasterEditorMenu_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MasterEditorMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MasterEditorMenu_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MasterEditorMenu_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MasterEditorMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MasterEditorMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MasterEditorMenu_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aa1a162bced268b8_37_boot)
HXDLIN(  37)		fromPlay = false;
            	}
}

} // end namespace editors
