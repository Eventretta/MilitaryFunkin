#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#define INCLUDED_openfl_display__internal_DrawCommandReader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandReader)
HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandType)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DrawCommandReader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DrawCommandReader_obj OBJ_;
		DrawCommandReader_obj();

	public:
		enum { _hx_ClassId = 0x30a4d7c0 };

		void __construct( ::openfl::display::_internal::DrawCommandBuffer buffer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display._internal.DrawCommandReader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display._internal.DrawCommandReader"); }
		static ::hx::ObjectPtr< DrawCommandReader_obj > __new( ::openfl::display::_internal::DrawCommandBuffer buffer);
		static ::hx::ObjectPtr< DrawCommandReader_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::_internal::DrawCommandBuffer buffer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DrawCommandReader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DrawCommandReader",2a,c6,97,e0); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::openfl::display::_internal::DrawCommandBuffer buffer;
		int bPos;
		int iiPos;
		int iPos;
		int ffPos;
		int fPos;
		int oPos;
		 ::openfl::display::_internal::DrawCommandType prev;
		int tsPos;
		void advance();
		::Dynamic advance_dyn();

		bool _hx_bool(int index);
		::Dynamic _hx_bool_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		::Array< Float > fArr(int index);
		::Dynamic fArr_dyn();

		Float _hx_float(int index);
		::Dynamic _hx_float_dyn();

		::Array< int > iArr(int index);
		::Dynamic iArr_dyn();

		int _hx_int(int index);
		::Dynamic _hx_int_dyn();

		 ::Dynamic obj(int index);
		::Dynamic obj_dyn();

		 ::openfl::display::_internal::DrawCommandReader readBeginBitmapFill();
		::Dynamic readBeginBitmapFill_dyn();

		 ::openfl::display::_internal::DrawCommandReader readBeginFill();
		::Dynamic readBeginFill_dyn();

		 ::openfl::display::_internal::DrawCommandReader readBeginGradientFill();
		::Dynamic readBeginGradientFill_dyn();

		 ::openfl::display::_internal::DrawCommandReader readBeginShaderFill();
		::Dynamic readBeginShaderFill_dyn();

		 ::openfl::display::_internal::DrawCommandReader readCubicCurveTo();
		::Dynamic readCubicCurveTo_dyn();

		 ::openfl::display::_internal::DrawCommandReader readCurveTo();
		::Dynamic readCurveTo_dyn();

		 ::openfl::display::_internal::DrawCommandReader readDrawCircle();
		::Dynamic readDrawCircle_dyn();

		 ::openfl::display::_internal::DrawCommandReader readDrawEllipse();
		::Dynamic readDrawEllipse_dyn();

		 ::openfl::display::_internal::DrawCommandReader readDrawQuads();
		::Dynamic readDrawQuads_dyn();

		 ::openfl::display::_internal::DrawCommandReader readDrawRect();
		::Dynamic readDrawRect_dyn();

		 ::openfl::display::_internal::DrawCommandReader readDrawRoundRect();
		::Dynamic readDrawRoundRect_dyn();

		 ::openfl::display::_internal::DrawCommandReader readDrawTriangles();
		::Dynamic readDrawTriangles_dyn();

		 ::openfl::display::_internal::DrawCommandReader readEndFill();
		::Dynamic readEndFill_dyn();

		 ::openfl::display::_internal::DrawCommandReader readLineBitmapStyle();
		::Dynamic readLineBitmapStyle_dyn();

		 ::openfl::display::_internal::DrawCommandReader readLineGradientStyle();
		::Dynamic readLineGradientStyle_dyn();

		 ::openfl::display::_internal::DrawCommandReader readLineStyle();
		::Dynamic readLineStyle_dyn();

		 ::openfl::display::_internal::DrawCommandReader readLineTo();
		::Dynamic readLineTo_dyn();

		 ::openfl::display::_internal::DrawCommandReader readMoveTo();
		::Dynamic readMoveTo_dyn();

		 ::openfl::display::_internal::DrawCommandReader readOverrideBlendMode();
		::Dynamic readOverrideBlendMode_dyn();

		 ::openfl::display::_internal::DrawCommandReader readOverrideMatrix();
		::Dynamic readOverrideMatrix_dyn();

		 ::openfl::display::_internal::DrawCommandReader readWindingEvenOdd();
		::Dynamic readWindingEvenOdd_dyn();

		 ::openfl::display::_internal::DrawCommandReader readWindingNonZero();
		::Dynamic readWindingNonZero_dyn();

		void reset();
		::Dynamic reset_dyn();

		void skip( ::openfl::display::_internal::DrawCommandType type);
		::Dynamic skip_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DrawCommandReader */ 
