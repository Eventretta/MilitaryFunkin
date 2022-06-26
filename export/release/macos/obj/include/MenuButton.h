#ifndef INCLUDED_MenuButton
#define INCLUDED_MenuButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MenuButton)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES MenuButton_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MenuButton_obj OBJ_;
		MenuButton_obj();

	public:
		enum { _hx_ClassId = 0x0a09ca35 };

		void __construct( ::flixel::FlxSprite sprite,::String opt,int buttonID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MenuButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MenuButton"); }
		static ::hx::ObjectPtr< MenuButton_obj > __new( ::flixel::FlxSprite sprite,::String opt,int buttonID);
		static ::hx::ObjectPtr< MenuButton_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite sprite,::String opt,int buttonID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuButton_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuButton",11,a1,15,b3); }

		 ::flixel::FlxSprite button;
		::String representedOption;
		int buttonID;
};


#endif /* INCLUDED_MenuButton */ 
