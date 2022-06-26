#include <hxcpp.h>

#ifndef INCLUDED_MenuButton
#include <MenuButton.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_62ba160f52f7cc16_43_new,"MenuButton","new",0xcd859e83,"MenuButton.new","MainMenuItem.hx",43,0x844ddfd3)

void MenuButton_obj::__construct( ::flixel::FlxSprite sprite,::String opt,int buttonID){
            	HX_STACKFRAME(&_hx_pos_62ba160f52f7cc16_43_new)
            	}

Dynamic MenuButton_obj::__CreateEmpty() { return new MenuButton_obj; }

void *MenuButton_obj::_hx_vtable = 0;

Dynamic MenuButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuButton_obj > _hx_result = new MenuButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MenuButton_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a09ca35;
}


::hx::ObjectPtr< MenuButton_obj > MenuButton_obj::__new( ::flixel::FlxSprite sprite,::String opt,int buttonID) {
	::hx::ObjectPtr< MenuButton_obj > __this = new MenuButton_obj();
	__this->__construct(sprite,opt,buttonID);
	return __this;
}

::hx::ObjectPtr< MenuButton_obj > MenuButton_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite sprite,::String opt,int buttonID) {
	MenuButton_obj *__this = (MenuButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuButton_obj), true, "MenuButton"));
	*(void **)__this = MenuButton_obj::_hx_vtable;
	__this->__construct(sprite,opt,buttonID);
	return __this;
}

MenuButton_obj::MenuButton_obj()
{
}

void MenuButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuButton);
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(representedOption,"representedOption");
	HX_MARK_MEMBER_NAME(buttonID,"buttonID");
	HX_MARK_END_CLASS();
}

void MenuButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(representedOption,"representedOption");
	HX_VISIT_MEMBER_NAME(buttonID,"buttonID");
}

::hx::Val MenuButton_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return ::hx::Val( button ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonID") ) { return ::hx::Val( buttonID ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"representedOption") ) { return ::hx::Val( representedOption ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuButton_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"buttonID") ) { buttonID=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"representedOption") ) { representedOption=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("representedOption",dc,9c,44,10));
	outFields->push(HX_("buttonID",4d,82,32,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuButton_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MenuButton_obj,button),HX_("button",f2,61,e0,d9)},
	{::hx::fsString,(int)offsetof(MenuButton_obj,representedOption),HX_("representedOption",dc,9c,44,10)},
	{::hx::fsInt,(int)offsetof(MenuButton_obj,buttonID),HX_("buttonID",4d,82,32,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuButton_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuButton_obj_sMemberFields[] = {
	HX_("button",f2,61,e0,d9),
	HX_("representedOption",dc,9c,44,10),
	HX_("buttonID",4d,82,32,5c),
	::String(null()) };

::hx::Class MenuButton_obj::__mClass;

void MenuButton_obj::__register()
{
	MenuButton_obj _hx_dummy;
	MenuButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuButton",11,a1,15,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuButton_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

