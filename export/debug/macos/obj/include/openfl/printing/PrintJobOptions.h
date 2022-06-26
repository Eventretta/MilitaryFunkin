#ifndef INCLUDED_openfl_printing_PrintJobOptions
#define INCLUDED_openfl_printing_PrintJobOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1f97e81a8b18c976_55_new)
HX_DECLARE_CLASS2(openfl,printing,PrintJobOptions)

namespace openfl{
namespace printing{


class HXCPP_CLASS_ATTRIBUTES PrintJobOptions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PrintJobOptions_obj OBJ_;
		PrintJobOptions_obj();

	public:
		enum { _hx_ClassId = 0x32538125 };

		void __construct(::hx::Null< bool >  __o_printAsBitmap);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.printing.PrintJobOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.printing.PrintJobOptions"); }

		inline static ::hx::ObjectPtr< PrintJobOptions_obj > __new(::hx::Null< bool >  __o_printAsBitmap) {
			::hx::ObjectPtr< PrintJobOptions_obj > __this = new PrintJobOptions_obj();
			__this->__construct(__o_printAsBitmap);
			return __this;
		}

		inline static ::hx::ObjectPtr< PrintJobOptions_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_printAsBitmap) {
			PrintJobOptions_obj *__this = (PrintJobOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PrintJobOptions_obj), false, "openfl.printing.PrintJobOptions"));
			*(void **)__this = PrintJobOptions_obj::_hx_vtable;
{
            		bool printAsBitmap = __o_printAsBitmap.Default(false);
            	HX_STACKFRAME(&_hx_pos_1f97e81a8b18c976_55_new)
HXDLIN(  55)		( ( ::openfl::printing::PrintJobOptions)(__this) )->printAsBitmap = printAsBitmap;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PrintJobOptions_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PrintJobOptions",4e,73,a0,1f); }

		bool printAsBitmap;
};

} // end namespace openfl
} // end namespace printing

#endif /* INCLUDED_openfl_printing_PrintJobOptions */ 
