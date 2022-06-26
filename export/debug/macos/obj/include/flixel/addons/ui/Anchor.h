#ifndef INCLUDED_flixel_addons_ui_Anchor
#define INCLUDED_flixel_addons_ui_Anchor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,addons,ui,Anchor)
HX_DECLARE_CLASS3(flixel,addons,ui,AnchorPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Anchor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Anchor_obj OBJ_;
		Anchor_obj();

	public:
		enum { _hx_ClassId = 0x348d3c80 };

		void __construct(Float XOff,Float YOff,::String XSide,::String YSide,::String XFlush,::String YFlush);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.Anchor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.Anchor"); }
		static ::hx::ObjectPtr< Anchor_obj > __new(Float XOff,Float YOff,::String XSide,::String YSide,::String XFlush,::String YFlush);
		static ::hx::ObjectPtr< Anchor_obj > __alloc(::hx::Ctx *_hx_ctx,Float XOff,Float YOff,::String XSide,::String YSide,::String XFlush,::String YFlush);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Anchor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Anchor",95,ae,05,95); }

		static void __boot();
		static ::String LEFT;
		static ::String RIGHT;
		static ::String TOP;
		static ::String BOTTOM;
		static ::String CENTER;
		static ::String UNKNOWN;
		 ::flixel::addons::ui::AnchorPoint x;
		 ::flixel::addons::ui::AnchorPoint y;
		void destroy();
		::Dynamic destroy_dyn();

		void anchorThing( ::flixel::FlxObject thing, ::flixel::FlxObject destination);
		::Dynamic anchorThing_dyn();

		 ::flixel::addons::ui::Anchor getFlipped(bool FlipX,bool FlipY, ::flixel::addons::ui::Anchor AnchorObject);
		::Dynamic getFlipped_dyn();

		 ::flixel::addons::ui::Anchor clone();
		::Dynamic clone_dyn();

		::String flipAnchorSide(::String str);
		::Dynamic flipAnchorSide_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_Anchor */ 
