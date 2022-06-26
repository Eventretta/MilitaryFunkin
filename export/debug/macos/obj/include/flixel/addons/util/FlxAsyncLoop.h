#ifndef INCLUDED_flixel_addons_util_FlxAsyncLoop
#define INCLUDED_flixel_addons_util_FlxAsyncLoop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS3(flixel,addons,util,FlxAsyncLoop)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxAsyncLoop_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxAsyncLoop_obj OBJ_;
		FlxAsyncLoop_obj();

	public:
		enum { _hx_ClassId = 0x231760c3 };

		void __construct(int Iterations, ::Dynamic Callback,::hx::Null< int >  __o_IterationsPerUpdate);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.util.FlxAsyncLoop")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.util.FlxAsyncLoop"); }
		static ::hx::ObjectPtr< FlxAsyncLoop_obj > __new(int Iterations, ::Dynamic Callback,::hx::Null< int >  __o_IterationsPerUpdate);
		static ::hx::ObjectPtr< FlxAsyncLoop_obj > __alloc(::hx::Ctx *_hx_ctx,int Iterations, ::Dynamic Callback,::hx::Null< int >  __o_IterationsPerUpdate);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAsyncLoop_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAsyncLoop",0e,69,2d,92); }

		bool started;
		bool finished;
		int _curIndex;
		int _iterationsPerUpdate;
		int _iterations;
		 ::Dynamic _callback;
		Dynamic _callback_dyn() { return _callback;}
		void start();
		::Dynamic start_dyn();

		void update(Float elapsed);

		void destroy();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_FlxAsyncLoop */ 
