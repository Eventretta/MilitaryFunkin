#ifndef INCLUDED_flixel_addons_effects_FlxTrailArea
#define INCLUDED_flixel_addons_effects_FlxTrailArea

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,effects,FlxTrailArea)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES FlxTrailArea_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef FlxTrailArea_obj OBJ_;
		FlxTrailArea_obj();

	public:
		enum { _hx_ClassId = 0x2edadb68 };

		void __construct(::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_AlphaMultiplier,::hx::Null< int >  __o_Delay,::hx::Null< bool >  __o_SimpleRender,::hx::Null< bool >  __o_Antialiasing, ::Dynamic TrailBlendMode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.FlxTrailArea")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.FlxTrailArea"); }
		static ::hx::ObjectPtr< FlxTrailArea_obj > __new(::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_AlphaMultiplier,::hx::Null< int >  __o_Delay,::hx::Null< bool >  __o_SimpleRender,::hx::Null< bool >  __o_Antialiasing, ::Dynamic TrailBlendMode);
		static ::hx::ObjectPtr< FlxTrailArea_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< Float >  __o_AlphaMultiplier,::hx::Null< int >  __o_Delay,::hx::Null< bool >  __o_SimpleRender,::hx::Null< bool >  __o_Antialiasing, ::Dynamic TrailBlendMode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTrailArea_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTrailArea",c1,ef,71,42); }

		int delay;
		bool simpleRender;
		 ::Dynamic blendMode;
		 ::flixel::group::FlxTypedGroup group;
		Float redMultiplier;
		Float greenMultiplier;
		Float blueMultiplier;
		Float alphaMultiplier;
		Float redOffset;
		Float greenOffset;
		Float blueOffset;
		Float alphaOffset;
		int _counter;
		Float _width;
		Float _height;
		 ::openfl::display::BitmapData _areaPixels;
		void setSize(Float Width,Float Height);

		void destroy();

		void draw();

		void resetTrail();
		::Dynamic resetTrail_dyn();

		 ::flixel::FlxSprite add( ::flixel::FlxSprite Sprite);
		::Dynamic add_dyn();

		Float get_width();

		Float set_width(Float Width);

		Float get_height();

		Float set_height(Float Height);

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects

#endif /* INCLUDED_flixel_addons_effects_FlxTrailArea */ 
