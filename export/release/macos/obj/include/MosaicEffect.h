#ifndef INCLUDED_MosaicEffect
#define INCLUDED_MosaicEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MosaicEffect)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS1(openfl8,MosaicShader)



class HXCPP_CLASS_ATTRIBUTES MosaicEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MosaicEffect_obj OBJ_;
		MosaicEffect_obj();

	public:
		enum { _hx_ClassId = 0x30d260bf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MosaicEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MosaicEffect"); }
		static ::hx::ObjectPtr< MosaicEffect_obj > __new();
		static ::hx::ObjectPtr< MosaicEffect_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MosaicEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MosaicEffect",9b,a6,a6,15); }

		static void __boot();
		static Float DEFAULT_STRENGTH;
		 ::openfl8::MosaicShader shader;
		Float strengthX;
		Float strengthY;
		void setStrength(Float strengthX,Float strengthY);
		::Dynamic setStrength_dyn();

};


#endif /* INCLUDED_MosaicEffect */ 
