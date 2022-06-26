#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra
#define INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_87671ce3ef4fd386_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_read_format_bgra)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_read_format_bgra_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_read_format_bgra_obj OBJ_;
		EXT_read_format_bgra_obj();

	public:
		enum { _hx_ClassId = 0x7ef6d403 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_read_format_bgra")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_read_format_bgra"); }

		inline static ::hx::ObjectPtr< EXT_read_format_bgra_obj > __new() {
			::hx::ObjectPtr< EXT_read_format_bgra_obj > __this = new EXT_read_format_bgra_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_read_format_bgra_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_read_format_bgra_obj *__this = (EXT_read_format_bgra_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_read_format_bgra_obj), false, "lime.graphics.opengl.ext.EXT_read_format_bgra"));
			*(void **)__this = EXT_read_format_bgra_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_87671ce3ef4fd386_4_new)
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_read_format_bgra)(__this) )->UNSIGNED_SHORT_1_5_5_5_REV_EXT = 33638;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_read_format_bgra)(__this) )->UNSIGNED_SHORT_4_4_4_4_REV_EXT = 33637;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_read_format_bgra)(__this) )->BGRA_EXT = 32993;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_read_format_bgra_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_read_format_bgra",11,c1,96,f4); }

		int BGRA_EXT;
		int UNSIGNED_SHORT_4_4_4_4_REV_EXT;
		int UNSIGNED_SHORT_1_5_5_5_REV_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_read_format_bgra */ 
