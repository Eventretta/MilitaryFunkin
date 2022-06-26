#ifndef INCLUDED_Preloader
#define INCLUDED_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_FlxBasePreloader
#include <flixel/system/FlxBasePreloader.h>
#endif
HX_DECLARE_CLASS0(Preloader)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxBasePreloader)
HX_DECLARE_CLASS3(flixel,_hx_system,_FlxBasePreloader,DefaultPreloader)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES Preloader_obj : public  ::flixel::_hx_system::FlxBasePreloader_obj
{
	public:
		typedef  ::flixel::_hx_system::FlxBasePreloader_obj super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();

	public:
		enum { _hx_ClassId = 0x451fddce };

		void __construct(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Preloader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Preloader"); }
		static ::hx::ObjectPtr< Preloader_obj > __new(::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static ::hx::ObjectPtr< Preloader_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Preloader",56,c4,4e,24); }

		 ::openfl::display::Sprite logo;
		Float ratio;
		void create();

		void update(Float Percent);

};


#endif /* INCLUDED_Preloader */ 
