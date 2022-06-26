#ifndef INCLUDED_openfl_printing__PrintJobOrientation_PrintJobOrientation_Impl_
#define INCLUDED_openfl_printing__PrintJobOrientation_PrintJobOrientation_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,printing,_PrintJobOrientation,PrintJobOrientation_Impl_)

namespace openfl{
namespace printing{
namespace _PrintJobOrientation{


class HXCPP_CLASS_ATTRIBUTES PrintJobOrientation_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PrintJobOrientation_Impl__obj OBJ_;
		PrintJobOrientation_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5df95e72 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_"); }

		inline static ::hx::ObjectPtr< PrintJobOrientation_Impl__obj > __new() {
			::hx::ObjectPtr< PrintJobOrientation_Impl__obj > __this = new PrintJobOrientation_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PrintJobOrientation_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PrintJobOrientation_Impl__obj *__this = (PrintJobOrientation_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PrintJobOrientation_Impl__obj), false, "openfl.printing._PrintJobOrientation.PrintJobOrientation_Impl_"));
			*(void **)__this = PrintJobOrientation_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PrintJobOrientation_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PrintJobOrientation_Impl_",60,b3,ea,05); }

		static void __boot();
		static  ::Dynamic LANDSCAPE;
		static  ::Dynamic PORTRAIT;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace printing
} // end namespace _PrintJobOrientation

#endif /* INCLUDED_openfl_printing__PrintJobOrientation_PrintJobOrientation_Impl_ */ 
