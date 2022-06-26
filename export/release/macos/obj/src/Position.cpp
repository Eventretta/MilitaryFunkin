#include <hxcpp.h>

#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Position
#include <Position.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_463bb655b3209584_7_new,"Position","new",0x2250963b,"Position.new","Position.hx",7,0xe3744995)
static const Float _hx_array_data_a4ac5cc9_1[] = {
	(Float)30,(Float)40,
};
static const Float _hx_array_data_a4ac5cc9_2[] = {
	(Float)100,(Float)100,
};
HX_LOCAL_STACK_FRAME(_hx_pos_463bb655b3209584_15_create,"Position","create",0x875d7c01,"Position.create","Position.hx",15,0xe3744995)
HX_LOCAL_STACK_FRAME(_hx_pos_463bb655b3209584_30_update,"Position","update",0x92539b0e,"Position.update","Position.hx",30,0xe3744995)

void Position_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_463bb655b3209584_7_new)
HXLINE(  13)		this->daPos = ::Array_obj< ::Dynamic>::__new(2)->init(0,::Array_obj< Float >::fromData( _hx_array_data_a4ac5cc9_1,2))->init(1,::Array_obj< Float >::fromData( _hx_array_data_a4ac5cc9_2,2));
HXLINE(  12)		this->cubA = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  11)		this->el = ((Float)0);
HXLINE(  10)		this->cubes = 0;
HXLINE(   7)		super::__construct(TransIn,TransOut);
            	}

Dynamic Position_obj::__CreateEmpty() { return new Position_obj; }

void *Position_obj::_hx_vtable = 0;

Dynamic Position_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Position_obj > _hx_result = new Position_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Position_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x23a57bae) {
			if (inClassId<=(int)0x003d4f89) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x003d4f89;
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

void Position_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_463bb655b3209584_15_create)
HXLINE(  16)		this->super::create();
HXLINE(  18)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  18)		this->add(_hx_tmp->makeGraphic((::flixel::FlxG_obj::width * 10),(::flixel::FlxG_obj::height * 10),-8355712,null(),null()));
HXLINE(  20)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN(  20)		::String library = null();
HXDLIN(  20)		::String file = ::Paths_obj::modFolders((((HX_("music/",ea,bf,1b,3f) + HX_("offsetSong",08,ad,6f,48)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)));
HXDLIN(  20)		 ::Dynamic _hx_tmp2;
HXDLIN(  20)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  20)			if (!(::Paths_obj::customSoundsLoaded->exists(file))) {
HXLINE(  20)				::Dynamic this1 = ::Paths_obj::customSoundsLoaded;
HXDLIN(  20)				( ( ::haxe::ds::StringMap)(this1) )->set(file,::openfl::media::Sound_obj::fromFile(file));
            			}
HXDLIN(  20)			_hx_tmp2 = ::Paths_obj::customSoundsLoaded->get(file);
            		}
            		else {
HXLINE(  20)			_hx_tmp2 = ::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("offsetSong",08,ad,6f,48)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            		}
HXDLIN(  20)		_hx_tmp1->playMusic(_hx_tmp2,null(),null(),null());
HXLINE(  22)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  24)		this->pos =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,20,null(),HX_("0,0\nMove the mouse to see the coordinates\nand click to add a cube",4a,fc,7b,f3),null(),null());
HXLINE(  25)		this->pos->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  26)		this->add(this->pos);
            	}


void Position_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_463bb655b3209584_30_update)
HXLINE(  31)		 ::Position _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  31)		_hx_tmp->el = (_hx_tmp->el + (elapsed * ( (Float)(100) )));
HXLINE(  32)		this->super::update(elapsed);
HXLINE(  33)		this->remove(this->pos,null());
HXLINE(  34)		this->pos =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,20,null(),(((::flixel::FlxG_obj::mouse->x + HX_(" , ",94,6e,18,00)) + ::flixel::FlxG_obj::mouse->y) + ((HX_("\nMove the mouse to see the coordinates\nand click to add a cube\nThere are ",5c,00,0b,08) + this->cubes) + HX_(" cubes.",b0,60,f9,66))),null(),null());
HXLINE(  35)		this->pos->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  36)		this->add(this->pos);
HXLINE(  37)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  37)		if (_this->keyManager->checkStatus(13,_this->status)) {
HXLINE(  37)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE(  38)		 ::flixel::input::mouse::FlxMouseButton _this1 = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN(  38)		bool _hx_tmp1;
HXDLIN(  38)		if ((_this1->current != 1)) {
HXLINE(  38)			_hx_tmp1 = (_this1->current == 2);
            		}
            		else {
HXLINE(  38)			_hx_tmp1 = true;
            		}
HXDLIN(  38)		if (_hx_tmp1) {
HXLINE(  39)			 ::Position _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  39)			_hx_tmp->cubes = (_hx_tmp->cubes + 1);
HXLINE(  40)			::Array< ::Dynamic> _hx_tmp1 = this->cubA;
HXDLIN(  40)			_hx_tmp1->push( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y,null())->makeGraphic(10,10,-16777216,null(),null()));
HXLINE(  41)			this->add( ::flixel::FlxSprite_obj::__alloc( HX_CTX ,::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y,null())->makeGraphic(10,10,-16777216,null(),null()));
            		}
HXLINE(  43)		bool _hx_tmp2;
HXDLIN(  43)		 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  43)		if (_this2->keyManager->checkStatus(84,_this2->status)) {
HXLINE(  43)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  43)			_hx_tmp2 = _this->keyManager->checkStatus(69,_this->status);
            		}
            		else {
HXLINE(  43)			_hx_tmp2 = false;
            		}
HXDLIN(  43)		if (_hx_tmp2) {
HXLINE(  45)			 ::lime::ui::Window _hx_tmp = ::lime::app::Application_obj::current->_hx___window;
HXDLIN(  45)			_hx_tmp->alert((HX_("",00,00,00,00) + this->el).split(HX_("",00,00,00,00))->__get(0),HX_("DEBUG",33,8a,0d,55));
            		}
            	}



::hx::ObjectPtr< Position_obj > Position_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< Position_obj > __this = new Position_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< Position_obj > Position_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	Position_obj *__this = (Position_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Position_obj), true, "Position"));
	*(void **)__this = Position_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

Position_obj::Position_obj()
{
}

void Position_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Position);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(cubes,"cubes");
	HX_MARK_MEMBER_NAME(el,"el");
	HX_MARK_MEMBER_NAME(cubA,"cubA");
	HX_MARK_MEMBER_NAME(daPos,"daPos");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Position_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(cubes,"cubes");
	HX_VISIT_MEMBER_NAME(el,"el");
	HX_VISIT_MEMBER_NAME(cubA,"cubA");
	HX_VISIT_MEMBER_NAME(daPos,"daPos");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Position_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"el") ) { return ::hx::Val( el ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cubA") ) { return ::hx::Val( cubA ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cubes") ) { return ::hx::Val( cubes ); }
		if (HX_FIELD_EQ(inName,"daPos") ) { return ::hx::Val( daPos ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Position_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"el") ) { el=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"cubA") ) { cubA=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cubes") ) { cubes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daPos") ) { daPos=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Position_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("cubes",de,19,4c,4e));
	outFields->push(HX_("el",67,58,00,00));
	outFields->push(HX_("cubA",d1,3c,c9,41));
	outFields->push(HX_("daPos",17,ca,6c,d4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Position_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(Position_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(Position_obj,cubes),HX_("cubes",de,19,4c,4e)},
	{::hx::fsFloat,(int)offsetof(Position_obj,el),HX_("el",67,58,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Position_obj,cubA),HX_("cubA",d1,3c,c9,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Position_obj,daPos),HX_("daPos",17,ca,6c,d4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Position_obj_sStaticStorageInfo = 0;
#endif

static ::String Position_obj_sMemberFields[] = {
	HX_("pos",94,5d,55,00),
	HX_("cubes",de,19,4c,4e),
	HX_("el",67,58,00,00),
	HX_("cubA",d1,3c,c9,41),
	HX_("daPos",17,ca,6c,d4),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Position_obj::__mClass;

void Position_obj::__register()
{
	Position_obj _hx_dummy;
	Position_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Position",c9,5c,ac,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Position_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Position_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Position_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Position_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

