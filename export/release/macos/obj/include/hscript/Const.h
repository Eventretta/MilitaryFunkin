#ifndef INCLUDED_hscript_Const
#define INCLUDED_hscript_Const

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,Const)
namespace hscript{


class Const_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Const_obj OBJ_;

	public:
		Const_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript.Const",08,e7,23,fb); }
		::String __ToString() const { return HX_("Const.",8b,b1,70,fc) + _hx_tag; }

		static ::hscript::Const CFloat(Float f);
		static ::Dynamic CFloat_dyn();
		static ::hscript::Const CInt(int v);
		static ::Dynamic CInt_dyn();
		static ::hscript::Const CString(::String s);
		static ::Dynamic CString_dyn();
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Const */ 
