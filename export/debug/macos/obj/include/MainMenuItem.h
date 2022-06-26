#ifndef INCLUDED_MainMenuItem
#define INCLUDED_MainMenuItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MainMenuItem)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES MainMenuItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MainMenuItem_obj OBJ_;
		MainMenuItem_obj();

	public:
		enum { _hx_ClassId = 0x2be2e68b };

		void __construct(::Array< ::String > optionShit,Float scale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MainMenuItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MainMenuItem"); }
		static ::hx::ObjectPtr< MainMenuItem_obj > __new(::Array< ::String > optionShit,Float scale);
		static ::hx::ObjectPtr< MainMenuItem_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::String > optionShit,Float scale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MainMenuItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MainMenuItem",cb,93,01,43); }

		::Array< ::Dynamic> pushedThing;
};


#endif /* INCLUDED_MainMenuItem */ 
