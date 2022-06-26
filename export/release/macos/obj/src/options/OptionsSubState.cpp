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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_options_NoteOffsetSubstate
#include <options/NoteOffsetSubstate.h>
#endif
#ifndef INCLUDED_options_NotesSubState
#include <options/NotesSubState.h>
#endif
#ifndef INCLUDED_options_OptionsSubState
#include <options/OptionsSubState.h>
#endif
#ifndef INCLUDED_options_VisualsUISubState
#include <options/VisualsUISubState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fb3f81882ae1f446_31_new,"options.OptionsSubState","new",0xa00f7131,"options.OptionsSubState.new","options/OptionsSubState.hx",31,0x4cf193a0)
static const ::String _hx_array_data_7cf904bf_1[] = {
	HX_("Note Colors",1e,54,23,f8),HX_("Controls",96,42,6e,11),HX_("Adjust Delay and Combo",b7,c9,c3,05),HX_("Graphics",eb,b4,19,ec),HX_("Visuals and UI",ea,4a,1e,90),HX_("Gameplay",06,bf,58,a5),
};
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_43_openSubStaten,"options.OptionsSubState","openSubStaten",0x182a59c4,"options.OptionsSubState.openSubStaten","options/OptionsSubState.hx",43,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_48_openSelectedSubstate,"options.OptionsSubState","openSelectedSubstate",0xef758e05,"options.OptionsSubState.openSelectedSubstate","options/OptionsSubState.hx",48,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_69_create,"options.OptionsSubState","create",0x6f7d5ecb,"options.OptionsSubState.create","options/OptionsSubState.hx",69,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_112_closeSubState,"options.OptionsSubState","closeSubState",0xf44b485a,"options.OptionsSubState.closeSubState","options/OptionsSubState.hx",112,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_117_update,"options.OptionsSubState","update",0x7a737dd8,"options.OptionsSubState.update","options/OptionsSubState.hx",117,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_143_changeSelection,"options.OptionsSubState","changeSelection",0x5587af0d,"options.OptionsSubState.changeSelection","options/OptionsSubState.hx",143,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_33_boot,"options.OptionsSubState","boot",0x658c9a41,"options.OptionsSubState.boot","options/OptionsSubState.hx",33,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_35_boot,"options.OptionsSubState","boot",0x658c9a41,"options.OptionsSubState.boot","options/OptionsSubState.hx",35,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_38_boot,"options.OptionsSubState","boot",0x658c9a41,"options.OptionsSubState.boot","options/OptionsSubState.hx",38,0x4cf193a0)
HX_LOCAL_STACK_FRAME(_hx_pos_fb3f81882ae1f446_39_boot,"options.OptionsSubState","boot",0x658c9a41,"options.OptionsSubState.boot","options/OptionsSubState.hx",39,0x4cf193a0)
namespace options{

void OptionsSubState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_31_new)
HXLINE(  36)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_7cf904bf_1,6);
HXLINE(  31)		super::__construct();
            	}

Dynamic OptionsSubState_obj::__CreateEmpty() { return new OptionsSubState_obj; }

void *OptionsSubState_obj::_hx_vtable = 0;

Dynamic OptionsSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsSubState_obj > _hx_result = new OptionsSubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionsSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0a8da779) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0a8da779;
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

void OptionsSubState_obj::openSubStaten( ::flixel::FlxSubState next){
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_43_openSubStaten)
HXLINE(  44)		next->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE(  45)		this->openSubState(next);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsSubState_obj,openSubStaten,(void))

void OptionsSubState_obj::openSelectedSubstate(::String label){
            	HX_GC_STACKFRAME(&_hx_pos_fb3f81882ae1f446_48_openSelectedSubstate)
HXLINE(  49)		::options::OptionsSubState_obj::clickedSomething = true;
HXLINE(  50)		::String _hx_switch_0 = label;
            		if (  (_hx_switch_0==HX_("Adjust Delay and Combo",b7,c9,c3,05)) ){
HXLINE(  62)			this->openSubStaten( ::options::NoteOffsetSubstate_obj::__alloc( HX_CTX ));
HXDLIN(  62)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("Controls",96,42,6e,11)) ){
HXLINE(  54)			this->openSubStaten( ::options::ControlsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  54)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("Gameplay",06,bf,58,a5)) ){
HXLINE(  60)			this->openSubStaten( ::options::GameplaySettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  60)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("Graphics",eb,b4,19,ec)) ){
HXLINE(  56)			this->openSubStaten( ::options::GraphicsSettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  56)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("Note Colors",1e,54,23,f8)) ){
HXLINE(  52)			this->openSubStaten( ::options::NotesSubState_obj::__alloc( HX_CTX ));
HXDLIN(  52)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("Visuals and UI",ea,4a,1e,90)) ){
HXLINE(  58)			this->openSubStaten( ::options::VisualsUISubState_obj::__alloc( HX_CTX ));
HXDLIN(  58)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsSubState_obj,openSelectedSubstate,(void))

void OptionsSubState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_fb3f81882ae1f446_69_create)
HXLINE(  70)		::options::OptionsSubState_obj::clickedSomething = false;
HXLINE(  72)		::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null());
HXLINE(  75)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  75)		::String library = null();
HXDLIN(  75)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  75)		 ::Dynamic bg1;
HXDLIN(  75)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  75)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  75)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  75)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  76)		bg2->set_color(-1412611);
HXLINE(  77)		bg2->setGraphicSize(::Std_obj::_hx_int((bg2->get_width() * ((Float)1.1))),null());
HXLINE(  78)		bg2->updateHitbox();
HXLINE(  79)		bg2->screenCenter(null());
HXLINE(  80)		bg2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  81)		this->add(bg2);
HXLINE(  83)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  84)		this->add(this->grpOptions);
HXLINE(  86)		{
HXLINE(  86)			int _g = 0;
HXDLIN(  86)			int _g1 = this->options->length;
HXDLIN(  86)			while((_g < _g1)){
HXLINE(  86)				_g = (_g + 1);
HXDLIN(  86)				int i = (_g - 1);
HXLINE(  88)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->options->__get(i),true,false,null(),null());
HXLINE(  89)				optionText->screenCenter(null());
HXLINE(  90)				optionText->set_y((optionText->y + ((( (Float)(100) ) * (( (Float)(i) ) - (( (Float)(this->options->length) ) / ( (Float)(2) )))) + 50)));
HXLINE(  91)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  94)		this->selectorLeft =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_(">",3e,00,00,00),true,false,null(),null());
HXLINE(  95)		this->add(this->selectorLeft);
HXLINE(  96)		this->selectorRight =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("<",3c,00,00,00),true,false,null(),null());
HXLINE(  97)		this->add(this->selectorRight);
HXLINE(  99)		this->changeSelection(null());
HXLINE( 100)		::ClientPrefs_obj::saveSettings();
HXLINE( 102)		this->versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 24),0,HX_("If you close this menu after selecting something the game will reset",11,26,db,52),12,null());
HXLINE( 103)		this->versionShit->scrollFactor->set(null(),null());
HXLINE( 104)		this->versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 105)		this->add(this->versionShit);
HXLINE( 107)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
HXLINE( 109)		this->super::create();
            	}


void OptionsSubState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_112_closeSubState)
HXLINE( 113)		this->super::closeSubState();
HXLINE( 114)		::ClientPrefs_obj::saveSettings();
            	}


void OptionsSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_fb3f81882ae1f446_117_update)
HXLINE( 118)		this->remove(this->versionShit,null());
HXLINE( 119)		::String _hx_tmp;
HXDLIN( 119)		if (::options::OptionsSubState_obj::clickedSomething) {
HXLINE( 119)			_hx_tmp = HX_("Game will reset after closing this menu",21,c7,22,12);
            		}
            		else {
HXLINE( 119)			_hx_tmp = HX_("If you close this menu after selecting something the game will reset",11,26,db,52);
            		}
HXDLIN( 119)		this->versionShit =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,12,(::flixel::FlxG_obj::height - 24),0,_hx_tmp,12,null());
HXLINE( 120)		this->versionShit->scrollFactor->set(null(),null());
HXLINE( 121)		this->versionShit->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),16,-1,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 122)		this->add(this->versionShit);
HXLINE( 123)		this->super::update(elapsed);
HXLINE( 125)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 126)			this->changeSelection(-1);
            		}
HXLINE( 128)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 129)			this->changeSelection(1);
            		}
HXLINE( 132)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 133)			if (::options::OptionsSubState_obj::clickedSomething) {
HXLINE( 133)				 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN( 133)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 133)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			else {
HXLINE( 134)				this->close();
            			}
            		}
HXLINE( 137)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 138)			if (!(::options::OptionsSubState_obj::blockNextAccept)) {
HXLINE( 138)				this->openSelectedSubstate(this->options->__get(::options::OptionsSubState_obj::curSelected));
            			}
            			else {
HXLINE( 139)				::options::OptionsSubState_obj::blockNextAccept = false;
            			}
            		}
            	}


void OptionsSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_143_changeSelection)
HXLINE( 144)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::OptionsSubState >();
HXDLIN( 144)		::options::OptionsSubState_obj::curSelected = (::options::OptionsSubState_obj::curSelected + change);
HXLINE( 145)		if ((::options::OptionsSubState_obj::curSelected < 0)) {
HXLINE( 146)			::options::OptionsSubState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE( 147)		if ((::options::OptionsSubState_obj::curSelected >= this->options->length)) {
HXLINE( 148)			::options::OptionsSubState_obj::curSelected = 0;
            		}
HXLINE( 150)		int bullShit = 0;
HXLINE( 152)		{
HXLINE( 152)			int _g = 0;
HXDLIN( 152)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 152)			while((_g < _g1->length)){
HXLINE( 152)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 152)				_g = (_g + 1);
HXLINE( 153)				item->targetY = ( (Float)((bullShit - ::options::OptionsSubState_obj::curSelected)) );
HXLINE( 154)				bullShit = (bullShit + 1);
HXLINE( 156)				item->set_alpha(((Float)0.6));
HXLINE( 157)				if ((item->targetY == 0)) {
HXLINE( 158)					item->set_alpha(( (Float)(1) ));
HXLINE( 159)					this->selectorLeft->set_x((item->x - ( (Float)(63) )));
HXLINE( 160)					this->selectorLeft->set_y(item->y);
HXLINE( 161)					 ::Alphabet _hx_tmp = this->selectorRight;
HXDLIN( 161)					Float item1 = item->x;
HXDLIN( 161)					_hx_tmp->set_x(((item1 + item->get_width()) + 15));
HXLINE( 162)					this->selectorRight->set_y(item->y);
            				}
            			}
            		}
HXLINE( 165)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 165)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsSubState_obj,changeSelection,(void))

bool OptionsSubState_obj::isFromPause;

bool OptionsSubState_obj::blockNextAccept;

bool OptionsSubState_obj::clickedSomething;

int OptionsSubState_obj::curSelected;

 ::flixel::FlxSprite OptionsSubState_obj::menuBG;


::hx::ObjectPtr< OptionsSubState_obj > OptionsSubState_obj::__new() {
	::hx::ObjectPtr< OptionsSubState_obj > __this = new OptionsSubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OptionsSubState_obj > OptionsSubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OptionsSubState_obj *__this = (OptionsSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsSubState_obj), true, "options.OptionsSubState"));
	*(void **)__this = OptionsSubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionsSubState_obj::OptionsSubState_obj()
{
}

void OptionsSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsSubState);
	HX_MARK_MEMBER_NAME(versionShit,"versionShit");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_MARK_MEMBER_NAME(selectorRight,"selectorRight");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(versionShit,"versionShit");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_VISIT_MEMBER_NAME(selectorRight,"selectorRight");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"openSubStaten") ) { return ::hx::Val( openSubStaten_dyn() ); }
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

bool OptionsSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isFromPause") ) { outValue = ( isFromPause ); return true; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blockNextAccept") ) { outValue = ( blockNextAccept ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clickedSomething") ) { outValue = ( clickedSomething ); return true; }
	}
	return false;
}

::hx::Val OptionsSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

bool OptionsSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isFromPause") ) { isFromPause=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"blockNextAccept") ) { blockNextAccept=ioValue.Cast< bool >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clickedSomething") ) { clickedSomething=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void OptionsSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("versionShit",f8,4e,3b,e2));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("selectorLeft",c6,e2,77,e7));
	outFields->push(HX_("selectorRight",3d,98,7b,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsSubState_obj,versionShit),HX_("versionShit",f8,4e,3b,e2)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsSubState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsSubState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(OptionsSubState_obj,selectorLeft),HX_("selectorLeft",c6,e2,77,e7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(OptionsSubState_obj,selectorRight),HX_("selectorRight",3d,98,7b,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &OptionsSubState_obj::isFromPause,HX_("isFromPause",e2,77,61,50)},
	{::hx::fsBool,(void *) &OptionsSubState_obj::blockNextAccept,HX_("blockNextAccept",08,40,d0,68)},
	{::hx::fsBool,(void *) &OptionsSubState_obj::clickedSomething,HX_("clickedSomething",d3,0c,86,7b)},
	{::hx::fsInt,(void *) &OptionsSubState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsSubState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsSubState_obj_sMemberFields[] = {
	HX_("versionShit",f8,4e,3b,e2),
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("openSubStaten",b3,29,11,28),
	HX_("openSelectedSubstate",f6,29,af,78),
	HX_("selectorLeft",c6,e2,77,e7),
	HX_("selectorRight",3d,98,7b,18),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void OptionsSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsSubState_obj::isFromPause,"isFromPause");
	HX_MARK_MEMBER_NAME(OptionsSubState_obj::blockNextAccept,"blockNextAccept");
	HX_MARK_MEMBER_NAME(OptionsSubState_obj::clickedSomething,"clickedSomething");
	HX_MARK_MEMBER_NAME(OptionsSubState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsSubState_obj::menuBG,"menuBG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsSubState_obj::isFromPause,"isFromPause");
	HX_VISIT_MEMBER_NAME(OptionsSubState_obj::blockNextAccept,"blockNextAccept");
	HX_VISIT_MEMBER_NAME(OptionsSubState_obj::clickedSomething,"clickedSomething");
	HX_VISIT_MEMBER_NAME(OptionsSubState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsSubState_obj::menuBG,"menuBG");
};

#endif

::hx::Class OptionsSubState_obj::__mClass;

static ::String OptionsSubState_obj_sStaticFields[] = {
	HX_("isFromPause",e2,77,61,50),
	HX_("blockNextAccept",08,40,d0,68),
	HX_("clickedSomething",d3,0c,86,7b),
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	::String(null())
};

void OptionsSubState_obj::__register()
{
	OptionsSubState_obj _hx_dummy;
	OptionsSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.OptionsSubState",bf,04,f9,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsSubState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsSubState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_33_boot)
HXDLIN(  33)		isFromPause = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_35_boot)
HXDLIN(  35)		blockNextAccept = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_38_boot)
HXDLIN(  38)		clickedSomething = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fb3f81882ae1f446_39_boot)
HXDLIN(  39)		curSelected = 0;
            	}
}

} // end namespace options
