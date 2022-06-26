#ifndef INCLUDED_Mathematics
#define INCLUDED_Mathematics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Mathematics)



class HXCPP_CLASS_ATTRIBUTES Mathematics_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Mathematics_obj OBJ_;
		Mathematics_obj();

	public:
		enum { _hx_ClassId = 0x47b41b36 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Mathematics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Mathematics"); }

		inline static ::hx::ObjectPtr< Mathematics_obj > __new() {
			::hx::ObjectPtr< Mathematics_obj > __this = new Mathematics_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Mathematics_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Mathematics_obj *__this = (Mathematics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mathematics_obj), false, "Mathematics"));
			*(void **)__this = Mathematics_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mathematics_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mathematics",f6,d5,b8,94); }

		static Float percentual(Float num,Float perc);
		static ::Dynamic percentual_dyn();

};


#endif /* INCLUDED_Mathematics */ 
